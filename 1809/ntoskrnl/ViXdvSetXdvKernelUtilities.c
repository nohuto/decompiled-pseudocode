/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x140309E78
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140928510 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(void (__fastcall *a1)(__int64 (__fastcall **)(PCONTEXT ContextRecord)))
{
  char result; // al

  result = (char)a1;
  if ( a1 )
  {
    a1(&KernelUtils);
    return 1;
  }
  return result;
}
