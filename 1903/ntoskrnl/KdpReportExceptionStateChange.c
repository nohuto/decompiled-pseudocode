/*
 * XREFs of KdpReportExceptionStateChange @ 0x1409552CC
 * Callers:
 *     KdpReport @ 0x1402A2BA0 (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x1402AE560 (KiFreezeTargetExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KdpSetCommonState @ 0x1402A260C (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 *     KdpQuickMoveMemory @ 0x140957298 (KdpQuickMoveMemory.c)
 *     KdpSetContextState @ 0x140957430 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v9; // [rsp+28h] [rbp-D8h]
  _QWORD v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v11[60]; // [rsp+40h] [rbp-C0h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  do
  {
    KdpSetCommonState(12336, a2, (__int64)v11);
    KdpQuickMoveMemory(&v11[8], a1, 152LL);
    v11[46] = a3 == 0;
    KdpSetContextState(v11, a2);
    LOWORD(v8) = 240;
    v9 = v11;
    LOWORD(v10[0]) = 0;
    result = KdpSendWaitContinue(v6, &v8, v10, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
