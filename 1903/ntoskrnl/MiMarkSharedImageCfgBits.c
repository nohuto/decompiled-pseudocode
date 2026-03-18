/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x140607108
 * Callers:
 *     MiMarkProcessCfgBits @ 0x1405EAFEC (MiMarkProcessCfgBits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiVadDeleted @ 0x140053930 (MiVadDeleted.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D300 (MiIsCfgBitMapPageShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiGetControlAreaLoadConfig @ 0x1400A93C8 (MiGetControlAreaLoadConfig.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1405EC930 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _KPROCESS *Process; // rbp
  __int64 ControlAreaLoadConfig; // rax
  __int64 v6; // r8
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  volatile signed __int64 *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  unsigned __int64 i; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v19; // rsi
  int v20; // ebp
  __int64 v22; // r8
  unsigned int v23; // eax
  _KPROCESS *v24; // [rsp+50h] [rbp-78h]
  _BYTE v25[4]; // [rsp+58h] [rbp-70h] BYREF
  int v26; // [rsp+5Ch] [rbp-6Ch] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-68h]
  _QWORD *v28; // [rsp+68h] [rbp-60h]
  _QWORD v29[2]; // [rsp+70h] [rbp-58h] BYREF
  int v30; // [rsp+80h] [rbp-48h]

  v28 = a1;
  v29[0] = 0LL;
  v3 = a1;
  v29[1] = 0LL;
  v30 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v24 = Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(**(_QWORD **)(a3 + 72));
  v7 = v3[2];
  v8 = (unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32;
  v9 = (unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32;
  v27 = *(_QWORD *)(ControlAreaLoadConfig + 16);
  v10 = (volatile signed __int64 *)(v7 + 40);
  v11 = (*(unsigned int *)(v6 + 24) | v9) << 12;
  v12 = 2 * (((((*(unsigned int *)(v6 + 28) | v8) + 1) << 12) - v11) >> 4);
  v13 = *v3 + ((2 * (v11 >> 4)) >> 3);
  v14 = v12 >> 3;
  ExAcquirePushLockExclusiveEx(v7 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v7) )
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 40));
    KeAbPostRelease(v7 + 40);
    return 3221225738LL;
  }
  v15 = v13 + v14;
  v16 = (v13 + v14 - 1) | 0xFFF;
  for ( i = v13 & 0xFFFFFFFFFFFFF000uLL; i <= v16; i += 4096LL )
  {
    IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(i, v7);
    if ( IsCfgBitMapPageShared == 2 )
    {
      v19 = i | 0xFFF;
      goto LABEL_6;
    }
    if ( IsCfgBitMapPageShared != 1 )
    {
      if ( IsCfgBitMapPageShared == 3 )
      {
        v19 = v16;
        if ( (i | 0x1FFFFF) <= v16 )
          v19 = i | 0x1FFFFF;
LABEL_6:
        v20 = MiSetProtectionOnSection((__int64)Process, v7, i, v19, 2u, 0, &v26, (__int64)v25);
        if ( v20 < 0 )
          goto LABEL_11;
        i = v19 - 4095;
        v3 = v28;
      }
      else
      {
        if ( i < v13 )
          v22 = (unsigned int)(v13 - i);
        else
          v22 = 0LL;
        if ( i + 4096 <= v15 )
        {
          v23 = 4096 - v22;
        }
        else
        {
          v23 = v15 - i - v22;
          if ( (_DWORD)v15 - (_DWORD)i == (_DWORD)v22 )
            break;
        }
        v20 = MiCopyToCfgBitMap(
                (__int64)v3,
                v27,
                v22,
                0,
                i + (unsigned int)v22,
                v7,
                (unsigned int)(v22 + i - v13) >> 1 << 7,
                (unsigned int *)v29,
                v23);
        if ( v20 < 0 )
          goto LABEL_11;
      }
      Process = v24;
      continue;
    }
  }
  v20 = 0;
LABEL_11:
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 40));
  KeAbPostRelease(v7 + 40);
  return (unsigned int)v20;
}
