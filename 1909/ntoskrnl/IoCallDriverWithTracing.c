/*
 * XREFs of IoCallDriverWithTracing @ 0x140109FA0
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall IoCallDriverWithTracing(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // r8
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID SparePtr; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( *(char *)(a2 + 71) < 0 )
    return IofCallDriver(a1, (PIRP)a2);
  v2 = *(_QWORD *)(a2 + 200);
  if ( !v2 || (*(_BYTE *)v2 & 2) == 0 )
    return IofCallDriver(a1, (PIRP)a2);
  v6 = 0uLL;
  v6 = *(_OWORD *)(v2 + 24);
  CurrentThread = KeGetCurrentThread();
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = &v6;
  result = IofCallDriver(a1, (PIRP)a2);
  KeGetCurrentThread()[1].WaitBlock[0].SparePtr = SparePtr;
  return result;
}
