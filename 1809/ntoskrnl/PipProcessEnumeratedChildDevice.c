/*
 * XREFs of PipProcessEnumeratedChildDevice @ 0x1406E62BC
 * Callers:
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PpDevNodeInsertIntoTree @ 0x1401603A4 (PpDevNodeInsertIntoTree.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PipAllocateDeviceNode @ 0x1406FFD7C (PipAllocateDeviceNode.c)
 *     PpProfileCancelTransitioningDock @ 0x140833AAC (PpProfileCancelTransitioningDock.c)
 */

__int64 __fastcall PipProcessEnumeratedChildDevice(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 *v13; // rsi
  __int64 v14; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 312);
  if ( (*(_DWORD *)(v2 + 32) & 2) != 0 )
  {
    IoAddTriageDumpDataBlock(a2, *(unsigned __int16 *)(a2 + 2));
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 )
    {
      IoAddTriageDumpDataBlock(v10, *(__int16 *)(v10 + 2));
      v11 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((int)v11, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v12 + 40);
      IoAddTriageDumpDataBlock(v12, 784);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((int)v13, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), *v13);
      }
      v14 = *(_QWORD *)(a2 + 312);
      v15 = (_WORD *)(*(_QWORD *)(v14 + 40) + 56LL);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((int)v15, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        v14 = *(_QWORD *)(a2 + 312);
      }
      v16 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 16LL);
      if ( v16 )
      {
        v17 = (_WORD *)(v16 + 56);
        if ( *v17 )
        {
          IoAddTriageDumpDataBlock((int)v17, 2);
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), *(unsigned __int16 *)(v18 + 56));
        }
      }
    }
    KeBugCheckEx(0xCAu, 4uLL, a2, 0LL, 0LL);
  }
  v5 = *(_QWORD *)(v2 + 40);
  v19 = v5;
  if ( v5 )
  {
    PipSetDevNodeFlags(v5, 16LL);
    if ( *(_DWORD *)(v5 + 568) == 4 )
      PpProfileCancelTransitioningDock(v5);
    return ObfDereferenceObject((PVOID)a2);
  }
  v7 = PipAllocateDeviceNode(a2, &v19);
  v8 = v19;
  v9 = v7;
  if ( !v19 )
    return ObfDereferenceObject((PVOID)a2);
  PipSetDevNodeFlags(v19, 16LL);
  *(_DWORD *)(a2 + 48) |= 0x1000u;
  result = PpDevNodeInsertIntoTree(a1, v8);
  if ( v9 == -1073740946 )
    return PipSetDevNodeProblem(v8, 49LL, 3221226350LL);
  return result;
}
