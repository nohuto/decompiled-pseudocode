/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x18007BC64
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x18007B970 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x18007C358 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x18007D194 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18007D8EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  _BYTE *v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // r9
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
  const struct std::nothrow_t *v19; // rdx
  _BYTE *v20; // rax
  _BYTE *v22; // rcx
  bool v23; // cc
  const char *v24; // rax
  __int64 v25; // rdx
  _BYTE *v26; // rax
  _BYTE *v27; // rax
  int v28; // r10d
  int v29; // r9d
  int v30; // r8d
  int v31; // edx
  int v32; // eax
  char *v33; // [rsp+28h] [rbp-58h]
  char *v34; // [rsp+28h] [rbp-58h]
  __int64 v35; // [rsp+30h] [rbp-50h]
  int v36; // [rsp+30h] [rbp-50h]
  __int64 v37; // [rsp+38h] [rbp-48h]
  __int64 v38; // [rsp+38h] [rbp-48h]
  __int64 v39; // [rsp+40h] [rbp-40h]
  int v40; // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+48h] [rbp-38h]
  int v42; // [rsp+50h] [rbp-30h]
  void *v43; // [rsp+68h] [rbp-18h] BYREF
  __int64 v44; // [rsp+70h] [rbp-10h]
  __int64 v45; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  char v47; // [rsp+A0h] [rbp+20h]

  v2 = *((_QWORD *)this + 72);
  v3 = 0LL;
  if ( !v2
    || !*((_QWORD *)this + 73)
    || !*((_QWORD *)this + 74)
    || !*((_QWORD *)this + 75)
    || !*((_QWORD *)this + 76)
    || !*((_QWORD *)this + 77) )
  {
    goto LABEL_38;
  }
  std::vector<unsigned char>::vector<unsigned char>(&v43, 6LL);
  v4 = v43;
  *(_BYTE *)v43 = *(_BYTE *)(*((_QWORD *)this + 72) + 16LL);
  v4[1] = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
  v4[2] = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
  v4[3] = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
  v4[4] = *(_BYTE *)(*((_QWORD *)this + 76) + 16LL);
  v4[5] = *(_BYTE *)(*((_QWORD *)this + 77) + 16LL);
  v5 = v44 - (_QWORD)v4;
  LOBYTE(v6) = v47;
  std::_Sort_unchecked<unsigned char *,std::less<void>>(v4, v44, v44 - (_QWORD)v4, v6);
  v7 = 0LL;
  if ( v5 )
  {
    while ( (_BYTE)v3 != v4[v7] )
    {
      LOBYTE(v3) = v4[v7++];
      if ( v7 >= v5 )
        goto LABEL_10;
    }
    LODWORD(v33) = (unsigned __int8)v3;
    v3 = 2147942487LL;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x2FA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"Reports have duplicate Id:%d",
      v33);
    v19 = (const struct std::nothrow_t *)(v45 - (_QWORD)v4);
    v22 = v4;
    if ( (unsigned __int64)(v45 - (_QWORD)v4) < 0x1000 )
      goto LABEL_28;
    v19 = (const struct std::nothrow_t *)((char *)v19 + 39);
    v4 = (_BYTE *)*((_QWORD *)v4 - 1);
    v13 = (_DWORD *)(v22 - v4 - 8);
    v23 = (unsigned __int64)v13 <= 0x1F;
  }
  else
  {
LABEL_10:
    v8 = *((_QWORD *)this + 72);
    v9 = *(int *)(v8 + 56);
    v10 = v9;
    v11 = *(_QWORD *)(*((_QWORD *)this + 74) + 56LL);
    if ( v9 != v11
      || (v12 = *((_QWORD *)this + 75), v9 != *(_QWORD *)(v12 + 56))
      || (v13 = (_DWORD *)*((_QWORD *)this + 76), (_DWORD)v9 != v13[48])
      || (v14 = (_QWORD *)*((_QWORD *)this + 77), v10 != v14[16]) )
    {
      v40 = *(_DWORD *)(*((_QWORD *)this + 76) + 192LL);
      v3 = 2147942487LL;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x30A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x80070057LL,
        (int)"LampCount is not the same across reports. LampArrayAttributes:%d, LampAttributesRequest:%d, LampAttributesR"
             "esponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
        *(const char **)(v8 + 56),
        v11,
        *(_QWORD *)(*((_QWORD *)this + 75) + 56LL),
        v40,
        *(_QWORD *)(*((_QWORD *)this + 77) + 128LL));
      v19 = (const struct std::nothrow_t *)(v45 - (_QWORD)v4);
      v27 = v4;
      if ( (unsigned __int64)(v45 - (_QWORD)v4) < 0x1000 )
        goto LABEL_28;
      v19 = (const struct std::nothrow_t *)((char *)v19 + 39);
      v4 = (_BYTE *)*((_QWORD *)v4 - 1);
      if ( (unsigned __int64)(v27 - v4 - 8) <= 0x1F )
        goto LABEL_28;
      goto LABEL_37;
    }
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
          {
            v19 = (const struct std::nothrow_t *)(v45 - (_QWORD)v4);
            v20 = v4;
            if ( (unsigned __int64)(v45 - (_QWORD)v4) < 0x1000
              || (v19 = (const struct std::nothrow_t *)((char *)v19 + 39),
                  v4 = (_BYTE *)*((_QWORD *)v4 - 1),
                  (unsigned __int64)(v20 - v4 - 8) <= 0x1F) )
            {
              operator delete(v4, v19);
              return 0LL;
            }
            goto LABEL_37;
          }
          v38 = v14[61];
          v36 = v13[80];
          v34 = *(char **)(v12 + 848);
          v24 = "GainChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
          v25 = 814LL;
        }
        else
        {
          v38 = v14[52];
          v36 = v13[72];
          v34 = *(char **)(v12 + 776);
          v24 = "BlueChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
          v25 = 805LL;
        }
      }
      else
      {
        v38 = v14[43];
        v36 = v13[64];
        v34 = *(char **)(v12 + 704);
        v24 = "GreenChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
        v25 = 796LL;
      }
    }
    else
    {
      v38 = v14[34];
      v36 = v13[56];
      v34 = *(char **)(v12 + 632);
      v24 = "RedChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
      v25 = 787LL;
    }
    v3 = 2147942487LL;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v25,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)v24,
      v34,
      v36,
      v38);
    v19 = (const struct std::nothrow_t *)(v45 - (_QWORD)v4);
    v26 = v4;
    if ( (unsigned __int64)(v45 - (_QWORD)v4) < 0x1000 )
      goto LABEL_28;
    v19 = (const struct std::nothrow_t *)((char *)v19 + 39);
    v4 = (_BYTE *)*((_QWORD *)v4 - 1);
    v23 = (unsigned __int64)(v26 - v4 - 8) <= 0x1F;
  }
  if ( !v23 )
  {
LABEL_37:
    _o__invalid_parameter_noinfo_noreturn(v13, v19);
LABEL_38:
    v28 = v3;
    LOBYTE(v28) = *((_QWORD *)this + 77) == v3;
    v29 = v3;
    LOBYTE(v29) = *((_QWORD *)this + 76) == v3;
    v30 = v3;
    LOBYTE(v30) = *((_QWORD *)this + 75) == v3;
    v31 = v3;
    LOBYTE(v31) = *((_QWORD *)this + 74) == v3;
    v32 = v3;
    LOBYTE(v32) = *((_QWORD *)this + 73) == v3;
    LOBYTE(v3) = v2 == 0;
    v42 = v28;
    LODWORD(v41) = v29;
    LODWORD(v39) = v30;
    LODWORD(v37) = v31;
    LODWORD(v35) = v32;
    LODWORD(v33) = v3;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x2E9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"One or more ReportParsers are null.  LampArrayAttributes:%d, LampArrayControl:%d, LampAttributesRequest:%d, L"
           "ampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      v33,
      v35,
      v37,
      v39,
      v41,
      v42);
    return 2147942487LL;
  }
LABEL_28:
  operator delete(v4, v19);
  return 2147942487LL;
}
