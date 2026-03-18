/*
 * XREFs of ?HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::HrFindInterface(CGdiSpriteBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data4;
    if ( !v4 )
      goto LABEL_10;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ad440399_8921_4bea_82ab_e130645b9e3a.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ad440399_8921_4bea_82ab_e130645b9e3a.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ad440399_8921_4bea_82ab_e130645b9e3a.Data4;
    if ( v5 )
    {
      *a3 = 0LL;
      return 2147500033LL;
    }
    else
    {
LABEL_10:
      *a3 = (void *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
