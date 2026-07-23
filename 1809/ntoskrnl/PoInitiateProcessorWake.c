/*
 * XREFs of PoInitiateProcessorWake @ 0x1402D3B90
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmIdleTransitionStall @ 0x1402D5508 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x1402D5640 (PpmIdleUpdateSynchronizationState.c)
 */

char __fastcall PoInitiateProcessorWake(ULONG a1)
{
  __int64 v1; // rdx
  __int64 Prcb; // rbp
  __int64 v3; // r8
  __int64 v4; // rdi
  _DWORD *v5; // rsi
  int v6; // r11d
  char v7; // bl
  __int64 v8; // r14
  char updated; // al
  char v10; // r11
  _QWORD v12[4]; // [rsp+20h] [rbp-F8h] BYREF
  _WORD v13[88]; // [rsp+40h] [rbp-D8h] BYREF

  Prcb = KeGetPrcb(a1);
  v4 = *(_QWORD *)(Prcb + 23808);
  v5 = (_DWORD *)(Prcb + 23872);
  v6 = HIBYTE(*(_DWORD *)(Prcb + 23872));
  v7 = 0;
  v8 = *(_QWORD *)(v4 + 488);
  while ( (_BYTE)v6 != 1 && ((unsigned __int8)(v6 - 1) <= 5u || (unsigned __int8)v6 >= 9u) )
  {
    if ( (_BYTE)v6 == 2 )
    {
      v6 = HIBYTE(*v5);
    }
    else if ( (((_BYTE)v6 - 4) & 0xFD) != 0 )
    {
      if ( (_BYTE)v6 == 5 )
      {
        LOBYTE(v3) = 5;
        LOBYTE(v1) = 7;
        LOBYTE(v6) = PpmIdleUpdateSynchronizationState(v5, v1, v3);
        if ( (_BYTE)v6 == 5 )
        {
          KeCopyAffinityEx((__int64)v13, (unsigned __int16 *)(v4 + 72));
          if ( !(unsigned int)KeIsEmptyAffinityEx(v13) )
            HalRequestIpi(0LL, v13);
          return v7;
        }
      }
    }
    else
    {
      LOBYTE(v3) = v6;
      LOBYTE(v1) = 8;
      updated = PpmIdleUpdateSynchronizationState(v5, v1, v3);
      if ( updated == v10 )
      {
        if ( !*(_BYTE *)(Prcb + 23857) )
          return 1;
        memset(v12, 0, sizeof(v12));
        v12[1] = PopIdleTransitionTimeout;
        BYTE4(v12[3]) = 0;
        v12[2] = Prcb;
        while ( !(*(unsigned __int8 (__fastcall **)(__int64))(v4 + 472))(v8) )
        {
          if ( HIBYTE(*v5) != 8 )
            return v7;
          PpmIdleTransitionStall(v12);
        }
        if ( *(_QWORD *)(v4 + 56) == -1LL )
          _InterlockedExchange64((volatile __int64 *)(v4 + 56), KeQueryPerformanceCounter(0LL).QuadPart);
        return (*(__int64 (__fastcall **)(__int64))(v4 + 480))(v8);
      }
      LOBYTE(v6) = updated;
    }
    _mm_pause();
  }
  return v7;
}
