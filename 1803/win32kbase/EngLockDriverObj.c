/*
 * XREFs of EngLockDriverObj @ 0x1C00D9EC0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgLockEx @ 0x1C002B600 (HmgLockEx.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  struct OBJECT *v2; // rax

  v1 = 0LL;
  v2 = HmgLockEx((unsigned int)hdo, 28, 0);
  if ( v2 )
    return (DRIVEROBJ *)((char *)v2 + 24);
  return v1;
}
