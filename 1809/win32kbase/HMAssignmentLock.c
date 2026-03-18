/*
 * XREFs of HMAssignmentLock @ 0x1C0031820
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0063AA0 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0063FE4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0064BC0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00659EC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C0065E78 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C01266D8 (rimDispatchCompleteFrame.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0131148 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01363BC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C014E080 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ?LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ @ 0x1C014FC88 (-LockTouchDeviceHandle@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C002FDB0 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int64 __fastcall HMAssignmentLock(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = **(_QWORD **)a1;
  **(_QWORD **)a1 = v1;
  if ( !v2 || v2 != v1 )
  {
    if ( v1 )
    {
      if ( (*((_BYTE *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)v1 + 25) & 1) != 0 )
        UserSetLastError(87LL);
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
    }
    if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(v2);
  }
  return v2;
}
