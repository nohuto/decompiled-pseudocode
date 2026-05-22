/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800B9D2C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800B8F18 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800B9190 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800B926C (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800B9370 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800B97D4 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800B9A20 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800B87A0 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800B9CB4 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  _OWORD *v8; // r8
  __int64 v9; // r10
  _OWORD *v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  unsigned int j; // r8d
  __int64 v20; // r10
  char *v21; // rcx
  __int64 v22; // rcx
  _OWORD *v23; // r8
  __int64 v24; // r10
  _OWORD *v25; // r9
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  DWORD v34; // eax
  __int64 v35; // r8
  const char *v36; // r9
  unsigned int v37; // r12d
  __int16 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int16 v41; // r10
  bool v42; // al
  char v43; // cl
  BOOL v44; // r11d
  int v45; // r13d
  int v46; // esi
  int v47; // r14d
  struct tagPOINT v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  DWORD v51; // eax
  __int64 v52; // r8
  DWORD LastError; // eax
  __int64 v54; // r8
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
  _QWORD v76[72]; // [rsp+E8h] [rbp-20h] BYREF
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
  switch ( *(_DWORD *)this )
  {
    case 1:
      if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
      {
        LastError = GetLastError();
        if ( LastError )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x37A, v54, (const char *)LastError);
          __debugbreak();
        }
      }
      break;
    case 2:
      v36 = (const char *)*((unsigned int *)this + 12);
      v37 = 10 * (_DWORD)v36 + 1;
      if ( (unsigned int)((_DWORD)v36 - 1) > 3 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x383,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v36);
        __debugbreak();
      }
      if ( (_DWORD)v36 )
      {
        v38 = 1;
        do
        {
          v39 = (unsigned __int16)(v38 - 1);
          v40 = 152 * v39;
          v41 = 10 * v39;
          v42 = (*((_DWORD *)this + 38 * v39 + 31) & 4) != 0;
          if ( (*((_DWORD *)this + 38 * v39 + 31) & 4) != 0 || (v43 = 0, (*((_BYTE *)this + v40 + 124) & 2) == 0) )
            v43 = 1;
          if ( !v43 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x38B,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              v36);
            JUMPOUT(0x1800BA3E2LL);
          }
          v44 = v42;
          v45 = 100 * v42;
          v58 = *(_DWORD *)((char *)this + v40 + 116);
          v46 = v42 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
          v47 = v42 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
          if ( *((_DWORD *)this + 22) == 1 )
            v48 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                           this,
                                           (struct tagPOINT)&v75,
                                           *(_QWORD *)((char *)this + v40 + 144));
          else
            v48 = *(struct tagPOINT *)((char *)this + v40 + 152);
          HIDWORD(v59) = v48.x;
          HIDWORD(v61) = v48.y;
          HIDWORD(v67) = v45;
          LODWORD(v59) = 3145729;
          v49 = 3LL * v41;
          *(_QWORD *)((char *)v76 + 4 * v49) = v59;
          LOWORD(v60) = v38;
          *((_DWORD *)&v76[1] + v49) = v60;
          LODWORD(v61) = 3211265;
          *(_QWORD *)((char *)&v76[1] + 4 * v49 + 4) = v61;
          LOWORD(v62) = v38;
          *((_DWORD *)&v76[2] + v49 + 1) = v62;
          LODWORD(v63) = 4325389;
          HIDWORD(v63) = v44;
          *(_QWORD *)((char *)&v76[3] + 4 * v49) = v63;
          LOWORD(v64) = v38;
          *((_DWORD *)&v76[4] + v49) = v64;
          LODWORD(v65) = 3276813;
          HIDWORD(v65) = v44;
          *(_QWORD *)((char *)&v76[4] + 4 * v49 + 4) = v65;
          LOWORD(v66) = v38;
          *((_DWORD *)&v76[5] + v49 + 1) = v66;
          LODWORD(v67) = 3145741;
          *(_QWORD *)((char *)&v76[6] + 4 * v49) = v67;
          LOWORD(v68) = v38;
          *((_DWORD *)&v76[7] + v49) = v68;
          *(_QWORD *)((char *)&v76[7] + 4 * v49 + 4) = 0x10047000DLL;
          LOWORD(v69) = v38;
          *((_DWORD *)&v76[8] + v49 + 1) = v69;
          LODWORD(v70) = 4718605;
          HIDWORD(v70) = v46;
          *(_QWORD *)((char *)&v76[9] + 4 * v49) = v70;
          LOWORD(v71) = v38;
          *((_DWORD *)&v76[10] + v49) = v71;
          LODWORD(v72) = 4784141;
          HIDWORD(v72) = v47;
          *(_QWORD *)((char *)&v76[10] + 4 * v49 + 4) = v72;
          LOWORD(v73) = v38;
          *((_DWORD *)&v76[11] + v49 + 1) = v73;
          *(_QWORD *)((char *)&v76[12] + 4 * v49) = 4128781LL;
          LOWORD(v74) = v38;
          *((_DWORD *)&v76[13] + v49) = v74;
          HIDWORD(v55) = v58;
          LODWORD(v55) = 5308429;
          LOWORD(v57) = v38++;
          *(_QWORD *)((char *)&v76[13] + 4 * v49 + 4) = v55;
          *((_DWORD *)&v76[14] + v49 + 1) = v57;
        }
        while ( (unsigned __int16)(v38 - 1) < (unsigned int)v36 );
      }
      HIDWORD(v56) = (unsigned __int16)v36;
      LODWORD(v56) = 5505037;
      LOWORD(v57) = 0;
      v50 = 3LL * (unsigned __int16)(10 * (_WORD)v36);
      *(_QWORD *)((char *)v76 + 4 * v50) = v56;
      *((_DWORD *)&v76[1] + v50) = v57;
      if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v76, v37) )
      {
        v51 = GetLastError();
        if ( v51 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x3B1, v52, (const char *)v51);
          __debugbreak();
        }
      }
      break;
    case 3:
      v22 = *((unsigned int *)this + 12);
      if ( (_DWORD)v22 )
      {
        v23 = v76;
        v24 = (unsigned int)v22;
        v25 = (_OWORD *)((char *)this + 112);
        do
        {
          v26 = v25[1];
          *v23 = *v25;
          v27 = v25[2];
          v23[1] = v26;
          v28 = v25[3];
          v23[2] = v27;
          v29 = v25[4];
          v23[3] = v28;
          v30 = v25[5];
          v23[4] = v29;
          v31 = v25[6];
          v23[5] = v30;
          v32 = v25[7];
          v23[6] = v31;
          v33 = v25[8];
          v25 = (_OWORD *)((char *)v25 + 152);
          v23[7] = v32;
          v23[8] = v33;
          v23 += 9;
          --v24;
        }
        while ( v24 );
      }
      if ( !(unsigned int)InjectTouchInput(v22, v76) )
      {
        v34 = GetLastError();
        if ( v34 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x3C1, v35, (const char *)v34);
          __debugbreak();
        }
      }
      break;
    case 4:
      v7 = *((unsigned int *)this + 12);
      if ( (_DWORD)v7 )
      {
        v8 = v76;
        v9 = (unsigned int)v7;
        v10 = (_OWORD *)((char *)this + 112);
        do
        {
          v11 = v10[1];
          *v8 = *v10;
          v12 = v10[2];
          v8[1] = v11;
          v13 = v10[3];
          v8[2] = v12;
          v14 = v10[4];
          v8[3] = v13;
          v15 = v10[5];
          v8[4] = v14;
          v16 = v10[6];
          v8[5] = v15;
          v17 = v10[7];
          v8[6] = v16;
          v18 = v10[8];
          v10 = (_OWORD *)((char *)v10 + 152);
          v8[7] = v17;
          v8[8] = v18;
          v8 += 9;
          --v9;
        }
        while ( v9 );
      }
      (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))this + 99))(*((_QWORD *)this + 99), v7, v76);
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3D5,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
  }
  for ( j = 0; j < *((_DWORD *)this + 12); ++j )
  {
    v20 = 152LL * j;
    if ( *(_DWORD *)((char *)this + v20 + 124) != 0x40000 )
    {
      if ( j != (_DWORD)v4 )
      {
        v21 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v21 + 104) = *(_OWORD *)((char *)this + v20 + 104);
        *(_OWORD *)(v21 + 120) = *(_OWORD *)((char *)this + v20 + 120);
        *(_OWORD *)(v21 + 136) = *(_OWORD *)((char *)this + v20 + 136);
        *(_OWORD *)(v21 + 152) = *(_OWORD *)((char *)this + v20 + 152);
        *(_OWORD *)(v21 + 168) = *(_OWORD *)((char *)this + v20 + 168);
        *(_OWORD *)(v21 + 184) = *(_OWORD *)((char *)this + v20 + 184);
        *(_OWORD *)(v21 + 200) = *(_OWORD *)((char *)this + v20 + 200);
        *(_OWORD *)(v21 + 216) = *(_OWORD *)((char *)this + v20 + 216);
        *(_OWORD *)(v21 + 232) = *(_OWORD *)((char *)this + v20 + 232);
        *((_QWORD *)v21 + 31) = *(_QWORD *)((char *)this + v20 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + j + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
  *((_DWORD *)this + 12) = v4;
}
