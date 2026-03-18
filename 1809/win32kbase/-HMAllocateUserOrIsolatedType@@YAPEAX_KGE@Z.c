/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C002E62C
 * Callers:
 *     HMAllocObject @ 0x1C002DDE0 (HMAllocObject.c)
 * Callees:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C002E7E4 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(size_t Size, __int16 a2, unsigned __int8 a3)
{
  if ( (a2 & 0x200) != 0 )
    return HMAllocateIsolatedType(a3);
  else
    return (void *)Win32AllocPoolZInit(Size);
}
