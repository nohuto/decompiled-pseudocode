/*
 * XREFs of ?ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0414
 * Callers:
 *     ?ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0250 (-ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndis5QueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C00A0300 (-ndis5QueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C007E800 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007E8E8 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C009B0EC (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDpc(struct _KDPC *a1, void *a2, void *a3, void *a4)
{
  __int64 v4; // rbx
  __int64 Clock; // r14
  void (__fastcall *v7)(_QWORD); // r15
  char v8; // bp
  struct _KTHREAD *CurrentThread; // rcx
  PKINTERRUPT *v10; // rcx
  KSYNCHRONIZE_ROUTINE *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // [rsp+58h] [rbp+20h]

  v4 = *((_QWORD *)a2 + 13);
  Clock = 0LL;
  v7 = (void (__fastcall *)(_QWORD))*((_QWORD *)a2 + 4);
  if ( HIBYTE(dword_1C00E8058) )
  {
    v8 = 1;
    ndisTraceDpcStart(v4, 1u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v8 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
  *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
  if ( *((_BYTE *)a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 28, 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)a2 + 5, 0, 0);
  }
  else
  {
    while ( *(_BYTE *)(v4 + 89) )
    {
      *(_QWORD *)(v4 + 520) = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
      v13 = 0;
      do
        ++v13;
      while ( v13 < 0x32 );
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
      *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    }
    *(_BYTE *)(v4 + 89) = 1;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_QWORD *)(v4 + 1864) = CurrentThread;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
    v7(*(_QWORD *)(v4 + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 28, 0xFFFFFFFF) == 1 && *((_BYTE *)a2 + 8) )
      KeSetEvent((PRKEVENT)a2 + 5, 0, 0);
    v10 = *(PKINTERRUPT **)(v4 + 112);
    if ( v10 )
    {
      v11 = *(KSYNCHRONIZE_ROUTINE **)(v4 + 616);
      if ( v11 )
        KeSynchronizeExecution(*v10, v11, *(PVOID *)(v4 + 24));
    }
    ndisMProcessDeferred(v4);
    *(_QWORD *)(v4 + 1864) = 0LL;
    *(_BYTE *)(v4 + 89) = 0;
  }
  *(_QWORD *)(v4 + 520) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
  if ( v8 )
  {
    v12 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 1u, v12 - Clock);
  }
}
