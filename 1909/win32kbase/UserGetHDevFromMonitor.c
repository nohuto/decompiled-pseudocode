/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C004FC90
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C004FB04 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C012DDE0 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C004FDE4 (HMValidateSharedHandle.c)
 */

__int64 __fastcall UserGetHDevFromMonitor(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = HMValidateSharedHandle(a1);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 232);
  return result;
}
