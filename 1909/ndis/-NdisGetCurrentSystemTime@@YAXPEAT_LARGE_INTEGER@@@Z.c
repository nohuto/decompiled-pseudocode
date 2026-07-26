/*
 * XREFs of ?NdisGetCurrentSystemTime@@YAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00807C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisGetCurrentSystemTime(union _LARGE_INTEGER *a1)
{
  a1->QuadPart = MEMORY[0xFFFFF78000000014];
}
