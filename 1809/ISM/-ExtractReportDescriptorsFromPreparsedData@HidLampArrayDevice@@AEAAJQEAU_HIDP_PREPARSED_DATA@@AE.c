/*
 * XREFs of ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18007AFBC
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800789B4 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x180078A84 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@QEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18007C60C (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 *     std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007C94C (std--_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18012C1D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C2AC (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18012C974 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
        char a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 i)
{
  char *v5; // r15
  unsigned __int8 v6; // cl
  unsigned __int16 v7; // r12
  char *v8; // r14
  char *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  int v15; // r8d
  int v16; // r8d
  int v17; // ecx
  int v18; // eax
  char *v19; // rcx
  __int64 v20; // rdx
  char *j; // rbx
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  bool v24; // cf
  unsigned __int64 v25; // rax
  unsigned __int64 *v26; // rax
  const char *v27; // r9
  _DWORD *v28; // rbx
  __int64 ii; // rbx
  unsigned __int64 v30; // rdx
  char *v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 result; // rax
  unsigned __int8 k; // al
  __int64 v35; // r12
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 *v39; // rax
  _QWORD *v40; // rdi
  char *v41; // rcx
  char *v42; // rdi
  __int64 m; // rbx
  char *v44; // rax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rax
  _QWORD *v49; // rdi
  __int64 n; // rbx
  char *v51; // rax
  void *v52[2]; // [rsp+30h] [rbp-D8h] BYREF
  char *v53; // [rsp+40h] [rbp-C8h]
  __int128 v54; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v55; // [rsp+60h] [rbp-A8h]
  __int128 v56; // [rsp+70h] [rbp-98h]
  __int128 v57; // [rsp+80h] [rbp-88h]
  __int64 v58; // [rsp+90h] [rbp-78h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-68h]
  __int128 v60; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-50h]
  __int64 v62; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v63; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  unsigned __int8 v66; // [rsp+110h] [rbp+8h]
  _DWORD *v67; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 *v68; // [rsp+120h] [rbp+18h]
  _DWORD *v69; // [rsp+128h] [rbp+20h]

  v69 = (_DWORD *)i;
  v68 = a3;
  LOBYTE(v65) = a1;
  v62 = -2LL;
  *(_OWORD *)v52 = 0LL;
  v5 = 0LL;
  v53 = 0LL;
  v6 = 0;
  v7 = *(_WORD *)(a2 + 32);
  v8 = 0LL;
  v9 = 0LL;
  try
  {
    while ( v7 < *(_WORD *)(a2 + 36) )
    {
      v10 = 104LL * v7;
      if ( *(_WORD *)(v10 + a2 + 50) )
      {
        if ( *(_BYTE *)(v10 + a2 + 46) > v6 )
        {
          v60 = 0LL;
          v61 = 0LL;
          if ( v5 == v8 )
          {
            std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
              v52,
              v8,
              &v60);
            v5 = v53;
            v8 = (char *)v52[1];
            v9 = (char *)v52[0];
          }
          else
          {
            *(_QWORD *)v8 = 0LL;
            *((_QWORD *)v8 + 1) = 0LL;
            *((_QWORD *)v8 + 2) = 0LL;
            v60 = 0LL;
            v61 = 0LL;
            v8 += 24;
            v52[1] = v8;
          }
          std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>((__int64)&v60);
        }
        v11 = *(unsigned __int8 *)(v10 + a2 + 47) + 8LL * *(unsigned __int16 *)(v10 + a2 + 52);
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v65 = i;
          if ( (int)i >= *(unsigned __int16 *)(v10 + a2 + 50) )
            break;
          DWORD2(v54) = 0;
          LODWORD(v55) = 0;
          v12 = *(unsigned __int16 *)(v10 + a2 + 48);
          v13 = (v12 + v11 - 1) >> 3;
          v14 = v11 >> 3;
          if ( (unsigned int)v12 >= 0x20 )
            v15 = 0;
          else
            v15 = 1 << v12;
          v16 = v15 - 1;
          WORD4(v54) = *(_WORD *)(v10 + a2 + 44);
          WORD5(v54) = *(_WORD *)(v10 + a2 + 104);
          LODWORD(v55) = *(_DWORD *)(v10 + a2 + 64);
          HIDWORD(v54) = *(unsigned __int16 *)(v10 + a2 + 62);
          LODWORD(v54) = i * (unsigned __int16)v12 + 8 * *(unsigned __int16 *)(v10 + a2 + 52);
          DWORD1(v54) = (unsigned __int16)v12;
          *((_QWORD *)&v55 + 1) = (unsigned int)v16 & *(_DWORD *)(v10 + a2 + 124);
          *(_QWORD *)&v56 = (unsigned int)v16 & *(_DWORD *)(v10 + a2 + 128);
          DWORD2(v56) = (unsigned __int8)(v13 - v14 + 1);
          HIDWORD(v56) = v11 & 7;
          LODWORD(v57) = (unsigned __int16)(v13 - 1);
          DWORD1(v57) = v16;
          DWORD2(v57) = (unsigned __int16)(v14 - 1);
          BYTE12(v57) = *(_BYTE *)(v10 + a2 + 46);
          v17 = *(_DWORD *)(v10 + a2 + 68) & 8;
          v18 = 0;
          if ( !v17 )
            v18 = 4;
          DWORD1(v55) = v18;
          if ( (*(_BYTE *)(v10 + a2 + 68) & 2) != 0 )
            DWORD1(v55) = v17 != 0 ? 1 : 5;
          v19 = &v9[24
                  * ((unsigned __int64)((unsigned __int128)((v8 - v9) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)
                  - 24
                  + 24 * ((__int64)((unsigned __int128)((v8 - v9) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2)];
          v20 = *((_QWORD *)v19 + 1);
          if ( *((_QWORD *)v19 + 2) == v20 )
          {
            std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(
              (void **)v19,
              (char *)v20,
              (__int64)&v54);
            LODWORD(i) = v65;
          }
          else
          {
            *(_OWORD *)v20 = v54;
            *(_OWORD *)(v20 + 16) = v55;
            *(_OWORD *)(v20 + 32) = v56;
            *(_OWORD *)(v20 + 48) = v57;
            *(_QWORD *)(v20 + 64) = v58;
            *((_QWORD *)v19 + 1) += 72LL;
          }
          v11 += *(unsigned __int16 *)(v10 + a2 + 48);
        }
        v6 = *(_BYTE *)(v10 + a2 + 46);
      }
      ++v7;
    }
    for ( j = v9; j != v8; j += 24 )
    {
      LOBYTE(i) = v65;
      std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
        *(_QWORD *)j,
        *((_QWORD *)j + 1),
        (*((_QWORD *)j + 1) - *(_QWORD *)j) / 72LL,
        i);
    }
    v22 = (v8 - v9) / 24;
    v23 = 24 * v22;
    if ( !is_mul_ok(v22, 0x18uLL) )
      v23 = -1LL;
    v24 = __CFADD__(v23, 8LL);
    v25 = v23 + 8;
    if ( v24 )
      v25 = -1LL;
    v26 = (unsigned __int64 *)operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
    if ( v26 )
    {
      *v26 = v22;
      v28 = v26 + 1;
      `eh vector constructor iterator'(
        v26 + 1,
        0x18uLL,
        (v8 - v9) / 24,
        (void (*)(void *))ParsedHidReportDescriptor::ParsedHidReportDescriptor,
        (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    }
    else
    {
      v28 = 0LL;
    }
    v67 = v28;
    if ( v28 )
    {
      for ( k = 0; ; k = v66 + 1 )
      {
        v66 = k;
        v32 = k;
        if ( k >= v22 )
          break;
        v35 = 3LL * k;
        v28[2 * v35] = 2;
        LOBYTE(v28[2 * v35 + 1]) = *(_BYTE *)(*(_QWORD *)&v9[24 * k] + 60LL);
        v36 = (unsigned int)((*(_DWORD *)&v9[24 * k + 8] - *(_DWORD *)&v9[24 * k]) / 72);
        v59 = v36;
        v28[2 * v35 + 2] = v36;
        v37 = 72 * v36;
        if ( !is_mul_ok(v36, 0x48uLL) )
          v37 = -1LL;
        v24 = __CFADD__(v37, 8LL);
        v38 = v37 + 8;
        if ( v24 )
          v38 = -1LL;
        v39 = (unsigned __int64 *)operator new[](v38, (const struct std::nothrow_t *)&std::nothrow);
        v63 = v39;
        if ( v39 )
        {
          *v39 = v36;
          v40 = v39 + 1;
          `eh vector constructor iterator'(
            v39 + 1,
            0x48uLL,
            v59,
            (void (*)(void *))HidChannelValueInfo::HidChannelValueInfo,
            (void (*)(void *))MPCClickerProcessor::Uninitialize3DComponents);
        }
        else
        {
          v40 = 0LL;
        }
        v41 = *(char **)&v28[2 * v35 + 4];
        *(_QWORD *)&v28[2 * v35 + 4] = v40;
        if ( v41 )
        {
          v42 = v41 - 8;
          `eh vector destructor iterator'(
            v41,
            0x48uLL,
            *((_QWORD *)v41 - 1),
            (void (*)(void *))MPCClickerProcessor::Uninitialize3DComponents);
          operator delete[](v42, (const struct std::nothrow_t *)(72LL * *(_QWORD *)v42 + 8));
        }
        if ( !*(_QWORD *)&v28[2 * v35 + 4] )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x24C,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x8007000ELL);
          `eh vector destructor iterator'(
            v28,
            0x18uLL,
            *((_QWORD *)v28 - 1),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v28 - 2, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v28 - 1) + 8));
          if ( !v9 )
            return 2147942414LL;
          for ( m = (__int64)v9; (char *)m != v8; m += 24LL )
            std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>(m);
          v30 = 24 * ((v5 - v9) / 24);
          v44 = v9;
          if ( v30 < 0x1000 || (v30 += 39LL, v9 = (char *)*((_QWORD *)v9 - 1), (unsigned __int64)(v44 - v9 - 8) <= 0x1F) )
          {
            operator delete(v9, (const struct std::nothrow_t *)v30);
            return 2147942414LL;
          }
          goto LABEL_77;
        }
        v27 = 0LL;
        if ( (*(_QWORD *)&v9[8 * v35 + 8] - *(_QWORD *)&v9[8 * v35]) / 72LL )
        {
          v45 = 0LL;
          do
          {
            v46 = *(_QWORD *)&v9[8 * v35];
            v47 = *(_QWORD *)&v28[2 * v35 + 4];
            *(_OWORD *)(v45 + v47) = *(_OWORD *)(v45 + v46);
            *(_OWORD *)(v45 + v47 + 16) = *(_OWORD *)(v45 + v46 + 16);
            *(_OWORD *)(v45 + v47 + 32) = *(_OWORD *)(v45 + v46 + 32);
            *(_OWORD *)(v45 + v47 + 48) = *(_OWORD *)(v45 + v46 + 48);
            *(_QWORD *)(v45 + v47 + 64) = *(_QWORD *)(v45 + v46 + 64);
            ++v27;
            v45 += 72LL;
          }
          while ( (unsigned __int64)v27 < (*(_QWORD *)&v9[8 * v35 + 8] - *(_QWORD *)&v9[8 * v35]) / 72LL );
        }
      }
      if ( v68 != (unsigned __int64 *)&v67 )
      {
        v48 = v28;
        v28 = 0LL;
        v67 = 0LL;
        v32 = *v68;
        *v68 = (unsigned __int64)v48;
        if ( v32 )
        {
          v49 = (_QWORD *)(v32 - 8);
          `eh vector destructor iterator'(
            (void *)v32,
            0x18uLL,
            *(_QWORD *)(v32 - 8),
            (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
          operator delete[](v49, (const struct std::nothrow_t *)(24LL * *v49 + 8));
        }
      }
      *v69 = v22;
      if ( v28 )
      {
        `eh vector destructor iterator'(
          v28,
          0x18uLL,
          *((_QWORD *)v28 - 1),
          (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
        operator delete[](v28 - 2, (const struct std::nothrow_t *)(24LL * *((_QWORD *)v28 - 1) + 8));
      }
      if ( !v9 )
        goto LABEL_79;
      for ( n = (__int64)v9; (char *)n != v8; n += 24LL )
        std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>(n);
      v30 = 24 * ((v5 - v9) / 24);
      v51 = v9;
      if ( v30 < 0x1000 )
        goto LABEL_78;
      v30 += 39LL;
      v9 = (char *)*((_QWORD *)v9 - 1);
      if ( (unsigned __int64)(v51 - v9 - 8) <= 0x1F )
        goto LABEL_78;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x244,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x8007000ELL);
      if ( !v9 )
        return 2147942414LL;
      for ( ii = (__int64)v9; (char *)ii != v8; ii += 24LL )
        std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>(ii);
      v30 = 24 * ((v5 - v9) / 24);
      v31 = v9;
      if ( v30 < 0x1000 || (v30 += 39LL, v9 = (char *)*((_QWORD *)v9 - 1), v32 = v31 - v9 - 8, v32 <= 0x1F) )
      {
        operator delete(v9, (const struct std::nothrow_t *)v30);
        return 2147942414LL;
      }
    }
LABEL_77:
    _o__invalid_parameter_noinfo_noreturn(v32, v30);
LABEL_78:
    operator delete(v9, (const struct std::nothrow_t *)v30);
LABEL_79:
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x259,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                           v27);
  }
  return result;
}
