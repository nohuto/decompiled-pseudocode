/*
 * XREFs of ExInitializeFastOwnerEntry @ 0x1401669E0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

struct _KTHREAD *__fastcall ExInitializeFastOwnerEntry(_QWORD *a1)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  memset(a1, 0, 0x48uLL);
  result = KeGetCurrentThread();
  a1[4] = result;
  return result;
}
