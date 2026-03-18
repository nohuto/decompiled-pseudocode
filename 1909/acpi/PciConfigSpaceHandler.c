/*
 * XREFs of PciConfigSpaceHandler @ 0x1C0022960
 * Callers:
 *     <none>
 * Callees:
 *     PciConfigSpaceHandlerWorker @ 0x1C0022A70 (PciConfigSpaceHandlerWorker.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall PciConfigSpaceHandler(
        int a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x46706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v14 = gdwfAMLI;
  *(_DWORD *)v13 = a1;
  v13[1] = a2;
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (v14 & 4) != 0 )
    _InterlockedIncrement(a2 + 2);
  v13[3] = a5;
  *((_DWORD *)v13 + 8) = a6;
  v13[5] = a7;
  v13[6] = a8;
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = a4;
  v15 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
  v13[7] = v15;
  if ( v15 )
  {
    dword_1C0082858 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  }
  v16 = v13[7];
  *((_DWORD *)v13 + 20) = -1;
  return PciConfigSpaceHandlerWorker(v16, 0LL, 0LL, v13);
}
