/*
 * XREFs of _RmpActivityImportanceMergeVectors@8 @ 0x10015339
 * Callers:
 *     _RmActivityImportanceTakeMostImportant@12 @ 0x100112B0 (_RmActivityImportanceTakeMostImportant@12.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall RmpActivityImportanceMergeVectors(int a1, unsigned int a2)
{
  int v2; // eax
  __int16 v3; // dx
  __int16 v4; // di
  __int16 v5; // si
  __int16 v6; // dx
  unsigned int v7; // ecx
  int v9; // [esp+0h] [ebp-8h]

  v2 = a1;
  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return v2;
  v3 = (unsigned __int16)a1 >> 1;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 1) & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v3 = (unsigned __int16)a2 >> 1;
  v4 = (unsigned __int16)a1 >> 4;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v4 = (unsigned __int16)a2 >> 4;
  v5 = (2 * (v3 & 7)) | (16 * (v4 & 3)) | ((((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x40) != 0) | (unsigned __int16)(2 * (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x80) != 0) | (unsigned __int16)(2 * (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x100) != 0) | (unsigned __int16)(2 * (((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x200) != 0) | (unsigned __int16)(2 * ((((unsigned __int16)a1 | (unsigned __int16)a2) & 0x400) != 0))))))))) << 6);
  v6 = (unsigned __int16)a1 >> 11;
  if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
    v6 = (unsigned __int16)a2 >> 11;
  LOWORD(v9) = v5 | ((v6 & 1) << 11) | 1;
  if ( HIBYTE(a1) <= HIBYTE(a2) )
  {
    if ( HIBYTE(a1) >= HIBYTE(a2) )
    {
      v7 = HIWORD(a2);
      HIWORD(v9) = HIWORD(a1);
      if ( BYTE2(a1) > BYTE2(a2) )
        return v9;
    }
    else
    {
      HIBYTE(v9) = HIBYTE(a2);
      v7 = HIWORD(a2);
    }
    BYTE2(v9) = v7;
    return v9;
  }
  HIWORD(v9) = HIWORD(a1);
  return v9;
}
