/*
 * XREFs of _TelemPTPConfigUpdateEx @ 0x1C019AEF8
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0107A6C (CheckPointerDeviceConfiguration.c)
 *     TelemPTPConfigUpdate @ 0x1C019AEA0 (TelemPTPConfigUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C0199488 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     GetHidVidPidStrings @ 0x1C019AABC (GetHidVidPidStrings.c)
 *     GetTelemDeviceData @ 0x1C019AB14 (GetTelemDeviceData.c)
 */

void __fastcall TelemPTPConfigUpdateEx(
        int a1,
        int a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        __int64 a7)
{
  int v7; // ebx
  unsigned int v8; // r14d
  char v9; // si
  char v10; // di
  bool v11; // cf
  int TelemDeviceData; // eax
  int v13; // eax
  struct tagRECT v14; // xmm1
  unsigned int v15; // [rsp+50h] [rbp-91h] BYREF
  int v16; // [rsp+58h] [rbp-89h] BYREF
  int v17; // [rsp+60h] [rbp-81h] BYREF
  int v18; // [rsp+68h] [rbp-79h] BYREF
  struct tagRECT v19; // [rsp+70h] [rbp-71h] BYREF
  struct tagRECT v20; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v21[8]; // [rsp+90h] [rbp-51h] BYREF
  WCHAR pwsz[4]; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-29h]
  unsigned __int16 v24[4]; // [rsp+C0h] [rbp-21h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-19h]

  v7 = a2;
  *(_QWORD *)v24 = 0LL;
  v8 = a1;
  v25 = 0LL;
  v9 = a4;
  *(_QWORD *)pwsz = 0LL;
  v10 = a3;
  v23 = 0LL;
  v16 = a2;
  v15 = a1;
  v18 = a4;
  v11 = __CFSHR__(gTouchPadParameters[3], 3);
  v17 = a3;
  v21[1] = -v11;
  v21[2] = -__CFSHR__(gTouchPadParameters[3], 4);
  v21[0] = gPTPEnabled;
  v21[3] = gTouchPadParameters[2];
  v21[4] = -__CFSHR__(gTouchPadParameters[3], 10);
  v21[5] = -__CFSHR__(gTouchPadParameters[5], 3);
  v21[6] = -__CFSHR__(gTouchPadParameters[5], 5);
  v21[7] = gTouchPadParameters[4];
  if ( !a7 )
  {
    TelemDeviceData = GetTelemDeviceData(v24, pwsz, &v17, &v18, (int *)&v15, &v16, a5, a6);
    v8 = v15;
    v7 = v16;
    v10 = v17;
    v9 = v18;
    goto LABEL_7;
  }
  v20.left = 0x100000;
  *(_QWORD *)&v20.right = v24;
  *(_QWORD *)&v19.right = pwsz;
  v13 = *(_DWORD *)(a7 + 200);
  v19.left = 0x100000;
  if ( (v13 & 0x80u) == 0 )
  {
    TelemDeviceData = 1;
LABEL_7:
    if ( !TelemDeviceData )
      return;
    goto LABEL_8;
  }
  if ( GetHidVidPidStrings(a7, (struct _UNICODE_STRING *)&v20, (struct _UNICODE_STRING *)&v19) < 0 )
    return;
LABEL_8:
  v14 = *a5;
  v20 = *a6;
  v19 = v14;
  TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)v21, v8, v7, v24, pwsz, v10, v9, &v19, &v20);
}
