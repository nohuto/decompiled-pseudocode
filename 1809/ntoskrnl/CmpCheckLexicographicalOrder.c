/*
 * XREFs of CmpCheckLexicographicalOrder @ 0x1405DCCF0
 * Callers:
 *     CmpCheckRegistry2 @ 0x1405D9EF0 (CmpCheckRegistry2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 */

__int64 __fastcall CmpCheckLexicographicalOrder(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, int *); // rax
  __int64 v6; // r15
  _WORD *v7; // rax
  _WORD *v8; // r13
  unsigned __int8 *v9; // rsi
  __int16 v10; // dx
  unsigned __int8 *v11; // r14
  unsigned __int16 v12; // di
  unsigned __int16 v13; // bx
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  int v16; // ecx
  unsigned int v17; // ebx
  unsigned __int16 v19; // r8
  _DWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING String1; // [rsp+38h] [rbp-38h] BYREF
  int v24; // [rsp+A8h] [rbp+38h] BYREF
  int v25; // [rsp+ACh] [rbp+3Ch]

  v24 = -1;
  v25 = 0;
  v4 = a1;
  v20[1] = 0;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8);
  v20[0] = -1;
  v6 = v5(a1, a3, &v24);
  *(_QWORD *)&String2.Length = v6;
  v7 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v4 + 8))(v4, a2, v20);
  v8 = v7;
  if ( !v6 || !v7 )
  {
    v17 = -1073741670;
    goto LABEL_15;
  }
  v9 = (unsigned __int8 *)(v7 + 38);
  v10 = v7[1] & 0x20;
  v11 = (unsigned __int8 *)(v6 + 76);
  if ( (*(_BYTE *)(v6 + 2) & 0x20) == 0 )
  {
    String2.Buffer = (wchar_t *)(v6 + 76);
    if ( v10 )
    {
      v19 = v7[36];
      String2.Length = *(_WORD *)(v6 + 72);
      String2.MaximumLength = String2.Length;
      if ( (int)CmpCompareCompressedName((__int64)&String2, v9, v19, 0) <= 0 )
      {
        v17 = -1073741492;
        goto LABEL_15;
      }
    }
    else
    {
      String1.Length = v7[36];
      String1.MaximumLength = String1.Length;
      String2.Length = *(_WORD *)(v6 + 72);
      String2.MaximumLength = String2.Length;
      String1.Buffer = v7 + 38;
      if ( RtlCompareUnicodeString(&String1, &String2, 1u) >= 0 )
      {
        v17 = -1073741492;
        goto LABEL_15;
      }
    }
LABEL_14:
    v17 = 0;
    goto LABEL_15;
  }
  v12 = v7[36];
  v13 = *(_WORD *)(v6 + 72);
  if ( !v10 )
  {
    String1.Buffer = v7 + 38;
    String1.Length = v12;
    String1.MaximumLength = v12;
    v4 = a1;
    if ( (int)CmpCompareCompressedName((__int64)&String1, (unsigned __int8 *)(v6 + 76), v13, 0) >= 0 )
    {
      v17 = -1073741492;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v12 )
  {
    while ( v13 )
    {
      v14 = *v9++;
      v15 = *v11++;
      if ( (_WORD)v14 != (_WORD)v15 )
      {
        if ( v14 >= 0x61 )
        {
          if ( v14 > 0x7A )
            LOWORD(v14) = RtlUpcaseUnicodeChar(v14);
          else
            LOWORD(v14) = v14 - 32;
        }
        if ( v15 >= 0x61 )
        {
          if ( v15 > 0x7A )
            LOWORD(v15) = RtlUpcaseUnicodeChar(v15);
          else
            LOWORD(v15) = v15 - 32;
        }
        v16 = (unsigned __int16)v14 - (unsigned __int16)v15;
        if ( (unsigned __int16)v14 != (unsigned __int16)v15 )
          goto LABEL_13;
      }
      --v13;
      if ( !--v12 )
        break;
    }
  }
  v16 = v12 - v13;
LABEL_13:
  v4 = a1;
  v6 = *(_QWORD *)&String2.Length;
  if ( v16 < 0 )
    goto LABEL_14;
  v17 = -1073741492;
LABEL_15:
  if ( v6 )
    (*(void (__fastcall **)(__int64, int *))(v4 + 16))(v4, &v24);
  if ( v8 )
    (*(void (__fastcall **)(__int64, _DWORD *))(v4 + 16))(v4, v20);
  return v17;
}
