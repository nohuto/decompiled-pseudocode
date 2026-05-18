/*
 * XREFs of sub_1800A94C0 @ 0x1800A94C0
 * Callers:
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 __fastcall sub_1800A94C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdi
  _BYTE *v9; // rsi
  size_t v10; // rdx
  _BYTE *v11; // rsi
  const char *v12; // rdx
  const char *v13; // r9
  _BYTE *v14; // rsi

  *(_DWORD *)(a1 + 104) = 40960;
  v5 = (__int64 *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 96) < 9uLL )
  {
    sub_18000E168((__int64 *)(a1 + 72), 9uLL, 0LL, "<unknown>");
  }
  else
  {
    v9 = (_BYTE *)(a1 + 72);
    if ( *(_QWORD *)(a1 + 96) >= 0x10uLL )
      v9 = (_BYTE *)*v5;
    *(_QWORD *)(a1 + 88) = 9LL;
    memmove(v9, "<unknown>", 9uLL);
    v9[9] = 0;
  }
  if ( *(int *)(a1 + 104) < 40960 )
  {
    if ( *(int *)(a1 + 104) >= 37632 )
    {
      v10 = 21LL;
      if ( (unsigned __int64)v5[3] >= 0x15 )
      {
        v11 = v5;
        if ( (unsigned __int64)v5[3] >= 0x10 )
          v11 = (_BYTE *)*v5;
        v5[2] = 21LL;
        v12 = "ShaderModel40_Level93";
        goto LABEL_29;
      }
      v13 = "ShaderModel40_Level93";
LABEL_31:
      sub_18000E168(v5, v10, 0LL, v13);
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
    }
    if ( *(int *)(a1 + 104) >= 37120 )
    {
      v10 = 21LL;
      if ( (unsigned __int64)v5[3] >= 0x15 )
      {
        v11 = v5;
        if ( (unsigned __int64)v5[3] >= 0x10 )
          v11 = (_BYTE *)*v5;
        v5[2] = 21LL;
        v12 = "ShaderModel40_Level91";
        goto LABEL_29;
      }
      v13 = "ShaderModel40_Level91";
      goto LABEL_31;
    }
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 560) & 4) != 0 )
    {
      v10 = 21LL;
      if ( (unsigned __int64)v5[3] >= 0x15 )
      {
        v11 = v5;
        if ( (unsigned __int64)v5[3] >= 0x10 )
          v11 = (_BYTE *)*v5;
        v5[2] = 21LL;
        v12 = "ShaderModel40_Level93";
LABEL_29:
        memmove(v11, v12, 0x15uLL);
        v11[21] = 0;
        return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
      }
      v13 = "ShaderModel40_Level93";
      goto LABEL_31;
    }
    v10 = 13LL;
    if ( (unsigned __int64)v5[3] < 0xD )
    {
      v13 = "ShaderModel40";
      goto LABEL_31;
    }
    v14 = v5;
    if ( (unsigned __int64)v5[3] >= 0x10 )
      v14 = (_BYTE *)*v5;
    v5[2] = 13LL;
    memmove(v14, "ShaderModel40", 0xDuLL);
    v14[13] = 0;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
}
