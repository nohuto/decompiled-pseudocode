/*
 * XREFs of MiGetNextPageTable @ 0x140084230
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiFlushDirtyBitsToPfn @ 0x14012C2DC (MiFlushDirtyBitsToPfn.c)
 *     MiGetNextNonGapPfnPage @ 0x1401845A8 (MiGetNextNonGapPfnPage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 *     MiCloneCaptureVadCommit @ 0x1402BA108 (MiCloneCaptureVadCommit.c)
 *     MiUpdateForkMaps @ 0x1402CADF8 (MiUpdateForkMaps.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 LeafVa; // rax
  char v14; // r9
  char *AnyMultiplexedVm; // rbx
  int v16; // eax
  int v17; // edx
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  __int64 v20; // [rsp+28h] [rbp-100h]
  _QWORD v21[22]; // [rsp+30h] [rbp-F8h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  memset(v21, 0, sizeof(v21));
  v10 = a1 << 25 >> 16;
  v11 = a2 << 25 >> 16;
  v12 = 2145;
  LODWORD(v21[0]) = 2145;
  if ( (a5 & 1) != 0 )
  {
    v12 = 2273;
    LODWORD(v21[0]) = 2273;
  }
  if ( (a5 & 2) != 0 )
    LODWORD(v21[0]) = v12 | 0x200;
  LeafVa = MiGetLeafVa(v10);
  if ( LeafVa >= 0xFFFF800000000000uLL && (LeafVa > qword_14043B5F0 || LeafVa < qword_14043CB80) )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  if ( (v14 & 4) != 0 )
    goto LABEL_12;
  v16 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v10, 0);
  if ( !v16 )
  {
    LODWORD(v21[0]) |= 4u;
LABEL_12:
    v21[2] = a3;
    v21[21] = &v19;
    BYTE2(v21[1]) = 1;
    v21[20] = MiGetNextPageTableTail;
    v21[3] = AnyMultiplexedVm;
    BYTE4(v21[0]) = a4;
    v21[4] = v10;
    v21[5] = v11;
    MiWalkPageTables((int *)v21);
    *a6 = v19;
    return v20;
  }
  v17 = v16 - 1;
  result = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v17;
  return result;
}
