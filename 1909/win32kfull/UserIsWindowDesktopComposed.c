/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C014F820
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rax

  v3 = (_DWORD *)a2;
  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure(a1, a2, a3);
  if ( v5 )
  {
    *v3 = IsWindowDesktopComposed(v5);
    return 1;
  }
  return v4;
}
