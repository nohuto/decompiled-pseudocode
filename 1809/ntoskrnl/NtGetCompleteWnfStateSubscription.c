/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x14060E4A0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E5F4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 */

__int64 __fastcall NtGetCompleteWnfStateSubscription(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        volatile void *Address,
        SIZE_T Length)
{
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
  if ( Next )
  {
    if ( !a1 || !a2 )
      goto LABEL_11;
    if ( a3 && (!a4 || a4 == -1073741267) )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      v12 = *(_QWORD *)v7;
      if ( a2 >= 0x7FFFFFFF0000LL )
        a2 = 0x7FFFFFFF0000LL;
      v9 = ExpWnfCompleteThreadSubscriptions((_DWORD)Next, (unsigned int)&v12, *(_QWORD *)a2, a3, a4);
      if ( v9 >= 0 )
      {
LABEL_11:
        if ( (_DWORD)Length )
        {
          if ( (unsigned int)Length < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(Address, (unsigned int)Length, 8u);
            v9 = ExpWnfDeliverThreadNotifications(Next, Address, (unsigned int)Length);
          }
        }
      }
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
