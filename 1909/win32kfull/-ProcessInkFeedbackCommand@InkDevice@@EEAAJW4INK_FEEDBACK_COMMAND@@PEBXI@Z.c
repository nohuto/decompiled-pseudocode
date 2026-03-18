/*
 * XREFs of ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0251590
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C024F124 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C024F590 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C024F5B8 (-IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C0250040 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C02505C4 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C0250924 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02522E0 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::ProcessInkFeedbackCommand(__int64 a1, int a2, __int64 a3, int a4)
{
  int v6; // edi
  const CHAR *v7; // rdx
  char v8; // r10
  const CHAR *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 ThreadWin32Thread; // rax
  int v14; // eax
  unsigned int v15; // r9d
  const CHAR *v16; // rdx
  int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+31h] [rbp-CFh] BYREF
  char v27; // [rsp+32h] [rbp-CEh] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  int v38; // [rsp+5Ch] [rbp-A4h] BYREF
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+6Ch] [rbp-94h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+88h] [rbp-78h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v49; // [rsp+A0h] [rbp-60h] BYREF
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  const char *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int64 v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  char *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  __int64 v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  __int64 v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  __int64 v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  __int64 v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h]
  __int64 v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  __int64 v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1D8h] [rbp+D8h]
  __int64 v85; // [rsp+1E0h] [rbp+E0h]
  __int64 v86; // [rsp+1E8h] [rbp+E8h]
  __int64 v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+200h] [rbp+100h]
  __int64 v90; // [rsp+208h] [rbp+108h]
  __int64 v91; // [rsp+210h] [rbp+110h]
  __int64 v92; // [rsp+218h] [rbp+118h]
  int *v93; // [rsp+220h] [rbp+120h]
  __int64 v94; // [rsp+228h] [rbp+128h]
  int *v95; // [rsp+230h] [rbp+130h]
  __int64 v96; // [rsp+238h] [rbp+138h]
  int *v97; // [rsp+240h] [rbp+140h]
  __int64 v98; // [rsp+248h] [rbp+148h]
  EVENT_DATA_DESCRIPTOR v99; // [rsp+250h] [rbp+150h] BYREF
  int *v100; // [rsp+270h] [rbp+170h]
  __int64 v101; // [rsp+278h] [rbp+178h]
  const char *v102; // [rsp+280h] [rbp+180h]
  __int64 v103; // [rsp+288h] [rbp+188h]
  __int64 v104; // [rsp+290h] [rbp+190h]
  __int64 v105; // [rsp+298h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR v106; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v107; // [rsp+2C0h] [rbp+1C0h]
  __int64 v108; // [rsp+2C8h] [rbp+1C8h]
  const char *v109; // [rsp+2D0h] [rbp+1D0h]
  __int64 v110; // [rsp+2D8h] [rbp+1D8h]
  int *v111; // [rsp+2E0h] [rbp+1E0h]
  __int64 v112; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v113; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v114; // [rsp+310h] [rbp+210h]
  __int64 v115; // [rsp+318h] [rbp+218h]
  const char *v116; // [rsp+320h] [rbp+220h]
  __int64 v117; // [rsp+328h] [rbp+228h]
  __int64 v118; // [rsp+330h] [rbp+230h]
  __int64 v119; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR v120; // [rsp+340h] [rbp+240h] BYREF
  int *v121; // [rsp+360h] [rbp+260h]
  __int64 v122; // [rsp+368h] [rbp+268h]
  const char *v123; // [rsp+370h] [rbp+270h]
  __int64 v124; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+380h] [rbp+280h] BYREF
  __int64 *v126; // [rsp+390h] [rbp+290h]
  __int64 v127; // [rsp+398h] [rbp+298h]
  char *v128; // [rsp+3A0h] [rbp+2A0h]
  __int64 v129; // [rsp+3A8h] [rbp+2A8h]
  EVENT_DATA_DESCRIPTOR v130; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v131; // [rsp+3D0h] [rbp+2D0h]
  __int64 v132; // [rsp+3D8h] [rbp+2D8h]
  const char *v133; // [rsp+3E0h] [rbp+2E0h]
  __int64 v134; // [rsp+3E8h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 *v136; // [rsp+400h] [rbp+300h]
  __int64 v137; // [rsp+408h] [rbp+308h]
  __int64 v138; // [rsp+410h] [rbp+310h]
  __int64 v139; // [rsp+418h] [rbp+318h]
  EVENT_DATA_DESCRIPTOR v140; // [rsp+420h] [rbp+320h] BYREF
  int *v141; // [rsp+440h] [rbp+340h]
  int v142; // [rsp+448h] [rbp+348h]
  int v143; // [rsp+44Ch] [rbp+34Ch]
  const char *v144; // [rsp+450h] [rbp+350h]
  int v145; // [rsp+458h] [rbp+358h]
  int v146; // [rsp+45Ch] [rbp+35Ch]
  EVENT_DATA_DESCRIPTOR v147; // [rsp+460h] [rbp+360h] BYREF
  int *v148; // [rsp+480h] [rbp+380h]
  __int64 v149; // [rsp+488h] [rbp+388h]
  const char *v150; // [rsp+490h] [rbp+390h]
  __int64 v151; // [rsp+498h] [rbp+398h]
  EVENT_DATA_DESCRIPTOR v152; // [rsp+4A0h] [rbp+3A0h] BYREF
  int *v153; // [rsp+4C0h] [rbp+3C0h]
  __int64 v154; // [rsp+4C8h] [rbp+3C8h]
  const char *v155; // [rsp+4D0h] [rbp+3D0h]
  __int64 v156; // [rsp+4D8h] [rbp+3D8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4E0h] [rbp+3E0h] BYREF
  int *v158; // [rsp+500h] [rbp+400h]
  __int64 v159; // [rsp+508h] [rbp+408h]
  EVENT_DATA_DESCRIPTOR v160; // [rsp+510h] [rbp+410h] BYREF
  int *v161; // [rsp+530h] [rbp+430h]
  __int64 v162; // [rsp+538h] [rbp+438h]
  EVENT_DATA_DESCRIPTOR v163; // [rsp+540h] [rbp+440h] BYREF
  int *v164; // [rsp+560h] [rbp+460h]
  __int64 v165; // [rsp+568h] [rbp+468h]
  EVENT_DATA_DESCRIPTOR v166; // [rsp+570h] [rbp+470h] BYREF
  int *v167; // [rsp+590h] [rbp+490h]
  __int64 v168; // [rsp+598h] [rbp+498h]

  if ( *(_BYTE *)(a1 - 20) )
  {
    if ( a2 == 1 )
    {
      if ( a4 == 64 )
      {
        v15 = dword_1C031F298;
        if ( dword_1C031F298 > 4u )
        {
          v16 = *(const CHAR **)(a1 + 48);
          v50 = &v35;
          v35 = 0;
          v52 = "Processing ink feedback command: IFC_SUPERWET_INK_START...";
          v51 = 4LL;
          v53 = 59LL;
          TlgCreateSz(&v54, v16);
          v56 = 8LL;
          v57 = a3;
          v17 = *(_DWORD *)(a3 + 60);
          v58 = 4LL;
          v60 = 1LL;
          v48 = a1 & -(__int64)(a1 != 32);
          v55 = &v48;
          v26 = *(_BYTE *)(a3 + 4);
          v59 = &v26;
          v61 = a3 + 8;
          v63 = a3 + 9;
          v65 = a3 + 10;
          v67 = a3 + 11;
          v69 = a3 + 12;
          v27 = *(_BYTE *)(a3 + 16);
          v71 = &v27;
          v73 = a3 + 20;
          v75 = a3 + 24;
          v77 = a3 + 28;
          v79 = a3 + 32;
          v81 = a3 + 36;
          v83 = a3 + 40;
          v85 = a3 + 44;
          v87 = a3 + 48;
          v89 = a3 + 52;
          v91 = a3 + 56;
          v62 = 1LL;
          v64 = 1LL;
          v36 = -(v17 & 1);
          v66 = 1LL;
          v68 = 1LL;
          v70 = 4LL;
          v72 = 1LL;
          v74 = 4LL;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v88 = 4LL;
          v90 = 4LL;
          v92 = 4LL;
          v93 = &v36;
          v94 = 4LL;
          v96 = 4LL;
          v37 = -__CFSHR__(v17, 2);
          v95 = &v37;
          v97 = &v38;
          v38 = -__CFSHR__(v17, 3);
          v98 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8B0E, 0LL, 0LL, 0x1Bu, &v49);
          v15 = dword_1C031F298;
        }
        v18 = *(_DWORD *)(a1 + 40);
        if ( v18 < *(_DWORD *)(a1 + 108) )
        {
          if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 1, *(_DWORD *)a3) )
          {
            v6 = -1073741823;
            if ( v20 > 2 )
            {
              v41 = -1073741823;
              v114 = &v41;
              v116 = "The specified pointer id already has an active IFC_SUPERWET_INK_START command";
              v115 = 4LL;
              v117 = 78LL;
              v118 = a3;
              v119 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E892C, 0LL, 0LL, 5u, &v113);
            }
          }
          else
          {
            v21 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), v19);
            v6 = v21;
            if ( v21 >= 0 )
            {
              if ( IsSuperWetInkStartDataSupported(*(_DWORD *)(a1 + 116), a3) )
              {
                v22 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
                v23 = v22;
                if ( v22 )
                {
                  v22[2] = 0LL;
                  v22[3] = 0LL;
                  v22[1] = 0LL;
                  *v22 = 0LL;
                }
                else
                {
                  v23 = 0LL;
                }
                if ( v23 )
                {
                  *((_DWORD *)v23 + 4) = 1;
                  *((_DWORD *)v23 + 5) = *(_DWORD *)a3;
                  v23[3] = KeGetCurrentThread();
                  v6 = InkDevice::DoSuperWetInkStart(
                         (InkDevice *)(a1 - 32),
                         (const struct IFC_SUPERWET_INK_START_DATA *)a3);
                  if ( v6 < 0 )
                    Win32FreePool(v23);
                  else
                    InkFeedbackProviderBase::AddActiveCommand(
                      (InkFeedbackProviderBase *)a1,
                      (struct InkFeedbackProviderBase::ActiveCommand *)v23);
                }
                else
                {
                  v6 = -1073741801;
                  if ( dword_1C031F298 > 2u )
                  {
                    v44 = -1073741801;
                    v167 = &v44;
                    v168 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &v166);
                  }
                }
              }
              else
              {
                v6 = -1073741637;
                if ( dword_1C031F298 > 2u )
                {
                  v43 = -1073741637;
                  v153 = &v43;
                  v155 = "Super-wet ink not supported for the specified drawing attributes";
                  v154 = 4LL;
                  v156 = 65LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &v152);
                }
              }
            }
            else if ( dword_1C031F298 > 2u )
            {
              v42 = v21;
              v148 = &v42;
              v150 = "ValidatePointer failed";
              v149 = 4LL;
              v151 = 23LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &v147);
            }
          }
        }
        else
        {
          v6 = -1073741823;
          if ( v15 > 2 )
          {
            v39 = -1073741823;
            v107 = &v39;
            v109 = "Too many active commands";
            v111 = (int *)&v40;
            v108 = 4LL;
            v110 = 25LL;
            v40 = v18;
            v112 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8CA7, 0LL, 0LL, 5u, &v106);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( dword_1C031F298 > 2u )
        {
          v34 = -1073741811;
          v164 = &v34;
          v165 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &v163);
        }
      }
    }
    else if ( a2 == 2 )
    {
      if ( a4 == 4 )
      {
        if ( dword_1C031F298 > 4u )
        {
          v9 = *(const CHAR **)(a1 + 48);
          v131 = &v31;
          v31 = 0;
          v133 = "Processing ink feedback command: IFC_SUPERWET_INK_STOP...";
          v132 = 4LL;
          v134 = 58LL;
          TlgCreateSz(&v135, v9);
          v137 = 8LL;
          v138 = a3;
          v139 = 4LL;
          v46 = a1 & -(__int64)(a1 != 32);
          v136 = &v46;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8969, 0LL, 0LL, 7u, &v130);
        }
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                            a1,
                                                                                            1,
                                                                                            *(_DWORD *)a3);
        if ( ActiveCommandByTargetPointerId )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
          if ( (unsigned int)IsProcessDwm(**(_QWORD **)(ThreadWin32Thread + 416))
            || (v14 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), *(_DWORD *)a3), v6 = v14, v14 >= 0) )
          {
            v6 = InkDevice::DoSuperWetInkStop((InkDevice *)(a1 - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)a3);
            InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
              (InkFeedbackProviderBase *)a1,
              &ActiveCommandByTargetPointerId);
          }
          else if ( dword_1C031F298 > 2u )
          {
            v143 = 0;
            v146 = 0;
            v33 = v14;
            v141 = &v33;
            v144 = "ValidatePointer failed";
            v142 = 4;
            v145 = 23;
            TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &v140);
          }
        }
        else
        {
          v6 = -1073741823;
          if ( v12 > 2 )
          {
            v32 = -1073741823;
            v100 = &v32;
            v102 = "Active IFC_SUPERWET_INK_START command not found for the specified pointer id";
            v101 = 4LL;
            v103 = 77LL;
            v104 = a3;
            v105 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E892C, 0LL, 0LL, 5u, &v99);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( dword_1C031F298 > 2u )
        {
          v30 = -1073741811;
          v161 = &v30;
          v162 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &v160);
        }
      }
    }
    else
    {
      v6 = -1073741637;
      if ( dword_1C031F298 > 2u )
      {
        v7 = *(const CHAR **)(a1 + 48);
        v29 = -1073741637;
        v121 = &v29;
        v123 = "Unsupported command";
        v122 = 4LL;
        v124 = 20LL;
        TlgCreateSz(&pDesc, v7);
        v127 = 8LL;
        v25 = v8;
        v129 = 1LL;
        v45 = a1 & -(__int64)(a1 != 32);
        v126 = &v45;
        v128 = &v25;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E88CE, 0LL, 0LL, 7u, &v120);
      }
    }
  }
  else
  {
    v6 = -1073741823;
    if ( dword_1C031F298 > 2u )
    {
      v28 = -1073741823;
      v158 = &v28;
      v159 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
    }
  }
  return (unsigned int)v6;
}
