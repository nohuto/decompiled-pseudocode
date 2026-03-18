/*
 * XREFs of DestroyKF @ 0x1C00B73C0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0073634 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     DestroyKL @ 0x1C00B7334 (DestroyKL.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C01025A0 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C007343C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     RemoveKeyboardLayoutFile @ 0x1C00B7404 (RemoveKeyboardLayoutFile.c)
 */

__int64 __fastcall DestroyKF(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v7,
    a2,
    a3);
  result = HMMarkObjectDestroyWorker(a1);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile();
    Win32FreePool(a1[3]);
    return HMFreeObject(a1, v5, v6);
  }
  return result;
}
