/*
 * XREFs of DestroyKF @ 0x1C0063BD0
 * Callers:
 *     DestroyKL @ 0x1C0063B44 (DestroyKL.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0063FE4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C00EB6D0 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     RemoveKeyboardLayoutFile @ 0x1C0063C08 (RemoveKeyboardLayoutFile.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall DestroyKF(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile(a1);
    Win32FreePool(a1[3]);
    return HMFreeObject(a1, v3, v4);
  }
  return result;
}
