/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x1400852E4
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1400850EC (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140345E1C (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x14061B828 (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140085440 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 *v3; // r12
  __int64 *v4; // rsi
  bool v5; // bl
  unsigned __int64 v9; // r15
  _QWORD *v10; // rsi
  __int64 *v12; // rdx
  __int64 *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h]

  v3 = (__int64 *)(a1 + 72);
  v4 = *(__int64 **)(a1 + 72);
  v5 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v9 = 0LL;
  while ( v4 != v3 )
  {
    v9 = (unsigned __int64)v4;
    if ( !a3 )
      goto LABEL_17;
    if ( a3 <= 2u )
      goto LABEL_24;
    switch ( a3 )
    {
      case 3u:
        v12 = v4 + 5;
        LOWORD(v16) = *(_WORD *)a2;
        WORD1(v16) = v16;
        v17 = *(_QWORD *)(a2 + 8);
        goto LABEL_16;
      case 4u:
        LOWORD(v16) = *(_WORD *)(a2 + 8);
        WORD1(v16) = v16;
        v17 = *(_QWORD *)(a2 + 16);
        LOWORD(v18) = *((_WORD *)v4 + 24);
        WORD1(v18) = v18;
        v19 = v4[7];
        if ( *(_QWORD *)a2 != v4[5] )
          break;
        v12 = &v18;
LABEL_16:
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v12) )
          goto LABEL_23;
        break;
      case 5u:
        goto LABEL_47;
      case 6u:
LABEL_24:
        if ( a2 == v4[5] )
          v5 = 1;
        break;
      case 0x10u:
LABEL_47:
        v14 = *(_DWORD *)(a2 + 8);
        if ( v14 == *((_DWORD *)v4 + 12) && !memcmp(*(const void **)a2, (const void *)v4[5], v14) )
LABEL_23:
          v5 = 1;
        break;
    }
LABEL_17:
    v4 = (__int64 *)*v4;
    if ( v5 )
      break;
  }
  v10 = *(_QWORD **)(a1 + 96);
  while ( 2 )
  {
    if ( !v5 && v10 != (_QWORD *)(a1 + 96) )
    {
      v9 = (unsigned __int64)(v10 - 2);
      if ( (v10[2] & 1) != 0 || !a3 )
        goto LABEL_11;
      if ( a3 <= 2u )
        goto LABEL_10;
      if ( a3 == 3 )
      {
        v13 = (__int64 *)(v9 + 40);
        LOWORD(v16) = *(_WORD *)a2;
        WORD1(v16) = v16;
        v17 = *(_QWORD *)(a2 + 8);
      }
      else
      {
        if ( a3 != 4 )
        {
          if ( a3 != 5 )
          {
            if ( a3 == 6 )
            {
LABEL_10:
              v5 = a2 == *(_QWORD *)(v9 + 40);
LABEL_11:
              v10 = (_QWORD *)*v10;
              continue;
            }
            if ( a3 != 16 )
              goto LABEL_11;
          }
          v15 = *(_DWORD *)(a2 + 8);
          if ( v15 != *(_DWORD *)(v9 + 48) || memcmp(*(const void **)a2, *(const void **)(v9 + 40), v15) )
            goto LABEL_11;
LABEL_22:
          v5 = 1;
          goto LABEL_11;
        }
        LOWORD(v16) = *(_WORD *)(a2 + 8);
        WORD1(v16) = v16;
        v17 = *(_QWORD *)(a2 + 16);
        LOWORD(v18) = *(_WORD *)(v9 + 48);
        WORD1(v18) = v18;
        v19 = *(_QWORD *)(v9 + 56);
        if ( *(_QWORD *)a2 != *(_QWORD *)(v9 + 40) )
          goto LABEL_11;
        v13 = &v18;
      }
      if ( !(unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v13) )
        goto LABEL_11;
      goto LABEL_22;
    }
    return v9 & -(__int64)v5;
  }
}
