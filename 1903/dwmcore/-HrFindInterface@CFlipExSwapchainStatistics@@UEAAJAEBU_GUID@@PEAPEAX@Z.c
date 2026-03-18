/*
 * XREFs of ?HrFindInterface@CFlipExSwapchainStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180264CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExSwapchainStatistics::HrFindInterface(
        CFlipExSwapchainStatistics *this,
        const struct _GUID *a2,
        void **a3)
{
  void *v3; // r9
  __int64 v4; // rax
  unsigned int v5; // r10d

  v3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data1;
  v5 = 0;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_33781059_d84a_463b_9cde_c4f5aaa37ddd.Data4;
  if ( v4 )
    v5 = -2147467262;
  else
    v3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  *a3 = v3;
  return v5;
}
