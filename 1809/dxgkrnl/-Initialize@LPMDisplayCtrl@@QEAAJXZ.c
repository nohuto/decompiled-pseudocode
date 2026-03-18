/*
 * XREFs of ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C021B0EC
 * Callers:
 *     ?DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C021AC90 (-DxgkEnableHighPrecisionBrightness@@YAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z.c)
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C021AD40 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 *     ?DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C021AE60 (-DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C021B4C8 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C021AB74 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::Initialize(LPMDisplayCtrl *this)
{
  PFILE_OBJECT *v1; // rbx
  NTSTATUS v2; // r8d
  __int64 v3; // rcx
  int *v4; // rdx
  __int64 v5; // r9
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // ax
  int v13; // eax
  __int16 v14; // ax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  __int16 v21; // ax
  WCHAR SymbolicLinkList[4]; // [rsp+40h] [rbp-348h] BYREF
  _BYTE v24[800]; // [rsp+50h] [rbp-338h] BYREF

  v1 = FileObject;
  memset(v24, 0, sizeof(v24));
  *(_QWORD *)SymbolicLinkList = 0LL;
  v2 = LPMDisplayCtrl::CallDriver(FileObject, 0x83212108, 0LL, 0, v24, 0x320u, (unsigned __int64 *)SymbolicLinkList);
  if ( v2 < 0 )
  {
    v2 = LPMDisplayCtrl::CallDriver(v1, 0x83212014, 0LL, 0, v1 + 8, 0x10u, 0LL);
    if ( v2 >= 0 )
    {
      *((_DWORD *)v1 + 15) = 0;
      v2 = LPMDisplayCtrl::CallDriver(v1, 0x832120F0, 0LL, 0, (char *)v1 + 60, 4u, 0LL);
      if ( v2 >= 0 && *((_DWORD *)v1 + 15) && *((_WORD *)v1 + 39) )
        *((_DWORD *)v1 + 8) = 1;
    }
  }
  else
  {
    v3 = *(_QWORD *)SymbolicLinkList >> 3;
    *(PFILE_OBJECT *)((char *)v1 + 108) = (PFILE_OBJECT)1;
    *((_DWORD *)v1 + 22) = 0;
    *((_WORD *)v1 + 51) = 0;
    if ( (_DWORD)v3 )
    {
      v4 = (int *)&v24[4];
      v5 = (unsigned int)v3;
      do
      {
        v6 = *(v4 - 1);
        if ( v6 > 6 )
        {
          v15 = v6 - 8;
          if ( v15 )
          {
            v16 = v15 - 5;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 )
                  {
                    v19 = *v4;
                    if ( *v4 == -1 )
                      v19 = 0;
                    *((_DWORD *)v1 + 28) = v19;
                  }
                }
                else
                {
                  *((_DWORD *)v1 + 26) = *v4;
                }
              }
              else
              {
                v20 = *v4;
                *((_DWORD *)v1 + 22) = *v4;
                *((_DWORD *)v1 + 15) = v20;
              }
            }
            else
            {
              v21 = *(_WORD *)v4;
              *((_WORD *)v1 + 51) = *(_WORD *)v4;
              *((_WORD *)v1 + 39) = v21;
            }
          }
          else
          {
            *((_WORD *)v1 + 50) = *(_WORD *)v4;
          }
        }
        else if ( v6 == 6 )
        {
          v14 = *(_WORD *)v4;
          *((_WORD *)v1 + 49) = *(_WORD *)v4;
          *((_WORD *)v1 + 37) = v14;
        }
        else if ( v6 )
        {
          v7 = v6 - 2;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 == 1 )
                {
                  v10 = *(_WORD *)v4;
                  *((_WORD *)v1 + 47) = *(_WORD *)v4;
                  *((_WORD *)v1 + 36) = v10;
                }
              }
              else
              {
                v11 = *(_WORD *)v4;
                *((_WORD *)v1 + 48) = *(_WORD *)v4;
                *((_WORD *)v1 + 35) = v11;
              }
            }
            else
            {
              v12 = *(_WORD *)v4;
              *((_WORD *)v1 + 46) = *(_WORD *)v4;
              *((_WORD *)v1 + 34) = v12;
            }
          }
          else
          {
            *((_DWORD *)v1 + 21) = *v4;
          }
        }
        else
        {
          v13 = *v4;
          *((_DWORD *)v1 + 20) = *v4;
          *((_DWORD *)v1 + 16) = v13;
        }
        v4 += 2;
        --v5;
      }
      while ( v5 );
      *((_DWORD *)v1 + 10) = 1;
    }
  }
  *((_DWORD *)v1 + 7) = 1;
  return (unsigned int)v2;
}
