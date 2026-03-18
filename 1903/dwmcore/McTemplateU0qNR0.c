/*
 * XREFs of McTemplateU0qNR0 @ 0x18019343C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180096CB0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x1800A3600 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qNR0(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // r8
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-48h] BYREF
  int *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+90h] [rbp+18h] BYREF

  v14 = a3;
  v5 = (unsigned int)(a4 * a3);
  v8 = &v14;
  v10 = 0;
  v9 = 4;
  v11 = a5;
  v12 = v5;
  v13 = 0;
  return McGenEventWrite(Microsoft_Windows_Dwm_Core_Provider_Context, a2, v5, 3u, &v7);
}
