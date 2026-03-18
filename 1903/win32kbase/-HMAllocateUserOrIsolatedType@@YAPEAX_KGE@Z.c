/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0053DA0
 * Callers:
 *     HMAllocObject @ 0x1C0027A70 (HMAllocObject.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0053E48 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(size_t Size, __int16 a2, unsigned __int8 a3)
{
  if ( (a2 & 0x200) != 0 )
    return HMAllocateIsolatedType(a3);
  else
    return Win32AllocPoolZInit(Size, *((unsigned int *)&unk_1C01D2E98 + 6 * a3));
}
