/*
 * XREFs of ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800578C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057A60 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrFindInterface(CSystemMemoryBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // r8d

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
  v5 = 0;
  if ( v4 )
    return (unsigned int)CBitmap::HrFindInterface(this, a2, a3);
  else
    *a3 = (void *)(((unsigned __int64)this + 224) & -(__int64)(this != 0LL));
  return v5;
}
