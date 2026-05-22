/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800E80EC
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800E7A88 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800E7B08 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800E87E8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800E8884 (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E8918 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800E8CE4 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800E90A8 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180097168 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800E7A10 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  __int64 v7; // rdx
  int v8; // r11d
  _QWORD *v9; // r8
  __int64 v10; // r10
  _OWORD *v11; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // ecx
  int v21; // eax
  void (__fastcall ***v22)(_QWORD, __int64, _DWORD *); // rcx
  unsigned int j; // r8d
  __int64 v24; // r10
  char *v25; // rcx
  __int64 v26; // rcx
  _OWORD *v27; // r8
  __int64 v28; // r10
  _OWORD *v29; // r9
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  DWORD v38; // eax
  const char *v39; // r9
  unsigned int v40; // r12d
  __int16 v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int16 v44; // r11
  int v45; // r10d
  char v46; // al
  int v47; // r13d
  int v48; // esi
  int v49; // r14d
  struct tagPOINT v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  DWORD v53; // eax
  DWORD LastError; // eax
  __int64 v55; // [rsp+38h] [rbp-D0h]
  __int64 v56; // [rsp+38h] [rbp-D0h]
  int v57; // [rsp+40h] [rbp-C8h]
  int v58; // [rsp+48h] [rbp-C0h]
  __int64 v59; // [rsp+50h] [rbp-B8h]
  int v60; // [rsp+58h] [rbp-B0h]
  __int64 v61; // [rsp+60h] [rbp-A8h]
  int v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+70h] [rbp-98h]
  int v64; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h]
  int v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+90h] [rbp-78h]
  int v68; // [rsp+98h] [rbp-70h]
  int v69; // [rsp+A8h] [rbp-60h]
  __int64 v70; // [rsp+B0h] [rbp-58h]
  int v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-48h]
  int v73; // [rsp+C8h] [rbp-40h]
  int v74; // [rsp+D8h] [rbp-30h]
  struct tagPOINT v75; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v76[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v77[70]; // [rsp+F4h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v4 = 0LL;
  if ( *((_BYTE *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
      DbgPrint(
        "Injecting %d (%d, %d) 0x%08X\n",
        *((_DWORD *)this + 38 * i + 29),
        *((_DWORD *)this + 38 * i + 36),
        *((_DWORD *)this + 38 * i + 37),
        *((_DWORD *)this + 38 * i + 31));
  }
  if ( *(_DWORD *)this == 1 )
  {
    if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
    {
      LastError = GetLastError();
      if ( LastError )
      {
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          895LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)LastError);
        JUMPOUT(0x1800E87E0LL);
      }
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
    {
      if ( *(_DWORD *)this == 3 )
      {
        v26 = *((unsigned int *)this + 12);
        if ( (_DWORD)v26 )
        {
          v27 = v76;
          v28 = (unsigned int)v26;
          v29 = (_OWORD *)((char *)this + 112);
          do
          {
            v30 = v29[1];
            *v27 = *v29;
            v31 = v29[2];
            v27[1] = v30;
            v32 = v29[3];
            v27[2] = v31;
            v33 = v29[4];
            v27[3] = v32;
            v34 = v29[5];
            v27[4] = v33;
            v35 = v29[6];
            v27[5] = v34;
            v36 = v29[7];
            v27[6] = v35;
            v37 = v29[8];
            v29 = (_OWORD *)((char *)v29 + 152);
            v27[7] = v36;
            v27[8] = v37;
            v27 += 9;
            --v28;
          }
          while ( v28 );
        }
        if ( !(unsigned int)InjectTouchInput(v26, v76) )
        {
          v38 = GetLastError();
          if ( v38 )
          {
            wil::details::in1diag3::_FailFast_Win32(
              retaddr,
              966LL,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              (const char *)v38);
            __debugbreak();
          }
        }
      }
      else
      {
        if ( *(_DWORD *)this != 4 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            1000LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            a4);
          __debugbreak();
        }
        ++*((_DWORD *)this + 200);
        v7 = *((unsigned int *)this + 12);
        v8 = *((_DWORD *)this + 200);
        if ( (_DWORD)v7 )
        {
          v9 = v77;
          v10 = (unsigned int)v7;
          v11 = (_OWORD *)((char *)this + 112);
          do
          {
            v12 = v11[1];
            *(_OWORD *)((char *)v9 - 12) = *v11;
            v13 = v11[2];
            *(_OWORD *)((char *)v9 + 4) = v12;
            v14 = v11[3];
            *(_OWORD *)((char *)v9 + 20) = v13;
            v15 = v11[4];
            *(_OWORD *)((char *)v9 + 36) = v14;
            v16 = v11[5];
            *(_OWORD *)((char *)v9 + 52) = v15;
            v17 = v11[6];
            *(_OWORD *)((char *)v9 + 68) = v16;
            v18 = v11[7];
            *(_OWORD *)((char *)v9 + 84) = v17;
            v19 = v11[8];
            *(_OWORD *)((char *)v9 + 100) = v18;
            *(_OWORD *)((char *)v9 + 116) = v19;
            v20 = *(_DWORD *)v9;
            v21 = *(_DWORD *)v9 | 0x4000;
            *((_DWORD *)v9 - 1) = v8;
            *(_DWORD *)v9 = v21;
            if ( (v20 & 4) != 0 )
              *(_DWORD *)v9 = v20 | 0x4010;
            v11 = (_OWORD *)((char *)v11 + 152);
            *(_QWORD *)((char *)v9 + 36) = *(_QWORD *)((char *)v9 + 20);
            v9 += 18;
            --v10;
          }
          while ( v10 );
        }
        v22 = (void (__fastcall ***)(_QWORD, __int64, _DWORD *))*((_QWORD *)this + 99);
        LODWORD(v77[0]) |= 0x2000u;
        (**v22)(v22, v7, v76);
      }
      goto LABEL_15;
    }
    v39 = (const char *)*((unsigned int *)this + 12);
    v40 = 10 * (_DWORD)v39 + 1;
    if ( (unsigned int)((_DWORD)v39 - 1) > 3 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        904LL,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v39);
      __debugbreak();
    }
    if ( (_DWORD)v39 )
    {
      v41 = 1;
      while ( 1 )
      {
        v42 = (unsigned __int16)(v41 - 1);
        v43 = 152 * v42;
        v44 = 10 * v42;
        if ( (*((_BYTE *)this + 152 * v42 + 124) & 4) != 0 )
          break;
        v45 = 0;
        v46 = 0;
        if ( (*((_BYTE *)this + v43 + 124) & 2) == 0 )
          goto LABEL_35;
LABEL_36:
        if ( !v46 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            912LL,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v39);
          __debugbreak();
        }
        v47 = 100 * v45;
        v58 = *(_DWORD *)((char *)this + v43 + 116);
        v48 = v45 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
        v49 = v45 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
        if ( *((_DWORD *)this + 22) == 1 )
          v50 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                         this,
                                         (struct tagPOINT)&v75,
                                         *(_QWORD *)((char *)this + v43 + 144));
        else
          v50 = *(struct tagPOINT *)((char *)this + v43 + 152);
        HIDWORD(v59) = v50.x;
        HIDWORD(v61) = v50.y;
        HIDWORD(v67) = v47;
        LODWORD(v59) = 3145729;
        v51 = 3LL * v44;
        *(_QWORD *)&v76[v51] = v59;
        LOWORD(v60) = v41;
        v76[v51 + 2] = v60;
        LODWORD(v61) = 3211265;
        *(_QWORD *)((char *)v77 + 4 * v51) = v61;
        LOWORD(v62) = v41;
        *((_DWORD *)&v77[1] + v51) = v62;
        LODWORD(v63) = 4325389;
        HIDWORD(v63) = v45;
        *(_QWORD *)((char *)&v77[1] + 4 * v51 + 4) = v63;
        LOWORD(v64) = v41;
        *((_DWORD *)&v77[2] + v51 + 1) = v64;
        LODWORD(v65) = 3276813;
        HIDWORD(v65) = v45;
        *(_QWORD *)((char *)&v77[3] + 4 * v51) = v65;
        LOWORD(v66) = v41;
        *((_DWORD *)&v77[4] + v51) = v66;
        LODWORD(v67) = 3145741;
        *(_QWORD *)((char *)&v77[4] + 4 * v51 + 4) = v67;
        LOWORD(v68) = v41;
        *((_DWORD *)&v77[5] + v51 + 1) = v68;
        *(_QWORD *)((char *)&v77[6] + 4 * v51) = 0x10047000DLL;
        LOWORD(v69) = v41;
        *((_DWORD *)&v77[7] + v51) = v69;
        LODWORD(v70) = 4718605;
        HIDWORD(v70) = v48;
        *(_QWORD *)((char *)&v77[7] + 4 * v51 + 4) = v70;
        LOWORD(v71) = v41;
        *((_DWORD *)&v77[8] + v51 + 1) = v71;
        LODWORD(v72) = 4784141;
        HIDWORD(v72) = v49;
        *(_QWORD *)((char *)&v77[9] + 4 * v51) = v72;
        LOWORD(v73) = v41;
        *((_DWORD *)&v77[10] + v51) = v73;
        *(_QWORD *)((char *)&v77[10] + 4 * v51 + 4) = 4128781LL;
        LOWORD(v74) = v41;
        *((_DWORD *)&v77[11] + v51 + 1) = v74;
        HIDWORD(v55) = v58;
        LODWORD(v55) = 5308429;
        LOWORD(v57) = v41++;
        *(_QWORD *)((char *)&v77[12] + 4 * v51) = v55;
        *((_DWORD *)&v77[13] + v51) = v57;
        if ( (unsigned __int16)(v41 - 1) >= (unsigned int)v39 )
          goto LABEL_41;
      }
      v45 = 1;
