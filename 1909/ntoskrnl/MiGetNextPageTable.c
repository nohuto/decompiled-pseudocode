/*
 * XREFs of MiGetNextPageTable @ 0x14005E020
 * Callers:
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x1400210F0 (MiComputePageCommitment.c)
 *     MiFlushDirtyBitsToPfn @ 0x140088BA8 (MiFlushDirtyBitsToPfn.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiGetNextNonGapPfnPage @ 0x140186558 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAAEC (MiCheckCommitReleaseFromVad.c)
 *     MiCloneCaptureVadCommit @ 0x1402CFE8C (MiCloneCaptureVadCommit.c)
 *     MiUpdateForkMaps @ 0x1402E4DC0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  __int16 v12; // ax
  unsigned __int64 LeafVa; // rax
  char v14; // r9
  unsigned __int16 *AnyMultiplexedVm; // rbx
  int v16; // eax
  int v17; // edx
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  __int64 v20; // [rsp+28h] [rbp-100h]
  _QWORD v21[22]; // [rsp+30h] [rbp-F8h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  memset(v21, 0, 0xA8uLL);
  v10 = a1 << 25 >> 16;
  v11 = a2 << 25 >> 16;
  v12 = 2145;
  LOWORD(v21[0]) = 2145;
  if ( (a5 & 1) != 0 )
  {
    v12 = 2273;
    LOWORD(v21[0]) = 2273;
  }
  if ( (a5 & 2) != 0 )
    LOWORD(v21[0]) = v12 | 0x200;
  LeafVa = MiGetLeafVa(v10);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa > qword_140465BE0 || LeafVa < qword_1404672B0) )
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
  else
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  if ( (v14 & 4) != 0 )
    goto LABEL_12;
  v16 = MiFastLockLeafPageTable(AnyMultiplexedVm, v10, 0LL);
  if ( !v16 )
  {
    LOWORD(v21[0]) |= 4u;
LABEL_12:
    v21[1] = a3;
    v21[20] = &v19;
    v21[2] = AnyMultiplexedVm;
    BYTE6(v21[0]) = a4;
    BYTE2(v21[0]) = BYTE2(v21[0]) & 0xE3 | 4;
    v21[19] = MiGetNextPageTableTail;
    v21[3] = v10;
    v21[4] = v11;
    MiWalkPageTables((__int16 *)v21);
    *a6 = v19;
    return v20;
  }
  v17 = v16 - 1;
  result = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v17;
  return result;
}
