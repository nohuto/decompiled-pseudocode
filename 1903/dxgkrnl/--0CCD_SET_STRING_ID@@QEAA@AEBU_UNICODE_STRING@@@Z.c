/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DA2D0
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D525C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00D79F4 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D9FAC (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C012B64C (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA38C (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C00DA650 (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(
        CCD_SET_STRING_ID *this,
        const struct _UNICODE_STRING *a2)
{
  char *v2; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int Length; // eax
  unsigned int v9; // r8d
  __int64 v11; // rax

  v2 = (char *)this + 8;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v5 = CCD_SET_STRING_ID::_ReallocString((struct _STRING *)((char *)this + 8), a2->Length >> 1);
  if ( v5 >= 0 )
  {
    Length = a2->Length;
    v9 = 0;
    if ( (Length & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v6 = v9++;
        *(_BYTE *)(v6 + *((_QWORD *)v2 + 1)) = a2->Buffer[v6];
        v7 = a2->Length;
      }
      while ( v9 < a2->Length >> 1 );
      LOWORD(Length) = a2->Length;
    }
    *(_WORD *)v2 = (unsigned __int16)Length >> 1;
    v5 = 0;
  }
  *(_DWORD *)this = v5;
  if ( *(_WORD *)v2 > 0x4000u )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v11);
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
