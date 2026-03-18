/*
 * XREFs of PspSetupUserFiberShadowStack @ 0x1408C90D4
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1408C8E8C (PspReserveAndCommitUserShadowStack.c)
 */

__int64 __fastcall PspSetupUserFiberShadowStack(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3, _QWORD *a4)
{
  int v4; // ebx
  unsigned __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v10[2]; // [rsp+38h] [rbp-10h] BYREF

  v10[0] = 0LL;
  v4 = PspReserveAndCommitUserShadowStack(a1, a2, a3, v10, &v9);
  if ( v4 >= 0 )
  {
    v9 -= 8LL;
    _RCX = v9;
    _RAX = PspUserFiberStart;
    __asm { wrussq  qword ptr [rcx], rax }
    _RAX = v9 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    v9 -= 8LL;
    __asm { wrussq  qword ptr [rcx], rax }
    *a4 = _RCX - 8;
    v10[0] = 0LL;
  }
  if ( v10[0] )
  {
    v9 = v10[0];
    v10[0] = 0LL;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v9, v10, 0x8000u, 0, 0x40000000);
  }
  return (unsigned int)v4;
}
