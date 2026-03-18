/*
 * XREFs of ?CheckForDriverUpdating@CDisplaySet@@AEAAJXZ @ 0x180080D5C
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007F940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x18007EDC4 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x180080034 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::CheckForDriverUpdating(CDisplaySet *this)
{
  int v1; // ebx
  __int64 v2; // rsi
  __int64 v4; // rax
  CDXGIEnumeration *v5; // rcx
  struct _LUID *v6; // rbp
  int AdapterNoRefFromLuid; // eax
  unsigned int v8; // ecx
  struct CDXGIAdapterLimited *v9; // rcx
  __int64 v10; // rax
  CDXGIEnumeration *v11; // rcx
  int v12; // ebp
  struct _LUID *v13; // rdx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  struct CDXGIAdapterLimited *v18; // [rsp+50h] [rbp+8h] BYREF
  struct CDXGIAdapterLimited *v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  *((_BYTE *)this + 112) = 0;
  while ( (unsigned int)v2 < *((_DWORD *)this + 18) )
  {
    v4 = *((_QWORD *)this + 6);
    v5 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v18 = 0LL;
    v6 = *(struct _LUID **)(v4 + 8 * v2);
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v5, v6[30], &v18);
    v1 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, AdapterNoRefFromLuid, 0x1D5u);
    }
    else
    {
      v9 = v18;
      v6[33].LowPart = *((_DWORD *)v18 + 74);
      v6[33].HighPart = *((_DWORD *)v9 + 75);
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v1, 0x512u);
      return (unsigned int)v1;
    }
    v10 = *((_QWORD *)this + 6);
    v11 = (CDXGIEnumeration *)*((_QWORD *)this + 2);
    v12 = 0;
    v19 = 0LL;
    LODWORD(v18) = 0;
    v13 = *(struct _LUID **)(v10 + 8 * v2);
    *((_BYTE *)this + 112) = 0;
    v14 = CDXGIEnumeration::GetAdapterNoRefFromLuid(v11, v13[30], &v19);
    v1 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x9Fu);
    }
    else
    {
      v16 = (unsigned int)v19;
      if ( !v19 )
        goto LABEL_10;
      CDXGIAdapterLimited::GetKMTDriverUpdateStatus(v19, (int *)&v18);
      v12 = (int)v18;
      *((_BYTE *)this + 112) = (_DWORD)v18 != 0;
    }
    if ( v12 )
      v1 = -2003304307;
LABEL_10:
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v1, 0x514u);
      return (unsigned int)v1;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  return (unsigned int)v1;
}
