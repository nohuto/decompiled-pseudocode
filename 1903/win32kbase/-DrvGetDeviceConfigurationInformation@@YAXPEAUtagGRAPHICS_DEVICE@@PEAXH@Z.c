/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004C5E4
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C004F0F0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C004FD70 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHKK@Z @ 0x1C00B6608 (-DrvAddMirrorDriversToRemoteList@@YAHKK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C004D920 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00A8E84 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1C00BB41C (_wcsicmp.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(__int64 *Context, WCHAR *Path, int a3)
{
  unsigned int v3; // r12d
  int v4; // esi
  WCHAR *v5; // r14
  NTSTATUS Key; // edi
  char v8; // r13
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  char *v10; // rsi
  _DWORD *v11; // r14
  __int64 v12; // r15
  unsigned int v13; // ecx
  _WORD *v14; // r8
  bool v15; // zf
  unsigned int v16; // eax
  unsigned int v17; // r13d
  unsigned int v18; // eax
  struct _RTL_QUERY_REGISTRY_TABLE *v19; // r8
  int v20; // eax
  struct _DEVICE_OBJECT *v21; // rcx
  unsigned int v22; // r9d
  struct _DEVICE_OBJECT *v23; // rcx
  const wchar_t *v24; // rcx
  _WORD *v25; // rax
  __int64 v26; // r14
  WCHAR *v27; // rax
  const WCHAR *v28; // r15
  _WORD *v29; // r8
  _WORD *v30; // rsi
  __int64 v31; // rdx
  _WORD *v32; // rax
  __int16 v33; // cx
  unsigned __int16 v34; // cx
  int v35; // r8d
  unsigned int v36; // edx
  unsigned int v37; // eax
  _WORD *v38; // rcx
  unsigned int v39; // r14d
  void *v40; // rax
  __int64 v41; // r15
  const void *v42; // rcx
  __int64 v43; // rcx
  void *v44; // rax
  const void *v45; // rcx
  void *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+5Ch] [rbp-A4h] BYREF
  int v52; // [rsp+60h] [rbp-A0h] BYREF
  int v53; // [rsp+64h] [rbp-9Ch] BYREF
  int v54; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h]
  wchar_t v56; // [rsp+78h] [rbp-88h]
  unsigned int v57; // [rsp+7Ch] [rbp-84h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  void *Src; // [rsp+90h] [rbp-70h]
  void *InputBuffer[6]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-38h]
  ULONG v63[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v64; // [rsp+F0h] [rbp-10h] BYREF
  int (*v65)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+128h] [rbp+28h] BYREF
  int v66; // [rsp+130h] [rbp+30h]
  const wchar_t *v67; // [rsp+138h] [rbp+38h]
  __int64 *v68; // [rsp+140h] [rbp+40h]
  int v69; // [rsp+148h] [rbp+48h]
  __int64 v70; // [rsp+150h] [rbp+50h]
  int v71; // [rsp+158h] [rbp+58h]
  __int64 v72; // [rsp+160h] [rbp+60h]
  int v73; // [rsp+168h] [rbp+68h]
  _BYTE v74[40]; // [rsp+170h] [rbp+70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  int v77; // [rsp+1E0h] [rbp+E0h]
  const wchar_t *v78; // [rsp+1E8h] [rbp+E8h]
  __int64 v79; // [rsp+1F0h] [rbp+F0h]
  int v80; // [rsp+1F8h] [rbp+F8h]
  __int64 v81; // [rsp+200h] [rbp+100h]
  int v82; // [rsp+208h] [rbp+108h]
  __int64 v83; // [rsp+210h] [rbp+110h] BYREF
  int v84; // [rsp+218h] [rbp+118h]
  const wchar_t *v85; // [rsp+220h] [rbp+120h]
  int *v86; // [rsp+228h] [rbp+128h]
  int v87; // [rsp+230h] [rbp+130h]
  int *v88; // [rsp+238h] [rbp+138h]
  int v89; // [rsp+240h] [rbp+140h]
  __int64 v90; // [rsp+248h] [rbp+148h]
  int v91; // [rsp+250h] [rbp+150h]
  const wchar_t *v92; // [rsp+258h] [rbp+158h]
  int *v93; // [rsp+260h] [rbp+160h]
  int v94; // [rsp+268h] [rbp+168h]
  int *v95; // [rsp+270h] [rbp+170h]
  int v96; // [rsp+278h] [rbp+178h]
  __int64 v97; // [rsp+280h] [rbp+180h]
  int v98; // [rsp+288h] [rbp+188h]
  const wchar_t *v99; // [rsp+290h] [rbp+190h]
  int *v100; // [rsp+298h] [rbp+198h]
  int v101; // [rsp+2A0h] [rbp+1A0h]
  int *v102; // [rsp+2A8h] [rbp+1A8h]
  int v103; // [rsp+2B0h] [rbp+1B0h]
  int (*v104)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2B8h] [rbp+1B8h]
  int v105; // [rsp+2C0h] [rbp+1C0h]
  const wchar_t *v106; // [rsp+2C8h] [rbp+1C8h]
  __int64 v107; // [rsp+2D0h] [rbp+1D0h]
  int v108; // [rsp+2D8h] [rbp+1D8h]
  __int64 v109; // [rsp+2E0h] [rbp+1E0h]
  int v110; // [rsp+2E8h] [rbp+1E8h]
  int (*v111)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2F0h] [rbp+1F0h]
  int v112; // [rsp+2F8h] [rbp+1F8h]
  const wchar_t *v113; // [rsp+300h] [rbp+200h]
  __int64 v114; // [rsp+308h] [rbp+208h]
  int v115; // [rsp+310h] [rbp+210h]
  __int64 v116; // [rsp+318h] [rbp+218h]
  int v117; // [rsp+320h] [rbp+220h]
  int (*v118)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+328h] [rbp+228h]
  int v119; // [rsp+330h] [rbp+230h]
  const wchar_t *v120; // [rsp+338h] [rbp+238h]
  __int64 v121; // [rsp+340h] [rbp+240h]
  int v122; // [rsp+348h] [rbp+248h]
  __int64 v123; // [rsp+350h] [rbp+250h]
  int v124; // [rsp+358h] [rbp+258h]
  __int64 v125; // [rsp+360h] [rbp+260h]
  int v126; // [rsp+368h] [rbp+268h]
  const wchar_t *v127; // [rsp+370h] [rbp+270h]
  int *v128; // [rsp+378h] [rbp+278h]
  int v129; // [rsp+380h] [rbp+280h]
  int *v130; // [rsp+388h] [rbp+288h]
  int v131; // [rsp+390h] [rbp+290h]
  __int64 v132; // [rsp+398h] [rbp+298h]
  int v133; // [rsp+3A0h] [rbp+2A0h]
  _BYTE v134[40]; // [rsp+3A8h] [rbp+2A8h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v135; // [rsp+3D0h] [rbp+2D0h] BYREF
  int (*v136)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+408h] [rbp+308h]
  int v137; // [rsp+410h] [rbp+310h]
  const wchar_t *v138; // [rsp+418h] [rbp+318h]
  __int64 v139; // [rsp+420h] [rbp+320h]
  int v140; // [rsp+428h] [rbp+328h]
  __int64 v141; // [rsp+430h] [rbp+330h]
  int v142; // [rsp+438h] [rbp+338h]
  __int64 v143; // [rsp+440h] [rbp+340h]
  int v144; // [rsp+448h] [rbp+348h]
  const wchar_t *v145; // [rsp+450h] [rbp+350h]
  int *v146; // [rsp+458h] [rbp+358h]
  int v147; // [rsp+460h] [rbp+360h]
  int *v148; // [rsp+468h] [rbp+368h]
  int v149; // [rsp+470h] [rbp+370h]
  __int64 v150; // [rsp+478h] [rbp+378h]
  int v151; // [rsp+480h] [rbp+380h]
  const wchar_t *v152; // [rsp+488h] [rbp+388h]
  int *v153; // [rsp+490h] [rbp+390h]
  int v154; // [rsp+498h] [rbp+398h]
  int *v155; // [rsp+4A0h] [rbp+3A0h]
  int v156; // [rsp+4A8h] [rbp+3A8h]
  __int64 v157; // [rsp+4B0h] [rbp+3B0h]
  int v158; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v159; // [rsp+4C0h] [rbp+3C0h]
  int *v160; // [rsp+4C8h] [rbp+3C8h]
  int v161; // [rsp+4D0h] [rbp+3D0h]
  int *v162; // [rsp+4D8h] [rbp+3D8h]
  int v163; // [rsp+4E0h] [rbp+3E0h]
  __int64 v164; // [rsp+4E8h] [rbp+3E8h]
  int v165; // [rsp+4F0h] [rbp+3F0h]
  _BYTE v166[40]; // [rsp+4F8h] [rbp+3F8h] BYREF

  v3 = 0;
  QueryTable.Name = L"DriverDesc";
  v4 = a3;
  v85 = L"MultiDisplayDriver";
  v5 = Path;
  v50 = a3;
  v86 = &v54;
  KeyHandle = Path;
  v52 = 0;
  v54 = 0;
  v88 = &v52;
  v92 = L"MirrorDriver";
  Key = 0;
  v49 = 0;
  v93 = &v49;
  v8 = 0;
  v51 = 0;
  v95 = &v52;
  v99 = L"AccDriver";
  v100 = &v51;
  v102 = &v52;
  v106 = L"Device Description";
  v113 = L"HardwareInformation.AdapterString";
  v53 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v76 = 0LL;
  v77 = 1;
  v78 = L"Settings";
  v79 = 0LL;
  v80 = 0;
  v81 = 0LL;
  v82 = 0;
  v83 = 0LL;
  v84 = 288;
  v87 = 67108868;
  v89 = 4;
  v90 = 0LL;
  v91 = 288;
  v94 = 67108868;
  v96 = 4;
  v97 = 0LL;
  v98 = 288;
  v101 = 67108868;
  v103 = 4;
  v104 = __EnumDisplayQueryRoutine;
  v105 = 16;
  v107 = 0LL;
  v108 = 0;
  v109 = 0LL;
  v110 = 0;
  v111 = __EnumDisplayQueryRoutine;
  v112 = 16;
  v114 = 0LL;
  v115 = 0;
  v116 = 0LL;
  v117 = 0;
  v118 = __EnumDisplayQueryRoutine;
  v119 = 16;
  v120 = L"HardwareInformation.ChipType";
  v127 = L"TSCompatible";
  v128 = &v53;
  v126 = 288;
  v129 = 67108868;
  v130 = &v52;
  v121 = 0LL;
  v122 = 0;
  v123 = 0LL;
  v124 = 0;
  v125 = 0LL;
  v131 = 4;
  v132 = 0LL;
  v133 = 0;
  memset(v134, 0, sizeof(v134));
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v83;
  if ( v4 )
    p_QueryTable = &QueryTable;
  RtlQueryRegistryValues(0x40000000u, v5, p_QueryTable, Context, 0LL);
  if ( !v4 && !*((_DWORD *)Context + 67) )
  {
    v10 = 0LL;
    Key = ZwQueryKey(v5, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( Key == -1073741789 )
    {
      v11 = PALLOCMEM2(ResultLength, 0x73726447u, 0);
      if ( v11 )
      {
        Key = ZwQueryKey(KeyHandle, KeyNameInformation, v11, ResultLength, v63);
        if ( Key >= 0 )
        {
          LODWORD(v12) = 0;
          v13 = 0;
          if ( *v11 >> 1 )
          {
            v14 = v11 + 1;
            do
            {
              v15 = *v14 == 92;
              v16 = v13;
              ++v14;
              if ( !v15 )
                v16 = v12;
              ++v13;
              v12 = v16;
            }
            while ( v13 < *v11 >> 1 );
            if ( v16 )
            {
              v17 = 2 * v16;
              v57 = *(_DWORD *)L"eo";
              v56 = aVideo[6];
              v62 = *(_QWORD *)L"\\Video";
              v10 = (char *)PALLOCMEM2(2 * v16 + 14, 0x73726447u, 0);
              if ( v10 )
              {
                memmove(v10, v11 + 1, v17);
                v18 = v57;
                v8 = 0;
                *(_QWORD *)&v10[2 * v12] = v62;
                *(_DWORD *)&v10[2 * v12 + 8] = v18;
                *(_WORD *)&v10[2 * v12 + 12] = v56;
              }
              else
              {
                Key = -1073741670;
                v8 = 0;
              }
            }
          }
        }
        Win32FreePool((__int64)v11);
      }
      else
      {
        Key = -1073741670;
      }
      if ( v10 )
      {
        v64.Flags = 16;
        v59 = 0LL;
        Src = 0LL;
        v64.EntryContext = 0LL;
        v64.QueryRoutine = __EnumDisplayQueryRoutine;
        v64.Name = L"DeviceDesc";
        v67 = L"Driver";
        v64.DefaultType = 0;
        v68 = &v59;
        v64.DefaultData = 0LL;
        v64.DefaultLength = 0;
        v65 = 0LL;
        v66 = 304;
        v69 = 16777217;
        v70 = 0LL;
        v71 = 0;
        v72 = 0LL;
        v73 = 0;
        memset(v74, 0, sizeof(v74));
        Key = RtlQueryRegistryValues(0, (PCWSTR)v10, &v64, Context, 0LL);
        if ( Key >= 0 )
        {
          v8 = 1;
          if ( (_WORD)v59 )
          {
            v26 = (unsigned int)(unsigned __int16)v59 + 12;
            v62 = *(_QWORD *)L"Class\\";
            v27 = (WCHAR *)PALLOCMEM2((unsigned int)(unsigned __int16)v59 + 14, 0x73726447u, 0);
            v28 = v27;
            if ( v27 )
            {
              *(_QWORD *)v27 = v62;
              *((_DWORD *)v27 + 2) = *(_DWORD *)L"s\\";
              memmove(v27 + 6, Src, (unsigned __int16)v59);
              v3 = 0;
              v135.Flags = 1;
              v135.QueryRoutine = 0LL;
              *(const WCHAR *)((char *)v28 + v26) = 0;
              v147 = 67108868;
              v144 = 288;
              v149 = 4;
              v135.Name = L"Settings";
              v136 = __DisplayDriverQueryRoutine;
              v138 = L"InstalledDisplayDrivers";
              v145 = L"MirrorDriver";
              v146 = &v49;
              v148 = &v52;
              v152 = L"AccDriver";
              v153 = &v51;
              v155 = &v52;
              v159 = L"TSCompatible";
              v160 = &v53;
              v151 = 288;
              v154 = 67108868;
              v156 = 4;
              v158 = 288;
              v161 = 67108868;
              v163 = 4;
              v162 = &v52;
              v135.EntryContext = 0LL;
              v135.DefaultType = 0;
              v135.DefaultData = 0LL;
              v135.DefaultLength = 0;
              v137 = 16;
              v139 = 0LL;
              v140 = 0;
              v141 = 0LL;
              v142 = 0;
              v143 = 0LL;
              v150 = 0LL;
              v157 = 0LL;
              v164 = 0LL;
              v165 = 0;
              memset(v166, 0, sizeof(v166));
              RtlQueryRegistryValues(2u, v28, &v135, Context, 0LL);
              Win32FreePool((__int64)v28);
            }
            else
            {
              Key = -1073741670;
              v3 = 0;
            }
          }
        }
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        Win32FreePool((__int64)v10);
        if ( v8 )
        {
          v29 = (_WORD *)Context[26];
          if ( v29 )
          {
            if ( *((_DWORD *)Context + 67) )
            {
              v30 = 0LL;
              v59 = 0LL;
              v31 = 0x7FFFLL;
              v32 = v29;
              do
              {
                if ( !*v32 )
                  break;
                ++v32;
                --v31;
              }
              while ( v31 );
              Key = v31 == 0 ? 0xC000000D : 0;
              v33 = v31 ? 0x7FFF - v31 : 0;
              if ( v31 )
              {
                v34 = 2 * v33;
                v30 = v29;
              }
              else
              {
                v34 = v59;
              }
              if ( v31 )
              {
                v35 = v34;
                v36 = 0;
                v37 = (v34 >> 1) - 1;
                if ( v34 >> 1 != 1 )
                {
                  v38 = v30;
                  while ( 1 )
                  {
                    ++v36;
                    if ( *v38 == 59 )
                      break;
                    ++v38;
                    if ( v36 >= v37 )
                      goto LABEL_74;
                  }
                  v3 = v36;
                }
LABEL_74:
                v39 = v35 + 2 * (1 - v3);
                v40 = PALLOCMEM2(v39, 0x73726447u, 0);
                v41 = (__int64)v40;
                if ( v40 )
                {
                  memmove(v40, &v30[v3], v39);
                  Win32FreePool(Context[26]);
                  Context[26] = v41;
                  *((_DWORD *)Context + 67) = v39;
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
      v5 = (WCHAR *)KeyHandle;
    }
    v4 = v50;
  }
  if ( (Context[20] & 0x800000) != 0 )
  {
    v25 = PALLOCMEM2(0xAuLL, 0x73726447u, 0);
    Context[25] = (__int64)v25;
    if ( !v25 )
      goto LABEL_99;
    *(_QWORD *)v25 = *(_QWORD *)L"cdd";
    v25[4] = 0;
    *((_DWORD *)Context + 66) = 10;
    Key = 0;
  }
  else
  {
    if ( !v51 && !v49 )
    {
      v65 = __DisplayDriverQueryRoutine;
      v64.QueryRoutine = 0LL;
      v64.Flags = 1;
      v64.Name = L"Settings";
      v64.EntryContext = 0LL;
      v64.DefaultType = 0;
      v64.DefaultData = 0LL;
      v64.DefaultLength = 0;
      v66 = 16;
      v67 = L"InstalledDisplayDrivers";
      v68 = 0LL;
      v69 = 0;
      v70 = 0LL;
      v71 = 0;
      v72 = 0LL;
      v73 = 0;
      memset(v74, 0, sizeof(v74));
      v19 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v65;
      if ( v4 )
        v19 = &v64;
      Key = RtlQueryRegistryValues(0x40000000u, v5, v19, Context, 0LL);
    }
    if ( Key < 0 )
      goto LABEL_99;
  }
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v20 = v49;
  v21 = (struct _DEVICE_OBJECT *)Context[17];
  if ( v51 )
    v20 = 1;
  v49 = v20;
  GreDeviceIoControlImpl(v21, 0x23203Bu, 0LL, 0, InputBuffer, 0x30u, &v57, 1u, 1);
  v22 = (unsigned int)InputBuffer[3];
  if ( !LODWORD(InputBuffer[3]) || !InputBuffer[2] )
  {
    LODWORD(InputBuffer[0]) = v54;
    HIDWORD(InputBuffer[1]) = v53;
    InputBuffer[2] = (void *)Context[25];
    v23 = (struct _DEVICE_OBJECT *)Context[17];
    LODWORD(InputBuffer[3]) = *((_DWORD *)Context + 66);
    InputBuffer[4] = (void *)Context[26];
    LODWORD(InputBuffer[5]) = *((_DWORD *)Context + 67);
    HIDWORD(InputBuffer[0]) = (v51 != 0 ? 2 : 0) | (v49 != 0);
    LODWORD(InputBuffer[1]) = 0;
    GreDeviceIoControlImpl(v23, 0x23203Fu, InputBuffer, 0x30u, 0LL, 0, &v57, 1u, 1);
    goto LABEL_35;
  }
  if ( v54 != LODWORD(InputBuffer[0])
    || (v49 != 0) != (BYTE4(InputBuffer[0]) & 1)
    || (v51 != 0 ? 2 : 0) != (BYTE4(InputBuffer[0]) & 2)
    || v53 != HIDWORD(InputBuffer[1]) )
  {
    v54 = (int)InputBuffer[0];
    v49 = BYTE4(InputBuffer[0]) & 1;
    v51 = (HIDWORD(InputBuffer[0]) >> 1) & 1;
    v53 = HIDWORD(InputBuffer[1]);
  }
  v42 = (const void *)Context[25];
  if ( !v42 || LODWORD(InputBuffer[3]) != *((_DWORD *)Context + 66) )
    goto LABEL_87;
  if ( RtlCompareMemory(v42, InputBuffer[2], LODWORD(InputBuffer[3])) != *((_DWORD *)Context + 66) )
  {
    v22 = (unsigned int)InputBuffer[3];
LABEL_87:
    v43 = Context[25];
    if ( v43 )
    {
      Win32FreePool(v43);
      v22 = (unsigned int)InputBuffer[3];
    }
    v44 = PALLOCMEM2(v22, 0x73726447u, 0);
    Context[25] = (__int64)v44;
    if ( v44 )
      memmove(v44, InputBuffer[2], LODWORD(InputBuffer[3]));
    else
      Key = -1073741670;
  }
  v45 = (const void *)Context[26];
  if ( v45
    && InputBuffer[4]
    && (LODWORD(InputBuffer[5]) != *((_DWORD *)Context + 67)
     || RtlCompareMemory(v45, InputBuffer[4], LODWORD(InputBuffer[5])) != *((_DWORD *)Context + 67)) )
  {
    Win32FreePool(Context[26]);
    v46 = PALLOCMEM2(LODWORD(InputBuffer[5]), 0x73726447u, 0);
    Context[26] = (__int64)v46;
    if ( v46 )
      memmove(v46, InputBuffer[4], LODWORD(InputBuffer[5]));
    else
      Key = -1073741670;
  }
LABEL_35:
  if ( Key >= 0 )
  {
    if ( v54 )
      *((_DWORD *)Context + 40) |= 2u;
    if ( v49 )
      *((_DWORD *)Context + 40) |= 8u;
    if ( v51 )
      *((_DWORD *)Context + 40) |= 0x48u;
    if ( v53 )
      *((_DWORD *)Context + 40) |= 0x200000u;
    v24 = (const wchar_t *)Context[26];
    if ( v24 )
    {
      if ( !wcsicmp(v24, L"RDPUDD Chained DD") )
        *((_DWORD *)Context + 40) |= 0x1000000u;
    }
    return;
  }
LABEL_99:
  DrvLogDisplayDriverEvent(1LL);
  v47 = Context[25];
  if ( v47 )
  {
    Win32FreePool(v47);
    Context[25] = 0LL;
  }
  v48 = Context[26];
  if ( v48 )
  {
    Win32FreePool(v48);
    Context[26] = 0LL;
  }
}
