/*
 * XREFs of McTemplateU0qN16 @ 0x180151744
 * Callers:
 *     ?UpdatePresentCounts@CScheduleFrameInfoVolatileData@@QEAAXAEBVCComposition@@@Z @ 0x1800C7EE4 (-UpdatePresentCounts@CScheduleFrameInfoVolatileData@@QEAAXAEBVCComposition@@@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qN16(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = a3;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = a5;
  v12 = 0;
  v11 = 64;
  return McGenEventWrite(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Stop,
           a3,
           3u,
           &v6);
}
