/*
 * XREFs of ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJPEAULampAttributesResponseDeviceReport@@@Z @ 0x18007A2FC
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesResponseDeviceReport@@@Z @ 0x18007F56C (-ParseInputBufferForReport@HidLampAttributesResponseReportParser@@QEAAJPEBEIPEAULampAttributesRe.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampAttributesReport(
        HidLampArrayDevice *this,
        struct LampAttributesResponseDeviceReport *a2)
{
  __int64 v2; // rbp
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // rbx
  unsigned int v8; // ebp
  signed int LastError; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  __int128 v14; // xmm1
  _OWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 *ReportBuffer; // [rsp+60h] [rbp+8h]

  v2 = *((_QWORD *)this + 75);
  v5 = (unsigned __int8 *)operator new[](*(unsigned int *)(v2 + 20), (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v5;
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, *(unsigned int *)(v2 + 20));
    *v6 = *(_BYTE *)(v2 + 16);
    v8 = *(_DWORD *)(v2 + 20);
    if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v8) )
    {
      memset_0(v15, 0, 0x24uLL);
      v12 = HidLampAttributesResponseReportParser::ParseInputBufferForReport(
              *((HidLampAttributesResponseReportParser **)this + 75),
              ReportBuffer,
              v8,
              (struct LampAttributesResponseDeviceReport *)v15);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = v16;
        v11 = 0;
        v14 = v15[1];
        *(_OWORD *)a2 = v15[0];
        *((_OWORD *)a2 + 1) = v14;
        *((_DWORD *)a2 + 8) = v13;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x117,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
          (const char *)(unsigned int)v12);
      }
    }
    else
    {
      LastError = GetLastError();
      v11 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v11 = LastError;
    }
    operator delete(ReportBuffer, v10);
    return v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
