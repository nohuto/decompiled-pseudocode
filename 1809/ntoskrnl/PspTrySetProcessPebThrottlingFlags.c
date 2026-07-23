/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x14088A410
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 *v6; // rcx
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(a1, 0LL, (__int64)v8);
  v4 = a1[1].ActiveProcessors.Bitmap[1];
  if ( v4 )
  {
    v5 = 0LL;
    v6 = (__int64 *)a1[1].ActiveProcessors.Bitmap[7];
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
  return KiUnstackDetachProcess((__int64)v8, 0LL);
}
