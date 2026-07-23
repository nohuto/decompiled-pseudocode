/*
 * XREFs of CmpWaitForHiveMount @ 0x140756794
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 */

char __fastcall CmpWaitForHiveMount(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __m128i v4; // xmm0
  char v5; // di
  __int16 v7; // cx
  _WORD *v8; // r8
  unsigned __int16 v9; // dx
  unsigned int v10; // esi
  int v11; // eax
  unsigned __int16 v12; // cx
  __int64 v13; // rbp
  __int64 v15; // rbx
  __int64 v16; // rcx
  bool v17; // zf
  __m128i v18; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = _mm_cvtsi128_si32(*a1);
  v18 = v4;
  v18.m128i_i16[0] = v7;
  if ( !v7 )
    goto LABEL_18;
  v8 = (_WORD *)v18.m128i_i64[1];
  do
  {
    if ( *v8 != 92 )
      break;
    ++v8;
    v17 = v7 == 2;
    v7 -= 2;
    v18.m128i_i16[0] = v7;
  }
  while ( !v17 );
  v18.m128i_i64[1] = (__int64)v8;
  if ( v7 )
  {
    v9 = 0;
    v10 = 1;
    do
    {
      if ( v8[v9] == 92 )
        break;
      ++v9;
      v7 -= 2;
    }
    while ( v7 );
    v18.m128i_i16[0] = 2 * v9;
    v11 = CmpHashUnicodeComponent(&v18);
    v12 = 0;
    while ( 1 )
    {
      v13 = 3LL * v12;
      if ( dword_1404002DC[6 * v12] == v11 )
        break;
      if ( ++v12 >= 8u )
      {
        _interlockedbittestandset(dword_1404002E0, 2u);
        return 0;
      }
    }
    _interlockedbittestandset(&dword_1404002E0[6 * v12], 3u);
    _InterlockedAdd(&dword_1404002E4[6 * v12], 1u);
    v15 = 3LL * v12;
    KeSetEvent((struct _KEVENT *)((char *)&stru_1403FFE50 + 152 * (unsigned int)dword_1404002D8[6 * v12]), 0, 0);
    v16 = (unsigned int)dword_1404002D8[2 * v15];
    if ( !*(&stru_1403FFE80.Header.SignalState + 38 * v16) )
    {
      v5 = 1;
      *a4 = v16;
      v10 = 5;
    }
    _interlockedbittestandset(&dword_1404002E0[2 * v13], v10);
    return v5;
  }
  else
  {
LABEL_18:
    _interlockedbittestandset(dword_1404002E0, 0);
    return 0;
  }
}
