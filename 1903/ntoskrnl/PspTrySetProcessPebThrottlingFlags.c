/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x1408C70D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

unsigned __int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *BugCheckParameter1, char a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 *v6; // rcx
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v8);
  v4 = BugCheckParameter1[1].ActiveProcessors.Bitmap[0];
  if ( v4 )
  {
    v5 = 0LL;
    v6 = (__int64 *)BugCheckParameter1[1].ActiveProcessors.Bitmap[6];
    if ( v6 )
      v5 = *v6;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v4 + 80), 0x60u);
      if ( v5 )
        _InterlockedOr((volatile signed __int32 *)(v5 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v4 + 80), 0xFFFFFFBF);
      if ( v5 )
        _InterlockedAnd((volatile signed __int32 *)(v5 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess((struct _KTHREAD *)v8, 0);
}
