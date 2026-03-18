/*
 * XREFs of MiCallCreateSectionFilters @ 0x1405D68B0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     FsRtlAcquireToCreateMappedSection @ 0x1405D5544 (FsRtlAcquireToCreateMappedSection.c)
 */

__int64 __fastcall MiCallCreateSectionFilters(int *a1)
{
  __int64 result; // rax
  unsigned int v3; // edx
  char v4; // cl
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  int v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  if ( (*a1 & 1) != 0 )
    return 0LL;
  result = FsRtlAcquireToCreateMappedSection(*((struct _FILE_OBJECT **)a1 + 7), a1[7], &v9, &v10);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = v9;
    if ( (v9 & 6) != 0 )
    {
      if ( (a1[4] & 0x1000000) != 0 )
      {
        v8 = *a1 | 0x10000;
        *a1 = v8;
        if ( (v4 & 4) == 0 )
        {
          v8 |= 0x20000u;
          *a1 = v8;
        }
        if ( (v4 & 8) == 0 )
          *a1 = v8 | 0x40000;
      }
      else if ( (v9 & 2) != 0 )
      {
        *a1 |= 0x10000u;
      }
    }
    v5 = v10;
    if ( v10 )
    {
      if ( ((v10 - 1) & v10) == 0 )
      {
        *a1 |= 0x2000u;
        if ( v5 < dword_14046682C )
          dword_14046682C = v5;
      }
    }
    v6 = *a1;
    if ( v3 == 299 )
      v7 = v6 | 0x80;
    else
      v7 = v6 & 0xFFFFFF7F;
    *a1 = v7;
    return v3;
  }
  return result;
}
