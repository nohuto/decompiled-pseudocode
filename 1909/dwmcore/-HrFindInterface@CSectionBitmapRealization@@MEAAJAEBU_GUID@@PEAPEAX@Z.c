/*
 * XREFs of ?HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D4940
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180059A30 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::HrFindInterface(
        CSectionBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v4 )
    {
      return CBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 416) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
