/*
 * XREFs of KeSecureProcess @ 0x1402A4F9C
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslInitializeSecureProcess @ 0x14028F94C (VslInitializeSecureProcess.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  _BYTE v14[48]; // [rsp+40h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v14);
  v12 = VslInitializeSecureProcess(a2, BugCheckParameter1->SecureState.SecureHandle, a3, a4, a5, a6, a7, a8);
  KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
  return v12;
}
