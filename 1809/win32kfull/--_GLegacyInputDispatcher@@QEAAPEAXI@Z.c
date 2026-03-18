/*
 * XREFs of ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C0133FF4
 * Callers:
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     <none>
 */

LegacyInputDispatcher *__fastcall LegacyInputDispatcher::`scalar deleting destructor'(LegacyInputDispatcher *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &LegacyInputDispatcher::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    Win32FreePool(v5);
  Win32FreePool(this);
  return this;
}
