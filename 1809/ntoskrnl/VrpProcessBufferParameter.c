/*
 * XREFs of VrpProcessBufferParameter @ 0x1408096F8
 * Callers:
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14080C440 (VrpPostQueryKey.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpProcessBufferParameter(char a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax

  v4 = 0;
  PoolWithTag = 0LL;
  if ( a1 == 1 )
  {
    if ( !a3 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, a3, 0x67655256u)) != 0LL )
      *a4 = PoolWithTag;
    else
      return (unsigned int)-1073741670;
  }
  else
  {
    *a4 = a2;
  }
  return v4;
}
