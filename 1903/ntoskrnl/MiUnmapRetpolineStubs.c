/*
 * XREFs of MiUnmapRetpolineStubs @ 0x14017FF6C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiWriteWsle @ 0x1400F6984 (MiWriteWsle.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiLockPageTable @ 0x14015CD54 (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x14019D098 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiUnmapRetpolineStubs(__int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  __int64 AnyMultiplexedVm; // rax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r13
  __int64 v15; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  bool v22; // zf
  unsigned __int64 ContainingPageTable; // rax
  unsigned __int8 v25; // [rsp+20h] [rbp-108h]
  __int64 v26; // [rsp+28h] [rbp-100h]
  __int64 v27; // [rsp+28h] [rbp-100h]
  _QWORD v28[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v28, 0, 0xB8uLL);
  v3 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v7 = AnyMultiplexedVm;
  v8 = v5 + ((((unsigned int)dword_1404648B0 >> 12) + v6 + ((dword_1404648B0 & 0xFFF) != 0)) << 12);
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v28[0]) = 0;
  v26 = qword_140464850;
  LODWORD(v28[1]) = 20;
  v28[2] = 0LL;
  v28[3] = 0LL;
  LODWORD(v28[0]) = a2 == 0 ? 2 : 0;
  v10 = 0LL;
  v25 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v14 = v25;
  if ( dword_140464888 )
  {
    v15 = v26;
    while ( 1 )
    {
      v16 = v9 + 8 * v10;
      v27 = *(_QWORD *)(v15 + 8 * v10 + 48);
      if ( v3 )
      {
        if ( (v16 & 0xFFF) != 0 )
          goto LABEL_10;
        MiFlushTbList((int *)v28, v11, v12, v13);
        MiUnlockPageTable(v7, v3);
      }
      v3 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTable(v7, v3);
LABEL_10:
      if ( MI_READ_PTE_LOCK_FREE(v9 + 8 * v10) )
      {
        LOBYTE(v18) = MiGetWsleContents(v17, v8 + (unsigned int)((_DWORD)v10 << 12)) & 0xF0 | 0xA;
        MiWriteWsle(v19, v8 + (unsigned int)((_DWORD)v10 << 12), v18);
        if ( MiPteInShadowRange(v9 + 8 * v10) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140465BEC) )
            {
              v22 = (v20 & 1) == 0;
LABEL_17:
              if ( !v22 )
                v20 |= 0x8000000000000000uLL;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v22 = (v20 & 1) == 0;
            goto LABEL_17;
          }
        }
        *(_QWORD *)v16 = v20;
        if ( v21 )
          MiWritePteShadow(v9 + 8 * v10);
        MiInsertTbFlushEntry((__int64)v28, v8 + (unsigned int)((_DWORD)v10 << 12), 1LL, 0);
        MiLockAndDecrementShareCount(48 * v27 - 0x58000000000LL, 0);
        ContainingPageTable = MiGetContainingPageTable(v9 + 8 * v10);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL, 0);
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= dword_140464888 )
      {
        v14 = v25;
        break;
      }
    }
  }
  MiFlushTbList((int *)v28, v11, v12, v13);
  if ( v3 )
    MiUnlockPageTable(v7, v3);
  return MiUnlockWorkingSetShared(v7, v14);
}
