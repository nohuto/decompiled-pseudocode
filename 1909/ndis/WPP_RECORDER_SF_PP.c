/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1C007ACAC
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C0029450 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C003D100 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_PP(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v9[0] = 0x100000LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids, a4, va, 8LL, v9, 8LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           21LL,
           &WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
           v8,
           va,
           8LL,
           v9,
           8LL,
           0LL,
           v9[0],
           v9[1]);
}
