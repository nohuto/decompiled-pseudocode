/*
 * XREFs of HUBREG_DeleteUxdSubKeys @ 0x1C007DC24
 * Callers:
 *     HUBREG_UxdShutdown @ 0x1C007DE40 (HUBREG_UxdShutdown.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBREG_DeleteUxdSubKeys(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // r15
  WCHAR *PoolWithTag; // rdi
  ULONG v8; // ebx
  ULONG v9; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A8h] BYREF
  ULONG ResultLength[4]; // [rsp+50h] [rbp-98h] BYREF
  _DWORD v13[20]; // [rsp+60h] [rbp-88h] BYREF

  memset(v13, 0, 0x44uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1856))(
                 WdfDriverGlobals,
                 a3);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x68334855u);
  if ( PoolWithTag )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v8;
      memset(PoolWithTag, 0, 0x2AuLL);
      if ( ZwEnumerateValueKey(v6, v8, KeyValueBasicInformation, PoolWithTag, 0x2Au, ResultLength) < 0 )
        break;
      ++v8;
      if ( *((_DWORD *)PoolWithTag + 1) == 3 )
      {
        PoolWithTag[18] = 0;
        RtlInitUnicodeString(&DestinationString, PoolWithTag + 6);
        memset(v13, 0, 0x44uLL);
        if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
               WdfDriverGlobals,
               a3,
               &DestinationString,
               68LL,
               v13,
               0LL,
               0LL) < 0 )
          break;
        if ( v13[9] == 1 || (*(_DWORD *)(a2 + 4) & 0x100) != 0 )
        {
          if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
                 WdfDriverGlobals,
                 a3,
                 &DestinationString) < 0 )
            break;
          v8 = v9;
        }
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0x68334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x71u, (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids);
  }
  return 0LL;
}
