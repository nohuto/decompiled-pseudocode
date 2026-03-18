/*
 * XREFs of UsbhDeleteUxdSubKeys @ 0x1C005E2E0
 * Callers:
 *     UsbhUxdShutdown @ 0x1C005EEC0 (UsbhUxdShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005E7AC (UsbhGetUxdLoadKeySettings.c)
 */

__int64 __fastcall UsbhDeleteUxdSubKeys(__int64 a1, WCHAR *a2)
{
  _DWORD *v3; // r15
  WCHAR *PoolWithTag; // rax
  WCHAR *v5; // rdi
  ULONG v6; // edx
  ULONG v7; // ebx
  ULONG v8; // r14d
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD v14[20]; // [rsp+40h] [rbp-98h] BYREF

  v3 = FdoExt(a1);
  memset(v14, 0, 0x44uLL);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x2AuLL);
  v6 = 0;
  v7 = 0;
  while ( ZwEnumerateValueKey(a2, v6, KeyValueBasicInformation, v5, 0x2Au, ResultLength) >= 0 )
  {
    v8 = v7++;
    if ( *((_DWORD *)v5 + 1) == 3 && (int)UsbhGetUxdLoadKeySettings(v11, a2, v5 + 6, v14) >= 0 && (v14[9] || v3[1294]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          v10,
          34,
          (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
          (__int64)(v5 + 6));
      if ( RtlDeleteRegistryValue(0x40000000u, a2, v5 + 6) >= 0 )
        v7 = v8;
    }
    v6 = v7;
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
