/*
 * XREFs of sub_180062B70 @ 0x180062B70
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     TpAllocWork @ 0x180062C70 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x180062E20 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062E90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     sub_18006352C @ 0x18006352C (sub_18006352C.c)
 */

__int64 __fastcall sub_180062B70(unsigned int a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  sub_18006352C();
  if ( a1 )
  {
    v3 = a1;
    if ( a1 > 0x10 )
      v3 = 16;
  }
  else
  {
    v3 = 4;
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v3 = 0;
  }
  if ( v3 > 1 && !byte_180165300 )
  {
    v2 = sub_180062F34(&Pool, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(Pool, -300000000LL);
      TpSetPoolMaxThreads(Pool, v3 - 1);
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = Pool;
      CallbackEnviron.Version = 3;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      return (unsigned int)TpAllocWork(&Work, (PTP_WORK_CALLBACK)sub_18002E1E0, 0LL, &CallbackEnviron);
    }
  }
  return (unsigned int)v2;
}
