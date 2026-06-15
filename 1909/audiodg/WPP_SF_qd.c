/*
 * XREFs of WPP_SF_qd @ 0x14002BF0C
 * Callers:
 *     ?ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z @ 0x14002BB5C (-ValidateInheritedHandle@CAudioDGModule@@QEAA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_096cc5c6496f370e991444f5a2f987a3_Traceguids, 10LL, (__int64 *)va);
}
