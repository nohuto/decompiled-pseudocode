/*
 * XREFs of ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800A5ED8
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A8918 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::IsValidButtonUsage @ 0x1800A4E88 (SpatialInteractionDevices--IsValidButtonUsage.c)
 *     SpatialInteractionDevices::GetReportCaps @ 0x1800A5CB4 (SpatialInteractionDevices--GetReportCaps.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x1800A6BC8 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_SpatialInteracti.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___ @ 0x1800A6C60 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_1800A6C60.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_1_ @ 0x1800A6FCC (SpatialInteractionDevices--StoreCapsIfMatches_1_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_4_ @ 0x1800A7064 (SpatialInteractionDevices--StoreCapsIfMatches_4_.c)
 *     SpatialInteractionDevices::StoreCapsIfMatches_2_ @ 0x1800A70FC (SpatialInteractionDevices--StoreCapsIfMatches_2_.c)
 *     ??$_Emplace_reallocate@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAPEAUSpatialInputButtonCaps@SpatialInteractionDevices@@QEAU23@$$QEAU23@@Z @ 0x1800A7494 (--$_Emplace_reallocate@USpatialInputButtonCaps@SpatialInteractionDevices@@@-$vector@USpatialInpu.c)
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A7790 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 *v5; // rax
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int64 v8; // rdx
  _WORD *v9; // rdx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r8
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  __int128 v15; // xmm0
  unsigned __int64 v16; // r8
  __int16 v17; // ax
  __int16 v18; // ax
  __int16 v19; // ax
  bool v20; // al
  unsigned int v21; // ebx
  __int64 v22; // r12
  __int64 v23; // r14
  char *ReportCaps; // r13
  unsigned int v25; // edi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // r12d
  __int64 v30; // r13
  __int64 v31; // rbx
  char *v32; // rdi
  int v33; // eax
  unsigned int v34; // r14d
  const char *v35; // r9
  __int64 result; // rax
  int v37; // eax
  unsigned int v38; // r14d
  int v39; // eax
  unsigned int v40; // r14d
  int v41; // eax
  unsigned int v42; // r14d
  int v43; // eax
  unsigned int v44; // r14d
  char v45; // dl
  unsigned __int64 v46; // r8
  _WORD *v47; // rcx
  __int16 v48; // ax
  int v49; // eax
  unsigned int v50; // ebx
  char v51; // r13
  int v52; // edx
  __int64 *v53; // rdi
  __int64 *v54; // rbx
  volatile signed __int32 *v55; // r12
  __int64 v56; // r14
  unsigned __int64 v57; // rcx
  _QWORD *v58; // rax
  char v59; // al
  unsigned __int64 v60; // rcx
  _QWORD *v61; // rax
  char v62; // al
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rax
  char v65; // al
  unsigned __int64 v66; // rcx
  _QWORD *v67; // rax
  char v68; // al
  unsigned __int64 v69; // rcx
  _QWORD *v70; // rax
  char v71; // al
  unsigned __int64 v72; // rcx
  _QWORD *v73; // rax
  char v74; // al
  unsigned __int64 v75; // rcx
  _QWORD *v76; // rax
  char v77; // al
  char v78; // al
  __int64 **v79; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  ULONG v82; // eax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // kr10_8
  void *v85; // rax
  const struct std::nothrow_t *v86; // rdx
  void *v87; // rcx
  __int64 v88; // [rsp+20h] [rbp-C8h] BYREF
  int v89; // [rsp+28h] [rbp-C0h]
  __int128 v90; // [rsp+30h] [rbp-B8h]
  __int128 v91; // [rsp+40h] [rbp-A8h]
  __int64 v92; // [rsp+50h] [rbp-98h]
  __int128 v93; // [rsp+58h] [rbp-90h] BYREF
  __int128 v94; // [rsp+68h] [rbp-80h] BYREF
  __int128 v95; // [rsp+80h] [rbp-68h] BYREF
  __int64 v96; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v97[16]; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v98[16]; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  int v100; // [rsp+F0h] [rbp+8h] BYREF
  int v101; // [rsp+F8h] [rbp+10h]

  v92 = -2LL;
  v91 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___(
                     &v96,
                     this);
  v93 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
                     v97,
                     v3,
                     &off_180144D30);
  v5 = (__int128 *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
                     v98,
                     v4,
                     &off_180144D00);
  v94 = *v5;
  v7 = *(_OWORD *)&off_180144CA0;
  v9 = (_WORD *)(v8 + 64);
  v10 = 1LL;
  if ( *((_WORD *)this + 33) != 1 || *v9 != 15 )
  {
    v6 = 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v9[1] == *(_WORD *)((char *)&unk_180144CB4 + v11) )
      {
        v12 = *(_WORD *)((char *)&unk_180144CB6 + v11);
        if ( *v9 == v12 )
        {
          v13 = *(_WORD *)((char *)&unk_180144CB0 + v11);
          if ( !v13 && !*(_WORD *)((char *)&unk_180144CB2 + v11) )
            break;
          if ( *((_WORD *)this + 22) == v13 )
          {
            v14 = *(_WORD *)((char *)&unk_180144CB2 + v11);
            if ( *((_WORD *)this + 23) == v14 )
              break;
          }
        }
      }
      ++v6;
      v11 += 24LL;
      if ( v11 >= 0x48 )
        goto LABEL_13;
    }
    v7 = *(__int128 *)((char *)&xmmword_180144CB8 + 24 * v6);
  }
LABEL_13:
  v90 = v7;
  v15 = *(_OWORD *)&off_180144E70;
  if ( *((_WORD *)this + 33) != 1 || *v9 != 15 )
  {
    v6 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v9[1] == *(_WORD *)((char *)&unk_180144E84 + v16) )
      {
        v17 = *(_WORD *)((char *)&unk_180144E86 + v16);
        if ( *v9 == v17 )
        {
          v18 = *(_WORD *)((char *)&unk_180144E80 + v16);
          if ( !v18 && !*(_WORD *)((char *)&unk_180144E82 + v16) )
            break;
          if ( *((_WORD *)this + 22) == v18 )
          {
            v19 = *(_WORD *)((char *)&unk_180144E82 + v16);
            if ( *((_WORD *)this + 23) == v19 )
              break;
          }
        }
      }
      ++v6;
      v16 += 24LL;
      if ( v16 >= 0x60 )
        goto LABEL_25;
    }
    v15 = *(__int128 *)((char *)&xmmword_180144E88 + 24 * v6);
  }
LABEL_25:
  v95 = v15;
  v20 = word_180145160[2] == 1;
  *((_BYTE *)this + 237) = v20;
  v21 = 0;
  v22 = v91;
  try
  {
    while ( v21 < *((_DWORD *)this + 38) )
    {
      v23 = *((_QWORD *)this + 18) + 72LL * v21;
      ReportCaps = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v23 + 2), (__int64)this);
      v25 = 0;
      v10 = 1LL;
      while ( v25 < DWORD2(v91) )
      {
        if ( SpatialInteractionDevices::IsValidButtonUsage(v23, (_WORD *)(v22 + 24LL * v25)) )
        {
          *((_DWORD *)ReportCaps + 36) |= *(_DWORD *)(v26 + 8);
          LOWORD(v88) = *(_WORD *)(v23 + 6);
          *(_DWORD *)((char *)&v88 + 2) = *(_DWORD *)(v26 + 4);
          v27 = *(_DWORD *)(v26 + 8);
          v89 = v27;
          v28 = *((_QWORD *)ReportCaps + 20);
          if ( *((_QWORD *)ReportCaps + 21) == v28 )
          {
            std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::_Emplace_reallocate<SpatialInteractionDevices::SpatialInputButtonCaps>(
              ReportCaps + 152,
              v28,
              &v88);
            v10 = 1LL;
          }
          else
          {
            *(_QWORD *)v28 = v88;
            *(_DWORD *)(v28 + 8) = v27;
            *((_QWORD *)ReportCaps + 20) += 12LL;
          }
        }
        v25 += v10;
      }
      v21 += v10;
    }
    v29 = 0;
    v30 = v90;
    while ( 1 )
    {
      if ( v29 >= *((_DWORD *)this + 34) )
      {
        v51 = 0;
        v52 = 0;
        v53 = (__int64 *)*((_QWORD *)this + 31);
        v54 = (__int64 *)*v53;
        while ( v54 != v53 )
        {
          v55 = (volatile signed __int32 *)v54[6];
          if ( v55 )
          {
            _InterlockedAdd(v55 + 2, v10);
            v55 = (volatile signed __int32 *)v54[6];
          }
          *(_QWORD *)&v90 = v54[5];
          v56 = v90;
          *((_QWORD *)&v90 + 1) = v55;
          v57 = 0LL;
          v58 = (_QWORD *)v90;
          while ( *v58 )
          {
            v57 += v10;
            ++v58;
            if ( v57 >= v10 )
            {
              v59 = v10;
              goto LABEL_79;
            }
          }
          v59 = 0;
LABEL_79:
          *(_BYTE *)(v90 + 136) = v59;
          v60 = 0LL;
          v61 = (_QWORD *)(v56 + 40);
          while ( *v61 )
          {
            v60 += v10;
            ++v61;
            if ( v60 >= v10 )
            {
              v62 = v10;
              goto LABEL_84;
            }
          }
          v62 = 0;
LABEL_84:
          *(_BYTE *)(v56 + 137) = v62;
          v63 = 0LL;
          v64 = (_QWORD *)(v56 + 24);
          while ( *v64 )
          {
            v63 += v10;
            ++v64;
            if ( v63 >= 2 )
            {
              v65 = v10;
              goto LABEL_89;
            }
          }
          v65 = 0;
LABEL_89:
          *(_BYTE *)(v56 + 139) = v65;
          v66 = 0LL;
          v67 = (_QWORD *)(v56 + 8);
          while ( *v67 )
          {
            v66 += v10;
            ++v67;
            if ( v66 >= 2 )
            {
              v68 = v10;
              goto LABEL_94;
            }
          }
          v68 = 0;
LABEL_94:
          *(_BYTE *)(v56 + 138) = v68;
          v69 = 0LL;
          v70 = (_QWORD *)(v56 + 48);
          while ( *v70 )
          {
            v69 += v10;
            ++v70;
            if ( v69 >= 4 )
            {
              v71 = v10;
              goto LABEL_99;
            }
          }
          v71 = 0;
LABEL_99:
          *(_BYTE *)(v56 + 140) = v71;
          v72 = 0LL;
          v73 = (_QWORD *)(v56 + 80);
          while ( *v73 )
          {
            v72 += v10;
            ++v73;
            if ( v72 >= 3 )
            {
              v74 = v10;
              goto LABEL_104;
            }
          }
          v74 = 0;
LABEL_104:
          *(_BYTE *)(v56 + 141) = v74;
          v75 = 0LL;
          v76 = (_QWORD *)(v56 + 104);
          while ( *v76 )
          {
            v75 += v10;
            ++v76;
            if ( v75 >= 4 )
            {
              v77 = v10;
              goto LABEL_109;
            }
          }
          v77 = 0;
LABEL_109:
          *(_BYTE *)(v56 + 142) = v77;
          v101 = *(_DWORD *)(v56 + 144) | v52;
          v51 |= *(_BYTE *)(v56 + 137);
          LOBYTE(v6) = v100;
          std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
            *(_QWORD *)(v56 + 152),
            *(_QWORD *)(v56 + 160),
            (*(_QWORD *)(v56 + 160) - *(_QWORD *)(v56 + 152)) / 12LL,
            v6);
          if ( *(_DWORD *)(v56 + 144)
            || *(_BYTE *)(v56 + 136)
            || *(_BYTE *)(v56 + 137)
            || *(_BYTE *)(v56 + 139)
            || *(_BYTE *)(v56 + 138)
            || *(_BYTE *)(v56 + 140)
            || *(_BYTE *)(v56 + 141)
            || (v78 = 0, *(_BYTE *)(v56 + 142)) )
          {
            v78 = 1;
          }
          *(_BYTE *)(v56 + 143) = v78;
          if ( v55 )
          {
            if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
              if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
            }
          }
          v52 = v101;
          v10 = 1LL;
          if ( !*((_BYTE *)v54 + 25) )
          {
            v79 = (__int64 **)v54[2];
            if ( *((_BYTE *)v79 + 25) )
            {
              for ( i = (__int64 *)v54[1]; !*((_BYTE *)i + 25) && v54 == (__int64 *)i[2]; i = (__int64 *)i[1] )
                v54 = i;
              v54 = i;
            }
            else
            {
              v54 = (__int64 *)v54[2];
              for ( j = *v79; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                v54 = j;
            }
          }
        }
        *((_BYTE *)this + 238) = v51;
        *((_DWORD *)this + 60) = v52;
        v82 = HidP_MaxUsageListLength(HidP_Input, 0, *((PHIDP_PREPARSED_DATA *)this + 7));
        *((_DWORD *)this + 66) = v82;
        v84 = v82;
        v83 = 4LL * v82;
        if ( !is_mul_ok(v84, 4uLL) )
          v83 = -1LL;
        v85 = operator new[](v83, (const struct std::nothrow_t *)&std::nothrow);
        v87 = (void *)*((_QWORD *)this + 34);
        *((_QWORD *)this + 34) = v85;
        if ( v87 )
        {
          operator delete(v87, v86);
          v85 = (void *)*((_QWORD *)this + 34);
        }
        if ( v85 )
          return 0LL;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x494,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)0x8007000ELL);
        return 2147942414LL;
      }
      v31 = *((_QWORD *)this + 16) + 72LL * v29;
      v32 = SpatialInteractionDevices::GetReportCaps(*(_BYTE *)(v31 + 2), (__int64)this);
      LOBYTE(v100) = 0;
      v33 = SpatialInteractionDevices::StoreCapsIfMatches_1_(&off_180144F50, v31, v32, &v100);
      v34 = v33;
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x462,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v33);
        return v34;
      }
      if ( (_BYTE)v100 )
        goto LABEL_68;
      v37 = SpatialInteractionDevices::StoreCapsIfMatches_4_(&off_180144F90, v31, v32 + 48, &v100);
      v38 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x463,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v37);
        return v38;
      }
      if ( (_BYTE)v100 )
        goto LABEL_68;
      v39 = SpatialInteractionDevices::StoreCapsIfMatches_2_(&v93, v31, v32 + 24, &v100);
      v40 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x464,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v39);
        return v40;
      }
      if ( (_BYTE)v100 )
        goto LABEL_68;
      v41 = SpatialInteractionDevices::StoreCapsIfMatches_2_(&off_180144F60, v31, v32 + 8, &v100);
      v42 = v41;
      if ( v41 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x465,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v41);
        return v42;
      }
      if ( (_BYTE)v100 )
        goto LABEL_68;
      v43 = SpatialInteractionDevices::StoreCapsIfMatches_1_(&v94, v31, v32 + 40, &v100);
      v44 = v43;
      if ( v43 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x466,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)(unsigned int)v43);
        return v44;
      }
      if ( (_BYTE)v100 )
        goto LABEL_68;
      if ( DWORD2(v90) != 3 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x413,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)0x8000FFFFLL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x467,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      v45 = 0;
      LOBYTE(v100) = 0;
      v46 = 0LL;
      v47 = (_WORD *)(v30 + 4);
      v10 = 1LL;
      while ( 1 )
      {
        v6 = (unsigned __int16)*(v47 - 1);
        v48 = *(v47 - 2);
        if ( (!v48 || *(_WORD *)(v31 + 10) == v48)
          && (!(_WORD)v6 || *(_WORD *)(v31 + 8) == (_WORD)v6)
          && *(_WORD *)v31 == *v47
          && !*(_BYTE *)(v31 + 12)
          && *(_WORD *)(v31 + 56) == v47[1] )
        {
          break;
        }
        ++v46;
        v47 += 8;
        if ( v46 >= 3 )
          goto LABEL_65;
      }
      *(_QWORD *)&v32[8 * v46 + 80] = v31;
      v45 = 1;
      LOBYTE(v100) = 1;
LABEL_65:
      if ( !v45 )
        break;
LABEL_69:
      ++v29;
    }
    v49 = SpatialInteractionDevices::StoreCapsIfMatches_4_(&v95, v31, v32 + 104, &v100);
    v50 = v49;
    if ( v49 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x468,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
        (const char *)(unsigned int)v49);
      return v50;
    }
LABEL_68:
    v10 = 1LL;
    goto LABEL_69;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x496,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                           v35);
  }
  return result;
}
