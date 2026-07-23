/*
 * XREFs of IsTrustletCreateAttributeWellFormed @ 0x1402EABE0
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 * Callees:
 *     <none>
 */

char __fastcall IsTrustletCreateAttributeWellFormed(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax

  if ( a2 != 8 )
  {
    if ( (a2 & 7) != 0 || (unsigned __int64)(a2 - 24) > 0x70 || !*a1 )
      return 0;
    v3 = 0LL;
    v4 = (unsigned int)(a2 - 8) >> 3;
    v5 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = HIDWORD(a1[v3 + 1]);
        if ( (_BYTE)v6 || v6 >= 0x100 || (a1[v3 + 1] & 0xF0000000LL) != 0 )
          return 0;
        ++v5;
        v3 = (unsigned int)BYTE1(a1[v3 + 1]) + (_DWORD)v3 + 1;
        if ( (unsigned int)v3 >= v4 )
        {
          if ( v5 > 4 )
            return 0;
          break;
        }
      }
    }
    if ( (_DWORD)v3 != v4 )
      return 0;
  }
  return 1;
}
