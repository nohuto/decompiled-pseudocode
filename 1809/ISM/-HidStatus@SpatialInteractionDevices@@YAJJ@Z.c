/*
 * XREFs of ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800A83F4
 * Callers:
 *     ??$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAEW4_HIDP_REPORT_TYPE@@@Z @ 0x1800A6D08 (--$HIDGetInteger@E@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     ??$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU_HIDP_VALUE_CAPS@@PEAGW4_HIDP_REPORT_TYPE@@@Z @ 0x1800A6E64 (--$HIDGetInteger@G@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEBU.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT3_3_ @ 0x1800A7194 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT3_3_.c)
 *     SpatialInteractionDevices::ParseFeatureScaled_DirectX::XMFLOAT4_4_ @ 0x1800A7328 (SpatialInteractionDevices--ParseFeatureScaled_DirectX--XMFLOAT4_4_.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A8918 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800A9040 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 *     ?HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z @ 0x1800A91A8 (-HIDSetInteger@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@GGI@Z.c)
 * Callees:
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800A32E8 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInteractionDevices::HidStatus(SpatialInteractionDevices *this)
{
  unsigned int v1; // ebx
  const wchar_t *v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rsi
  IErrorInfo *v6; // rcx
  ICreateErrorInfo *v7; // rcx
  IErrorInfo *perrinfo; // [rsp+28h] [rbp-69h] BYREF
  ICreateErrorInfo *pperrinfo[3]; // [rsp+30h] [rbp-61h] BYREF
  wchar_t v11[64]; // [rsp+48h] [rbp-49h] BYREF

  pperrinfo[1] = (ICreateErrorInfo *)-2LL;
  v1 = (unsigned int)this;
  if ( (int)this >= 0 )
    return v1;
  pperrinfo[0] = 0LL;
  if ( CreateErrorInfo(pperrinfo) >= 0 )
  {
    memset_0(v11, 0, sizeof(v11));
    if ( (int)v1 > -1072627703 )
    {
      switch ( v1 )
      {
        case 0xC011000A:
          v2 = L"HIDP_STATUS_INCOMPATIBLE_REPORT_ID";
          goto LABEL_41;
        case 0xC011000B:
          v2 = L"HIDP_STATUS_NOT_VALUE_ARRAY";
          goto LABEL_41;
        case 0xC011000C:
          v2 = L"HIDP_STATUS_IS_VALUE_ARRAY";
          goto LABEL_41;
        case 0xC011000D:
          v2 = L"HIDP_STATUS_DATA_INDEX_NOT_FOUND";
          goto LABEL_41;
        case 0xC011000E:
          v2 = L"HIDP_STATUS_DATA_INDEX_OUT_OF_RANGE";
          goto LABEL_41;
        case 0xC011000F:
          v2 = L"HIDP_STATUS_BUTTON_NOT_PRESSED";
          goto LABEL_41;
        case 0xC0110010:
          v2 = L"HIDP_STATUS_REPORT_DOES_NOT_EXIST";
          goto LABEL_41;
        case 0xC0110020:
          v2 = L"HIDP_STATUS_NOT_IMPLEMENTED";
          goto LABEL_41;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 0xC0110009:
          v2 = L"HIDP_STATUS_I8042_TRANS_UNKNOWN";
          goto LABEL_41;
        case 0x80110001:
          v2 = L"HIDP_STATUS_NULL";
          goto LABEL_41;
        case 0xC0110001:
          v2 = L"HIDP_STATUS_INVALID_PREPARSED_DATA";
          goto LABEL_41;
        case 0xC0110002:
          v2 = L"HIDP_STATUS_INVALID_REPORT_TYPE";
          goto LABEL_41;
        case 0xC0110003:
          v2 = L"HIDP_STATUS_INVALID_REPORT_LENGTH";
          goto LABEL_41;
        case 0xC0110004:
          v2 = L"HIDP_STATUS_USAGE_NOT_FOUND";
          goto LABEL_41;
        case 0xC0110005:
          v2 = L"HIDP_STATUS_VALUE_OUT_OF_RANGE";
          goto LABEL_41;
        case 0xC0110006:
          v2 = L"HIDP_STATUS_BAD_LOG_PHY_VALUES";
          goto LABEL_41;
        case 0xC0110007:
          v2 = L"HIDP_STATUS_BUFFER_TOO_SMALL";
          goto LABEL_41;
        case 0xC0110008:
          v2 = L"HIDP_STATUS_INTERNAL_ERROR";
LABEL_41:
          _o_wcscpy_s(v11, 64LL, v2);
LABEL_42:
          v3 = -1LL;
          do
            ++v3;
          while ( v11[v3] );
          v4 = v3 + 1;
          v5 = CoTaskMemAlloc(2 * v4);
          _o_wcscpy_s(v5, v4, v11);
          v6 = 0LL;
          perrinfo = 0LL;
          if ( v5 )
          {
            if ( ((int (__fastcall *)(ICreateErrorInfo *, void *))pperrinfo[0]->lpVtbl->SetDescription)(
                   pperrinfo[0],
                   v5) >= 0
              && ((__int64 (__fastcall *)(ICreateErrorInfo *, GUID *, IErrorInfo **))pperrinfo[0]->lpVtbl->QueryInterface)(
                   pperrinfo[0],
                   &GUID_1cf2b120_547d_101b_8e65_08002b2bd119,
                   &perrinfo) >= 0 )
            {
              SetErrorInfo(0, perrinfo);
            }
            CoTaskMemFree(v5);
            v6 = perrinfo;
          }
          if ( v6 )
          {
            perrinfo = 0LL;
            ((void (__fastcall *)(IErrorInfo *))v6->lpVtbl->Release)(v6);
          }
          goto LABEL_51;
      }
    }
    swprintf_s<64>(v11, L"Initial Error: 0x%08x", v1);
    goto LABEL_42;
  }
LABEL_51:
  v7 = pperrinfo[0];
  if ( pperrinfo[0] )
  {
    pperrinfo[0] = 0LL;
    ((void (__fastcall *)(ICreateErrorInfo *))v7->lpVtbl->Release)(v7);
  }
  return v1;
}
