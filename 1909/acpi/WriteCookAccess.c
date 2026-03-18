/*
 * XREFs of WriteCookAccess @ 0x1C0028940
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     DequeueAndReadyContext @ 0x1C0028B8C (DequeueAndReadyContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     QueueContext @ 0x1C006821C (QueueContext.c)
 */

__int64 __fastcall WriteCookAccess(__int64 a1, __int64 a2, int a3)
{
  const void *v3; // rsi
  int v6; // edx
  __int64 v7; // r14
  int v8; // edx
  int v9; // edx
  KIRQL v10; // bl
  __int64 v11; // rcx
  char v12; // di
  __int64 v13; // r9
  int v14; // eax
  char v16; // r12
  KIRQL v17; // r13
  __int32 v18; // edi
  __int64 v19; // r8
  int v20; // eax
  const void *v21; // rdi
  const void *v22; // r8

  LODWORD(v3) = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 96LL);
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a2 + 88) )
    {
      *(_DWORD *)(a2 + 16) += 2;
      goto LABEL_12;
    }
    v16 = 0;
    if ( (gDebugger & 0x100) != 0 )
    {
      _m_prefetchw(&gDebugger);
      v16 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
    }
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    v18 = _InterlockedExchange((volatile __int32 *)(v7 + 16), 1);
    if ( v18 )
      QueueContext(a1, 0xFFFFLL, v7 + 32);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v17);
    if ( v18 )
      goto LABEL_17;
    v19 = *(_QWORD *)(a2 + 40);
    ++*(_DWORD *)(a2 + 16);
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v19 + 16))(
            0LL,
            *(_QWORD *)(a2 + 32) + 120LL,
            *(_QWORD *)(a2 + 48),
            *(unsigned int *)(a2 + 56),
            a2 + 80,
            *(_QWORD *)(v19 + 24),
            RestartCtxtCallback,
            a1 + 328);
    v21 = (const void *)v20;
    if ( (v16 & 0x10) != 0 )
      _InterlockedOr(&gDebugger, 0x10u);
    if ( v20 == 259 )
      goto LABEL_17;
    if ( v20 )
    {
      LogError(-1072431080);
      AcpiDiagTraceAmlError(a1, -1072431080);
      v22 = v21;
      goto LABEL_34;
    }
LABEL_11:
    *(_QWORD *)(a2 + 64) |= *(_QWORD *)(a2 + 80) & ~*(_QWORD *)(a2 + 72);
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_12;
  }
  v8 = v6 - 1;
  if ( !v8 )
    goto LABEL_11;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return (unsigned int)v3;
    goto LABEL_7;
  }
LABEL_12:
  v12 = 0;
  if ( (gDebugger & 0x100) != 0 )
  {
    _m_prefetchw(&gDebugger);
    v12 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  }
  v13 = *(_QWORD *)(a2 + 40);
  ++*(_DWORD *)(a2 + 16);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v13 + 16))(
          1LL,
          *(_QWORD *)(a2 + 32) + 120LL,
          *(_QWORD *)(a2 + 48),
          *(unsigned int *)(a2 + 56),
          a2 + 64,
          *(_QWORD *)(v13 + 24),
          RestartCtxtCallback,
          a1 + 328);
  v3 = (const void *)v14;
  if ( (v12 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v14 == 259 )
  {
LABEL_17:
    LODWORD(v3) = 32772;
    return (unsigned int)v3;
  }
  if ( v14 )
  {
    LogError(-1072431080);
    AcpiDiagTraceAmlError(a1, -1072431080);
    v22 = v3;
LABEL_34:
    PrintDebugMessage(212, (const void *)*(unsigned __int8 *)(v7 + 12), v22, 0LL, 0LL);
    LODWORD(v3) = -1072431080;
    return (unsigned int)v3;
  }
LABEL_7:
  if ( *(_BYTE *)(a2 + 88) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
    DequeueAndReadyContext(v7 + 32);
    _InterlockedExchange((volatile __int32 *)(v7 + 16), 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v10);
  }
  v11 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v11 + 8);
  HeapFree(v11);
  return (unsigned int)v3;
}
