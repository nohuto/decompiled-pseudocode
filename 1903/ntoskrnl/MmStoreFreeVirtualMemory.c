/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x140727EB4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14014884C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MiFreeVadRange @ 0x1400ABCD8 (MiFreeVadRange.c)
 *     MiUnlockPageTableRange @ 0x1401671A0 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // rax
  char v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v2 = MiObtainReferencedVadEx(a1, 0, &v8);
  v3 = *(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32);
  v4 = *(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32);
  MiUnlockPageTableRange(a1, (v3 << 12) | 0xFFF);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  return MiFreeVadRange(v2, (int)&v7, v4, v3, (__int64)Process, 0);
}
