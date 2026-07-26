/*
 * XREFs of WPP_RECORDER_SF_qql @ 0x1C001C18C
 * Callers:
 *     NdisMSetTimer @ 0x1C0014ED0 (NdisMSetTimer.c)
 *     ndisQueueFilterOnDriver @ 0x1C003C678 (ndisQueueFilterOnDriver.c)
 *     ndisQueueMiniportOnDriver @ 0x1C012FD5C (ndisQueueMiniportOnDriver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qql(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v10 = (unsigned __int64)a3 >> 16;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, va, 4LL, 0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v13, &a6, 8LL, &a7, 8LL, va, 4LL, 0LL);
}
