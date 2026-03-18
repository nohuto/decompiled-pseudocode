/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x14015F264
 * Callers:
 *     PopGetNextTable @ 0x14015EF10 (PopGetNextTable.c)
 *     MmMapMemoryDumpMdl @ 0x1402C64B0 (MmMapMemoryDumpMdl.c)
 *     PopCreateDumpMdl @ 0x140599A54 (PopCreateDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x14059A700 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x14059B630 (PopHiberCheckResume.c)
 *     IopLiveDumpBufferDumpData @ 0x1405A7E30 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002BDF0 (MiMakeProtectionPfnCompatible.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r10
  __int64 v8; // r15
  __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  int v11; // r12d
  __int64 v12; // r9
  int ProtectionPfnCompatible; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // r9
  bool v20; // zf
  bool v21; // zf
  _QWORD v22[24]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v22, 0, 0xB8uLL);
  v7 = *(unsigned int *)(a3 + 44);
  v8 = ((unsigned int)(v7 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v7 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  v22[3] = 0LL;
  *(_QWORD *)(a3 + 24) = a1 + v7;
  LODWORD(v22[1]) = 20;
  BYTE4(v22[0]) = 3;
  v9 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v11 = a4 & 1;
  do
  {
    v12 = *(__int64 *)((char *)v9 + a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL);
    ProtectionPfnCompatible = 4;
    if ( !v11 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v12 - 0x58000000000LL);
    MiMakeValidPte((unsigned __int64)v9, v12, ProtectionPfnCompatible | 0xA0000000);
    v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
    if ( (v14 & 1) != 0 )
    {
      if ( v14 == v17 )
        goto LABEL_10;
      if ( !MiPteInShadowRange((unsigned __int64)v9) )
        goto LABEL_7;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
          v20 = (v19 & 1) == 0;
          goto LABEL_22;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v20 = (v19 & 1) == 0;
LABEL_22:
        if ( !v20 )
          v19 |= 0x8000000000000000uLL;
      }
LABEL_7:
      *v9 = v19;
      if ( v18 )
        MiWritePteShadow((__int64)v9);
      MiInsertTbFlushEntry((__int64)v22, v10, 1LL, 0);
      goto LABEL_10;
    }
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1LL;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_15;
        v21 = (v17 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_15;
        v21 = (v17 & 1) == 0;
      }
      if ( !v21 )
        v17 |= 0x8000000000000000uLL;
    }
LABEL_15:
    *v9 = v17;
    if ( (_DWORD)v15 )
      MiWritePteShadow((__int64)v9);
LABEL_10:
    ++v9;
    v10 += 4096LL;
    --v8;
  }
  while ( v8 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  if ( HIDWORD(v22[1]) )
    MiFlushTbList((int *)v22, v15, v16, v17);
}
