/*
 * XREFs of VfCtxHookAndConnectInterrupt @ 0x140942964
 * Callers:
 *     VerifierIoConnectInterrupt @ 0x140929A80 (VerifierIoConnectInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ViCtxAllocateIsrContext @ 0x140942BE8 (ViCtxAllocateIsrContext.c)
 */

__int64 __fastcall VfCtxHookAndConnectInterrupt(
        __int64 a1,
        __int64 (__fastcall *a2)(),
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        int a8,
        char a9,
        __int64 a10,
        char a11)
{
  void *v11; // rbx
  __int64 v13; // r11
  __int64 (__fastcall *v14)(); // rdi
  __int64 IsrContext; // rax
  int v18; // edi

  v11 = 0LL;
  v13 = a3;
  v14 = a2;
  if ( ViCtxInitializedIsrStateBlocks )
  {
    IsrContext = ViCtxAllocateIsrContext(a2, a3, 0LL);
    v11 = (void *)IsrContext;
    if ( !IsrContext )
      return 3221225626LL;
    v14 = ViCtxIsr;
    v13 = IsrContext;
  }
  v18 = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(), __int64, __int64, int, char, char, int, char, __int64, char))pXdvIoConnectInterrupt)(
          a1,
          v14,
          v13,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11);
  if ( v18 < 0 )
  {
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)v18;
}
