/*
 * XREFs of ??_G?$_Ref_count_obj@VSystemCursorService@@@std@@UEAAPEAXI@Z @ 0x1800C9180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<SystemCursorService>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xD0);
  return a1;
}
