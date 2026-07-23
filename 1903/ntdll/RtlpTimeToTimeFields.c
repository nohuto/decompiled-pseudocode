/*
 * XREFs of RtlpTimeToTimeFields @ 0x18005E110
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x18005DC20 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeToTimeFields @ 0x18005E100 (RtlTimeToTimeFields.c)
 * Callees:
 *     sub_1800E42B8 @ 0x1800E42B8 (sub_1800E42B8.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2, __int64 *a3)
{
  PLEAP_SECOND_DATA LeapSecondData; // r10
  unsigned int v6; // r11d
  int v7; // ecx
  ULONG v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  signed __int64 v14; // rcx
  unsigned __int128 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // r11d
  __int64 v20; // r10
  __int64 v21; // rbx
  __int16 v22; // ax
  __int16 result; // ax
  __int16 v24; // r8
  __int16 v25; // cx
  __int64 *v26; // rdi
  __int64 v27; // r10
  __int64 v28; // r10
  signed __int32 v29[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v30; // [rsp+20h] [rbp-18h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !*(_BYTE *)LeapSecondData )
    return sub_1800E42B8();
  v6 = *((_DWORD *)LeapSecondData + 1);
  _InterlockedOr(v29, 0);
  v7 = 0;
  v8 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v9 = *a3;
  else
    v9 = 0LL;
  v10 = *a1;
  v11 = 0;
  if ( v6 )
  {
    v26 = (__int64 *)((char *)LeapSecondData + 8);
    do
    {
      v27 = *v26;
      if ( *v26 < 0 )
      {
        if ( v10 < (v27 & 0x7FFFFFFFFFFFFFFFLL) - v9 )
          break;
        --v7;
      }
      else
      {
        v28 = v27 - v9;
        if ( v10 < v28 + 20000000 )
        {
          if ( v10 < v28 + 10000000 )
          {
            if ( v10 < v28 )
              break;
            v8 |= 4u;
          }
          else
          {
            v8 |= 2u;
          }
        }
        else
        {
          ++v7;
        }
      }
      ++v11;
      ++v26;
    }
    while ( v11 < v6 );
  }
  v12 = -10000000LL * v7 + v10;
  if ( (v8 & 2) != 0 )
    v12 -= 10000000LL;
  v13 = v12;
  if ( v12 < 0 )
    v13 = -v12;
  v14 = v13 / 0x2710;
  if ( v12 < 0 )
    v14 = -v14;
  if ( v14 < 0 )
    v15 = (unsigned __int64)-v14 * (unsigned __int128)0xC6D750EBFA67B90EuLL;
  else
    v15 = (unsigned __int64)v14 * (unsigned __int128)0xC6D750EBFA67B90EuLL;
  v16 = *((_QWORD *)&v15 + 1) >> 26;
  if ( v14 < 0 )
    LODWORD(v16) = -(int)v16;
  v17 = v14 - 86400000 * v16;
  HIWORD(v30) = ((int)v16 + 1) % 7u;
  v18 = (100
       * ((-36524 * ((100 * ((unsigned int)v16 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v16 % 0x23AB1) % 0x5B5)
       + 75)
      / 0x8EAD
      + 4
      * ((-36524 * ((100 * ((unsigned int)v16 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v16 % 0x23AB1) / 0x5B5
       + 25 * ((100 * ((unsigned int)v16 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v16 / 0x23AB1)));
  v19 = v18 + 1;
  v20 = (_DWORD)v16 + -365 * v18 - v18 / 0x190 - (v18 >> 2) + v18 / 0x64;
  if ( v18 + 1 != 400 * ((v18 + 1) / 0x190) && (v19 == 100 * (v19 / 0x64) || (v19 & 3) != 0) )
  {
    v21 = byte_180124000[v20];
    v22 = word_180124178[v21];
  }
  else
  {
    v21 = byte_180123E80[v20];
    v22 = word_180123E48[v21];
  }
  WORD1(v30) = v21 + 1;
  WORD2(v30) = v16 + -365 * v18 - v18 / 0x190 - (v18 >> 2) + v18 / 0x64 - v22 + 1;
  LOWORD(v30) = v18 + 1601;
  WORD3(v30) = v17 / 0x3E8 / 0x3C / 0x3C;
  WORD4(v30) = v17 / 0x3E8 / 0x3C % 0x3C;
  result = 1000;
  v24 = v17 / 0x3E8 % 0x3C;
  WORD5(v30) = v24;
  v25 = v17 % 0x3E8;
  WORD6(v30) = v25;
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 2) != 0 )
      WORD5(v30) = v24 + 1;
  }
  else
  {
    if ( (v8 & 4) != 0 )
    {
      v25 /= 2;
      result = v25;
      WORD6(v30) = v25;
    }
    if ( (v8 & 2) != 0 )
    {
      result = v25 / 2 + 500;
      WORD6(v30) = result;
    }
  }
  *a2 = v30;
  return result;
}
