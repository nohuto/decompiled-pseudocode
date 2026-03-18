/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C00B1224
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C0034DD0 (HMDestroyUnlockedObject.c)
 *     HMRemoveHandleForObject @ 0x1C00B1190 (HMRemoveHandleForObject.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C00B0F78 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(_BYTE *a1)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  __int64 v4; // rsi
  __int16 v5; // bx
  __int16 v6; // ax
  signed __int64 v7; // rdi

  --giheCount;
  v2 = gpKernelHandleTable;
  v3 = (unsigned int)((a1 - (_BYTE *)qword_1C01A0E28) >> 5);
  v4 = 3 * v3;
  if ( (a1[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**((_QWORD **)gpKernelHandleTable + 3 * v3));
    a1[25] &= ~0x20u;
  }
  v5 = *((_WORD *)a1 + 13);
  memset(a1, 0, 0x20uLL);
  v2[v4] = 0LL;
  v2[v4 + 1] = 0LL;
  v2[v4 + 2] = 0LL;
  v6 = 1;
  if ( v5 != -2 )
    v6 = v5 + 1;
  *((_WORD *)a1 + 13) = v6;
  v7 = (a1 - (_BYTE *)qword_1C01A0E28) >> 5;
  if ( (v7 & 1) != 0 )
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v7) = qword_1C01A0AF8;
    qword_1C01A0AF8 = v7;
  }
  else
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v7) = qword_1C01A0AF0;
    qword_1C01A0AF0 = v7;
  }
  return 1LL;
}
