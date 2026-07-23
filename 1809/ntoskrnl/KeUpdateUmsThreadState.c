/*
 * XREFs of KeUpdateUmsThreadState @ 0x140846808
 * Callers:
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     KiResumeUmsThread @ 0x14084691C (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x140846974 (KiSuspendUmsThread.c)
 *     PspUmsInitThread @ 0x14088BF6C (PspUmsInitThread.c)
 *     PspUmsUnInitThread @ 0x14088C0B4 (PspUmsUnInitThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140890030 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x14084666C (KeRemoveUmsThreadCidOwnership.c)
 *     KiUmsExceptionFilter @ 0x140846E04 (KiUmsExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KeUpdateUmsThreadState(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // edx
  int v6; // edx
  _QWORD *Object; // rcx
  signed __int64 *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  struct _KEVENT *Event; // [rsp+28h] [rbp-10h]
  _QWORD *v13; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Event = 0LL;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1264), 1u);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 3u);
    }
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1264), 1u);
  }
  if ( a3 )
  {
    KeRemoveUmsThreadCidOwnership(a1, 0);
    Object = CurrentThread->WaitBlock[3].Object;
    v13 = Object;
    v8 = (signed __int64 *)Object[1];
    if ( ((unsigned __int8)v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(v8 + 1) > 0x7FFFFFFF0000LL || v8 + 1 < v8 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v8 = (signed __int64 *)Object[1];
    }
    _m_prefetchw(v8);
    v9 = *v8;
    do
    {
      *(_QWORD *)a1 = v9;
      v10 = v9;
      v9 = _InterlockedCompareExchange64(v8, a1, v9);
    }
    while ( v9 != v10 );
    if ( !v9 )
      Event = (struct _KEVENT *)v13[2];
  }
  if ( Event )
    KeSetEvent(Event, 0, 0);
  return 0LL;
}
