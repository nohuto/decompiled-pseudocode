/*
 * XREFs of RtlpZeroBlockFromOffset @ 0x180047168
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x1800445F8 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
 */

unsigned __int8 __fastcall RtlpZeroBlockFromOffset(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  unsigned __int8 result; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // r8
  int v14; // eax
  int v15; // [rsp+28h] [rbp-10h]

  v4 = a2 - 16;
  _m_prefetchw((const void *)(a2 - 16));
  if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
    v4 -= 16LL * *(unsigned __int8 *)(v4 + 14);
  v6 = 0LL;
  if ( *(char *)(v4 + 15) < 0 )
  {
    if ( !((unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v4 + 8) ^ (v4 >> 4))) )
      v6 = *(_QWORD *)(v4
                     - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v4 + 8) ^ (unsigned int)(v4 >> 4)) >> 12));
    v7 = *(_WORD *)(v6 + 36);
  }
  else if ( *(_DWORD *)(a1 + 124) )
  {
    v14 = *(_DWORD *)(v4 + 8);
    LOWORD(v15) = v14;
    if ( (v14 & *(_DWORD *)(a1 + 124)) != 0 )
      v15 = *(_DWORD *)(a1 + 136) ^ v14;
    v7 = v15;
  }
  else
  {
    v7 = *(_WORD *)(v4 + 8);
  }
  v8 = v7;
  result = *(_BYTE *)(v4 + 15);
  v10 = 16 * v8;
  if ( result != 4 )
  {
    v11 = v10 - 8;
    v12 = result & 0x3F;
    if ( v12 != 63 )
      v11 = v10;
    v13 = v11 + 8;
    if ( (*(_BYTE *)(v4 + 10) & 2) != 0 )
    {
      v13 -= 16LL;
      if ( v12 != 63 )
        v13 -= 8LL;
    }
    return (unsigned __int8)memset((void *)(a2 + a3), 0, v13 - a3 - 16);
  }
  return result;
}
