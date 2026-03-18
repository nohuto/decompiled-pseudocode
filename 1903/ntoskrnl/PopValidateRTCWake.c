/*
 * XREFs of PopValidateRTCWake @ 0x14059641C
 * Callers:
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 * Callees:
 *     PopDiagTraceRtcWakeInfo @ 0x14015E2E8 (PopDiagTraceRtcWakeInfo.c)
 *     PopCurrentPowerStatePrecise @ 0x140747960 (PopCurrentPowerStatePrecise.c)
 *     PopCalculateWakeTimeAdjustment @ 0x1408A791C (PopCalculateWakeTimeAdjustment.c)
 */

unsigned __int8 __fastcall PopValidateRTCWake(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  int v2; // eax
  int v3; // r14d
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // r12
  int v7; // ebx
  int v8; // ecx
  unsigned __int64 v9; // rsi
  __int64 v11; // rbp
  char v12[32]; // [rsp+40h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = PopFixedWakeSourceMask & 0x18;
  *a1 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v7 = 1;
  if ( v2 == 16 )
  {
    v8 = 1;
    dword_1404430A0 = 1;
    goto LABEL_6;
  }
  if ( v2 == 8 )
  {
    v8 = 0;
    v4 = 1;
    dword_1404430A0 = 0;
    goto LABEL_6;
  }
  if ( v2 )
  {
    PopCurrentPowerStatePrecise(v12, 0LL);
    dword_1404430A0 = dword_140443ACC;
  }
  v8 = dword_1404430A0;
  if ( dword_1404430A0 >= 0 )
  {
LABEL_6:
    if ( (unsigned __int64)v8 < 3 )
      goto LABEL_11;
  }
  if ( (PopFixedWakeSourceMask & 4) == 0 )
    *a1 = 1;
  if ( qword_1404430C8 && qword_1404430B0[0] > (unsigned __int64)qword_1404430C8 )
  {
    v8 = 1;
    dword_1404430A0 = 1;
  }
  else
  {
    v8 = 0;
    *a1 = 0;
    dword_1404430A0 = 0;
    v4 = 1;
  }
LABEL_11:
  v9 = qword_1404430B0[3 * v8];
  if ( v9 )
  {
    v11 = qword_140443088;
    v1 = v11 - 10000 * (unsigned int)PopCalculateWakeTimeAdjustment();
    if ( v9 - 100000000 < v1 )
    {
      if ( v1 <= v9
        || v1 - v9 < (-(__int64)(PopPendingUserPresenceDuringSystemSleep != 0) & 0xFFFFFFFFBE6F5500uLL) + 1200000000 )
      {
        v5 = 1;
      }
      else
      {
        *a1 = 0;
        v3 = 3;
        dword_1404430A0 = 3;
      }
    }
    else
    {
      *a1 = 0;
      v3 = 2;
      dword_1404430A0 = 3;
    }
    v7 = 0;
  }
  else
  {
    dword_1404430A0 = 3;
    v3 = 1;
    *a1 = 0;
  }
  PopDiagTraceRtcWakeInfo(v4, v5, v3, (unsigned __int8)*a1, v7, v4, v1);
  return v5;
}
