/*
 * XREFs of ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800B5558
 * Callers:
 *     ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x1800AF7CC (-ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CED8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

__int64 __fastcall HidLampArrayDevice::SendVendorReport(
        const WCHAR *this,
        char a2,
        unsigned __int8 a3,
        const unsigned __int8 *a4)
{
  unsigned int v8; // r8d
  __int64 v9; // rax
  size_t v10; // r13
  ULONG v11; // r14d
  __int64 v12; // rdx
  int v14; // eax
  void *v15; // rax
  _BYTE *v16; // rbx
  const struct std::nothrow_t *v17; // rdx
  signed int LastError; // eax
  const struct std::nothrow_t *v19; // rdx
  unsigned int v20; // edi
  PVOID ReportBuffer; // [rsp+30h] [rbp-79h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  const char *v23; // [rsp+60h] [rbp-49h]
  int v24; // [rsp+68h] [rbp-41h]
  int v25; // [rsp+6Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp-29h] BYREF
  const char *v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A8h] [rbp-1h]
  int v30; // [rsp+ACh] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( (unsigned int)hProvider > 5 )
  {
    v25 = 0;
    v23 = "Started";
    v24 = 8;
    TlgCreateWsz(&pDesc, this + 12);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D669, 0LL, 0LL, 4u, &pData);
  }
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 72) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 73) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 74) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 75) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 76) + 16LL) )
    return 2147942487LL;
  if ( a2 == *(_BYTE *)(*((_QWORD *)this + 77) + 16LL) )
    return 2147942487LL;
  v8 = *((_DWORD *)this + 158);
  v9 = 0LL;
  v10 = a3;
  v11 = a3 + 1;
  if ( !v8 )
    return 2147942487LL;
  v12 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v12 + 8 * v9) != a2 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v8 )
      return 2147942487LL;
  }
  v14 = *(_DWORD *)(v12 + 8 * v9 + 4);
  if ( v14 != v11 || (unsigned int)v14 > 0x40 || v14 <= 0 )
    return 2147942487LL;
  v15 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v15;
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, v11);
    *v16 = a2;
    memcpy_0(v16 + 1, a4, v10);
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v11) )
    {
      if ( (unsigned int)hProvider > 5 )
      {
        v30 = 0;
        v28 = "Completed successfully";
        v29 = 23;
        TlgCreateWsz(&v31, this + 12);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D669, 0LL, 0LL, 4u, &v27);
      }
      operator delete(ReportBuffer, v17);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v20 = LastError;
      if ( LastError > 0 )
        v20 = (unsigned __int16)LastError | 0x80070000;
      operator delete(ReportBuffer, v19);
      return v20;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
