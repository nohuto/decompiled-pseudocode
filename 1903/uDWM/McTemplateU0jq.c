/*
 * XREFs of McTemplateU0jq @ 0x1800B36E4
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000BBFC (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x18007E280 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0jq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v5[2] = a3;
  v7 = 0;
  v6 = 16;
  v8 = &v11;
  v10 = 0;
  v9 = 4;
  return McGenEventWrite(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (unsigned int)&UdwmAnimationClock_Create,
           a3,
           3,
           (__int64)v5);
}
