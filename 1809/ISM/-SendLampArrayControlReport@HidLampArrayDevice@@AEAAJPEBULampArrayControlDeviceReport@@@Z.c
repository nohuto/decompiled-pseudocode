/*
 * XREFs of ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x18007ADA4
 * Callers:
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x18007AD50 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18007E2A4 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampArrayControlReport(
        HidLampArrayDevice *this,
        const struct LampArrayControlDeviceReport *a2)
{
  const WCHAR *v2; // rsi
  __int64 v5; // rax
  const WCHAR *v6; // rdx
  const WCHAR *v7; // rcx
  __int64 v8; // r14
  void *v9; // rax
  unsigned __int8 *v10; // rbx
  unsigned int v11; // ebx
  int v12; // edx
  const struct std::nothrow_t *v13; // rdx
  signed int LastError; // eax
  __int64 v15; // rax
  PVOID ReportBuffer; // [rsp+30h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  const char *v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  const WCHAR *v21; // [rsp+70h] [rbp-29h]
  int v22; // [rsp+78h] [rbp-21h]
  int v23; // [rsp+7Ch] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR v24; // [rsp+80h] [rbp-19h] BYREF
  const char *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  const WCHAR *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = &sourceString;
  if ( (unsigned int)hProvider > 5 )
  {
    v20 = 8LL;
    v19 = "Started";
    LODWORD(v5) = 0;
    v6 = &sourceString;
    v7 = (const WCHAR *)((char *)this + 24);
    if ( v7 )
    {
      v6 = v7;
      v5 = -1LL;
      do
        ++v5;
      while ( v7[v5] );
    }
    v21 = v6;
    v22 = 2 * v5 + 2;
    v23 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016884C, 0LL, 0LL, 4u, &pData);
  }
  v8 = *((_QWORD *)this + 73);
  v9 = operator new[](*(unsigned int *)(v8 + 20), (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v9;
  v10 = (unsigned __int8 *)v9;
  if ( v9 )
  {
    memset_0(v9, 0, *(unsigned int *)(v8 + 20));
    v12 = *(unsigned __int8 *)a2;
    *v10 = *(_BYTE *)(v8 + 16);
    HidChannelValueInfo::InsertValue((HidChannelValueInfo *)(v8 + 24), v12, *(unsigned int *)(v8 + 20), v10);
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, *(_DWORD *)(v8 + 20)) )
    {
      if ( (unsigned int)hProvider > 5 )
      {
        v26 = 23LL;
        v25 = "Completed successfully";
        LODWORD(v15) = 0;
        if ( this != (HidLampArrayDevice *)-24LL )
        {
          v2 = (const WCHAR *)((char *)this + 24);
          v15 = -1LL;
          do
            ++v15;
          while ( *((_WORD *)this + v15 + 12) );
        }
        v27 = v2;
        v28 = 2 * v15 + 2;
        v29 = 0;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016884C, 0LL, 0LL, 4u, &v24);
      }
      v11 = 0;
    }
    else
    {
      LastError = GetLastError();
      v11 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v11 = LastError;
    }
    operator delete(ReportBuffer, v13);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraycontrolreportparser.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
  }
  return v11;
}
