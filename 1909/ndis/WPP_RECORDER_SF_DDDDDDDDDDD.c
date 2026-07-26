/*
 * XREFs of WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00669BC
 * Callers:
 *     ndisValidateQosParameters @ 0x1C0071904 (ndisValidateQosParameters.c)
 *     ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0 (-ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DDDDDDDDDDD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        ...)
{
  unsigned __int64 v19; // rbx
  int v20; // eax
  int v22; // [rsp+28h] [rbp-B9h]
  va_list va; // [rsp+180h] [rbp+9Fh] BYREF

  va_start(va, a15);
  v19 = (unsigned __int64)a3 >> 16;
  v20 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v19 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v20, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v19 + 41) >= a2 )
    ndisWppFastTraceMessage(
      a5,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
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
      va,
      4LL,
      0LL);
  LOWORD(v22) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v22, &a6, 4LL, &a7, 4LL, &a8, 4LL, &a9);
}
