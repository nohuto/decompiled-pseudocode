/*
 * XREFs of ?GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180072730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetProcessId(HWND *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  signed int LastError; // eax

  v2 = 0;
  if ( !GetWindowThreadProcessId(this[2], a2) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      return (unsigned int)-2147467259;
    return (unsigned int)LastError;
  }
  return v2;
}
