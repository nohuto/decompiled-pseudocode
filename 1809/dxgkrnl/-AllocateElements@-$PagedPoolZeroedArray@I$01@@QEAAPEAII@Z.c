/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C0212FD0
 * Callers:
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C0214900 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<unsigned int,2>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 2 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 4LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[4] = a2;
  if ( result )
  {
    memset(result, 0, 4 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
