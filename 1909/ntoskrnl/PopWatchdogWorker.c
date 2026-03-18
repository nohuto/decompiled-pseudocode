/*
 * XREFs of PopWatchdogWorker @ 0x140301610
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400F0028 (PopUpdateWatchdogNoWorkersEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopResolveWatchdogParam @ 0x140301534 (PopResolveWatchdogParam.c)
 *     MmQuitNextSession @ 0x1406F04A0 (MmQuitNextSession.c)
 */

void __fastcall PopWatchdogWorker(__int64 a1)
{
  bool v2; // r14
  KIRQL v3; // bl
  unsigned int v4; // ecx
  __int64 SessionById; // rsi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // r12
  ULONG_PTR BugCheckParameter4; // rax
  KIRQL v10; // al
  KIRQL v11; // bl
  __int128 v12; // [rsp+50h] [rbp-59h]
  __int128 v13; // [rsp+60h] [rbp-49h]
  __int128 v14; // [rsp+70h] [rbp-39h]
  __int64 v15; // [rsp+80h] [rbp-29h]
  __m128i v16; // [rsp+90h] [rbp-19h]
  _BYTE v17[48]; // [rsp+A0h] [rbp-9h] BYREF

  memset(v17, 0, sizeof(v17));
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    v16 = *(__m128i *)(a1 + 224);
    v13 = *(_OWORD *)(a1 + 256);
    v12 = *(_OWORD *)(a1 + 240);
    v15 = *(_QWORD *)(a1 + 288);
    v14 = *(_OWORD *)(a1 + 272);
    KeReleaseSpinLock(&PopWatchdogLock, v3);
    v4 = _mm_cvtsi128_si32(_mm_srli_si128(v16, 4));
    if ( v4 == -1 )
      SessionById = 0LL;
    else
      SessionById = MmGetSessionById(v4);
    if ( SessionById )
      v2 = (int)MmAttachSession(SessionById) >= 0;
    v6 = PopResolveWatchdogParam(v12, v14);
    v7 = PopResolveWatchdogParam(*((__int64 *)&v12 + 1), SBYTE1(v14));
    v8 = PopResolveWatchdogParam(v13, SBYTE2(v14));
    BugCheckParameter4 = PopResolveWatchdogParam(*((__int64 *)&v13 + 1), SBYTE3(v14));
    if ( !*((_QWORD *)&v14 + 1) )
      KeBugCheckEx(v16.m128i_u32[2], v6, v7, v8, BugCheckParameter4);
    (*((void (__fastcall **)(__int64, _QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR))&v14 + 1))(
      v15,
      v16.m128i_u32[2],
      v6,
      v7,
      v8,
      BugCheckParameter4);
    v10 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    v11 = v10;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KeReleaseSpinLock(&PopWatchdogLock, v11);
    if ( v2 )
    {
      MmDetachSession(SessionById, (__int64)v17);
      MmQuitNextSession(SessionById);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KeReleaseSpinLock(&PopWatchdogLock, v3);
  }
}
