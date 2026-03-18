/*
 * XREFs of MmDeleteTeb @ 0x1405DF66C
 * Callers:
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140621450 (PspInsertThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1400747E0 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x1405DF71C (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2)
{
  void *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[48]; // [rsp+28h] [rbp-40h] BYREF

  KiStackAttachProcess(a1, 0LL, (__int64)v6);
  v3 = (void *)MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess((__int64)v6, 0LL);
}
