/*
 * XREFs of HMAssignmentLock @ 0x1C0023D60
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C006FBA4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0070920 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00715AC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00A0140 (xxxChangeForegroundKeyboardTable.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00A96F0 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C0153044 (rimDispatchCompleteFrame.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015D7A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C015DC74 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0163C70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0164418 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01804F0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0182D48 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0026A50 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 */

__int64 __fastcall HMAssignmentLock(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx

  v1 = a1[1];
  v2 = **a1;
  **a1 = (__int64)v1;
  if ( !v2 || (__int64 *)v2 != v1 )
  {
    if ( v1 )
    {
      if ( (*((_BYTE *)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)*(_DWORD *)v1 + 25) & 1) != 0 )
        UserSetLastError(87LL);
      _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    }
    if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(v2);
  }
  return v2;
}
