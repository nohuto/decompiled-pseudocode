/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800DDB00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *v5; // rax
  _WORD *v6; // r14
  __int64 v7; // rsi

  v1 = 0;
  if ( !Src )
    return (unsigned int)-1073741811;
  if ( !(_WORD)xmmword_180164390 )
    return (unsigned int)-1073741811;
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( v4 >= 0xFFFE )
    {
      return (unsigned int)-1073741562;
    }
    else
    {
      v5 = (_WORD *)sub_18006D6B8(v4 + 2);
      v6 = v5;
      if ( v5 )
      {
        memmove(v5, Src, v4);
        v6[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive(&qword_1801664A8);
        v7 = *((_QWORD *)&xmmword_180164390 + 1);
        LOWORD(xmmword_180164390) = v4;
        WORD1(xmmword_180164390) = v4 + 2;
        *((_QWORD *)&xmmword_180164390 + 1) = v6;
        RtlReleaseSRWLockExclusive(&qword_1801664A8);
        if ( v7 != *((_QWORD *)&xmmword_180164380 + 1) )
          RtlDeleteBoundaryDescriptor(v7);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
