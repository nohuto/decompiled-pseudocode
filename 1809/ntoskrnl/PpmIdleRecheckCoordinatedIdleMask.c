/*
 * XREFs of PpmIdleRecheckCoordinatedIdleMask @ 0x1402D50A0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14018A430 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall PpmIdleRecheckCoordinatedIdleMask(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r14
  char v4; // di
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // rbx
  _DWORD v12[44]; // [rsp+20h] [rbp-198h] BYREF
  unsigned __int16 v13[88]; // [rsp+D0h] [rbp-E8h] BYREF

  v3 = PpmPlatformStates;
  v4 = 0;
  if ( PpmPlatformStates )
  {
    v12[0] = 1310721;
    memset(&v12[1], 0, 0xA4uLL);
    if ( a2 )
      LOWORD(v12[0]) = a2 + 1;
    v8 = *(_QWORD *)(a1 + 752);
    *(_QWORD *)&v12[2 * a2 + 2] |= a3;
    v9 = 0;
    if ( *(_DWORD *)(v8 + 4) )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v8 + 4LL * v9 + 8) == -1 )
        {
          v10 = 384LL * *(unsigned int *)(*(_QWORD *)(a1 + 784) + 24LL * v9 + 4);
          KeAndAffinityEx((unsigned __int16 *)(v10 + v3 + 128), (unsigned __int16 *)v12, v13);
          if ( (unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(v10 + v3 + 128), v13) )
            break;
        }
        if ( ++v9 >= *(_DWORD *)(v8 + 4) )
          return v4;
      }
      return 1;
    }
  }
  return v4;
}
