/*
 * XREFs of PipHardwareConfigActivateService @ 0x14072E1CC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14072E2B0 (PiOpenDriverRedirectedStateKey.c)
 *     PipOpenServiceEnumKeys @ 0x1407360F0 (PipOpenServiceEnumKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073C69C (_RegRtlDeleteTreeInternal.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  HANDLE v6; // rdi
  UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)&v8.Length = 0LL;
  v8.Buffer = 0LL;
  Handle = 0LL;
  if ( !SourceString )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&v8, SourceString);
  v2 = PiOpenDriverRedirectedStateKey(&v8, v1, &Handle);
  if ( v2 == -1073741275 )
  {
    v3 = 0;
  }
  else if ( v2 >= 0 || (v3 = PipOpenServiceEnumKeys(&v8, 0x10000LL, &Handle, 0LL, 0), v3 >= 0) )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx && (v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
      v5 = *(_QWORD *)(v4 + 8);
    else
      v5 = 0LL;
    v6 = Handle;
    v3 = RegRtlDeleteTreeInternal(Handle, L"StartOverride", v5, 0LL);
    if ( v3 == -1073741772 )
      v3 = 0;
    goto LABEL_10;
  }
  v6 = Handle;
LABEL_10:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)v3;
}
