/*
 * XREFs of MxPageAlwaysHot @ 0x1409F3A00
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x1409F2F50 (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MxPageAlwaysHot(unsigned __int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned int v3; // r9d

  v1 = 0;
  if ( !qword_140465788 )
    return 0LL;
  result = 1LL;
  if ( a1 >= *(_QWORD *)(qword_140465788 + 16) )
  {
    v3 = 1;
    do
    {
      ++v3;
      ++v1;
    }
    while ( a1 >= *(_QWORD *)(qword_140465788 + 16LL * v3) );
  }
  if ( *(_BYTE *)(qword_140465788 + 16LL * v1 + 14) == 1 )
    return 0LL;
  return result;
}
