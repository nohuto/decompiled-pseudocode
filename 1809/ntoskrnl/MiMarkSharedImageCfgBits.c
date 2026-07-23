/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x1405F11D0
 * Callers:
 *     MiMarkProcessCfgBits @ 0x1405F57C4 (MiMarkProcessCfgBits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetControlAreaLoadConfig @ 0x1400D9594 (MiGetControlAreaLoadConfig.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r15
  __int64 ControlAreaLoadConfig; // rax
  _QWORD *v5; // rdx
  ULONG_PTR v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  int IsCfgBitMapPageShared; // eax
  unsigned __int64 v15; // rdi
  int v16; // esi
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // [rsp+50h] [rbp-78h]
  int v21; // [rsp+58h] [rbp-70h] BYREF
  int v22; // [rsp+5Ch] [rbp-6Ch] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-68h]
  _QWORD v24[2]; // [rsp+68h] [rbp-60h] BYREF
  int i; // [rsp+78h] [rbp-50h]

  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(**(_QWORD **)(a3 + 72));
  v6 = v5[2];
  v7 = *(_QWORD *)(ControlAreaLoadConfig + 8);
  v20 = v7;
  v9 = *v5
     + ((2
       * (((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 8) & 0xFFFFFFFFFFFFFFFLL)) >> 3);
  v10 = (2
       * (((((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) + 1) << 12)
         - ((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12)) >> 4)) >> 3;
  ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v6) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return 3221225738LL;
  }
  else
  {
    v11 = v10 + v9;
    v23 = v10 + v9;
    v24[0] = 0LL;
    v12 = (v10 + v9 - 1) | 0xFFF;
    v24[1] = 0LL;
    v13 = v9 & 0xFFFFFFFFFFFFF000uLL;
    for ( i = 0; v13 <= v12; v13 += 4096LL )
    {
      IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v13, v6);
      switch ( IsCfgBitMapPageShared )
      {
        case 2:
          v15 = v13 | 0xFFF;
          break;
        case 1:
          continue;
        case 3:
          v15 = v12;
          if ( (v13 | 0x1FFFFF) <= v12 )
            v15 = v13 | 0x1FFFFF;
          break;
        default:
          if ( v13 < v9 )
            v18 = (unsigned int)(v9 - v13);
          else
            v18 = 0LL;
          if ( v13 + 4096 <= v11 )
          {
            v19 = 4096 - v18;
          }
          else
          {
            v19 = v11 - v13 - v18;
            if ( (_DWORD)v11 - (_DWORD)v13 == (_DWORD)v18 )
              goto LABEL_9;
          }
          v16 = MiCopyToCfgBitMap(
                  v24,
                  v7,
                  v18,
                  0LL,
                  v13 + (unsigned int)v18,
                  v6,
                  (unsigned int)(v18 + v13 - v9) >> 1 << 7,
                  v24,
                  v19);
          if ( v16 < 0 )
            goto LABEL_10;
          goto LABEL_7;
      }
      v16 = MiSetProtectionOnSection((__int64)Process, v6, v13, v15, 2u, 0, &v22, &v21);
      if ( v16 < 0 )
        goto LABEL_10;
      v13 = v15 - 4095;
      v11 = v23;
LABEL_7:
      v7 = v20;
    }
LABEL_9:
    v16 = 0;
LABEL_10:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    KeAbPostRelease(v6 + 40);
    return (unsigned int)v16;
  }
}
