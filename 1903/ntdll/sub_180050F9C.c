/*
 * XREFs of sub_180050F9C @ 0x180050F9C
 * Callers:
 *     sub_180050F4C @ 0x180050F4C (sub_180050F4C.c)
 * Callees:
 *     sub_18005108C @ 0x18005108C (sub_18005108C.c)
 *     sub_1800513B0 @ 0x1800513B0 (sub_1800513B0.c)
 *     sub_1800515E8 @ 0x1800515E8 (sub_1800515E8.c)
 */

__int64 __fastcall sub_180050F9C(__int64 a1, __int64 *a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rdx
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax

  v4 = a3;
  v5 = *a2;
  if ( v5 )
  {
    if ( v5 == a1 )
    {
      *a2 = 0LL;
      v7 = 0;
      goto LABEL_7;
    }
    if ( (_WORD)v5 )
    {
      v7 = 0;
      goto LABEL_6;
    }
    v9 = sub_1800515E8(&qword_180166A60, 2 * ((unsigned __int64)(v5 - qword_180166A58) >> 20));
    if ( v9 )
    {
      v7 = v9 - 1;
LABEL_6:
      while ( v7 < 2 )
      {
LABEL_7:
        LOBYTE(a3) = v4;
        result = sub_18005108C(a1 + 192LL * v7 + 256, a2, a3);
        if ( (_DWORD)result != -2147483622 )
          return result;
        *a2 = 0LL;
        ++v7;
      }
    }
    return sub_1800513B0(a1, a2);
  }
  else
  {
    *((_DWORD *)a2 + 7) = 0;
    *((_WORD *)a2 + 9) = -32766;
    result = 0LL;
    *a2 = a1;
    a2[1] = 4096LL;
    *((_BYTE *)a2 + 17) = 0;
    *((_DWORD *)a2 + 6) = 4096;
    a2[4] = a1;
    a2[5] = a1;
  }
  return result;
}
