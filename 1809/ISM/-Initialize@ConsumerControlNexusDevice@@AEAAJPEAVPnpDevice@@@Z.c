/*
 * XREFs of ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x18007757C
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x180077360 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x180073034 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800733F0 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x180073478 (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x18007353C (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@ConsumerControlNexusDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@VHidChannelValueInfo@@U?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@@std@@PEAI@Z @ 0x1800777A8 (-ExtractReportDescriptorsFromPreparsedData@ConsumerControlNexusDevice@@AEAAJQEAU_HIDP_PREPARSED_.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x180077C34 (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::Initialize(ConsumerControlNexusDevice *this, struct PnpDevice *a2)
{
  HSTRING **v2; // r14
  unsigned int v4; // edi
  int InterfacePath; // ebx
  __int64 v6; // rdx
  __int64 result; // rax
  HSTRING *v8; // rax
  __int64 v9; // rcx
  const char *v10; // r9
  PHIDP_PREPARSED_DATA v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  ConsumerControlNexusDevice **v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v22; // [rsp+60h] [rbp+30h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v2 = (HSTRING **)((char *)this + 16);
  Microsoft::WRL::ComPtr<PnpDevice>::operator=((volatile signed __int32 **)this + 2, (volatile signed __int32 *)a2);
  WindowsDeleteString(*((HSTRING *)this + 3));
  v4 = 0;
  *((_QWORD *)this + 3) = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath(*v2, (HSTRING *)this + 3);
  if ( InterfacePath < 0 )
  {
    v6 = 72LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
    return (unsigned int)InterfacePath;
  }
  InterfacePath = PnpDevice::OpenInterface((PnpDevice *)*v2, 0x80000000, 3u);
  if ( InterfacePath < 0 )
  {
    v6 = 74LL;
    goto LABEL_3;
  }
  v8 = *v2;
  PreparsedData = 0LL;
  if ( !HidD_GetPreparsedData(v8[5], &PreparsedData) )
  {
    InterfacePath = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x4F,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercont"
                               "rolnexusdevice.cpp",
                      v10);
    goto LABEL_9;
  }
  v11 = PreparsedData;
  if ( *((_WORD *)PreparsedData + 5) != 12 )
  {
    v12 = 82LL;
LABEL_15:
    InterfacePath = -2147418113;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
LABEL_9:
    if ( PreparsedData )
      HidD_FreePreparsedData(PreparsedData);
    return (unsigned int)InterfacePath;
  }
  if ( *((_WORD *)PreparsedData + 4) != 1 )
  {
    v12 = 83LL;
    goto LABEL_15;
  }
  *((_QWORD *)this + 12) = *((unsigned __int16 *)PreparsedData + 11);
  InterfacePath = ConsumerControlNexusDevice::ExtractReportDescriptorsFromPreparsedData(
                    v9,
                    v11,
                    (char *)this + 32,
                    (char *)this + 40);
  if ( InterfacePath < 0 )
  {
    v12 = 87LL;
    goto LABEL_16;
  }
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  result = PnpDevice::OutputIoctl((PnpDevice *)*v2, v13, v14, &v22, &v24);
  if ( (int)result >= 0 )
  {
    if ( v24 != 4 )
    {
      InterfacePath = -2147418113;
      v6 = 99LL;
      goto LABEL_3;
    }
    v15 = v22;
    if ( !v22 )
    {
      InterfacePath = -2147418113;
      v6 = v22 + 100;
      goto LABEL_3;
    }
    v16 = *((_QWORD *)this + 12);
    if ( v22 > 0x40 )
      v15 = 64LL;
    v22 = v15;
    while ( *((_QWORD *)this + 8) < v15 )
    {
      v17 = operator new[](v16 + 87, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      if ( !v17 )
      {
        InterfacePath = -2147024882;
        v6 = 117LL;
        goto LABEL_3;
      }
      v17[2] = this;
      memset_0(v17 + 3, 0, 0x20uLL);
      *((_DWORD *)v18 + 14) = 0;
      v18[8] = 0LL;
      v18[9] = *((_QWORD *)this + 12);
      v19 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 7);
      if ( *v19 != (ConsumerControlNexusDevice *)((char *)this + 48) )
        __fastfail(3u);
      *v18 = (char *)this + 48;
      v18[1] = v19;
      *v19 = (ConsumerControlNexusDevice *)v18;
      ++*((_QWORD *)this + 8);
      *((_QWORD *)this + 7) = v18;
      v15 = v22;
    }
    v20 = ConsumerControlNexusDevice::QueueInputBuffers(this);
    if ( v20 < 0 )
      return (unsigned int)v20;
    return v4;
  }
  return result;
}
