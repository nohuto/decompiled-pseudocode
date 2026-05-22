/*
 * XREFs of ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x18007AAC4
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

__int64 __fastcall HidLampArrayDevice::ReceiveVendorReport(
        HidLampArrayDevice *this,
        char a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  const WCHAR *v4; // r12
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  const WCHAR *v10; // rcx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v15; // r14
  char *v16; // rax
  char *v17; // rbx
  signed int LastError; // eax
  const struct std::nothrow_t *v19; // rdx
  unsigned int v20; // edi
  unsigned __int8 v21; // r14
  const struct std::nothrow_t *v22; // rdx
  __int64 v23; // rax
  const WCHAR *v24; // rdi
  char *ReportBuffer; // [rsp+30h] [rbp-79h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  const char *v28; // [rsp+60h] [rbp-49h]
  __int64 v29; // [rsp+68h] [rbp-41h]
  const WCHAR *v30; // [rsp+70h] [rbp-39h]
  int v31; // [rsp+78h] [rbp-31h]
  int v32; // [rsp+7Ch] [rbp-2Dh]
  EVENT_DATA_DESCRIPTOR v33; // [rsp+80h] [rbp-29h] BYREF
  const char *v34; // [rsp+A0h] [rbp-9h]
  __int64 v35; // [rsp+A8h] [rbp-1h]
  const WCHAR *v36; // [rsp+B0h] [rbp+7h]
  int v37; // [rsp+B8h] [rbp+Fh]
  int v38; // [rsp+BCh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = &sourceString;
  if ( (unsigned int)hProvider > 5 )
  {
    v29 = 8LL;
    v28 = "Started";
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
    v30 = v9;
    v31 = 2 * v8 + 2;
    v32 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180168940, 0LL, 0LL, 4u, &pData);
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
  v11 = *((_DWORD *)this + 158);
  v12 = 0;
  if ( !v11 )
    return 2147942487LL;
  v13 = *((_QWORD *)this + 78);
  while ( *(_BYTE *)(v13 + 8LL * v12) != a2 )
  {
    if ( ++v12 >= v11 )
      return 2147942487LL;
  }
  v15 = *(int *)(v13 + 8LL * v12 + 4);
  if ( (unsigned int)v15 > 0x40 || (int)v15 <= 0 )
    return 2147942487LL;
  v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v16;
  v17 = v16;
  if ( v16 )
  {
    memset_0(v16, 0, v15);
    *v17 = a2;
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v15) )
    {
      v21 = v15 - 1;
      *a3 = v21;
      memcpy_0(a4, ReportBuffer + 1, v21);
      if ( (unsigned int)hProvider > 5 )
      {
        v35 = 23LL;
        v34 = "Completed successfully";
        LODWORD(v23) = 0;
        v24 = (const WCHAR *)((char *)this + 24);
        if ( v24 )
        {
          v4 = v24;
          v23 = -1LL;
          do
            ++v23;
          while ( v24[v23] );
        }
        v36 = v4;
        v37 = 2 * v23 + 2;
        v38 = 0;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180168940, 0LL, 0LL, 4u, &v33);
      }
      operator delete(ReportBuffer, v22);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v20 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v20 = LastError;
      operator delete(ReportBuffer, v19);
      return v20;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
