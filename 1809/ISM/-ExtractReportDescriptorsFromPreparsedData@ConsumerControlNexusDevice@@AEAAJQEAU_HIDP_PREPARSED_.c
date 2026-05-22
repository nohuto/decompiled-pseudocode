/*
 * XREFs of ?ExtractReportDescriptorsFromPreparsedData@ConsumerControlNexusDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@VHidChannelValueInfo@@U?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@@std@@PEAI@Z @ 0x1800777A8
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x18007757C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ @ 0x1800789B4 (--1-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x180078A84 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18012C1D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C2AC (--_V@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18012C974 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ConsumerControlNexusDevice::ExtractReportDescriptorsFromPreparsedData(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 **a3,
        _DWORD *a4)
{
  _OWORD *v6; // r10
  unsigned __int16 v7; // si
  _OWORD *v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  bool v11; // r14
  __int16 v12; // dx
  int i; // r15d
  __int64 v14; // rcx
  int v15; // eax
  __int16 v16; // r11
  __int16 v17; // r8
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // rsi
  const char *v23; // r9
  __int64 result; // rax
  __int64 v25; // rax
  bool v26; // cf
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rax
  char *v29; // rdi
  char *v30; // rbx
  char *v31; // rcx
  char *v32; // rdi
  void *Src[2]; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD *v34; // [rsp+40h] [rbp-B8h]
  __int128 v35; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+60h] [rbp-98h]
  __int128 v37; // [rsp+70h] [rbp-88h]
  __int128 v38; // [rsp+80h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-68h]
  unsigned __int64 v40; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v41; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+B0h] [rbp-48h]
  __int64 v43; // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  unsigned __int64 *v45; // [rsp+100h] [rbp+8h] BYREF
  int v46; // [rsp+108h] [rbp+10h]
  _DWORD *v47; // [rsp+118h] [rbp+20h]

  v47 = a4;
  v45 = a1;
  v43 = -2LL;
  *a4 = 0;
  *(_OWORD *)Src = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v7 = *(_WORD *)(a2 + 16);
  v8 = 0LL;
  try
  {
    while ( v7 < *(_WORD *)(a2 + 20) )
    {
      v9 = 104LL * v7;
      if ( *(_WORD *)(v9 + a2 + 50) )
      {
        v10 = *(unsigned __int8 *)(v9 + a2 + 47) + 8LL * *(unsigned __int16 *)(v9 + a2 + 52);
        v11 = (*(_DWORD *)(v9 + a2 + 68) & 0x10) != 0;
        v12 = *(_WORD *)(v9 + a2 + 104);
        LOWORD(v45) = v12;
        for ( i = 0; i < *(unsigned __int16 *)(v9 + a2 + 50); ++i )
        {
          DWORD2(v35) = 0;
          LODWORD(v36) = 0;
          v14 = *(unsigned __int16 *)(v9 + a2 + 48);
          v42 = v14 + v10;
          v41 = (v14 + v10 - 1) >> 3;
          v40 = v10 >> 3;
          if ( (unsigned int)v14 >= 0x20 )
            v15 = 0;
          else
            v15 = 1 << v14;
          v46 = v15 - 1;
          v16 = *(_WORD *)(v9 + a2 + 44);
          WORD4(v35) = v16;
          if ( v11 )
          {
            v17 = v12;
            WORD5(v35) = v12;
            LOWORD(v45) = v12 + 1;
          }
          else
          {
            v17 = *(_WORD *)(v9 + a2 + 104);
            WORD5(v35) = v17;
          }
          LODWORD(v36) = *(_DWORD *)(v9 + a2 + 64);
          HIDWORD(v35) = *(unsigned __int16 *)(v9 + a2 + 62);
          LODWORD(v35) = i * (unsigned __int16)v14 + 8 * *(unsigned __int16 *)(v9 + a2 + 52);
          DWORD1(v35) = (unsigned __int16)v14;
          v18 = (*(_DWORD *)(v9 + a2 + 68) >> 2) & 1;
          if ( v18 )
            v19 = *(_DWORD *)(v9 + a2 + 120);
          else
            v19 = *(_DWORD *)(v9 + a2 + 124);
          *((_QWORD *)&v36 + 1) = v46 & v19;
          if ( v18 )
            v20 = *(_DWORD *)(v9 + a2 + 124);
          else
            v20 = *(_DWORD *)(v9 + a2 + 128);
          *(_QWORD *)&v37 = v46 & v20;
          DWORD2(v37) = (unsigned __int8)(v41 - v40 + 1);
          HIDWORD(v37) = v10 & 7;
          LODWORD(v38) = (unsigned __int16)(v41 - 1);
          DWORD1(v38) = v46;
          DWORD2(v38) = (unsigned __int16)(v40 - 1);
          BYTE12(v38) = *(_BYTE *)(v9 + a2 + 46);
          LODWORD(v39) = v18;
          v21 = 0;
          if ( (*(_BYTE *)(v9 + a2 + 68) & 8) == 0 )
            v21 = 4;
          DWORD1(v36) = v21;
          if ( (*(_BYTE *)(v9 + a2 + 68) & 2) != 0 )
            DWORD1(v36) = (unsigned __int16)v21 | 1;
          v10 = v42;
          if ( v16 == 12 && v17 == 208 )
          {
            if ( v6 == v8 )
            {
              std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(Src, v8, &v35);
              v6 = v34;
              v8 = Src[1];
            }
            else
            {
              *v8 = v35;
              v8[1] = v36;
              v8[2] = v37;
              v8[3] = v38;
              *((_QWORD *)v8 + 8) = v39;
              v8 = (_OWORD *)((char *)v8 + 72);
              Src[1] = v8;
            }
          }
          v12 = (__int16)v45;
        }
      }
      ++v7;
    }
    v22 = ((char *)v8 - (char *)Src[0]) / 72;
    if ( v22 )
    {
      v25 = 72 * v22;
      if ( !is_mul_ok(v22, 0x48uLL) )
        v25 = -1LL;
      v26 = __CFADD__(v25, 8LL);
      v27 = v25 + 8;
      if ( v26 )
        v27 = -1LL;
      v28 = (unsigned __int64 *)operator new[](v27, (const struct std::nothrow_t *)&std::nothrow);
      v45 = v28;
      if ( v28 )
      {
        *v28 = v22;
        v29 = (char *)(v28 + 1);
        `eh vector constructor iterator'(
          v28 + 1,
          0x48uLL,
          v22,
          (void (*)(void *))HidChannelValueInfo::HidChannelValueInfo,
          (void (*)(void *))MPCClickerProcessor::Uninitialize3DComponents);
      }
      else
      {
        v29 = 0LL;
      }
      v30 = v29;
      if ( v29 )
      {
        memcpy_0(v29, Src[0], 72 * v22);
        if ( a3 != &v45 )
        {
          v30 = 0LL;
          v31 = (char *)*a3;
          *a3 = (unsigned __int64 *)v29;
          v29 = 0LL;
          if ( v31 )
          {
            v32 = v31 - 8;
            `eh vector destructor iterator'(
              v31,
              0x48uLL,
              *((_QWORD *)v31 - 1),
              (void (*)(void *))MPCClickerProcessor::Uninitialize3DComponents);
            operator delete[](v32, (const struct std::nothrow_t *)(72LL * *(_QWORD *)v32 + 8));
            v29 = 0LL;
          }
        }
        *v47 = v22;
        if ( v29 )
        {
          `eh vector destructor iterator'(
            v30,
            0x48uLL,
            *((_QWORD *)v30 - 1),
            (void (*)(void *))MPCClickerProcessor::Uninitialize3DComponents);
          operator delete[](v30 - 8, (const struct std::nothrow_t *)(72LL * *((_QWORD *)v30 - 1) + 8));
        }
        std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>(Src);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
          (const char *)0x8007000ELL);
        std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>(Src);
        result = 2147942414LL;
      }
    }
    else
    {
      std::vector<HidChannelValueInfo>::~vector<HidChannelValueInfo>(Src);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v47) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xE7,
                     (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontr"
                              "olnexusdevice.cpp",
                     v23);
    return (unsigned int)v47;
  }
  return result;
}
