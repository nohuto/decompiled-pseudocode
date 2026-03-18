/*
 * XREFs of MiCfgInitializeProcess @ 0x14067980C
 * Callers:
 *     MiMapProcessExecutable @ 0x1406796F4 (MiMapProcessExecutable.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FCE0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400538D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceVad @ 0x140053980 (MiReferenceVad.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     MiCommitVadCfgBits @ 0x1405EAD98 (MiCommitVadCfgBits.c)
 *     MiReferenceCfgVad @ 0x1406BE04C (MiReferenceCfgVad.c)
 *     MiMapCfgBitMapSection @ 0x1406DE4C0 (MiMapCfgBitMapSection.c)
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
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int16 v12; // cx
  __int16 v13; // cx
  __int64 v14; // r10
  __int64 v15; // rax
  _WORD *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF
  __int64 v20; // [rsp+80h] [rbp+50h] BYREF

  if ( (*(_DWORD *)(a1 + 2128) & 1) == 0 )
    return 0LL;
  v20 = 0LL;
  v18 = 0LL;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    v11 = *(_QWORD *)(a1 + 1064);
    if ( !v11 )
      return 3221225595LL;
    v12 = *(_WORD *)(v11 + 8);
    if ( v12 != 332 && v12 != 452 )
      return 3221225595LL;
  }
  v19 = 0x20000000000LL;
  result = MiMapCfgBitMapSection(a1, qword_140464820, (unsigned int)&v20, (unsigned int)&v18, (__int64)&v19);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad(CurrentThread, v18, 0LL);
    v4 = *(_QWORD *)(a1 + 1064);
    if ( !v4 || (v13 = *(_WORD *)(v4 + 8), v13 != 332) && v13 != 452 )
    {
LABEL_5:
      v5 = 0;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      v6 = *(_QWORD **)(a1 + 1624);
      v7 = 0LL;
      while ( v6 )
      {
        v7 = (unsigned __int64)v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 48) & 0x70) == 0x20 )
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
    LODWORD(v14) = 0;
    v15 = 0LL;
    v16 = &MiWowSubsystems6432;
    while ( v13 != *v16 )
    {
      v15 = (unsigned int)(v15 + 1);
      ++v16;
      if ( (_DWORD)v15 )
        goto LABEL_30;
    }
    v14 = *((_QWORD *)&unk_1404647B8 + 8 * v15);
LABEL_30:
    v17 = 2LL * (*(_QWORD *)(a1 + 1152) >> 4);
    v20 = 0LL;
    v19 = v17 >> 3;
    v18 = 0LL;
    result = MiMapCfgBitMapSection(a1, v14, (unsigned int)&v20, (unsigned int)&v18, (__int64)&v19);
    if ( (int)result >= 0 )
    {
      MiReferenceCfgVad(CurrentThread, v18, 1LL);
      goto LABEL_5;
    }
  }
  return result;
}
