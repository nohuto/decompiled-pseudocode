/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180063760
 * Callers:
 *     toupper @ 0x1800921C0 (toupper.c)
 *     sub_1800957D8 @ 0x1800957D8 (sub_1800957D8.c)
 *     sub_1800966B0 @ 0x1800966B0 (sub_1800966B0.c)
 *     sub_180098D6C @ 0x180098D6C (sub_180098D6C.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005F3A0 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(char **a1)
{
  char *v2; // rdx
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned __int16 *v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // r10
  unsigned __int16 *v10; // r8
  __int64 v11; // rax
  __int64 v13; // rsi
  __int64 v14; // r11
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v18 = 32;
  v2 = *a1;
  v3 = **a1;
  if ( !byte_180162797 )
  {
    v4 = word_180163EE0[v3] != 0;
LABEL_3:
    v5 = v4 + 1;
    goto LABEL_4;
  }
  if ( v3 >= 0xC0u )
  {
    if ( v3 >= 0xE0u )
    {
      v5 = 3;
      if ( v3 >= 0xF0u )
      {
        v4 = v3 < 0xF8u ? 3 : 0;
        goto LABEL_3;
      }
    }
    else
    {
      v5 = 2;
    }
  }
  else
  {
    v5 = 1;
  }
LABEL_4:
  v6 = &v18;
  v7 = v5;
  if ( byte_180162797 )
  {
    RtlUTF8ToUnicodeN(&v18, 2u, &v19, *a1, v5);
  }
  else
  {
    v8 = 1;
    if ( NlsMbCodePageTag )
    {
      v13 = qword_180166540;
      v14 = qword_180166530;
      while ( (_DWORD)v7 )
      {
        v15 = (unsigned __int8)*v2;
        --v8;
        LODWORD(v7) = v7 - 1;
        v16 = word_180163EE0[v15];
        if ( v16 )
        {
          if ( !(_DWORD)v7 )
          {
            *v6 = 0;
            break;
          }
          ++v2;
          LODWORD(v7) = v7 - 1;
          v17 = *(_WORD *)(v13 + 2 * ((unsigned __int8)*v2 + (unsigned __int64)v16));
        }
        else
        {
          v17 = *(_WORD *)(v14 + 2 * v15);
        }
        *v6 = v17;
        ++v2;
        ++v6;
        if ( !v8 )
          break;
      }
    }
    else
    {
      v9 = qword_180166530;
      v10 = &v18;
      if ( v5 > 1 )
        v7 = 1LL;
      do
      {
        v11 = (unsigned __int8)*v2++;
        *v10++ = *(_WORD *)(v9 + 2 * v11);
        --v7;
      }
      while ( v7 );
    }
  }
  *a1 += v5;
  return v18;
}
