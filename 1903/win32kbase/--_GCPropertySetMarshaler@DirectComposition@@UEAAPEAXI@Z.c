/*
 * XREFs of ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000FBD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CPropertySetMarshaler *__fastcall DirectComposition::CPropertySetMarshaler::`scalar deleting destructor'(
        DirectComposition::CPropertySetMarshaler *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = 0;
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 16) = 0;
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
