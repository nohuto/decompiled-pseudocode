/*
 * XREFs of MiSetSystemRegionTypes @ 0x1409D398C
 * Callers:
 *     MiInitializeSystemVa @ 0x1409D33A8 (MiInitializeSystemVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiSetSystemRegionTypes()
{
  int v0; // edx
  __int64 *v1; // r9
  unsigned __int64 v2; // r8
  char v3; // cl
  unsigned __int64 i; // r10
  unsigned __int64 result; // rax

  v0 = 0;
  v1 = qword_14043CB10;
  do
  {
    v2 = (((unsigned __int64)*v1 >> 39) & 0x1FF) - 256;
    if ( v0 > 8 )
    {
      switch ( v0 )
      {
        case 9:
LABEL_20:
          v3 = 4;
          break;
        case 10:
          v3 = 7;
          break;
        case 11:
          v3 = 13;
          break;
        case 12:
          v3 = 1;
          break;
        default:
          v3 = 12;
          break;
      }
    }
    else if ( v0 == 8 )
    {
      v3 = 15;
    }
    else if ( v0 )
    {
      switch ( v0 )
      {
        case 1:
          v3 = 6;
          break;
        case 2:
          v3 = 8;
          break;
        case 3:
          v3 = 9;
          break;
        case 5:
          goto LABEL_20;
        case 7:
          v3 = 2;
          break;
        default:
          v3 = 0;
          break;
      }
    }
    else
    {
      v3 = 5;
    }
    for ( i = (unsigned __int64)v1[1] >> 39; i; --i )
    {
      *((_BYTE *)&MiState[1506] + v2) = v3;
      v2 = (unsigned int)(v2 + 1);
    }
    ++v0;
    v1 += 2;
  }
  while ( (unsigned int)v0 < 0xE );
  result = (((unsigned __int64)MiState >> 39) & 0x1FF) - 256;
  *((_BYTE *)&MiState[1506] + (unsigned int)result) = 12;
  return result;
}
