/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C00135D8
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C0013464 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C00FECE0 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0013BD4 (HMValidateSharedHandle.c)
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
