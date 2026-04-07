/*
 * XREFs of McTemplateU0pq @ 0x18008E4E0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180023440 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x18007E280 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0pq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v5[2] = &v11;
  v7 = 0;
  v6 = 8;
  v8 = &v12;
  v10 = 0;
  v9 = 4;
  return McGenEventWrite(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)&UdwmSystemAnimation_DelayShowHide,
           a3,
           3,
           (__int64)v5);
}
