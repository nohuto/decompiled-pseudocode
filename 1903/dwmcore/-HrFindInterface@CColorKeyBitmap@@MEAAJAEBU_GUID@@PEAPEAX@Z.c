/*
 * XREFs of ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180257CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::HrFindInterface(CColorKeyBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
  v5 = -2147024809;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
  if ( !v4 )
  {
    *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    return 0;
  }
  return v5;
}
