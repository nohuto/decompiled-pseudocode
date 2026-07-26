/*
 * XREFs of ndisMTimerDpc @ 0x1C00A1520
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C0014ED0 (NdisMSetTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C007E9D0 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007EAB8 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 */

void __fastcall ndisMTimerDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 Clock; // r15
  char v7; // r14
  void **i; // rcx
  char *v9; // rax
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD); // rbx
  __int64 v11; // rax
  unsigned int v12; // [rsp+68h] [rbp+10h]

  v4 = *((_QWORD *)DeferredContext + 18);
  Clock = 0LL;
  if ( HIBYTE(dword_1C00E8098) )
  {
    v7 = 1;
    ndisTraceDpcStart(v4, 2u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  while ( 1 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    if ( !*(_BYTE *)(v4 + 89) )
      break;
    *(_QWORD *)(v4 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
    v12 = 0;
    do
      ++v12;
    while ( v12 < 0x32 );
  }
  *(_BYTE *)(v4 + 89) = 1;
  *(_QWORD *)(v4 + 1864) = KeGetCurrentThread();
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3760) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1880));
    for ( i = (void **)(v4 + 560); ; i = (void **)(v9 + 152) )
    {
      v9 = (char *)*i;
      if ( !*i )
        break;
      if ( v9 == DeferredContext )
      {
        if ( !*((_DWORD *)DeferredContext + 15) )
          *i = (void *)*((_QWORD *)DeferredContext + 19);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 1880));
  }
  if ( (*(_DWORD *)(v4 + 120) & 2) != 0 )
  {
    NdisMSetTimer((__int64)DeferredContext, 10);
  }
  else if ( (*(_DWORD *)(v4 + 124) & 0x1000000) == 0 )
  {
    v10 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)DeferredContext + 16);
    *(_QWORD *)(v4 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
    v10(0LL, *((_QWORD *)DeferredContext + 17), 0LL, 0LL);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    ndisMProcessDeferred(v4);
  }
  *(_BYTE *)(v4 + 89) = 0;
  *(_QWORD *)(v4 + 1864) = 0LL;
  *(_QWORD *)(v4 + 520) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 96));
  if ( v7 )
  {
    v11 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v4, 2u, v11 - Clock);
  }
}
