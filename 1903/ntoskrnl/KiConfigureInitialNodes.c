/*
 * XREFs of KiConfigureInitialNodes @ 0x140185B08
 * Callers:
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x140185BA4 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x140186FCC (KiCommitNodeAssignment.c)
 */

__int64 __fastcall KiConfigureInitialNodes(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdx
  _WORD *v4; // rcx

  byte_14058D2F5 |= 2u;
  qword_14058D2E0 |= 1uLL;
  byte_14058D2F4 = KiMaximumGroupSize;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 192) = &ExNode0;
  qword_14058D290 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0LL);
  LODWORD(result) = 1;
  v3 = &unk_14058B408;
  v4 = &unk_1409B9340;
  do
  {
    *v3++ = v4;
    v4[73] = result;
    result = (unsigned int)(result + 1);
    v4 += 192;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
