/*
 * XREFs of MmMapMemoryDumpMdlEx @ 0x140144520
 * Callers:
 *     PopGetNextTable @ 0x1401442D0 (PopGetNextTable.c)
 *     MmMapMemoryDumpMdl @ 0x1402AE860 (MmMapMemoryDumpMdl.c)
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x14056B410 (PopCreateDumpMdl.c)
 *     PopHiberCheckResume @ 0x14056C320 (PopHiberCheckResume.c)
 *     IopLiveDumpBufferDumpData @ 0x140578FC0 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MmMapMemoryDumpMdlEx(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  __int64 v5; // rbp
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // r9
  int ProtectionPfnCompatible; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  __int64 v17; // r9
  int v19; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v20; // [rsp+34h] [rbp-F4h]
  int v21; // [rsp+38h] [rbp-F0h]
  int v22; // [rsp+3Ch] [rbp-ECh]
  __int64 v23; // [rsp+40h] [rbp-E8h]
  __int64 v24; // [rsp+48h] [rbp-E0h]

  v4 = *(unsigned int *)(a3 + 44);
  v5 = ((unsigned int)(v4 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v4 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  v22 = 0;
  v19 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v6 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *(_QWORD *)(a3 + 24) = a1 + v4;
  v20 = 3;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v21 = 20;
  v8 = a4 & 1;
  v9 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v10 = *(__int64 *)((char *)v6 + v9 + 48);
    ProtectionPfnCompatible = 4;
    if ( !v8 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v10 - 0x58000000000LL);
    MiMakeValidPte((unsigned __int64)v6, v10, ProtectionPfnCompatible | 0xA0000000);
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 == v15 )
        goto LABEL_10;
      if ( !MiPteInShadowRange((unsigned __int64)v6) )
        goto LABEL_7;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
LABEL_21:
          if ( (v17 & 1) != 0 )
            v17 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        goto LABEL_21;
      }
LABEL_7:
      *v6 = v17;
      if ( v16 )
        MiWritePteShadow((__int64)v6, v17);
      MiInsertTbFlushEntry((__int64)&v19, v7, 1LL, 0);
      goto LABEL_10;
    }
    if ( MiPteInShadowRange((unsigned __int64)v6) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v13 = 1LL;
        if ( !HIBYTE(word_14043B26C) )
          goto LABEL_27;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
LABEL_27:
        if ( (v15 & 1) != 0 )
          v15 |= 0x8000000000000000uLL;
      }
    }
    *v6 = v15;
    if ( (_DWORD)v13 )
      MiWritePteShadow((__int64)v6, v15);
LABEL_10:
    ++v6;
    v7 += 4096LL;
    --v5;
  }
  while ( v5 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  if ( v22 )
    MiFlushTbList(&v19, v13, v14, v15);
}
