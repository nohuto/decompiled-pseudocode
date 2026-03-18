/*
 * XREFs of IrqArbpPrepareForTestOrConflict @ 0x1C0098510
 * Callers:
 *     IrqArbTestAllocation @ 0x1C0098480 (IrqArbTestAllocation.c)
 *     IrqArbRetestAllocation @ 0x1C00B69D0 (IrqArbRetestAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B6DA8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     LinkNodeCopyData @ 0x1C00984B8 (LinkNodeCopyData.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009A324 (IrqArbpUnreferenceArbitrationList.c)
 *     LinkNodeClearPossibleData @ 0x1C009A614 (LinkNodeClearPossibleData.c)
 *     ProcessorCopyData @ 0x1C009A850 (ProcessorCopyData.c)
 *     ProcessorpClearData @ 0x1C009ABC0 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1C009ACE0 (IcClearPossibleData.c)
 */

__int64 __fastcall IrqArbpPrepareForTestOrConflict(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  int v5; // eax
  __int64 result; // rax
  __int64 j; // r9
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int v16; // edx

  ProcessorpClearData(1LL);
  IcClearPossibleData();
  if ( IrqLibRealInterruptModel == 1 )
  {
    for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 28) & 4) != 0 )
        continue;
      v5 = (*(__int64 (__fastcall **)(_QWORD))(PmHalDispatchTable + 64))(*(unsigned int *)(i + 16));
      if ( !v5 )
        continue;
      if ( *(int *)(i + 28) < 0 )
      {
        if ( !BYTE2(v5) && !(_BYTE)v5 )
          continue;
        *(_DWORD *)(i + 20) = *(_DWORD *)(i + 16) + BYTE2(v5);
        *(_DWORD *)(i + 28) = 0;
      }
      else
      {
        if ( BYTE2(v5) || (_BYTE)v5 )
          continue;
        *(_DWORD *)(i + 28) = 0x80000000;
        *(_DWORD *)(i + 20) = 0;
      }
      memset((void *)(i + 32), 0, 200LL * *(unsigned int *)(i + 24));
    }
  }
  LinkNodeClearPossibleData();
  result = ProcessorCopyData(1LL);
  if ( (int)result >= 0 )
  {
    for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
    {
      if ( *(int *)(j + 28) >= 0 )
      {
        v8 = 0;
        v9 = *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) + 1;
        if ( *(_DWORD *)(j + 20) - *(_DWORD *)(j + 16) != -1 )
        {
          v10 = j + 32;
          do
          {
            v11 = *(_OWORD *)(v10 + 16);
            v12 = *(_OWORD *)(v10 + 32);
            *(_DWORD *)(v10 + 4) = *(_DWORD *)v10;
            *(_DWORD *)(v10 + 12) = *(_DWORD *)(v10 + 8);
            *(_BYTE *)(v10 + 193) = *(_BYTE *)(v10 + 192);
            *(_OWORD *)(v10 + 104) = v11;
            v13 = *(_OWORD *)(v10 + 48);
            *(_OWORD *)(v10 + 120) = v12;
            v14 = *(_OWORD *)(v10 + 64);
            *(_OWORD *)(v10 + 136) = v13;
            v15 = *(_OWORD *)(v10 + 80);
            *(_OWORD *)(v10 + 152) = v14;
            *(_QWORD *)&v14 = *(_QWORD *)(v10 + 96);
            *(_OWORD *)(v10 + 168) = v15;
            *(_QWORD *)(v10 + 184) = v14;
            *(_DWORD *)(v10 + 104) = 0;
            v10 += 200LL;
            v16 = v8 + *(_DWORD *)(j + 16);
            ++v8;
            *(_DWORD *)(v10 - 40) = v16;
          }
          while ( v8 < v9 );
        }
      }
    }
    result = LinkNodeCopyData(1);
    if ( (int)result >= 0 )
      return IrqArbpUnreferenceArbitrationList(a1, a2);
  }
  return result;
}
