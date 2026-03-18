/*
 * XREFs of _TelemPTPConfigUpdateEx @ 0x1C020F544
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0077BFC (CheckPointerDeviceConfiguration.c)
 *     TelemPTPConfigUpdate @ 0x1C020F4E0 (TelemPTPConfigUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01CE5E4 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     GetHidVidPidStrings @ 0x1C020F188 (GetHidVidPidStrings.c)
 *     GetTelemDeviceData @ 0x1C020F1EC (GetTelemDeviceData.c)
 */

void __fastcall TelemPTPConfigUpdateEx(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        struct _UNICODE_STRING *a5,
        struct tagRECT *a6,
        __int64 a7)
{
  unsigned int v7; // r15d
  char v8; // r14
  char v9; // si
  int v10; // edi
  struct _UNICODE_STRING v11; // xmm6
  struct tagRECT v12; // xmm7
  bool v13; // cf
  int TelemDeviceData; // eax
  int v15; // eax
  unsigned int v16; // [rsp+58h] [rbp-A1h] BYREF
  int v17; // [rsp+60h] [rbp-99h] BYREF
  int v18; // [rsp+68h] [rbp-91h] BYREF
  int v19; // [rsp+70h] [rbp-89h] BYREF
  struct tagRECT v20; // [rsp+78h] [rbp-81h] BYREF
  struct tagRECT v21; // [rsp+88h] [rbp-71h] BYREF
  _DWORD v22[8]; // [rsp+98h] [rbp-61h] BYREF
  WCHAR pwsz[4]; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-39h]
  unsigned __int16 v25[4]; // [rsp+C8h] [rbp-31h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-29h]

  v7 = a1;
  v8 = a4;
  v16 = a1;
  v9 = a3;
  v10 = a2;
  v11 = *a5;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v12 = *a6;
  *(_QWORD *)v25 = 0LL;
  v26 = 0LL;
  *(_QWORD *)pwsz = 0LL;
  v24 = 0LL;
  v13 = __CFSHR__(gTouchPadParameters[3], 3);
  v21 = (struct tagRECT)v11;
  v20 = v12;
  v22[1] = -v13;
  v22[2] = -__CFSHR__(gTouchPadParameters[3], 4);
  v22[0] = IsPrecisionTouchPadEnabled(*(_QWORD *)gTouchPadParameters, a2);
  v22[3] = gTouchPadParameters[2];
  v22[4] = -__CFSHR__(gTouchPadParameters[3], 10);
  v22[5] = -__CFSHR__(gTouchPadParameters[5], 3);
  v22[6] = -__CFSHR__(gTouchPadParameters[5], 5);
  v22[7] = gTouchPadParameters[4];
  if ( !a7 )
  {
    TelemDeviceData = GetTelemDeviceData(v25, pwsz, &v18, &v19, (int *)&v16, &v17, &v21, &v20);
    v7 = v16;
    v10 = v17;
    v9 = v18;
    v8 = v19;
    v11 = (struct _UNICODE_STRING)v21;
    v12 = v20;
    goto LABEL_7;
  }
  *(_QWORD *)&v21.left = 0x100000LL;
  *(_QWORD *)&v21.right = v25;
  *(_QWORD *)&v20.right = pwsz;
  v15 = *(_DWORD *)(a7 + 200);
  *(_QWORD *)&v20.left = 0x100000LL;
  if ( (v15 & 0x80u) == 0 )
  {
    TelemDeviceData = 1;
LABEL_7:
    if ( !TelemDeviceData )
      return;
    goto LABEL_8;
  }
  if ( GetHidVidPidStrings(a7, (struct _UNICODE_STRING *)&v21, (struct _UNICODE_STRING *)&v20) < 0 )
    return;
LABEL_8:
  v21 = v12;
  v20 = (struct tagRECT)v11;
  TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)v22, v7, v10, v25, pwsz, v9, v8, &v20, &v21);
}
