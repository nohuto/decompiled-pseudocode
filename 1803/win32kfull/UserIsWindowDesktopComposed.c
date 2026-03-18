/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C012B430
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  LOBYTE(a2) = 1;
  v2 = 0;
  v3 = HMValidateHandleNoSecure(a1, a2);
  if ( v3 )
    return (unsigned int)IsWindowDesktopComposed(v3);
  return v2;
}
