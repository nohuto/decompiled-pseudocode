/*
 * XREFs of DestroyKF @ 0x1C012A5BC
 * Callers:
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C00B0C60 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0129D60 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     DestroyKL @ 0x1C012A5F4 (DestroyKL.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C005F400 (HMMarkObjectDestroy.c)
 *     RemoveKeyboardLayoutFile @ 0x1C012A7F4 (RemoveKeyboardLayoutFile.c)
 */

__int64 __fastcall DestroyKF(_QWORD *a1)
{
  __int64 result; // rax

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile(a1);
    Win32FreePool(a1[3]);
    return HMFreeObject(a1);
  }
  return result;
}
