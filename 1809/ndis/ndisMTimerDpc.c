/*
 * XREFs of ndisMTimerDpc @ 0x1C00667D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C0025EE0 (NdisMSetTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 */

void __fastcall ndisMTimerDpc(
        struct _KDPC *Dpc,
        _LIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 Flink; // rdi
  __int64 Clock; // r15
  char v7; // r14
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rax
  void **i; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // [rsp+68h] [rbp+10h]

  Flink = (__int64)DeferredContext[9].Flink;
  Clock = 0LL;
  if ( HIBYTE(dword_1C00A2098) )
  {
    v7 = 1;
    ndisTraceDpcStart(Flink, 2u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 96));
  CurrentThread = KeGetCurrentThread();
  for ( *(_DWORD *)(Flink + 1864) = 655728; ; *(_DWORD *)(Flink + 1864) = 655732 )
  {
    *(_QWORD *)(Flink + 520) = CurrentThread;
    if ( !*(_BYTE *)(Flink + 89) )
      break;
    *(_QWORD *)(Flink + 520) = 0LL;
    *(_DWORD *)(Flink + 1864) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 96));
    v15 = 0;
    do
      ++v15;
    while ( v15 < 0x32 );
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 96));
    CurrentThread = KeGetCurrentThread();
  }
  *(_BYTE *)(Flink + 89) = 1;
  *(_DWORD *)(Flink + 1868) = 655732;
  *(_QWORD *)(Flink + 1872) = KeGetCurrentThread();
  if ( (*(_BYTE *)(*(_QWORD *)(Flink + 3792) + 26LL) & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 1888));
    for ( i = (void **)(Flink + 560); ; i = (void **)&v11[9].Blink )
    {
      v11 = (_LIST_ENTRY *)*i;
      if ( !*i )
        break;
      if ( v11 == DeferredContext )
      {
        if ( !HIDWORD(DeferredContext[3].Blink) )
          *i = DeferredContext[9].Blink;
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 1888));
  }
  if ( (*(_DWORD *)(Flink + 120) & 2) != 0 )
  {
    NdisMSetTimer(DeferredContext, 10);
  }
  else if ( (*(_DWORD *)(Flink + 124) & 0x1000000) == 0 )
  {
    v12 = DeferredContext[8].Flink;
    *(_QWORD *)(Flink + 520) = 0LL;
    *(_DWORD *)(Flink + 1864) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 96));
    ((void (__fastcall *)(_QWORD, _LIST_ENTRY *, _QWORD, _QWORD))v12)(0LL, DeferredContext[8].Blink, 0LL, 0LL);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(Flink + 96));
    *(_QWORD *)(Flink + 520) = KeGetCurrentThread();
    *(_DWORD *)(Flink + 1864) = 655796;
    ndisMProcessDeferred(Flink);
  }
  *(_BYTE *)(Flink + 89) = 0;
  *(_DWORD *)(Flink + 1868) = 0;
  *(_QWORD *)(Flink + 1872) = 0LL;
  *(_QWORD *)(Flink + 520) = 0LL;
  *(_DWORD *)(Flink + 1864) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(Flink + 96));
  if ( v7 )
  {
    v14 = WmiGetClock(0LL, 0LL, v13);
    ndisTraceDpcEnd(Flink, 2u, v14 - Clock);
  }
}
