/*
 * XREFs of RtlCreateAtomTableEx @ 0x140111340
 * Callers:
 *     RtlCreateAtomTable @ 0x140697570 (RtlCreateAtomTable.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpAllocateAtom @ 0x14068B324 (RtlpAllocateAtom.c)
 *     RtlpInitializeLockAtomTable @ 0x14069758C (RtlpInitializeLockAtomTable.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x140697598 (RtlpInitializeHandleTableForAtomTable.c)
 *     RtlpFreeAtom @ 0x1406AE710 (RtlpFreeAtom.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // ebp
  unsigned __int64 v7; // rax
  size_t v8; // rsi
  _DWORD *Atom; // rax
  _DWORD *v10; // rdi

  v3 = 0;
  if ( *a3 )
    return v3;
  v6 = 37;
  if ( a1 > 1 )
    v6 = a1;
  v7 = 48LL * (unsigned int)(v6 - 1);
  if ( is_mul_ok(0x30uLL, (unsigned int)(v6 - 1)) )
  {
    v8 = -1LL;
    if ( v7 + 40 >= v7 )
      v8 = v7 + 40;
    v3 = v7 + 40 < v7 ? 0xC0000095 : 0;
    if ( v7 + 40 >= v7 )
    {
      Atom = (_DWORD *)RtlpAllocateAtom(v8, 1416459329LL);
      v10 = Atom;
      if ( Atom )
      {
        memset(Atom, 0, v8);
        v10[7] = v6;
        if ( (unsigned __int8)RtlpInitializeHandleTableForAtomTable(v10) )
        {
          RtlpInitializeLockAtomTable(v10);
          *v10 = 1836020801;
          v10[1] = 1;
          v10[6] = a2;
          *a3 = v10;
        }
        else
        {
          v3 = -1073741801;
          RtlpFreeAtom(v10);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return v3;
  }
  return 3221225621LL;
}
