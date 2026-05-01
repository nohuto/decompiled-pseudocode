/*
 * XREFs of ?RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z @ 0x180407670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::RemoveValue(
        VirtualDesktopRegistryHelpers *this,
        char a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v5; // rax
  HKEY v7; // rcx
  LSTATUS v8; // eax
  unsigned int v9; // ebx
  bool v10; // cc
  HKEY phkResult; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      v5 = 16LL;
      goto LABEL_7;
    }
    return 0LL;
  }
  if ( !*((_QWORD *)this + 3) )
    return 0LL;
  v5 = 24LL;
LABEL_7:
  v7 = *(HKEY *)((char *)this + v5);
  phkResult = 0LL;
  v8 = RegOpenKeyW(v7, a3, &phkResult);
  v9 = v8;
  v10 = v8 <= 0;
  if ( v8 || (v8 = RegDeleteValueW(phkResult, a4), v9 = v8, v10 = v8 <= 0, v8) )
  {
    if ( !v10 )
      v9 = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    v9 = 0;
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  return v9;
}
