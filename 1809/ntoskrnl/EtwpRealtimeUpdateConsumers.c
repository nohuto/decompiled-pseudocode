/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x1405C2198
 * Callers:
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1)
{
  ULONG_PTR v1; // rsi
  LONG result; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rcx
  int v7; // ebp
  __int64 v8; // rdi
  _QWORD *i; // rcx

  v1 = a1 + 704;
  if ( (*(_DWORD *)(a1 + 836) & 0x20) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
    v4 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    ExReleasePushLockEx(v1, 0LL);
    v5 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 448);
    v6 = *(_QWORD **)(a1 + 352);
    if ( *v6 != a1 + 344 )
      __fastfail(3u);
    *(_QWORD *)v4 = a1 + 344;
    *(_QWORD *)(v4 + 8) = v6;
    *v6 = v4;
    *(_QWORD *)(a1 + 352) = v4;
    ++*(_DWORD *)(a1 + 360);
    *(_BYTE *)(v4 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x40u);
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  result = *(_DWORD *)(a1 + 836);
  if ( (result & 0x10) != 0 )
  {
    v7 = -1073741162;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    v8 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    ExReleasePushLockEx(v1, 0LL);
    for ( i = *(_QWORD **)(a1 + 344); i != (_QWORD *)(a1 + 344); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v8 == i && (*(_BYTE *)(v8 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 836), 4u);
        *(_BYTE *)(v8 + 90) |= 1u;
        v7 = 0;
      }
    }
    *(_DWORD *)(a1 + 56) = v7;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  return result;
}
