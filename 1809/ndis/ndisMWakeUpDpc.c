/*
 * XREFs of ndisMWakeUpDpc @ 0x1C0066A40
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C00153E8 (ndisSetWakeUpTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C00638BC (ndisMQueueWorkItem.c)
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
  __int64 v8; // r8
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  __int16 v12; // cx
  char *v13; // rax
  char *v14; // rdx
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_1C00A2098) )
  {
    v7 = 1;
    ndisTraceDpcStart((__int64)FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v9 = *((_DWORD *)FunctionContext + 30);
  *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
  *((_DWORD *)FunctionContext + 466) = 656444;
  if ( v9 >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 && !FunctionContext[89] )
  {
    FunctionContext[89] = 1;
    *((_DWORD *)FunctionContext + 467) = 656463;
    *((_QWORD *)FunctionContext + 234) = KeGetCurrentThread();
    if ( (v9 & 0x300000) != 0 )
      goto LABEL_33;
    v10 = v9;
    if ( *(_QWORD *)(*((_QWORD *)FunctionContext + 474) + 120LL) )
    {
      *((_QWORD *)FunctionContext + 65) = 0LL;
      *((_DWORD *)FunctionContext + 466) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)FunctionContext + 474) + 120LL))(*((_QWORD *)FunctionContext
                                                                                            + 3));
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      v9 = *((_DWORD *)FunctionContext + 30);
      v10 = v9;
      *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
      *((_DWORD *)FunctionContext + 466) = 656478;
    }
    if ( (v10 & 0x1000000) != 0 )
      goto LABEL_33;
    if ( v5 )
    {
      ++*((_WORD *)FunctionContext + 893);
LABEL_28:
      if ( (v9 & 0x1000000) == 0 && *(_QWORD *)(*((_QWORD *)FunctionContext + 474) + 192LL) )
        ndisMQueueWorkItem((__int64)FunctionContext, 3, 0LL);
      goto LABEL_32;
    }
    if ( (v10 & 0x1000) == 0 )
    {
      v11 = *((_DWORD *)FunctionContext + 1115);
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 2) != 0 )
        {
          if ( *((_QWORD *)FunctionContext + 278) )
          {
LABEL_27:
            ++*((_WORD *)FunctionContext + 892);
            goto LABEL_28;
          }
        }
        else
        {
          v12 = *((_WORD *)FunctionContext + 911);
          if ( v12 )
            *((_WORD *)FunctionContext + 911) = v12 - 1;
          else
            *((_DWORD *)FunctionContext + 1115) = v11 | 2;
        }
      }
    }
    if ( (v10 & 0x800) != 0 )
      goto LABEL_32;
    v13 = (char *)*((_QWORD *)FunctionContext + 16);
    v14 = v13 - 64;
    if ( v13 == FunctionContext + 128 )
      v14 = 0LL;
    if ( !v14 )
      goto LABEL_32;
    v15 = v14[41];
    if ( (v15 & 0x10) == 0 )
      goto LABEL_32;
    if ( (v15 & 1) == 0 )
    {
      v14[41] = v15 | 1;
LABEL_32:
      ndisMProcessDeferred((__int64)FunctionContext);
LABEL_33:
      *((_QWORD *)FunctionContext + 234) = 0LL;
      *((_DWORD *)FunctionContext + 467) = 0;
      FunctionContext[89] = 0;
      goto LABEL_34;
    }
    goto LABEL_27;
  }
LABEL_34:
  KeSetEvent((PRKEVENT)FunctionContext + 80, 0, 0);
  if ( *((int *)FunctionContext + 30) >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 )
    ndisSetWakeUpTimer((__int64)FunctionContext);
  if ( v7 )
  {
    v17 = WmiGetClock(0LL, 0LL, v16);
    ndisTraceDpcEnd((__int64)FunctionContext, 4u, v17 - Clock);
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  *((_DWORD *)FunctionContext + 466) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
}
