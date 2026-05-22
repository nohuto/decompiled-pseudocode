/*
 * XREFs of ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x18007A830
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180074688 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

__int64 __fastcall HidLampArrayDevice::SendVendorReport(
        HidLampArrayDevice *this,
        char a2,
        unsigned __int8 a3,
        const unsigned __int8 *a4)
{
  const WCHAR *v4; // r12
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  const WCHAR *v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  size_t v13; // r13
  ULONG v14; // r14d
  __int64 v15; // rdx
  int v17; // eax
  void *v18; // rax
  _BYTE *v19; // rbx
  const struct std::nothrow_t *v20; // rdx
  signed int LastError; // eax
  const struct std::nothrow_t *v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rax
  const WCHAR *v25; // rdi
  PVOID ReportBuffer; // [rsp+38h] [rbp-71h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  const char *v29; // [rsp+60h] [rbp-49h]
  __int64 v30; // [rsp+68h] [rbp-41h]
  const WCHAR *v31; // [rsp+70h] [rbp-39h]
  int v32; // [rsp+78h] [rbp-31h]
  int v33; // [rsp+7Ch] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR v34; // [rsp+80h] [rbp-29h] BYREF
  const char *v35; // [rsp+A0h] [rbp-9h]
  __int64 v36; // [rsp+A8h] [rbp-1h]
  const WCHAR *v37; // [rsp+B0h] [rbp+7h]
  int v38; // [rsp+B8h] [rbp+Fh]
  int v39; // [rsp+BCh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = &sourceString;
  if ( (unsigned int)hProvider > 5 )
  {
    v30 = 8LL;
    v29 = "Started";
    LODWORD(v8) = 0;
    v9 = &sourceString;
    v10 = (const WCHAR *)((char *)this + 24);
    if ( v10 )
    {
      v9 = v10;
      v8 = -1LL;
      do
        ++v8;
      while ( v10[v8] );
    }
    v31 = v9;
    v32 = 2 * v8 + 2;
    v33 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801688F5, 0LL, 0LL, 4u, &pData);
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
  v11 = *((_DWORD *)this + 158);
  v12 = 0;
  v13 = a3;
  v14 = a3 + 1;
  if ( !v11 )
    return 2147942487LL;
  v15 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v15 + 8LL * v12) != a2 )
  {
    if ( ++v12 >= v11 )
      return 2147942487LL;
  }
  v17 = *(_DWORD *)(v15 + 8LL * v12 + 4);
  if ( v17 != v14 || (unsigned int)v17 > 0x40 || v17 <= 0 )
    return 2147942487LL;
  v18 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v18;
  v19 = v18;
  if ( v18 )
  {
    memset_0(v18, 0, v14);
    *v19 = a2;
    memcpy_0(v19 + 1, a4, v13);
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v14) )
    {
      if ( (unsigned int)hProvider > 5 )
      {
        v36 = 23LL;
        v35 = "Completed successfully";
        LODWORD(v24) = 0;
        v25 = (const WCHAR *)((char *)this + 24);
        if ( v25 )
        {
          v4 = v25;
          v24 = -1LL;
          do
            ++v24;
          while ( v25[v24] );
        }
        v37 = v4;
        v38 = 2 * v24 + 2;
        v39 = 0;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801688F5, 0LL, 0LL, 4u, &v34);
      }
      operator delete(ReportBuffer, v20);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v23 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v23 = LastError;
      operator delete(ReportBuffer, v22);
      return v23;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
