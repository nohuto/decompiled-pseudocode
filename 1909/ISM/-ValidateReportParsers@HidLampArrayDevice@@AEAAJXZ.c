/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800B56A8
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800B4670 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800B2A60 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800B2CD8 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B4DFC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800B5CF4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rsi
  unsigned __int8 *v5; // rbp
  unsigned __int8 v6; // cl
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r8
  _DWORD *v13; // rcx
  _QWORD *v14; // rdx
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  const char *v19; // rax
  __int64 v20; // rdx
  char *v22; // [rsp+28h] [rbp-60h]
  char *v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+30h] [rbp-58h]
  BOOL v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  BOOL v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+40h] [rbp-48h]
  BOOL v29; // [rsp+40h] [rbp-48h]
  BOOL v30; // [rsp+48h] [rbp-40h]
  BOOL v31; // [rsp+50h] [rbp-38h]
  char *v32; // [rsp+68h] [rbp-20h] BYREF
  unsigned __int8 *v33; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v35; // [rsp+90h] [rbp+8h]

  v2 = *((_QWORD *)this + 72);
  v3 = 0;
  if ( !v2
    || !*((_QWORD *)this + 73)
    || !*((_QWORD *)this + 74)
    || !*((_QWORD *)this + 75)
    || !*((_QWORD *)this + 76)
    || !*((_QWORD *)this + 77) )
  {
    LOBYTE(v3) = v2 == 0;
    v31 = *((_QWORD *)this + 77) == 0LL;
    v30 = *((_QWORD *)this + 76) == 0LL;
    v29 = *((_QWORD *)this + 75) == 0LL;
    v27 = *((_QWORD *)this + 74) == 0LL;
    v25 = *((_QWORD *)this + 73) == 0LL;
    LODWORD(v22) = v3;
    v3 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      751LL,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"One or more ReportParsers are null.  LampArrayAttributes:%d, LampArrayControl:%d, LampAttributesRequest:%d, L"
           "ampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      v22,
      v25,
      v27,
      v29,
      v30,
      v31);
    return v3;
  }
  std::vector<unsigned char>::vector<unsigned char>(&v32, 6uLL);
  v4 = (__int64)v32;
  *v32 = *(_BYTE *)(*((_QWORD *)this + 72) + 16LL);
  *(_BYTE *)(v4 + 1) = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
  *(_BYTE *)(v4 + 2) = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
  *(_BYTE *)(v4 + 3) = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
  *(_BYTE *)(v4 + 4) = *(_BYTE *)(*((_QWORD *)this + 76) + 16LL);
  *(_BYTE *)(v4 + 5) = *(_BYTE *)(*((_QWORD *)this + 77) + 16LL);
  v5 = &v33[-v4];
  std::_Sort_unchecked<unsigned char *,std::less<void>>(v4, v33, (__int64)&v33[-v4], v35);
  v6 = 0;
  v7 = 0LL;
  if ( v5 )
  {
    while ( v6 != *(_BYTE *)(v4 + v7) )
    {
      v6 = *(_BYTE *)(v4 + v7++);
      if ( v7 >= (unsigned __int64)v5 )
        goto LABEL_10;
    }
    LODWORD(v22) = v6;
    v3 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      768LL,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"Reports have duplicate Id:%d",
      v22);
    goto LABEL_25;
  }
LABEL_10:
  v8 = *((_QWORD *)this + 72);
  v9 = *(int *)(v8 + 56);
  v10 = v9;
  v11 = *(_QWORD *)(*((_QWORD *)this + 74) + 56LL);
  if ( v9 == v11
    && (v12 = *((_QWORD *)this + 75), v9 == *(_QWORD *)(v12 + 56))
    && (v13 = (_DWORD *)*((_QWORD *)this + 76), (_DWORD)v9 == v13[48])
    && (v14 = (_QWORD *)*((_QWORD *)this + 77), v10 == v14[16]) )
  {
    v15 = *(unsigned __int8 *)(v12 + 632);
    if ( v15 == v13[56] && (unsigned __int8)v15 == v14[34] )
    {
      v16 = *(unsigned __int8 *)(v12 + 704);
      if ( v16 == v13[64] && (unsigned __int8)v16 == v14[43] )
      {
        v17 = *(unsigned __int8 *)(v12 + 776);
        if ( v17 == v13[72] && (unsigned __int8)v17 == v14[52] )
        {
          v18 = *(unsigned __int8 *)(v12 + 848);
          if ( v18 == v13[80] && (unsigned __int8)v18 == v14[61] )
            goto LABEL_25;
          v26 = v14[61];
          v24 = v13[80];
          v23 = *(char **)(v12 + 848);
          v19 = "GainChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
          v20 = 820LL;
        }
        else
        {
          v26 = v14[52];
          v24 = v13[72];
          v23 = *(char **)(v12 + 776);
          v19 = "BlueChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
          v20 = 811LL;
        }
      }
      else
      {
        v26 = v14[43];
        v24 = v13[64];
        v23 = *(char **)(v12 + 704);
        v19 = "GreenChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
        v20 = 802LL;
      }
    }
    else
    {
      v26 = v14[34];
      v24 = v13[56];
      v23 = *(char **)(v12 + 632);
      v19 = "RedChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
      v20 = 793LL;
    }
    v3 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      v20,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)v19,
      v23,
      v24,
      v26);
  }
  else
  {
    v28 = *(_DWORD *)(*((_QWORD *)this + 76) + 192LL);
    v3 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      784LL,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"LampCount is not the same across reports. LampArrayAttributes:%d, LampAttributesRequest:%d, LampAttributesRes"
           "ponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      *(const char **)(v8 + 56),
      v11,
      *(_QWORD *)(*((_QWORD *)this + 75) + 56LL),
      v28,
      *(_QWORD *)(*((_QWORD *)this + 77) + 128LL));
  }
LABEL_25:
  std::vector<unsigned char>::_Tidy(&v32);
  return v3;
}
