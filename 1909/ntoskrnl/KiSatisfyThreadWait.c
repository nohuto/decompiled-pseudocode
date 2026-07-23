/*
 * XREFs of KiSatisfyThreadWait @ 0x1402B1C2C
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiExitThreadWait @ 0x1401194B0 (KiExitThreadWait.c)
 */

__int64 __fastcall KiSatisfyThreadWait(__int64 a1, __int64 a2, char a3, __int64 *a4, int a5)
{
  __int64 v9; // r12
  ULONG_PTR v10; // rcx
  PRTL_BALANCED_NODE v11; // rax
  __int64 *v12; // rdi
  volatile signed __int32 *v13; // rsi
  __int64 *v14; // rax
  __int64 **v15; // rcx

  *(_BYTE *)(a2 + 388) = 2;
  KiReleaseThreadLockSafe(a2);
  v9 = *(_QWORD *)(a2 + 200);
  v10 = *(_QWORD *)(a2 + 1528);
  if ( v10 )
  {
    *(_QWORD *)(a2 + 1528) = 0LL;
    v11 = KeAbPreAcquire(v10, 0LL, 1);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
  }
  if ( a5 )
  {
    v12 = &a4[6 * (unsigned __int8)a5];
    do
    {
      if ( *((_BYTE *)a4 + 17) < 5u )
      {
        v13 = (volatile signed __int32 *)a4[4];
        KiAcquireKobjectLockSafe(v13);
        if ( *((_BYTE *)a4 + 17) == 4 )
        {
          v14 = (__int64 *)*a4;
          if ( *(__int64 **)(*a4 + 8) != a4 || (v15 = (__int64 **)a4[1], *v15 != a4) )
            __fastfail(3u);
          *v15 = v14;
          v14[1] = (__int64)v15;
        }
        _InterlockedAnd(v13, 0xFFFFFF7F);
      }
      a4 += 6;
    }
    while ( a4 != v12 );
  }
  KiExitThreadWait(a1, a2, a3);
  return v9;
}
