/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004149C
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001554C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4A18 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0095728 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     RtlStringLengthWorkerW @ 0x1C00A49D8 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00A680C (_wcsicmp.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(__int64 *Context, WCHAR *Path, int a3)
{
  int v3; // esi
  WCHAR *v4; // r14
  NTSTATUS Key; // edi
  char v7; // r13
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  char *v9; // rsi
  _DWORD *v10; // r14
  __int64 v11; // r15
  unsigned int v12; // ecx
  _WORD *v13; // r8
  bool v14; // zf
  unsigned int v15; // eax
  unsigned int v16; // r13d
  unsigned int v17; // eax
  struct _RTL_QUERY_REGISTRY_TABLE *v18; // r8
  int v19; // eax
  struct _DEVICE_OBJECT *v20; // rcx
  unsigned int v21; // r9d
  struct _DEVICE_OBJECT *v22; // rcx
  const wchar_t *v23; // rcx
  _WORD *v24; // rax
  __int64 v25; // r14
  WCHAR *v26; // rax
  const WCHAR *v27; // r15
  const wchar_t *v28; // r11
  _WORD *v29; // r12
  _WORD *v30; // r11
  _WORD *v31; // rdx
  unsigned __int16 v32; // ax
  int v33; // r8d
  unsigned int v34; // r15d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // esi
  void *v38; // rax
  __int64 v39; // r14
  const void *v40; // rcx
  __int64 v41; // rcx
  void *v42; // rax
  const void *v43; // rcx
  void *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h]
  wchar_t v54; // [rsp+78h] [rbp-88h]
  unsigned int v55; // [rsp+7Ch] [rbp-84h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  size_t pcchLength; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  void *Src; // [rsp+98h] [rbp-68h]
  void *InputBuffer[6]; // [rsp+A0h] [rbp-60h] BYREF
  ULONG v61[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v62; // [rsp+F0h] [rbp-10h] BYREF
  int (*v63)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+128h] [rbp+28h] BYREF
  int v64; // [rsp+130h] [rbp+30h]
  const wchar_t *v65; // [rsp+138h] [rbp+38h]
  __int64 *v66; // [rsp+140h] [rbp+40h]
  int v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+158h] [rbp+58h]
  __int64 v70; // [rsp+160h] [rbp+60h]
  int v71; // [rsp+168h] [rbp+68h]
  _BYTE v72[40]; // [rsp+170h] [rbp+70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  int v75; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v76; // [rsp+1E8h] [rbp+E8h]
  __int64 v77; // [rsp+1F0h] [rbp+F0h]
  int v78; // [rsp+1F8h] [rbp+F8h]
  __int64 v79; // [rsp+200h] [rbp+100h]
  int v80; // [rsp+208h] [rbp+108h]
  __int64 v81; // [rsp+210h] [rbp+110h] BYREF
  int v82; // [rsp+218h] [rbp+118h]
  const wchar_t *v83; // [rsp+220h] [rbp+120h]
  int *v84; // [rsp+228h] [rbp+128h]
  int v85; // [rsp+230h] [rbp+130h]
  int *v86; // [rsp+238h] [rbp+138h]
  int v87; // [rsp+240h] [rbp+140h]
  __int64 v88; // [rsp+248h] [rbp+148h]
  int v89; // [rsp+250h] [rbp+150h]
  const wchar_t *v90; // [rsp+258h] [rbp+158h]
  int *v91; // [rsp+260h] [rbp+160h]
  int v92; // [rsp+268h] [rbp+168h]
  int *v93; // [rsp+270h] [rbp+170h]
  int v94; // [rsp+278h] [rbp+178h]
  __int64 v95; // [rsp+280h] [rbp+180h]
  int v96; // [rsp+288h] [rbp+188h]
  const wchar_t *v97; // [rsp+290h] [rbp+190h]
  int *v98; // [rsp+298h] [rbp+198h]
  int v99; // [rsp+2A0h] [rbp+1A0h]
  int *v100; // [rsp+2A8h] [rbp+1A8h]
  int v101; // [rsp+2B0h] [rbp+1B0h]
  int (*v102)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2B8h] [rbp+1B8h]
  int v103; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v104; // [rsp+2C8h] [rbp+1C8h]
  __int64 v105; // [rsp+2D0h] [rbp+1D0h]
  int v106; // [rsp+2D8h] [rbp+1D8h]
  __int64 v107; // [rsp+2E0h] [rbp+1E0h]
  int v108; // [rsp+2E8h] [rbp+1E8h]
  int (*v109)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F0h] [rbp+1F0h]
  int v110; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v111; // [rsp+300h] [rbp+200h]
  __int64 v112; // [rsp+308h] [rbp+208h]
  int v113; // [rsp+310h] [rbp+210h]
  __int64 v114; // [rsp+318h] [rbp+218h]
  int v115; // [rsp+320h] [rbp+220h]
  int (*v116)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+328h] [rbp+228h]
  int v117; // [rsp+330h] [rbp+230h]
  const wchar_t *v118; // [rsp+338h] [rbp+238h]
  __int64 v119; // [rsp+340h] [rbp+240h]
  int v120; // [rsp+348h] [rbp+248h]
  __int64 v121; // [rsp+350h] [rbp+250h]
  int v122; // [rsp+358h] [rbp+258h]
  __int64 v123; // [rsp+360h] [rbp+260h]
  int v124; // [rsp+368h] [rbp+268h]
  const wchar_t *v125; // [rsp+370h] [rbp+270h]
  int *v126; // [rsp+378h] [rbp+278h]
  int v127; // [rsp+380h] [rbp+280h]
  int *v128; // [rsp+388h] [rbp+288h]
  int v129; // [rsp+390h] [rbp+290h]
  __int64 v130; // [rsp+398h] [rbp+298h]
  int v131; // [rsp+3A0h] [rbp+2A0h]
  _BYTE v132[40]; // [rsp+3A8h] [rbp+2A8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v133; // [rsp+3D0h] [rbp+2D0h] BYREF
  int (*v134)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+408h] [rbp+308h]
  int v135; // [rsp+410h] [rbp+310h]
  const wchar_t *v136; // [rsp+418h] [rbp+318h]
  __int64 v137; // [rsp+420h] [rbp+320h]
  int v138; // [rsp+428h] [rbp+328h]
  __int64 v139; // [rsp+430h] [rbp+330h]
  int v140; // [rsp+438h] [rbp+338h]
  __int64 v141; // [rsp+440h] [rbp+340h]
  int v142; // [rsp+448h] [rbp+348h]
  const wchar_t *v143; // [rsp+450h] [rbp+350h]
  int *v144; // [rsp+458h] [rbp+358h]
  int v145; // [rsp+460h] [rbp+360h]
  int *v146; // [rsp+468h] [rbp+368h]
  int v147; // [rsp+470h] [rbp+370h]
  __int64 v148; // [rsp+478h] [rbp+378h]
  int v149; // [rsp+480h] [rbp+380h]
  const wchar_t *v150; // [rsp+488h] [rbp+388h]
  int *v151; // [rsp+490h] [rbp+390h]
  int v152; // [rsp+498h] [rbp+398h]
  int *v153; // [rsp+4A0h] [rbp+3A0h]
  int v154; // [rsp+4A8h] [rbp+3A8h]
  __int64 v155; // [rsp+4B0h] [rbp+3B0h]
  int v156; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v157; // [rsp+4C0h] [rbp+3C0h]
  int *v158; // [rsp+4C8h] [rbp+3C8h]
  int v159; // [rsp+4D0h] [rbp+3D0h]
  int *v160; // [rsp+4D8h] [rbp+3D8h]
  int v161; // [rsp+4E0h] [rbp+3E0h]
  __int64 v162; // [rsp+4E8h] [rbp+3E8h]
  int v163; // [rsp+4F0h] [rbp+3F0h]
  _BYTE v164[40]; // [rsp+4F8h] [rbp+3F8h] BYREF

  QueryTable.Name = L"DriverDesc";
  v3 = a3;
  v83 = L"MultiDisplayDriver";
  v4 = Path;
  v48 = a3;
  v84 = &v52;
  KeyHandle = Path;
  v50 = 0;
  v52 = 0;
  v86 = &v50;
  v90 = L"MirrorDriver";
  Key = 0;
  v47 = 0;
  v91 = &v47;
  v7 = 0;
  v49 = 0;
  v93 = &v50;
  v97 = L"AccDriver";
  v98 = &v49;
  v100 = &v50;
  v104 = L"Device Description";
  v111 = L"HardwareInformation.AdapterString";
  v51 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v74 = 0LL;
  v75 = 1;
  v76 = L"Settings";
  v77 = 0LL;
  v78 = 0;
  v79 = 0LL;
  v80 = 0;
  v81 = 0LL;
  v82 = 288;
  v85 = 67108868;
  v87 = 4;
  v88 = 0LL;
  v89 = 288;
  v92 = 67108868;
  v94 = 4;
  v95 = 0LL;
  v96 = 288;
  v99 = 67108868;
  v101 = 4;
  v102 = __EnumDisplayQueryRoutine;
  v103 = 16;
  v105 = 0LL;
  v106 = 0;
  v107 = 0LL;
  v108 = 0;
  v109 = __EnumDisplayQueryRoutine;
  v110 = 16;
  v112 = 0LL;
  v113 = 0;
  v114 = 0LL;
  v115 = 0;
  v116 = __EnumDisplayQueryRoutine;
  v117 = 16;
  v118 = L"HardwareInformation.ChipType";
  v125 = L"TSCompatible";
  v126 = &v51;
  v124 = 288;
  v127 = 67108868;
  v128 = &v50;
  v119 = 0LL;
  v120 = 0;
  v121 = 0LL;
  v122 = 0;
  v123 = 0LL;
  v129 = 4;
  v130 = 0LL;
  v131 = 0;
  memset(v132, 0, sizeof(v132));
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v81;
  if ( v3 )
    p_QueryTable = &QueryTable;
  RtlQueryRegistryValues(0x40000000u, v4, p_QueryTable, Context, 0LL);
  if ( !v3 && !*((_DWORD *)Context + 67) )
  {
    v9 = 0LL;
    Key = ZwQueryKey(v4, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( Key == -1073741789 )
    {
      v10 = PALLOCMEM2(ResultLength, 1936876615LL, 0);
      if ( v10 )
      {
        Key = ZwQueryKey(KeyHandle, KeyNameInformation, v10, ResultLength, v61);
        if ( Key >= 0 )
        {
          LODWORD(v11) = 0;
          v12 = 0;
          if ( *v10 >> 1 )
          {
            v13 = v10 + 1;
            do
            {
              v14 = *v13 == 92;
              v15 = v12;
              ++v13;
              if ( !v14 )
                v15 = v11;
              ++v12;
              v11 = v15;
            }
            while ( v12 < *v10 >> 1 );
            if ( v15 )
            {
              v16 = 2 * v15;
              v55 = *(_DWORD *)L"eo";
              v54 = aVideo[6];
              pcchLength = *(_QWORD *)L"\\Video";
              v9 = (char *)PALLOCMEM2(2 * v15 + 14, 1936876615LL, 0);
              if ( v9 )
              {
                memmove(v9, v10 + 1, v16);
                v17 = v55;
                v7 = 0;
                *(_QWORD *)&v9[2 * v11] = pcchLength;
                *(_DWORD *)&v9[2 * v11 + 8] = v17;
                *(_WORD *)&v9[2 * v11 + 12] = v54;
              }
              else
              {
                Key = -1073741670;
                v7 = 0;
              }
            }
          }
        }
        Win32FreePool((__int64)v10);
      }
      else
      {
        Key = -1073741670;
      }
      if ( v9 )
      {
        v62.Flags = 16;
        v58 = 0LL;
        Src = 0LL;
        v62.EntryContext = 0LL;
        v62.QueryRoutine = __EnumDisplayQueryRoutine;
        v62.Name = L"DeviceDesc";
        v65 = L"Driver";
        v62.DefaultType = 0;
        v66 = &v58;
        v62.DefaultData = 0LL;
        v62.DefaultLength = 0;
        v63 = 0LL;
        v64 = 304;
        v67 = 16777217;
        v68 = 0LL;
        v69 = 0;
        v70 = 0LL;
        v71 = 0;
        memset(v72, 0, sizeof(v72));
        Key = RtlQueryRegistryValues(0, (PCWSTR)v9, &v62, Context, 0LL);
        if ( Key >= 0 )
        {
          v7 = 1;
          if ( (_WORD)v58 )
          {
            v25 = (unsigned int)(unsigned __int16)v58 + 12;
            pcchLength = *(_QWORD *)L"Class\\";
            v26 = (WCHAR *)PALLOCMEM2((unsigned int)(unsigned __int16)v58 + 14, 1936876615LL, 0);
            v27 = v26;
            if ( v26 )
            {
              *(_QWORD *)v26 = pcchLength;
              *((_DWORD *)v26 + 2) = *(_DWORD *)L"s\\";
              memmove(v26 + 6, Src, (unsigned __int16)v58);
              v133.Flags = 1;
              v133.QueryRoutine = 0LL;
              *(const WCHAR *)((char *)v27 + v25) = 0;
              v145 = 67108868;
              v142 = 288;
              v147 = 4;
              v133.Name = L"Settings";
              v134 = __DisplayDriverQueryRoutine;
              v136 = L"InstalledDisplayDrivers";
              v143 = L"MirrorDriver";
              v144 = &v47;
              v146 = &v50;
              v150 = L"AccDriver";
              v151 = &v49;
              v153 = &v50;
              v157 = L"TSCompatible";
              v158 = &v51;
              v149 = 288;
              v152 = 67108868;
              v154 = 4;
              v156 = 288;
              v159 = 67108868;
              v161 = 4;
              v160 = &v50;
              v133.EntryContext = 0LL;
              v133.DefaultType = 0;
              v133.DefaultData = 0LL;
              v133.DefaultLength = 0;
              v135 = 16;
              v137 = 0LL;
              v138 = 0;
              v139 = 0LL;
              v140 = 0;
              v141 = 0LL;
              v148 = 0LL;
              v155 = 0LL;
              v162 = 0LL;
              v163 = 0;
              memset(v164, 0, sizeof(v164));
              RtlQueryRegistryValues(2u, v27, &v133, Context, 0LL);
              Win32FreePool((__int64)v27);
            }
            else
            {
              Key = -1073741670;
            }
          }
        }
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        Win32FreePool((__int64)v9);
        if ( v7 )
        {
          v28 = (const wchar_t *)Context[26];
          if ( v28 )
          {
            if ( *((_DWORD *)Context + 67) )
            {
              v29 = 0LL;
              v58 = 0LL;
              Key = RtlStringLengthWorkerW(v28, 0x7FFFuLL, &pcchLength);
              v31 = 0LL;
              if ( Key < 0 )
              {
                v32 = v58;
              }
              else
              {
                v29 = v30;
                v32 = 2 * pcchLength;
                v31 = v30;
              }
              if ( Key >= 0 )
              {
                v33 = v32;
                v34 = 0;
                v35 = 0;
                v36 = (v32 >> 1) - 1;
                if ( v36 )
                {
                  while ( 1 )
                  {
                    ++v35;
                    if ( *v31 == 59 )
                      break;
                    ++v31;
                    if ( v35 >= v36 )
                      goto LABEL_67;
                  }
                  v34 = v35;
                }
LABEL_67:
                v37 = v33 + 2 * (1 - v34);
                v38 = PALLOCMEM2(v37, 1936876615LL, 0);
                v39 = (__int64)v38;
                if ( v38 )
                {
                  memmove(v38, &v29[v34], v37);
                  Win32FreePool(Context[26]);
                  Context[26] = v39;
                  *((_DWORD *)Context + 67) = v37;
                }
                else
                {
                  Key = -1073741670;
                  *((_DWORD *)Context + 67) = 0;
                }
              }
            }
          }
        }
      }
      v4 = (WCHAR *)KeyHandle;
    }
    v3 = v48;
  }
  if ( (Context[20] & 0x800000) != 0 )
  {
    v24 = PALLOCMEM2(0xAuLL, 1936876615LL, 0);
    Context[25] = (__int64)v24;
    if ( !v24 )
      goto LABEL_93;
    *(_QWORD *)v24 = *(_QWORD *)L"cdd";
    v24[4] = 0;
    *((_DWORD *)Context + 66) = 10;
    Key = 0;
  }
  else
  {
    if ( !v49 && !v47 )
    {
      v63 = __DisplayDriverQueryRoutine;
      v62.QueryRoutine = 0LL;
      v62.Flags = 1;
      v62.Name = L"Settings";
      v62.EntryContext = 0LL;
      v62.DefaultType = 0;
      v62.DefaultData = 0LL;
      v62.DefaultLength = 0;
      v64 = 16;
      v65 = L"InstalledDisplayDrivers";
      v66 = 0LL;
      v67 = 0;
      v68 = 0LL;
      v69 = 0;
      v70 = 0LL;
      v71 = 0;
      memset(v72, 0, sizeof(v72));
      v18 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v63;
      if ( v3 )
        v18 = &v62;
      Key = RtlQueryRegistryValues(0x40000000u, v4, v18, Context, 0LL);
    }
    if ( Key < 0 )
      goto LABEL_93;
  }
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v19 = v47;
  v20 = (struct _DEVICE_OBJECT *)Context[17];
  if ( v49 )
    v19 = 1;
  v47 = v19;
  GreDeviceIoControlImpl(v20, 0x23203Bu, 0LL, 0, InputBuffer, 0x30u, &v55, 1u, 1);
  v21 = (unsigned int)InputBuffer[3];
  if ( !LODWORD(InputBuffer[3]) || !InputBuffer[2] )
  {
    LODWORD(InputBuffer[0]) = v52;
    HIDWORD(InputBuffer[1]) = v51;
    InputBuffer[2] = (void *)Context[25];
    v22 = (struct _DEVICE_OBJECT *)Context[17];
    LODWORD(InputBuffer[3]) = *((_DWORD *)Context + 66);
    InputBuffer[4] = (void *)Context[26];
    LODWORD(InputBuffer[5]) = *((_DWORD *)Context + 67);
    HIDWORD(InputBuffer[0]) = (v49 != 0 ? 2 : 0) | (v47 != 0);
    LODWORD(InputBuffer[1]) = 0;
    GreDeviceIoControlImpl(v22, 0x23203Fu, InputBuffer, 0x30u, 0LL, 0, &v55, 1u, 1);
    goto LABEL_35;
  }
  if ( v52 != LODWORD(InputBuffer[0])
    || (v47 != 0) != (BYTE4(InputBuffer[0]) & 1)
    || (v49 != 0 ? 2 : 0) != (BYTE4(InputBuffer[0]) & 2)
    || v51 != HIDWORD(InputBuffer[1]) )
  {
    v52 = (int)InputBuffer[0];
    v47 = BYTE4(InputBuffer[0]) & 1;
    v49 = (HIDWORD(InputBuffer[0]) >> 1) & 1;
    v51 = HIDWORD(InputBuffer[1]);
  }
  v40 = (const void *)Context[25];
  if ( !v40 || LODWORD(InputBuffer[3]) != *((_DWORD *)Context + 66) )
    goto LABEL_81;
  if ( RtlCompareMemory(v40, InputBuffer[2], LODWORD(InputBuffer[3])) != *((_DWORD *)Context + 66) )
  {
    v21 = (unsigned int)InputBuffer[3];
LABEL_81:
    v41 = Context[25];
    if ( v41 )
    {
      Win32FreePool(v41);
      v21 = (unsigned int)InputBuffer[3];
    }
    v42 = PALLOCMEM2(v21, 1936876615LL, 0);
    Context[25] = (__int64)v42;
    if ( v42 )
      memmove(v42, InputBuffer[2], LODWORD(InputBuffer[3]));
    else
      Key = -1073741670;
  }
  v43 = (const void *)Context[26];
  if ( v43
    && InputBuffer[4]
    && (LODWORD(InputBuffer[5]) != *((_DWORD *)Context + 67)
     || RtlCompareMemory(v43, InputBuffer[4], LODWORD(InputBuffer[5])) != *((_DWORD *)Context + 67)) )
  {
    Win32FreePool(Context[26]);
    v44 = PALLOCMEM2(LODWORD(InputBuffer[5]), 1936876615LL, 0);
    Context[26] = (__int64)v44;
    if ( v44 )
      memmove(v44, InputBuffer[4], LODWORD(InputBuffer[5]));
    else
      Key = -1073741670;
  }
LABEL_35:
  if ( Key >= 0 )
  {
    if ( v52 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v47 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v49 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v51 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v23 = (const wchar_t *)Context[26];
    if ( v23 )
    {
      if ( !wcsicmp(v23, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_93:
  DrvLogDisplayDriverEvent(1LL);
  v45 = Context[25];
  if ( v45 )
  {
    Win32FreePool(v45);
    Context[25] = 0LL;
  }
  v46 = Context[26];
  if ( v46 )
  {
    Win32FreePool(v46);
    Context[26] = 0LL;
  }
}
