/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x180071CF4
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x180071BF4 (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x180071EA0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, unsigned __int16 *a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  char v7; // di
  char v8; // r12
  bool v9; // r15
  char v10; // r14
  int v11; // eax
  bool v12; // zf
  _DWORD *v13; // r11
  __int64 v14; // r8
  __int64 v16; // r8
  __m128i v17; // xmm0
  int v18; // eax
  int v19; // eax
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v11 = RtlDetermineDosPathNameType_Ustr(a2);
  v12 = *a2 == 4;
  *v13 = v11;
  if ( v12 )
    goto LABEL_28;
  v7 = 1;
  if ( RtlEqualUnicodeString(RtlpWin32NtRoot, (__int64)a2, 1) || RtlEqualUnicodeString(L"\b\n", (__int64)a2, 1) )
  {
    v10 = 1;
  }
  else
  {
    LOBYTE(v14) = 1;
    if ( !(unsigned __int8)RtlPrefixUnicodeString(L"\b\n", a2, v14) )
      return v4;
  }
  if ( RtlEqualUnicodeString(RtlpWin32NtUncRoot, (__int64)a2, 1)
    || RtlEqualUnicodeString(RtlpWin32NtUncRootSlash, (__int64)a2, 1) )
  {
    v10 = 1;
    goto LABEL_25;
  }
  LOBYTE(v16) = 1;
  if ( (unsigned __int8)RtlPrefixUnicodeString(RtlpWin32NtUncRootSlash, a2, v16) )
  {
LABEL_25:
    v9 = 0;
    v8 = 1;
    goto LABEL_27;
  }
  if ( v10 )
    goto LABEL_28;
  v17 = *(__m128i *)a2;
  v20[0] = *(_QWORD *)a2;
  v20[1] = _mm_srli_si128(v17, 8).m128i_u64[0] + 8;
  LOWORD(v20[0]) -= 8;
  WORD1(v20[0]) -= 8;
  v18 = RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)v20);
  v9 = v18 == 2;
  if ( v18 != 2 )
  {
    *a4 |= 0x200u;
LABEL_27:
    if ( !v10 )
      goto LABEL_18;
LABEL_28:
    *a4 |= 0x400u;
    v19 = *a4;
    if ( !v7 )
      goto LABEL_19;
  }
LABEL_18:
  *a4 |= 0x10u;
  v19 = *a4;
LABEL_19:
  if ( v8 )
  {
    v19 |= 0x40u;
    *a4 = v19;
  }
  if ( v9 )
    *a4 = v19 | 0x20;
  return v4;
}
