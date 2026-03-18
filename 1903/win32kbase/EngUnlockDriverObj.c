/*
 * XREFs of EngUnlockDriverObj @ 0x1C0131EA0
 * Callers:
 *     <none>
 * Callees:
 *     HmgLockEx @ 0x1C001E960 (HmgLockEx.c)
 */

BOOL __stdcall EngUnlockDriverObj(HDRVOBJ hdo)
{
  struct OBJECT *v1; // rax

  v1 = HmgLockEx((unsigned int)hdo, 28, 0);
  if ( v1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
    _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
    LODWORD(v1) = 1;
  }
  return (int)v1;
}
