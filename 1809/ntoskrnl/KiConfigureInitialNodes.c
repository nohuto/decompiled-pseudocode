/*
 * XREFs of KiConfigureInitialNodes @ 0x14017E1A8
 * Callers:
 *     KiInitializeKernel @ 0x140571310 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x14017E378 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x14017E838 (KiCommitNodeAssignment.c)
 */

_BYTE *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  _BYTE *v4; // rcx
  _BYTE *result; // rax

  byte_14055C36D |= 2u;
  byte_14055C36C = KiMaximumGroupSize;
  byte_14055C356 = 1;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 192) = &ExNode0;
  qword_14055C310 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0LL);
  v2 = 1;
  v3 = &unk_14055A388;
  v4 = &unk_140979156;
  do
  {
    *((_WORD *)v4 - 2) = v2;
    result = v4 - 150;
    ++v2;
    *v3 = v4 - 150;
    *v4 = 1;
    v4 += 384;
    ++v3;
  }
  while ( v2 < 0x40 );
  return result;
}
