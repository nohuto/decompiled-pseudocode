/*
 * XREFs of ndisMDpc @ 0x1C00662FC
 * Callers:
 *     ndis5InterruptDpc @ 0x1C0066060 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0066130 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDpc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void (__fastcall *v4)(_QWORD); // r15
  __int64 Clock; // r14
  char v6; // bp
  __int64 v7; // r8
  PKINTERRUPT *v8; // rcx
  KSYNCHRONIZE_ROUTINE *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 104);
  v4 = *(void (__fastcall **)(_QWORD))(a2 + 32);
  Clock = 0LL;
  if ( HIBYTE(dword_1C00A2098) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1u);
    Clock = WmiGetClock(0LL, 0LL, v7);
  }
  else
  {
    v6 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 1864) = 656736;
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    while ( *(_BYTE *)(v2 + 89) )
    {
      *(_QWORD *)(v2 + 520) = 0LL;
      *(_DWORD *)(v2 + 1864) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
      v12 = 0;
      do
        ++v12;
      while ( v12 < 0x32 );
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
      *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v2 + 1864) = 656749;
    }
    *(_BYTE *)(v2 + 89) = 1;
    *(_DWORD *)(v2 + 1868) = 656749;
    *(_QWORD *)(v2 + 1872) = KeGetCurrentThread();
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1864) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
    v4(*(_QWORD *)(v2 + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 96));
    *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v2 + 1864) = 656755;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    v8 = *(PKINTERRUPT **)(v2 + 112);
    if ( v8 )
    {
      v9 = *(KSYNCHRONIZE_ROUTINE **)(v2 + 616);
      if ( v9 )
        KeSynchronizeExecution(*v8, v9, *(PVOID *)(v2 + 24));
    }
    ndisMProcessDeferred(v2);
    *(_BYTE *)(v2 + 89) = 0;
    *(_DWORD *)(v2 + 1868) = 0;
    *(_QWORD *)(v2 + 1872) = 0LL;
  }
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1864) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v2 + 96));
  if ( v6 )
  {
    v11 = WmiGetClock(0LL, 0LL, v10);
    ndisTraceDpcEnd(v2, 1u, v11 - Clock);
  }
}
