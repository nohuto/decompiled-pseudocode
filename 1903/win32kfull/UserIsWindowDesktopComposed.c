/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C014EA60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowDesktopComposed(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = (_DWORD *)a2;
  v5 = 0;
  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v6 )
  {
    *v4 = IsWindowDesktopComposed(v6);
    return 1;
  }
  return v5;
}
