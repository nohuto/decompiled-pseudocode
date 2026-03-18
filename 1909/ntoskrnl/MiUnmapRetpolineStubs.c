/*
 * XREFs of MiUnmapRetpolineStubs @ 0x14018065C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWriteWsle @ 0x1400FA424 (MiWriteWsle.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiLockPageTable @ 0x14015D3F4 (MiLockPageTable.c)
 *     MiUnlockPageTable @ 0x14019D818 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  v8 = v5 + ((((unsigned int)dword_1404645B0 >> 12) + v6 + ((dword_1404645B0 & 0xFFF) != 0)) << 12);
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v28[0]) = 0;
  v26 = qword_140464550;
  LODWORD(v28[1]) = 20;
  v28[2] = 0LL;
  v28[3] = 0LL;
  LODWORD(v28[0]) = a2 == 0 ? 2 : 0;
  v10 = 0LL;
  v25 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v14 = v25;
  if ( dword_140464588 )
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
            if ( !HIBYTE(word_1404658EC) )
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
      if ( (unsigned int)v10 >= dword_140464588 )
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
