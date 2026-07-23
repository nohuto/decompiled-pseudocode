/*
 * XREFs of MiCommitVadCfgBits @ 0x1405F55BC
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiCfgInitializeProcess @ 0x140678F10 (MiCfgInitializeProcess.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     MiMarkProcessCfgBits @ 0x1405F57C4 (MiMarkProcessCfgBits.c)
 *     MiSelectCfgBitMap @ 0x1405F582C (MiSelectCfgBitMap.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1405F7524 (MiMarkPrivateOpenCfgBits.c)
 */

__int64 __fastcall MiCommitVadCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 *v6; // r9
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 **v11; // rax
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r10d
  int v15; // r11d
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  __int16 v20; // cx
  __int64 v21; // rcx

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( MiIsProcessCfgEnabled() )
  {
    v8 = *(unsigned int *)(v7 + 24);
    v9 = (v8 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12;
    v10 = ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) + 4096;
    if ( v6 )
    {
      v9 = *v6;
      v10 = (v6[1] | 0xFFF) + 1;
    }
    else if ( (*(_DWORD *)(v7 + 48) & 0x4000) == 0 )
    {
      v11 = *(__int64 ***)(v7 + 72);
      if ( ((*v11)[7] & 0x20) != 0 )
        v4 = **v11;
    }
    v12 = MiSelectCfgBitMap(Process, v9, v4);
    v16 = MiMarkProcessCfgBits(v14, v13, v15, v9, v10, v12, a3);
    v17 = Process[1].ActiveProcessors.Bitmap[7];
    v18 = v16;
    if ( !v17 )
      return v18;
    v20 = *(_WORD *)(v17 + 8);
    if ( v20 != 332 && v20 != 452 )
      return v18;
    if ( v16 < 0 )
      return v18;
    v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 392LL;
    if ( v12 == v21 )
    {
      v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 424LL;
      if ( v9 > 0x100000000LL )
        return v18;
      if ( v10 > 0x100000000LL )
        v10 = 0x100000000LL;
    }
    return (unsigned int)MiMarkPrivateOpenCfgBits(v21, v9, v10, 0LL);
  }
  return 0LL;
}
