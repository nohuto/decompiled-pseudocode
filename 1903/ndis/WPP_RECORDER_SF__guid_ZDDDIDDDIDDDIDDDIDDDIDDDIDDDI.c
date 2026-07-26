/*
 * XREFs of WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1C00B75EC
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C00BA188 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
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
        char a31,
        char a32,
        char a33,
        char a34,
        char a35)
{
  const wchar_t *v35; // rdi
  const wchar_t *v36; // rbx
  __int64 v38; // rdx
  const wchar_t *v39; // rcx
  const wchar_t *v40; // rax
  __int64 v41; // rax
  bool v42; // zf
  int v44; // [rsp+28h] [rbp-280h]

  v35 = L"NULL";
  v36 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
      v38 = *a7;
    else
      v38 = 8LL;
    if ( a7 && *a7 )
      v39 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v39 = L"NULL";
    v40 = a7;
    if ( !a7 )
      v40 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
      0x2Cu,
      a6,
      16LL,
      v40,
      2LL,
      v39,
      v38,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      8LL,
      &a12,
      4LL,
      &a13,
      4LL,
      &a14,
      4LL,
      &a15,
      8LL,
      &a16,
      4LL,
      &a17,
      4LL,
      &a18,
      4LL,
      &a19,
      8LL,
      &a20,
      4LL,
      &a21,
      4LL,
      &a22,
      4LL,
      &a23,
      8LL,
      &a24,
      4LL,
      &a25,
      4LL,
      &a26,
      4LL,
      &a27,
      8LL,
      &a28,
      4LL,
      &a29,
      4LL,
      &a30,
      4LL,
      &a31,
      8LL,
      &a32,
      4LL,
      &a33,
      4LL,
      &a34,
      4LL,
      &a35);
  }
  if ( a7 )
    v41 = *a7;
  else
    v41 = 8LL;
  v42 = a7 == 0LL;
  if ( a7 )
  {
    if ( *a7 )
      v35 = (const wchar_t *)*((_QWORD *)a7 + 1);
    v42 = a7 == 0LL;
  }
  if ( v42 )
    v36 = L"\b";
  LOWORD(v44) = 44;
  return WppAutoLogTrace(
           a1,
           4LL,
           15LL,
           &WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
           v44,
           a6,
           16LL,
           v36,
           2LL,
           v35,
           v41,
           &a8);
}
