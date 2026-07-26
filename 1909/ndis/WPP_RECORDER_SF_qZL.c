/*
 * XREFs of WPP_RECORDER_SF_qZL @ 0x1C0037C5C
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C0037850 (NdisRegisterProtocolDriver.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C007FA10 (NdisIMCancelInitializeDeviceInstance.c)
 *     NdisQueryAdapterInstanceName @ 0x1C0092C30 (NdisQueryAdapterInstanceName.c)
 *     NdisRegisterProtocol @ 0x1C00930F0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZL(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rbx
  const wchar_t *v8; // rsi
  unsigned __int64 v11; // rdi
  int v13; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v17; // rdx
  const wchar_t *v18; // rcx
  const wchar_t *v19; // rax
  int v20; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a7;
  v8 = L"NULL";
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) >= 4u )
  {
    if ( a7 )
      v17 = *a7;
    else
      v17 = 8LL;
    if ( a7 && *a7 )
      v18 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v18 = L"NULL";
    v19 = a7;
    if ( !a7 )
      v19 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, v19, 2LL, v18, v17, va, 4LL, 0LL);
  }
  if ( v7 )
    v14 = *v7;
  else
    v14 = 8LL;
  v15 = v7 == 0LL;
  if ( v7 )
  {
    if ( *v7 )
      v8 = (const wchar_t *)*((_QWORD *)v7 + 1);
    v15 = v7 == 0LL;
  }
  if ( v15 )
    v7 = L"\b";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v20, &a6, 8LL, v7, 2LL, v8, v14, va);
}
