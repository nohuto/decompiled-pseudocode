/*
 * XREFs of WPP_RECORDER_SF_LqqZZ @ 0x1C00A4780
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LqqZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  const wchar_t *v9; // rdi
  bool v11; // zf
  char *v13; // [rsp+20h] [rbp-98h]

  v9 = a9;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v13 = &a7;
    ndisWppFastTraceMessage((const struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids, 0x19u, &a6);
  }
  v11 = v9 == 0LL;
  if ( v9 )
    v11 = 0;
  if ( v11 )
    v9 = L"\b";
  LOWORD(v13) = 25;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
           (_DWORD)v13,
           &a6,
           4LL,
           &a7,
           8LL,
           &a8,
           8LL,
           v9);
}
