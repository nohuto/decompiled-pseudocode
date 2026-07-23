/*
 * XREFs of KiFatalExceptionHandler @ 0x14028F5AC
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalExceptionHandler(ULONG_PTR *a1)
{
  KeBugCheckEx(0x1Eu, *(int *)a1, a1[2], a1[4], a1[5]);
}
