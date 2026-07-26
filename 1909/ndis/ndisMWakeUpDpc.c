/*
 * XREFs of ndisMWakeUpDpc @ 0x1C00A1730
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C001C960 (ndisSetWakeUpTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C007E9D0 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007EAB8 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C009B7F8 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMWakeUpDpc(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // di
  __int64 Clock; // r14
  char v7; // bp
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  __int16 v11; // cx
  char *v12; // rax
  char *v13; // rdx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_1C00E8098) )
  {
    v7 = 1;
    ndisTraceDpcStart((__int64)FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v8 = *((_DWORD *)FunctionContext + 30);
  *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
  if ( v8 >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 && !FunctionContext[89] )
  {
    FunctionContext[89] = 1;
    *((_QWORD *)FunctionContext + 233) = KeGetCurrentThread();
    if ( (v8 & 0x300000) != 0 )
      goto LABEL_33;
    v9 = v8;
    if ( *(_QWORD *)(*((_QWORD *)FunctionContext + 470) + 120LL) )
    {
      *((_QWORD *)FunctionContext + 65) = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)FunctionContext + 470) + 120LL))(*((_QWORD *)FunctionContext
                                                                                            + 3));
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      v8 = *((_DWORD *)FunctionContext + 30);
      v9 = v8;
      *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    }
    if ( (v9 & 0x1000000) != 0 )
      goto LABEL_33;
    if ( v5 )
    {
      ++*((_WORD *)FunctionContext + 893);
LABEL_28:
      if ( (v8 & 0x1000000) == 0 && *(_QWORD *)(*((_QWORD *)FunctionContext + 470) + 192LL) )
        ndisMQueueWorkItem((__int64)FunctionContext, 3, 0LL);
      goto LABEL_32;
    }
    if ( (v9 & 0x1000) == 0 )
    {
      v10 = *((_DWORD *)FunctionContext + 1105);
      if ( (v10 & 1) != 0 )
      {
        if ( (v10 & 2) != 0 )
        {
          if ( *((_QWORD *)FunctionContext + 276) )
          {
LABEL_27:
            ++*((_WORD *)FunctionContext + 892);
            goto LABEL_28;
          }
        }
        else
        {
          v11 = *((_WORD *)FunctionContext + 911);
          if ( v11 )
            *((_WORD *)FunctionContext + 911) = v11 - 1;
          else
            *((_DWORD *)FunctionContext + 1105) = v10 | 2;
        }
      }
    }
    if ( (v9 & 0x800) != 0 )
      goto LABEL_32;
    v12 = (char *)*((_QWORD *)FunctionContext + 16);
    v13 = v12 - 64;
    if ( v12 == FunctionContext + 128 )
      v13 = 0LL;
    if ( !v13 )
      goto LABEL_32;
    v14 = v13[41];
    if ( (v14 & 0x10) == 0 )
      goto LABEL_32;
    if ( (v14 & 1) == 0 )
    {
      v13[41] = v14 | 1;
LABEL_32:
      ndisMProcessDeferred((__int64)FunctionContext);
LABEL_33:
      *((_QWORD *)FunctionContext + 233) = 0LL;
      FunctionContext[89] = 0;
      goto LABEL_34;
    }
    goto LABEL_27;
  }
LABEL_34:
  KeSetEvent((PRKEVENT)(FunctionContext + 1912), 0, 0);
  if ( *((int *)FunctionContext + 30) >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 )
    ndisSetWakeUpTimer((__int64)FunctionContext, v15);
  if ( v7 )
  {
    v16 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd((__int64)FunctionContext, 4u, v16 - Clock);
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
}
