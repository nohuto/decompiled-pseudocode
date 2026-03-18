/*
 * XREFs of ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0239040
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C0236C04 (-AddActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z.c)
 *     ?FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDBACK_COMMAND@@I@Z @ 0x1C0237040 (-FindActiveCommandByTargetPointerId@InkFeedbackProviderBase@@IEBAPEAVActiveCommand@1@W4INK_FEEDB.c)
 *     ?IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0237068 (-IsSuperWetInkStartDataSupported@@YA_NW4InkFeedbackCapabilities@@PEBUIFC_SUPERWET_INK_START_DATA.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C0237AF0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0238074 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C02383D4 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0239D90 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::ProcessInkFeedbackCommand(__int64 a1, int a2, __int64 a3, int a4)
{
  int v6; // edi
  const CHAR *v7; // rdx
  char v8; // r10
  const CHAR *v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 ThreadWin32Thread; // rax
  int v13; // eax
  unsigned int v14; // r9d
  const CHAR *v15; // rdx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  int v20; // eax
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+31h] [rbp-CFh] BYREF
  char v26; // [rsp+32h] [rbp-CEh] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  int v38; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+6Ch] [rbp-94h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *ActiveCommandByTargetPointerId; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v48; // [rsp+A0h] [rbp-60h] BYREF
  int *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  const char *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  char *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  __int64 v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  __int64 v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  char *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  __int64 v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  __int64 v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  __int64 v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  __int64 v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  __int64 v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h]
  __int64 v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]
  __int64 v84; // [rsp+1E0h] [rbp+E0h]
  __int64 v85; // [rsp+1E8h] [rbp+E8h]
  __int64 v86; // [rsp+1F0h] [rbp+F0h]
  __int64 v87; // [rsp+1F8h] [rbp+F8h]
  __int64 v88; // [rsp+200h] [rbp+100h]
  __int64 v89; // [rsp+208h] [rbp+108h]
  __int64 v90; // [rsp+210h] [rbp+110h]
  __int64 v91; // [rsp+218h] [rbp+118h]
  int *v92; // [rsp+220h] [rbp+120h]
  __int64 v93; // [rsp+228h] [rbp+128h]
  int *v94; // [rsp+230h] [rbp+130h]
  __int64 v95; // [rsp+238h] [rbp+138h]
  int *v96; // [rsp+240h] [rbp+140h]
  __int64 v97; // [rsp+248h] [rbp+148h]
  EVENT_DATA_DESCRIPTOR v98; // [rsp+250h] [rbp+150h] BYREF
  int *v99; // [rsp+270h] [rbp+170h]
  __int64 v100; // [rsp+278h] [rbp+178h]
  const char *v101; // [rsp+280h] [rbp+180h]
  __int64 v102; // [rsp+288h] [rbp+188h]
  __int64 v103; // [rsp+290h] [rbp+190h]
  __int64 v104; // [rsp+298h] [rbp+198h]
  EVENT_DATA_DESCRIPTOR v105; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v106; // [rsp+2C0h] [rbp+1C0h]
  __int64 v107; // [rsp+2C8h] [rbp+1C8h]
  const char *v108; // [rsp+2D0h] [rbp+1D0h]
  __int64 v109; // [rsp+2D8h] [rbp+1D8h]
  int *v110; // [rsp+2E0h] [rbp+1E0h]
  __int64 v111; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v112; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v113; // [rsp+310h] [rbp+210h]
  __int64 v114; // [rsp+318h] [rbp+218h]
  const char *v115; // [rsp+320h] [rbp+220h]
  __int64 v116; // [rsp+328h] [rbp+228h]
  __int64 v117; // [rsp+330h] [rbp+230h]
  __int64 v118; // [rsp+338h] [rbp+238h]
  EVENT_DATA_DESCRIPTOR v119; // [rsp+340h] [rbp+240h] BYREF
  int *v120; // [rsp+360h] [rbp+260h]
  __int64 v121; // [rsp+368h] [rbp+268h]
  const char *v122; // [rsp+370h] [rbp+270h]
  __int64 v123; // [rsp+378h] [rbp+278h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+380h] [rbp+280h] BYREF
  __int64 *v125; // [rsp+390h] [rbp+290h]
  __int64 v126; // [rsp+398h] [rbp+298h]
  char *v127; // [rsp+3A0h] [rbp+2A0h]
  __int64 v128; // [rsp+3A8h] [rbp+2A8h]
  EVENT_DATA_DESCRIPTOR v129; // [rsp+3B0h] [rbp+2B0h] BYREF
  int *v130; // [rsp+3D0h] [rbp+2D0h]
  __int64 v131; // [rsp+3D8h] [rbp+2D8h]
  const char *v132; // [rsp+3E0h] [rbp+2E0h]
  __int64 v133; // [rsp+3E8h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 *v135; // [rsp+400h] [rbp+300h]
  __int64 v136; // [rsp+408h] [rbp+308h]
  __int64 v137; // [rsp+410h] [rbp+310h]
  __int64 v138; // [rsp+418h] [rbp+318h]
  EVENT_DATA_DESCRIPTOR v139; // [rsp+420h] [rbp+320h] BYREF
  int *v140; // [rsp+440h] [rbp+340h]
  int v141; // [rsp+448h] [rbp+348h]
  int v142; // [rsp+44Ch] [rbp+34Ch]
  const char *v143; // [rsp+450h] [rbp+350h]
  int v144; // [rsp+458h] [rbp+358h]
  int v145; // [rsp+45Ch] [rbp+35Ch]
  EVENT_DATA_DESCRIPTOR v146; // [rsp+460h] [rbp+360h] BYREF
  int *v147; // [rsp+480h] [rbp+380h]
  __int64 v148; // [rsp+488h] [rbp+388h]
  const char *v149; // [rsp+490h] [rbp+390h]
  __int64 v150; // [rsp+498h] [rbp+398h]
  EVENT_DATA_DESCRIPTOR v151; // [rsp+4A0h] [rbp+3A0h] BYREF
  int *v152; // [rsp+4C0h] [rbp+3C0h]
  __int64 v153; // [rsp+4C8h] [rbp+3C8h]
  const char *v154; // [rsp+4D0h] [rbp+3D0h]
  __int64 v155; // [rsp+4D8h] [rbp+3D8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4E0h] [rbp+3E0h] BYREF
  int *v157; // [rsp+500h] [rbp+400h]
  __int64 v158; // [rsp+508h] [rbp+408h]
  EVENT_DATA_DESCRIPTOR v159; // [rsp+510h] [rbp+410h] BYREF
  int *v160; // [rsp+530h] [rbp+430h]
  __int64 v161; // [rsp+538h] [rbp+438h]
  EVENT_DATA_DESCRIPTOR v162; // [rsp+540h] [rbp+440h] BYREF
  int *v163; // [rsp+560h] [rbp+460h]
  __int64 v164; // [rsp+568h] [rbp+468h]
  EVENT_DATA_DESCRIPTOR v165; // [rsp+570h] [rbp+470h] BYREF
  int *v166; // [rsp+590h] [rbp+490h]
  __int64 v167; // [rsp+598h] [rbp+498h]

  if ( *(_BYTE *)(a1 - 20) )
  {
    if ( a2 == 1 )
    {
      if ( a4 == 64 )
      {
        v14 = dword_1C030C390;
        if ( dword_1C030C390 > 4u )
        {
          v15 = *(const CHAR **)(a1 + 48);
          v49 = &v34;
          v34 = 0;
          v51 = "Processing ink feedback command: IFC_SUPERWET_INK_START...";
          v50 = 4LL;
          v52 = 59LL;
          TlgCreateSz(&v53, v15);
          v55 = 8LL;
          v56 = a3;
          v16 = *(_DWORD *)(a3 + 60);
          v57 = 4LL;
          v59 = 1LL;
          v47 = a1 & -(__int64)(a1 != 32);
          v54 = &v47;
          v25 = *(_BYTE *)(a3 + 4);
          v58 = &v25;
          v60 = a3 + 8;
          v62 = a3 + 9;
          v64 = a3 + 10;
          v66 = a3 + 11;
          v68 = a3 + 12;
          v26 = *(_BYTE *)(a3 + 16);
          v70 = &v26;
          v72 = a3 + 20;
          v74 = a3 + 24;
          v76 = a3 + 28;
          v78 = a3 + 32;
          v80 = a3 + 36;
          v82 = a3 + 40;
          v84 = a3 + 44;
          v86 = a3 + 48;
          v88 = a3 + 52;
          v90 = a3 + 56;
          v61 = 1LL;
          v63 = 1LL;
          v35 = -(v16 & 1);
          v65 = 1LL;
          v67 = 1LL;
          v69 = 4LL;
          v71 = 1LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 4LL;
          v91 = 4LL;
          v92 = &v35;
          v93 = 4LL;
          v95 = 4LL;
          v36 = -__CFSHR__(v16, 2);
          v94 = &v36;
          v96 = &v37;
          v37 = -__CFSHR__(v16, 3);
          v97 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6873, 0LL, 0LL, 0x1Bu, &v48);
          v14 = dword_1C030C390;
        }
        v17 = *(_DWORD *)(a1 + 40);
        if ( v17 < *(_DWORD *)(a1 + 108) )
        {
          if ( InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(a1, 1, *(_DWORD *)a3) )
          {
            v6 = -1073741823;
            if ( v19 > 2 )
            {
              v40 = -1073741823;
              v113 = &v40;
              v115 = "The specified pointer id already has an active IFC_SUPERWET_INK_START command";
              v114 = 4LL;
              v116 = 78LL;
              v117 = a3;
              v118 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6691, 0LL, 0LL, 5u, &v112);
            }
          }
          else
          {
            v20 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), v18);
            v6 = v20;
            if ( v20 >= 0 )
            {
              if ( IsSuperWetInkStartDataSupported(*(_DWORD *)(a1 + 116), a3) )
              {
                v21 = (_QWORD *)Win32AllocPoolZInit(32LL, 1349217865LL);
                v22 = v21;
                if ( v21 )
                {
                  v21[2] = 0LL;
                  v21[3] = 0LL;
                  v21[1] = 0LL;
                  *v21 = 0LL;
                }
                else
                {
                  v22 = 0LL;
                }
                if ( v22 )
                {
                  *((_DWORD *)v22 + 4) = 1;
                  *((_DWORD *)v22 + 5) = *(_DWORD *)a3;
                  v22[3] = KeGetCurrentThread();
                  v6 = InkDevice::DoSuperWetInkStart(
                         (InkDevice *)(a1 - 32),
                         (const struct IFC_SUPERWET_INK_START_DATA *)a3);
                  if ( v6 < 0 )
                    Win32FreePool(v22);
                  else
                    InkFeedbackProviderBase::AddActiveCommand(
                      (InkFeedbackProviderBase *)a1,
                      (struct InkFeedbackProviderBase::ActiveCommand *)v22);
                }
                else
                {
                  v6 = -1073741801;
                  if ( dword_1C030C390 > 2u )
                  {
                    v43 = -1073741801;
                    v166 = &v43;
                    v167 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &v165);
                  }
                }
              }
              else
              {
                v6 = -1073741637;
                if ( dword_1C030C390 > 2u )
                {
                  v42 = -1073741637;
                  v152 = &v42;
                  v154 = "Super-wet ink not supported for the specified drawing attributes";
                  v153 = 4LL;
                  v155 = 65LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &v151);
                }
              }
            }
            else if ( dword_1C030C390 > 2u )
            {
              v41 = v20;
              v147 = &v41;
              v149 = "ValidatePointer failed";
              v148 = 4LL;
              v150 = 23LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &v146);
            }
          }
        }
        else
        {
          v6 = -1073741823;
          if ( v14 > 2 )
          {
            v38 = -1073741823;
            v106 = &v38;
            v108 = "Too many active commands";
            v110 = (int *)&v39;
            v107 = 4LL;
            v109 = 25LL;
            v39 = v17;
            v111 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6A0C, 0LL, 0LL, 5u, &v105);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( dword_1C030C390 > 2u )
        {
          v33 = -1073741811;
          v163 = &v33;
          v164 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &v162);
        }
      }
    }
    else if ( a2 == 2 )
    {
      if ( a4 == 4 )
      {
        if ( dword_1C030C390 > 4u )
        {
          v9 = *(const CHAR **)(a1 + 48);
          v130 = &v30;
          v30 = 0;
          v132 = "Processing ink feedback command: IFC_SUPERWET_INK_STOP...";
          v131 = 4LL;
          v133 = 58LL;
          TlgCreateSz(&v134, v9);
          v136 = 8LL;
          v137 = a3;
          v138 = 4LL;
          v45 = a1 & -(__int64)(a1 != 32);
          v135 = &v45;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D66CE, 0LL, 0LL, 7u, &v129);
        }
        ActiveCommandByTargetPointerId = (struct InkFeedbackProviderBase::ActiveCommand *)InkFeedbackProviderBase::FindActiveCommandByTargetPointerId(
                                                                                            a1,
                                                                                            1,
                                                                                            *(_DWORD *)a3);
        if ( ActiveCommandByTargetPointerId )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
          if ( (unsigned int)IsProcessDwm(**(_QWORD **)(ThreadWin32Thread + 424))
            || (v13 = InkDevice::ValidatePointer((InkDevice *)(a1 - 32), *(_DWORD *)a3), v6 = v13, v13 >= 0) )
          {
            v6 = InkDevice::DoSuperWetInkStop((InkDevice *)(a1 - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)a3);
            InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(
              (InkFeedbackProviderBase *)a1,
              &ActiveCommandByTargetPointerId);
          }
          else if ( dword_1C030C390 > 2u )
          {
            v142 = 0;
            v145 = 0;
            v32 = v13;
            v140 = &v32;
            v143 = "ValidatePointer failed";
            v141 = 4;
            v144 = 23;
            TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &v139);
          }
        }
        else
        {
          v6 = -1073741823;
          if ( v11 > 2 )
          {
            v31 = -1073741823;
            v99 = &v31;
            v101 = "Active IFC_SUPERWET_INK_START command not found for the specified pointer id";
            v100 = 4LL;
            v102 = 77LL;
            v103 = a3;
            v104 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6691, 0LL, 0LL, 5u, &v98);
          }
        }
      }
      else
      {
        v6 = -1073741811;
        if ( dword_1C030C390 > 2u )
        {
          v29 = -1073741811;
          v160 = &v29;
          v161 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &v159);
        }
      }
    }
    else
    {
      v6 = -1073741637;
      if ( dword_1C030C390 > 2u )
      {
        v7 = *(const CHAR **)(a1 + 48);
        v28 = -1073741637;
        v120 = &v28;
        v122 = "Unsupported command";
        v121 = 4LL;
        v123 = 20LL;
        TlgCreateSz(&pDesc, v7);
        v126 = 8LL;
        v24 = v8;
        v128 = 1LL;
        v44 = a1 & -(__int64)(a1 != 32);
        v125 = &v44;
        v127 = &v24;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D6633, 0LL, 0LL, 7u, &v119);
      }
    }
  }
  else
  {
    v6 = -1073741823;
    if ( dword_1C030C390 > 2u )
    {
      v27 = -1073741823;
      v157 = &v27;
      v158 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
  }
  return (unsigned int)v6;
}
