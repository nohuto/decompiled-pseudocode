/*
 * XREFs of ndisMDpcX @ 0x1C0066564
 * Callers:
 *     ndis5InterruptDpc @ 0x1C0066060 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0066130 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 */

char __fastcall ndisMDpcX(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 Clock; // rbp
  void (__fastcall *v6)(_QWORD); // r14
  char v7; // si
  __int64 v8; // r8
  signed __int32 v9; // eax
  PKINTERRUPT *v10; // rcx
  KSYNCHRONIZE_ROUTINE *v11; // rdx
  __int64 v12; // rax

  v3 = *(_QWORD *)(a2 + 104);
  Clock = 0LL;
  v6 = *(void (__fastcall **)(_QWORD))(a2 + 32);
  if ( HIBYTE(dword_1C00A2098) )
  {
    v7 = 1;
    ndisTraceDpcStart(v3, 1u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  if ( *(_BYTE *)(a2 + 8) )
  {
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v9 == 1 )
      LOBYTE(v9) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    v6(*(_QWORD *)(v3 + 24));
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v9 == 1 )
    {
      LOBYTE(v9) = *(_BYTE *)(a2 + 8);
      if ( (_BYTE)v9 )
        LOBYTE(v9) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    }
    v10 = *(PKINTERRUPT **)(v3 + 112);
    if ( v10 )
    {
      v11 = *(KSYNCHRONIZE_ROUTINE **)(v3 + 616);
      if ( v11 )
        LOBYTE(v9) = KeSynchronizeExecution(*v10, v11, *(PVOID *)(v3 + 24));
    }
  }
  if ( v7 )
  {
    v12 = WmiGetClock(0LL, 0LL, a3);
    LOBYTE(v9) = ndisTraceDpcEnd(v3, 1u, v12 - Clock);
  }
  return v9;
}
