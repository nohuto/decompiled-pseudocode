/*
 * XREFs of KiFatalFilter @ 0x1402A5DE8
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C1880 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
