/*
 * XREFs of McTemplateU0pp @ 0x18008B11C
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180024E64 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180025694 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800282B0 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x18007DF20 (McGenEventWrite.c)
 */

__int64 McTemplateU0pp(__int64 a1, int a2, ...)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF
  int v4; // [rsp+48h] [rbp-30h]
  int v5; // [rsp+4Ch] [rbp-2Ch]
  va_list v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy((va_list)&v3[2], va);
  v5 = 0;
  v4 = 8;
  va_copy(v6, va1);
  v8 = 0;
  v7 = 8;
  return McGenEventWrite((unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, v9, 3, (__int64)v3);
}
