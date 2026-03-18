/*
 * XREFs of MxCreatePfn @ 0x1409FC288
 * Callers:
 *     MxCreatePfns @ 0x1409FBFF4 (MxCreatePfns.c)
 * Callees:
 *     MiPageToChannel @ 0x14002F36C (MiPageToChannel.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MxCreatePfn(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4, int a5)
{
  ULONG_PTR v9; // rdi
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // ebx
  unsigned __int64 v15; // r10
  __int64 result; // rax
  _QWORD v17[6]; // [rsp+20h] [rbp-48h] BYREF

  v9 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v10 = 1;
  if ( a5 == 1 )
    memset((void *)(48 * BugCheckParameter2 - 0x58000000000LL), 0, 0x30uLL);
  v11 = a4 ^ *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 8) = a2;
  *(_WORD *)(v9 + 32) = 1;
  *(_QWORD *)(v9 + 40) ^= v11 & 0xFFFFFFFFFLL;
  LOBYTE(v11) = *(_BYTE *)(v9 + 34) & 0xFE;
  *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v9 + 34) = v11 | 6;
  if ( (a3 & 0x10) == 0 && (a3 & 8) != 0 )
  {
    v10 = 2;
  }
  else if ( (a3 & 0x10) != 0 )
  {
    v10 = 0;
  }
  *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0x3F | ((_BYTE)v10 << 6);
  v12 = MiSwizzleInvalidPte(128LL);
  if ( v10 == 2 )
  {
    v12 |= 0x300uLL;
  }
  else if ( !v10 )
  {
    v12 |= 0x100uLL;
  }
  *(_QWORD *)(v9 + 16) = v12;
  *(_BYTE *)(v9 + 34) |= 0x10u;
  v14 = MiPageToNode(BugCheckParameter2, v13);
  memset(v17, 0, sizeof(v17));
  v17[5] = *(_QWORD *)(v9 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)v14 << 58);
  *(_QWORD *)(v9 + 40) = v17[5];
  v15 = *(_QWORD *)(v9 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(BugCheckParameter2) & 3) << 36);
  result = 0x20000000000000LL;
  *(_QWORD *)(v9 + 40) = v15 | 0x20000000000000LL;
  return result;
}
