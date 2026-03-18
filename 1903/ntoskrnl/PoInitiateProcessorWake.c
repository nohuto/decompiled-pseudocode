/*
 * XREFs of PoInitiateProcessorWake @ 0x1402EE060
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400BE2F0 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmIdleTransitionStall @ 0x1402EF9B8 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x1402EFAF0 (PpmIdleUpdateSynchronizationState.c)
 */

char __fastcall PoInitiateProcessorWake(ULONG a1)
{
  __int64 v2; // rdx
  __int64 Prcb; // rbp
  __int64 v4; // r8
  __int64 v5; // rdi
  _DWORD *v6; // rsi
  int v7; // r11d
  char v8; // bl
  __int64 v9; // r14
  char updated; // al
  char v11; // r11
  _QWORD v13[4]; // [rsp+20h] [rbp-F8h] BYREF
  _WORD v14[88]; // [rsp+40h] [rbp-D8h] BYREF

  memset(v14, 0, 0xA8uLL);
  Prcb = KeGetPrcb(a1);
  v5 = *(_QWORD *)(Prcb + 23808);
  v6 = (_DWORD *)(Prcb + 23872);
  v7 = HIBYTE(*(_DWORD *)(Prcb + 23872));
  v8 = 0;
  v9 = *(_QWORD *)(v5 + 488);
  while ( (_BYTE)v7 != 1 && ((unsigned __int8)(v7 - 1) <= 5u || (unsigned __int8)v7 >= 9u) )
  {
    if ( (_BYTE)v7 == 2 )
    {
      v7 = HIBYTE(*v6);
    }
    else if ( (((_BYTE)v7 - 4) & 0xFD) != 0 )
    {
      if ( (_BYTE)v7 == 5 )
      {
        LOBYTE(v4) = 5;
        LOBYTE(v2) = 7;
        LOBYTE(v7) = PpmIdleUpdateSynchronizationState(v6, v2, v4);
        if ( (_BYTE)v7 == 5 )
        {
          KeCopyAffinityEx((__int64)v14, (unsigned __int16 *)(v5 + 72));
          if ( !(unsigned int)KeIsEmptyAffinityEx(v14) )
            HalRequestIpi(0LL, v14);
          return v8;
        }
      }
    }
    else
    {
      LOBYTE(v4) = v7;
      LOBYTE(v2) = 8;
      updated = PpmIdleUpdateSynchronizationState(v6, v2, v4);
      if ( updated == v11 )
      {
        if ( !*(_BYTE *)(Prcb + 23857) )
          return 1;
        memset(v13, 0, sizeof(v13));
        v13[1] = PopIdleTransitionTimeout;
        v13[2] = Prcb;
        while ( !(*(unsigned __int8 (__fastcall **)(__int64))(v5 + 472))(v9) )
        {
          if ( HIBYTE(*v6) != 8 )
            return v8;
          PpmIdleTransitionStall(v13);
        }
        if ( *(_QWORD *)(v5 + 56) == -1LL )
          _InterlockedExchange64((volatile __int64 *)(v5 + 56), KeQueryPerformanceCounter(0LL).QuadPart);
        return (*(__int64 (__fastcall **)(__int64))(v5 + 480))(v9);
      }
      LOBYTE(v7) = updated;
    }
    _mm_pause();
  }
  return v8;
}
