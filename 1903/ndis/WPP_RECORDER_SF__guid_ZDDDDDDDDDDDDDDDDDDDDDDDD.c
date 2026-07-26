/*
 * XREFs of WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD @ 0x1C00B70C4
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C00BA188 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_ZDDDDDDDDDDDDDDDDDDDDDDDD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31)
{
  const wchar_t *v31; // rsi
  const wchar_t *v32; // rbx
  __int64 v34; // rdi
  __int64 v35; // rdx
  const wchar_t *v36; // rcx
  const wchar_t *v37; // rax
  bool v38; // zf
  int v40; // [rsp+28h] [rbp-240h]

  v31 = L"NULL";
  v32 = a7;
  v34 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
      v35 = *a7;
    else
      v35 = 8LL;
    if ( a7 && *a7 )
      v36 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v36 = L"NULL";
    v37 = a7;
    if ( !a7 )
      v37 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
      0x2Du,
      a6,
      16LL,
      v37,
      2LL,
      v36,
      v35,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      4LL,
      &a12,
      4LL,
      &a13,
      4LL,
      &a14,
      4LL,
      &a15,
      4LL,
      &a16,
      4LL,
      &a17,
      4LL,
      &a18,
      4LL,
      &a19,
      4LL,
      &a20,
      4LL,
      &a21,
      4LL,
      &a22,
      4LL,
      &a23,
      4LL,
      &a24,
      4LL,
      &a25,
      4LL,
      &a26,
      4LL,
      &a27,
      4LL,
      &a28,
      4LL,
      &a29,
      4LL,
      &a30,
      4LL,
      &a31,
      4LL,
      0LL);
  }
  v38 = a7 == 0LL;
  if ( a7 )
  {
    v34 = *a7;
    if ( *a7 )
      v31 = (const wchar_t *)*((_QWORD *)a7 + 1);
    v38 = a7 == 0LL;
  }
  if ( v38 )
    v32 = L"\b";
  LOWORD(v40) = 45;
  return WppAutoLogTrace(
           a1,
           4LL,
           15LL,
           &WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
           v40,
           a6,
           16LL,
           v32,
           2LL,
           v31,
           v34,
           &a8);
}
