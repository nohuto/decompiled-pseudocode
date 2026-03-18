/*
 * XREFs of MiGetNextPageTable @ 0x14005DF80
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400EC148 (MiFlushDirtyBitsToPfn.c)
 *     MiGetNextNonGapPfnPage @ 0x140185FA8 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiCloneCaptureVadCommit @ 0x1402D012C (MiCloneCaptureVadCommit.c)
 *     MiUpdateForkMaps @ 0x1402E5060 (MiUpdateForkMaps.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa > qword_140465EE0 || LeafVa < qword_1404675B0) )
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
