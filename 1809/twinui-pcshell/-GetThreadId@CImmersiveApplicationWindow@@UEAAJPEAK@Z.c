/*
 * XREFs of ?GetThreadId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180125A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall CImmersiveApplicationWindow::GetThreadId(HWND *this, unsigned int *a2)
{
  DWORD WindowThreadProcessId; // ebx
  signed int result; // eax
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF

  WindowThreadProcessId = GetWindowThreadProcessId(this[2], &dwProcessId);
  if ( WindowThreadProcessId )
  {
    result = 0;
  }
  else
  {
    result = ResultFromKnownLastError();
    if ( result < 0 )
      return result;
  }
  *a2 = WindowThreadProcessId;
  return result;
}