LABEL_35:
      v46 = 1;
      goto LABEL_36;
    }
LABEL_41:
    HIDWORD(v56) = (unsigned __int16)v39;
    LODWORD(v56) = 5505037;
    LOWORD(v57) = 0;
    v52 = 3LL * (unsigned __int16)(10 * (_WORD)v39);
    *(_QWORD *)&v76[v52] = v56;
    v76[v52 + 2] = v57;
    if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v76, v40) )
    {
      v53 = GetLastError();
      if ( v53 )
      {
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          950LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)v53);
        __debugbreak();
      }
    }
  }
LABEL_15:
  for ( j = 0; j < *((_DWORD *)this + 12); ++j )
  {
    v24 = 152LL * j;
    if ( *(_DWORD *)((char *)this + v24 + 124) != 0x40000 )
    {
      if ( j != (_DWORD)v4 )
      {
        v25 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v25 + 104) = *(_OWORD *)((char *)this + v24 + 104);
        *(_OWORD *)(v25 + 120) = *(_OWORD *)((char *)this + v24 + 120);
        *(_OWORD *)(v25 + 136) = *(_OWORD *)((char *)this + v24 + 136);
        *(_OWORD *)(v25 + 152) = *(_OWORD *)((char *)this + v24 + 152);
        *(_OWORD *)(v25 + 168) = *(_OWORD *)((char *)this + v24 + 168);
        *(_OWORD *)(v25 + 184) = *(_OWORD *)((char *)this + v24 + 184);
        *(_OWORD *)(v25 + 200) = *(_OWORD *)((char *)this + v24 + 200);
        *(_OWORD *)(v25 + 216) = *(_OWORD *)((char *)this + v24 + 216);
        *(_OWORD *)(v25 + 232) = *(_OWORD *)((char *)this + v24 + 232);
        *((_QWORD *)v25 + 31) = *(_QWORD *)((char *)this + v24 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + j + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
  *((_DWORD *)this + 12) = v4;
}
