/*
 * XREFs of KdpReportExceptionStateChange @ 0x140917954
 * Callers:
 *     KdpReport @ 0x14028CCF0 (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x1402978CC (KiFreezeTargetExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KdpSetCommonState @ 0x14028C768 (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x14091968C (KdpSetContextState.c)
 *     KdpQuickMoveMemory @ 0x140919B04 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // [rsp+20h] [rbp-138h] BYREF
  _BYTE *v8; // [rsp+28h] [rbp-130h]
  _WORD v9[8]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v11[152]; // [rsp+60h] [rbp-F8h] BYREF
  BOOL v12; // [rsp+F8h] [rbp-60h]

  do
  {
    KdpSetCommonState(12336, a2, (__int64)v10);
    KdpQuickMoveMemory(v11, a1, 152LL);
    v12 = a3 == 0;
    KdpSetContextState(v10, a2);
    v9[0] = 0;
    v8 = v10;
    v7 = 240;
    result = KdpSendWaitContinue(240LL, &v7, v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
