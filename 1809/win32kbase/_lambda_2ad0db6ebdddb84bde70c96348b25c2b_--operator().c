/*
 * XREFs of _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0060914
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C005FD10 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     DestroyKL @ 0x1C0063B44 (DestroyKL.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v2[2] != v2 )
  {
    do
    {
      v5 = (_QWORD *)v2[2];
      DestroyKL(v2);
      v2 = v5;
    }
    while ( (_QWORD *)v5[2] != v5 );
  }
  if ( (*((_BYTE *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 25) & 1) == 0 )
    HMMarkObjectDestroy(a2);
  gdwHydraHint |= 0x8000u;
  result = HMAssignmentUnlock(&v6);
  if ( result )
    return DestroyKL(v2);
  return result;
}
