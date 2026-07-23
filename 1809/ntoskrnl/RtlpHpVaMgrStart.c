/*
 * XREFs of RtlpHpVaMgrStart @ 0x140176A14
 * Callers:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14014154C (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrStart(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  int v7; // ecx
  char v8; // dl
  __int64 result; // rax

  v7 = *(_DWORD *)(a3 + 4);
  *(_QWORD *)a1 = 0LL;
  v8 = *(_BYTE *)(a3 + 12);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 16);
  *(_BYTE *)(a1 + 44) = a5;
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a3 + 8);
  *(_WORD *)(a1 + 40) = a4 >> 20;
  *(_WORD *)(a1 + 42) = 1;
  *(_QWORD *)(a1 + 24) = a2;
  result = 0LL;
  *(_BYTE *)(a1 + 46) = *(_BYTE *)(a1 + 46) & 0xF0 | (v7 != 0) | (2 * (v7 & 3 | (4 * (v8 & 1))));
  return result;
}
