/*
 * XREFs of KiFatalFilter @ 0x1402A5B48
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400A1700 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
