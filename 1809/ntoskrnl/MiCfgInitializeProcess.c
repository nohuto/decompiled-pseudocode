/*
 * XREFs of MiCfgInitializeProcess @ 0x140678F10
 * Callers:
 *     MiMapProcessExecutable @ 0x140678E08 (MiMapProcessExecutable.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 *     MiReferenceCfgVad @ 0x14067BCA4 (MiReferenceCfgVad.c)
 *     MiMapCfgBitMapSection @ 0x14067BD90 (MiMapCfgBitMapSection.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rax
  int v5; // r14d
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbx
  _QWORD *i; // rcx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int16 v12; // cx
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 2080) & 1) == 0 )
    return 0LL;
  v17 = 0LL;
  v15 = 0LL;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    v11 = *(_QWORD *)(a1 + 1064);
    if ( !v11 )
      return 3221225595LL;
    v12 = *(_WORD *)(v11 + 8);
    if ( v12 != 332 && v12 != 452 )
      return 3221225595LL;
  }
  v16 = 0x20000000000LL;
  result = MiMapCfgBitMapSection(a1, qword_140439EC8, (unsigned int)&v17, (unsigned int)&v15, (__int64)&v16);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad(CurrentThread, v15, 0LL);
    v4 = *(_QWORD *)(a1 + 1064);
    if ( v4 )
    {
      v13 = *(_WORD *)(v4 + 8);
      if ( v13 == 332 || v13 == 452 )
      {
        v14 = *(_QWORD *)(a1 + 1152);
        v17 = 0LL;
        v15 = 0LL;
        v16 = (2 * (v14 >> 4)) >> 3;
        result = MiMapCfgBitMapSection(a1, qword_140439EB8, (unsigned int)&v17, (unsigned int)&v15, (__int64)&v16);
        if ( (int)result < 0 )
          return result;
        MiReferenceCfgVad(CurrentThread, v15, 1LL);
      }
    }
    v5 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v6 = *(_QWORD **)(a1 + 1576);
    v7 = 0LL;
    while ( v6 )
    {
      v7 = (unsigned __int64)v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 48) & 7) == 2 )
      {
        MiReferenceVad(v7);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, v7);
        v5 = MiCommitVadCfgBits(v7, 0LL, 0LL);
        MiUnlockAndDereferenceVad((char *)v7);
        if ( v5 < 0 )
          return (unsigned int)v5;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      }
      v9 = *(_QWORD **)(v7 + 8);
      v10 = v7;
      if ( v9 )
      {
        v7 = *(_QWORD *)(v7 + 8);
        for ( i = (_QWORD *)*v9; i; i = (_QWORD *)*i )
          v7 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v7 || *(_QWORD *)v7 == v10 )
            break;
          v10 = v7;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    return (unsigned int)v5;
  }
  return result;
}
