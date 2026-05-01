/*
 * XREFs of ?RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z @ 0x180381FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::RemoveValue(
        VirtualDesktopRegistryHelpers *this,
        unsigned __int8 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  bool v5; // zf
  LSTATUS v7; // eax
  unsigned int v8; // ebx
  bool v9; // cc
  HKEY phkResult; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
    v5 = *((_QWORD *)this + 3) == 0LL;
  else
    v5 = *((_QWORD *)this + 2) == 0LL;
  if ( v5 )
    return 0LL;
  phkResult = 0LL;
  v7 = RegOpenKeyW(*((HKEY *)this + a2 + 2), a3, &phkResult);
  v8 = v7;
  v9 = v7 <= 0;
  if ( v7 || (v7 = RegDeleteValueW(phkResult, a4), v8 = v7, v9 = v7 <= 0, v7) )
  {
    if ( !v9 )
      v8 = (unsigned __int16)v7 | 0x80070000;
  }
  else
  {
    v8 = 0;
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  return v8;
}
