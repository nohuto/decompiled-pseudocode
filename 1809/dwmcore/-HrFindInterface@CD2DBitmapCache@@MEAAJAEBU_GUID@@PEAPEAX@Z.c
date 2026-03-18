/*
 * XREFs of ?HrFindInterface@CD2DBitmapCache@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180180AF0
 * Callers:
 *     ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802268D0 (-HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmapCache::HrFindInterface(CD2DBitmapCache *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return 2147500033LL;
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
