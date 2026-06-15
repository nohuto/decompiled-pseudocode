/*
 * XREFs of ??_ECCrossProcessMemoryManager@@UEAAPEAXI@Z @ 0x140014380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessMemoryManager *__fastcall CCrossProcessMemoryManager::`vector deleting destructor'(
        CCrossProcessMemoryManager *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    LocalFree(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
