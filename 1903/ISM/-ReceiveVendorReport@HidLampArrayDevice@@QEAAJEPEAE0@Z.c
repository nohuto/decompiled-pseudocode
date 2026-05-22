/*
 * XREFs of ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800B4D04
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

__int64 __fastcall HidLampArrayDevice::ReceiveVendorReport(
        const WCHAR *this,
        char a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  size_t v12; // r14
  char *v13; // rax
  char *v14; // rbx
  signed int LastError; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned int v17; // edi
  unsigned __int8 v18; // r14
  const struct std::nothrow_t *v19; // rdx
  char *ReportBuffer; // [rsp+30h] [rbp-79h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  const char *v22; // [rsp+60h] [rbp-49h]
  int v23; // [rsp+68h] [rbp-41h]
  int v24; // [rsp+6Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+80h] [rbp-29h] BYREF
  const char *v27; // [rsp+A0h] [rbp-9h]
  int v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+ACh] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( (unsigned int)hProvider > 5 )
  {
    v24 = 0;
    v22 = "Started";
    v23 = 8;
    TlgCreateWsz(&pDesc, this + 12);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D708, 0LL, 0LL, 4u, &pData);
  }
  *a3 = 0;
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
  if ( !v8 )
    return 2147942487LL;
  v10 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v10 + 8 * v9) != a2 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v8 )
      return 2147942487LL;
  }
  v12 = *(int *)(v10 + 8 * v9 + 4);
  if ( (unsigned int)v12 > 0x40 || (int)v12 <= 0 )
    return 2147942487LL;
  v13 = (char *)operator new[](*(int *)(v10 + 8 * v9 + 4), (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v13;
  v14 = v13;
  if ( v13 )
  {
    memset_0(v13, 0, v12);
    *v14 = a2;
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v12) )
    {
      v18 = v12 - 1;
      *a3 = v18;
      memcpy_0(a4, ReportBuffer + 1, v18);
      if ( (unsigned int)hProvider > 5 )
      {
        v29 = 0;
        v27 = "Completed successfully";
        v28 = 23;
        TlgCreateWsz(&v30, this + 12);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D708, 0LL, 0LL, 4u, &v26);
      }
      operator delete(ReportBuffer, v19);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v17 = LastError;
      if ( LastError > 0 )
        v17 = (unsigned __int16)LastError | 0x80070000;
      operator delete(ReportBuffer, v16);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
