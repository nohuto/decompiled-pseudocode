/*
 * XREFs of ViInitPickRandomTargets @ 0x1409DC108
 * Callers:
 *     ViInitSystemPhase0 @ 0x1409DBF34 (ViInitSystemPhase0.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     VfRandomGetNumber @ 0x140926F50 (VfRandomGetNumber.c)
 */

__int64 ViInitPickRandomTargets()
{
  __int64 result; // rax
  int v1; // ebx
  unsigned int v2; // esi
  bool v3; // r14
  unsigned int i; // edi
  ULONG Number; // r8d
  unsigned int v6; // edx

  result = (unsigned int)VfRandomVerifiedDrivers;
  v1 = 0;
  if ( VfRandomVerifiedDrivers )
  {
    if ( (unsigned int)VfRandomVerifiedDrivers > 0x200 )
    {
      LODWORD(result) = 512;
      VfRandomVerifiedDrivers = 512;
    }
    VfRandomTargetsBitMapHeader = 512;
    v2 = ViExpectedDriversCount + 2;
    if ( (unsigned int)(ViExpectedDriversCount + 2) > 0x200 )
      v2 = 512;
    qword_140986C20 = (__int64)&VfRandomTargetsBitMap;
    v3 = 2 * (int)result > (unsigned int)ViExpectedDriversCount;
    memset(&VfRandomTargetsBitMap, 0, 0x40uLL);
    for ( i = 0; i < VfRandomVerifiedDrivers; ++i )
    {
      Number = VfRandomGetNumber(1u, v2 - 1);
      if ( _bittest((const signed __int32 *)qword_140986C20, Number) )
      {
        if ( v3 )
        {
          ++v1;
        }
        else
        {
          v6 = Number;
          while ( 1 )
          {
            v6 = (v6 + 1) % v2;
            if ( !v6 )
              v6 = 1;
            if ( !_bittest((const signed __int32 *)qword_140986C20, v6) )
              break;
            if ( v6 == Number )
              goto LABEL_20;
          }
          _bittestandset((signed __int32 *)qword_140986C20, v6);
          if ( v6 == Number )
            break;
        }
      }
      else
      {
        _bittestandset((signed __int32 *)qword_140986C20, Number);
      }
    }
LABEL_20:
    VfRandomVerifiedDrivers -= v1;
    return 1LL;
  }
  return result;
}
