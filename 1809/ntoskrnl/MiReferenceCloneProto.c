/*
 * XREFs of MiReferenceCloneProto @ 0x1402CAC60
 * Callers:
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 * Callees:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402CA29C (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402CADA8 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiReferenceCloneProto(
        __int64 a1,
        volatile signed __int64 *a2,
        char a3,
        _QWORD *a4,
        volatile signed __int64 **a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v10; // r8
  int v11; // ebp
  __int64 v12; // rbx

  CurrentThread = KeGetCurrentThread();
  *a5 = 0LL;
  CloneAddress = MiLocateCloneAddress((__int64)CurrentThread->ApcState.Process, (unsigned __int64)a2);
  if ( CloneAddress )
  {
    v11 = 0;
    v12 = *(_QWORD *)(CloneAddress[7] + 24LL);
    if ( *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v10 + 174)) != v12 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)MiChargeCommit(v12, 1uLL, 0) )
          return 0LL;
        v11 = 1;
      }
      if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v12) )
      {
        if ( v11 )
          MiReturnCommit(v12, 1uLL);
        return 0LL;
      }
      if ( _InterlockedIncrement64(a2 + 1) != 1 )
        MiReturnCrossPartitionCloneCharges(v12);
    }
    _InterlockedAdd64(a2 + 3, 1uLL);
    if ( (a3 & 1) != 0 )
    {
      if ( (_InterlockedIncrement64(a2 + 2) & 0x7FFFFFFFFFFFFFFLL) == 1 )
      {
        if ( v11 )
          ++*a4;
        else
          ++a4[1];
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 7816), 1uLL);
      }
      else
      {
        ++*a4;
        if ( v11 )
          MiReturnCommit(v12, 1uLL);
      }
      *a5 = a2;
    }
  }
  return 1LL;
}
