/*
 * XREFs of ?ndisMDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A080C
 * Callers:
 *     ?ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0420 (-ndis5InterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndis5QueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C00A04D0 (-ndis5QueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C007E9D0 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007EAB8 (ndisTraceDpcStart.c)
 */

void __fastcall ndisMDpcX(struct _KDPC *a1, void *a2, void *a3, void *a4)
{
  __int64 v4; // rdi
  __int64 Clock; // rbp
  void (__fastcall *v7)(_QWORD); // r14
  char v8; // si
  PKINTERRUPT *v9; // rcx
  KSYNCHRONIZE_ROUTINE *v10; // rdx
  __int64 v11; // rax

  v4 = *((_QWORD *)a2 + 13);
  Clock = 0LL;
  v7 = (void (__fastcall *)(_QWORD))*((_QWORD *)a2 + 4);
  if ( HIBYTE(dword_1C00E8098) )
  {
    v8 = 1;
    ndisTraceDpcStart(v4, 1u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v8 = 0;
  }
  if ( *((_BYTE *)a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 28, 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)a2 + 5, 0, 0);
  }
  else
  {
    v7(*(_QWORD *)(v4 + 24));
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 28, 0xFFFFFFFF) == 1 && *((_BYTE *)a2 + 8) )
      KeSetEvent((PRKEVENT)a2 + 5, 0, 0);
    v9 = *(PKINTERRUPT **)(v4 + 112);
    if ( v9 )
    {
      v10 = *(KSYNCHRONIZE_ROUTINE **)(v4 + 616);
      if ( v10 )
        KeSynchronizeExecution(*v9, v10, *(PVOID *)(v4 + 24));
    }
  }
  if ( v8 )
  {
    v11 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 1u, v11 - Clock);
  }
}
