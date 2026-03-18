/*
 * XREFs of KxStartSystemThread @ 0x1401CB100
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

void __noreturn KxStartSystemThread()
{
  void *retaddr; // [rsp+0h] [rbp+0h]
  __int64 v1; // [rsp+8h] [rbp+8h]
  void (__fastcall *v2)(__int64, void *); // [rsp+10h] [rbp+10h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  __writecr8(1uLL);
  v2(v1, retaddr);
  KeBugCheck(0xEu);
}
