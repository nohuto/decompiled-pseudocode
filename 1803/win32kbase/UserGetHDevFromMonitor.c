/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C00595F8
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C00594D4 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C00CB140 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C00597B4 (HMValidateSharedHandle.c)
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
