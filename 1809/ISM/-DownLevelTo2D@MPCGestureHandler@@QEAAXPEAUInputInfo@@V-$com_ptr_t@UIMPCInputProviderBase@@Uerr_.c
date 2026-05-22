/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004D520 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z @ 0x18004EC20 (-MPCGestureHandler_StartZoom_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z @ 0x18004ED04 (-MPCGestureHandler_StartScroll_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z @ 0x18004EDE8 (-MPCGestureHandler_InjectRelease_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x18004EECC (-MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x180050134 (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800B8E48 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800B8EB0 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800B8F18 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800B9190 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800B9370 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800B9A20 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800B9D2C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800BA560 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800BA61C (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCGestureHandler::DownLevelTo2D(__int64 a1, __int64 a2, struct tagPOINT *a3)
{
  char v6; // r15
  MPCSpatialGestureRecognizerHandler *v7; // rcx
  LONG v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rsi
  int v11; // eax
  int v12; // r11d
  int v13; // ebx
  _DWORD *v14; // rcx
  ISMTracing *v15; // rcx
  ManipulationInjector *v16; // rcx
  unsigned int v17; // eax
  int v18; // esi
  _DWORD *v19; // rcx
  ISMTracing *v20; // rcx
  __int64 v21; // rcx
  struct tagPOINT v22; // rcx
  struct tagPOINT v23; // rcx
  __int64 v24; // rax
  float v25; // xmm2_4
  __int64 v26; // rcx
  int v27; // eax
  int v28; // ebx
  _DWORD *v29; // rcx
  ISMTracing *v30; // rcx
  struct MPCHolographicInputManager *Instance; // rax
  const char *v32; // r9
  int v33; // ebx
  _DWORD *v34; // rcx
  ISMTracing *v35; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct tagPOINT v37; // [rsp+80h] [rbp+40h] BYREF
  LARGE_INTEGER Frequency; // [rsp+88h] [rbp+48h] BYREF
  struct tagPOINT *v39; // [rsp+90h] [rbp+50h]

  v39 = a3;
  if ( (*(_DWORD *)(a2 + 1136) == *(_DWORD *)(a1 + 904) || *(_DWORD *)(a2 + 1096) == 2)
    && ((*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) != 0 || *(_BYTE *)(a2 + 912))
    && (!(*(unsigned __int8 (__fastcall **)(struct tagPOINT))(**(_QWORD **)a3 + 152LL))(*a3)
     || (*(unsigned __int8 (__fastcall **)(struct tagPOINT))(**(_QWORD **)a3 + 160LL))(*a3)) )
  {
    v6 = 1;
    if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) == 1 || *(_DWORD *)(a1 + 904) )
    {
      v7 = *(MPCSpatialGestureRecognizerHandler **)(a1 + 896);
      if ( v7 )
        MPCSpatialGestureRecognizerHandler::FeedRecognizer(v7, (struct InputInfo *)a2);
      v37 = 0LL;
      v8 = (int)*(float *)(a2 + 1112);
      v37.x = v8;
      v37.y = (int)*(float *)(a2 + 1116);
      v9 = (*(__int64 (__fastcall **)(struct tagPOINT))(**(_QWORD **)a3 + 88LL))(*a3);
      v10 = a1 + 80;
      v11 = *(_DWORD *)(a1 + 168);
      if ( (v11 & 0xFFFFFF7F) == 0 )
        *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 1120);
      switch ( *(_DWORD *)(a2 + 1096) )
      {
        case 1:
          if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9) )
          {
            ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), &v37, v9);
            *(_BYTE *)(a1 + 964) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9);
            Instance = MPCHolographicInputManager::GetInstance();
            if ( !*((_BYTE *)Instance + 1872) )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x5B,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
                v32);
              __debugbreak();
            }
            (*(void (__fastcall **)(_QWORD, struct tagPOINT))(**((_QWORD **)Instance + 236) + 64LL))(
              *((_QWORD *)Instance + 236),
              v37);
            v33 = *(_DWORD *)(a1 + 904);
            v34 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
            if ( v34 && *v34 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCGestureHandler_InjectPress_(v35, v8, v37.y, v9, v33);
            }
          }
          break;
        case 2:
          if ( *(_DWORD *)(a1 + 128) == 1 && v11 == 64 )
          {
            Frequency = *(LARGE_INTEGER *)(a1 + 224);
            ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), (struct tagPOINT *)&Frequency, v9);
            *(_BYTE *)(a1 + 964) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9);
          }
          if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9)
            && *(_DWORD *)(a1 + 168) == 1 )
          {
            QueryPerformanceFrequency(&Frequency);
            v24 = *(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 936);
            v25 = (float)(int)v24;
            if ( v24 < 0 )
              v25 = v25 + 1.8446744e19;
            *(float *)(a1 + 948) = *(float *)(a1 + 944) / (float)(v25 / (float)(int)Frequency.LowPart);
          }
          ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 80), v9);
          if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 )
          {
            v26 = *(_QWORD *)(a1 + 896);
            if ( v26 )
            {
              v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 16) + 280LL))(*(_QWORD *)(v26 + 16));
              if ( v27 < 0 )
              {
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x2B1,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgestu"
                           "rerecognizerhandler.cpp",
                  (const char *)(unsigned int)v27);
                JUMPOUT(0x18004DB7ALL);
              }
            }
          }
          v28 = *(_DWORD *)(a1 + 904);
          v29 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
          if ( v29 && *v29 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCGestureHandler_InjectRelease_(v30, v8, v37.y, v9, v28);
          }
          break;
        case 3:
          *(_DWORD *)(a2 + 1096) = 1;
          Frequency.QuadPart = (LONGLONG)&v37;
          v22 = *a3;
          v37 = v22;
          if ( v22 )
            (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v22 + 8LL))(v22);
          MPCGestureHandler::DownLevelTo2D(a1, a2, &v37);
          *(_DWORD *)(a2 + 1096) = 2;
          Frequency.QuadPart = (LONGLONG)&v37;
          v23 = *a3;
          v37 = v23;
          if ( v23 )
            (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v23 + 8LL))(v23);
          MPCGestureHandler::DownLevelTo2D(a1, a2, &v37);
          break;
        case 4:
          if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9)
            && !*(_BYTE *)(a2 + 1140) )
          {
            if ( *(_BYTE *)(a1 + 94) )
            {
              if ( *(_BYTE *)(a1 + 93) )
                DbgPrint("Hover pt: %d,%d\n", v8, v37.y);
              if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 )
              {
                if ( *(_DWORD *)(a1 + 168) == 128 )
                {
                  if ( *(_DWORD *)(a1 + 792) == v9 )
                  {
                    ManipulationInjector::UpdateContact((ManipulationInjector *)(a1 + 80), v37, 1, v9);
                    ManipulationInjector::InjectAndScrub((ManipulationInjector *)(a1 + 80));
                  }
                }
                else
                {
                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ManipulationInjector::StartManipulation)(
                    a1 + 80,
                    128LL,
                    v37,
                    v9);
                }
              }
            }
            v21 = 0LL;
            if ( *(_DWORD *)(a1 + 128) )
            {
              while ( *(_DWORD *)(v10 + 4 * v21 + 712) != v9 || *(_DWORD *)(152LL * (unsigned int)v21 + v10 + 124) != 2 )
              {
                v21 = (unsigned int)(v21 + 1);
                if ( (unsigned int)v21 >= *(_DWORD *)(a1 + 128) )
                  goto LABEL_56;
              }
            }
            else
            {
LABEL_56:
              v6 = 0;
            }
            *(_BYTE *)(a1 + 964) = v6;
          }
          break;
        case 5:
          if ( *(_DWORD *)(a2 + 628) )
          {
            v16 = (ManipulationInjector *)(a1 + 80);
            if ( v11 == 1 )
            {
              if ( ManipulationInjector::IsInContactForDeviceId(v16, v9) )
              {
                *(_DWORD *)(a1 + 952) = *(_DWORD *)(a2 + 1100);
                *(_DWORD *)(a1 + 956) = *(_DWORD *)(a2 + 1104);
              }
            }
            else
            {
              ManipulationInjector::StartPan(v16, &v37, v9);
              if ( *(_DWORD *)(a1 + 168) == 1 )
              {
                v17 = (*(__int64 (__fastcall **)(struct tagPOINT))(**(_QWORD **)a3 + 88LL))(*a3);
                ManipulationInjector::InjectPan(
                  (ManipulationInjector *)(a1 + 80),
                  *(float *)(a2 + 1100),
                  *(float *)(a2 + 1104),
                  v17);
                *(_BYTE *)(a1 + 964) = ManipulationInjector::IsInContactForDeviceId(
                                         (ManipulationInjector *)(a1 + 80),
                                         v9);
              }
              v18 = *(_DWORD *)(a1 + 904);
              v19 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
              if ( v19 && *v19 )
              {
                ISMTracing::Instance();
                ISMTracing::MPCGestureHandler_StartScroll_(v20, v8, v37.y, v9, v18);
              }
            }
          }
          if ( *(_BYTE *)(a1 + 964) )
          {
            *(_QWORD *)(a1 + 936) = *(_QWORD *)(a2 + 16);
            *(_DWORD *)(a1 + 944) = 0;
            *(_DWORD *)(a1 + 948) = 0;
          }
          break;
        case 6:
          if ( *(_DWORD *)(a2 + 628) )
          {
            if ( (v11 & 0xFFFFFF7F) == 0 || *(_DWORD *)(a1 + 128) == 1 && v11 == 64 )
            {
              ManipulationInjector::StartZoom((ManipulationInjector *)(a1 + 80), &v37, 1, v9);
              *(_BYTE *)(a1 + 964) = (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) != 0;
              v13 = *(_DWORD *)(a1 + 904);
              v14 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
              if ( v14 && *v14 )
              {
                ISMTracing::Instance();
                ISMTracing::MPCGestureHandler_StartZoom_(v15, v8, v37.y, v9, v13);
              }
            }
            else if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9)
                   && ((v12 - 16) & 0xFFFFFFEF) == 0 )
            {
              *(_DWORD *)(a1 + 960) = *(_DWORD *)(a2 + 1108);
            }
          }
          break;
        case 7:
          ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), &v37, v9);
          *(_BYTE *)(a1 + 964) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v9);
          break;
      }
    }
  }
  if ( *a3 )
    (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)a3 + 16LL))(*a3);
}
