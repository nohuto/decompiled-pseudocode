/*
 * XREFs of KiSatisfyThreadWait @ 0x14029AE58
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiExitThreadWait @ 0x1400F9F10 (KiExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 */

__int64 __fastcall KiSatisfyThreadWait(__int64 a1, __int64 a2, char a3, __int64 *a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r12
  __int64 *v13; // rdi
  volatile signed __int32 *v14; // rsi
  __int64 *v15; // rax
  __int64 **v16; // rcx

  *(_BYTE *)(a2 + 388) = 2;
  KiReleaseThreadLockSafe(a2);
  v12 = *(_QWORD *)(a2 + 200);
  if ( a5 )
  {
    v13 = &a4[6 * (unsigned __int8)a5];
    do
    {
      if ( *((_BYTE *)a4 + 17) < 5u )
      {
        v14 = (volatile signed __int32 *)a4[4];
        KiAcquireKobjectLockSafe(v14, v9, v10);
        if ( *((_BYTE *)a4 + 17) == 4 )
        {
          v15 = (__int64 *)*a4;
          if ( *(__int64 **)(*a4 + 8) != a4 || (v16 = (__int64 **)a4[1], *v16 != a4) )
            __fastfail(3u);
          *v16 = v15;
          v15[1] = (__int64)v16;
        }
        _InterlockedAnd(v14, 0xFFFFFF7F);
      }
      a4 += 6;
    }
    while ( a4 != v13 );
  }
  LOBYTE(v10) = a3;
  KiExitThreadWait(a1, a2, v10, v11);
  return v12;
}
