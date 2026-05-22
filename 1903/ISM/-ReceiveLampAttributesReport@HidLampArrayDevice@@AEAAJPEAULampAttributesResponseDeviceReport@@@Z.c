/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800B4BD0
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3E38 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800B7960 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800B7ACC (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampAttributesReport(
        HidLampArrayDevice *this,
        struct LampAttributesResponseDeviceReport *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const struct std::nothrow_t *v6; // rdx
  unsigned __int8 *v8; // rbx
  signed int LastError; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // edi
  int v12; // eax
  const struct std::nothrow_t *v13; // rdx
  unsigned int v14; // esi
  const struct std::nothrow_t *v15; // rdx
  int v16; // eax
  __int128 v17; // xmm1
  _OWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  int v19; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  ULONG ReportBufferLength; // [rsp+70h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+80h] [rbp+30h] BYREF

  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v4 = HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
         *((_QWORD *)this + 75),
         &ReportBuffer,
         &ReportBufferLength);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = (unsigned __int8 *)ReportBuffer;
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      memset_0(v18, 0, 0x24uLL);
      v12 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
              *((HidLampAttributesResponseReportParser **)this + 75),
              v8,
              ReportBufferLength,
              (struct LampAttributesResponseDeviceReport *)v18);
      v14 = v12;
      if ( v12 >= 0 )
      {
        v16 = v19;
        v17 = v18[1];
        *(_OWORD *)a2 = v18[0];
        *((_OWORD *)a2 + 1) = v17;
        *((_DWORD *)a2 + 8) = v16;
        if ( v8 )
          operator delete(v8, v13);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v12);
        if ( v8 )
          operator delete(v8, v15);
        return v14;
      }
    }
    else
    {
      LastError = GetLastError();
      v11 = LastError;
      if ( LastError > 0 )
        v11 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 )
        operator delete(v8, v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v6);
    return v5;
  }
}
