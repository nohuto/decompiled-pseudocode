/*
 * XREFs of ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBULegacyInputInfo@@@Z @ 0x180081728
 * Callers:
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x180082A10 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ISM::ReceiveInterceptMessage(const struct LegacyInputInfo *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = InputTraceLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = *((_QWORD *)a1 + 2);
    v9 = 0;
    v5 = v4;
    v7 = &v5;
    v8 = 8;
    TlgWrite(v3, &unk_180168C9C, 0LL, 0LL, 3u, &pData);
  }
}
