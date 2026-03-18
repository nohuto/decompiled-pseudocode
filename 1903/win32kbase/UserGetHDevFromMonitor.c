/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C003A1F0
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C003A064 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C0130590 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C003D614 (HMValidateSharedHandle.c)
 */

__int64 UserGetHDevFromMonitor()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = HMValidateSharedHandle();
  result = 0LL;
  if ( v0 )
    return *(_QWORD *)(v0 + 232);
  return result;
}
