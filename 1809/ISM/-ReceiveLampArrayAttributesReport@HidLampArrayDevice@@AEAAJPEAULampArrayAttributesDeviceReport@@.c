/*
 * XREFs of ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x180079F88
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z @ 0x18007E170 (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ReceiveLampArrayAttributesReport(
        HidLampArrayDevice *this,
        struct LampArrayAttributesDeviceReport *a2)
{
  __int64 v2; // rsi
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // rbx
  unsigned __int64 v8; // rsi
  signed int LastError; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r11
  int v13; // eax
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r11
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // xmm1_8
  int v21[4]; // [rsp+20h] [rbp-20h] BYREF
  int v22[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int8 *ReportBuffer; // [rsp+60h] [rbp+20h]

  v2 = *((_QWORD *)this + 72);
  v5 = (unsigned __int8 *)operator new[](*(unsigned int *)(v2 + 20), (const struct std::nothrow_t *)&std::nothrow);
  ReportBuffer = v5;
  v6 = v5;
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  memset_0(v5, 0, *(unsigned int *)(v2 + 20));
  *v6 = *(_BYTE *)(v2 + 16);
  v8 = *(unsigned int *)(v2 + 20);
  if ( HidD_GetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, v8) )
  {
    v12 = *((_QWORD *)this + 72);
    memset(v21, 0, sizeof(v21));
    *(_QWORD *)v22 = 0LL;
    v13 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v12 + 24), v8, ReportBuffer, v21);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v13 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v14 + 96), v8, ReportBuffer, &v21[1]);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v13 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v16 + 168), v8, ReportBuffer, &v21[2]);
        v11 = v13;
        if ( v13 >= 0 )
        {
          v13 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v17 + 240), v8, ReportBuffer, &v21[3]);
          v11 = v13;
          if ( v13 >= 0 )
          {
            v13 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v18 + 312), v8, ReportBuffer, v22);
            v11 = v13;
            if ( v13 >= 0 )
            {
              v13 = HidChannelValueInfo::ParseValue((HidChannelValueInfo *)(v19 + 384), v8, ReportBuffer, &v22[1]);
              v11 = v13;
              if ( v13 >= 0 )
              {
                v11 = 0;
LABEL_21:
                if ( (v11 & 0x80000000) == 0 )
                {
                  v11 = 0;
                  v20 = *(_QWORD *)v22;
                  *(_OWORD *)a2 = *(_OWORD *)v21;
                  *((_QWORD *)a2 + 2) = v20;
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0xEF,
                    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                    (const char *)v11);
                }
                goto LABEL_24;
              }
              v15 = 132LL;
            }
            else
            {
              v15 = 131LL;
            }
          }
          else
          {
            v15 = 130LL;
          }
        }
        else
        {
          v15 = 129LL;
        }
      }
      else
      {
        v15 = 128LL;
      }
    }
    else
    {
      v15 = 127LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparrayattributesreportparser.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_21;
  }
  LastError = GetLastError();
  v11 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v11 = LastError;
LABEL_24:
  operator delete(ReportBuffer, v10);
  return v11;
}
