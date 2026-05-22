/*
 * XREFs of ??_GInputDestTarget@@UEAAPEAXI@Z @ 0x1800C7870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

InputDestTarget *__fastcall InputDestTarget::`scalar deleting destructor'(InputDestTarget *this, char a2)
{
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
