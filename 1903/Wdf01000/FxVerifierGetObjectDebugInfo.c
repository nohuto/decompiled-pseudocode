/*
 * XREFs of FxVerifierGetObjectDebugInfo @ 0x1C005A6D4
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C00593B0 (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1C005AA0C (FxVerifierReadObjectDebugInfo.c)
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0061E50 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
FxObjectDebugInfo *__fastcall FxVerifierGetObjectDebugInfo(void *Key, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  __int64 v4; // rdi
  int ULong; // eax
  int v6; // r14d
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rax
  int ObjectDebugInfo; // eax
  FxObjectDebugInfo *pInfo; // [rsp+38h] [rbp-19h] BYREF
  _UNICODE_STRING valueName; // [rsp+40h] [rbp-11h] BYREF
  _BYTE valueName_buffer[56]; // [rsp+50h] [rbp-1h] OVERLAPPED BYREF
  wchar_t v13; // [rsp+88h] [rbp+37h]

  *(_QWORD *)&valueName.Length = 0LL;
  FxVerifierReadObjectDebugInfo(
    Key,
    FxDriverGlobals,
    (FxObjectDebugInfo **)&valueName,
    L"TrackHandles",
    FxObjectDebugTrackReferences,
    0LL);
  v4 = *(_QWORD *)&valueName.Length;
  if ( *(_QWORD *)&valueName.Length )
    FxDriverGlobals->FxVerifyTagTrackingEnabled = 1;
  v13 = aObjectleakdete[24];
  *(_OWORD *)&valueName_buffer[8] = *(_OWORD *)L"ObjectLeakDetectionLimit";
  valueName.Buffer = (wchar_t *)3276848;
  *(_OWORD *)&valueName_buffer[24] = *(_OWORD *)L"akDetectionLimit";
  *(_QWORD *)valueName_buffer = &valueName_buffer[8];
  *(_OWORD *)&valueName_buffer[40] = *(_OWORD *)L"ionLimit";
  ULong = CUmdfSvcConfig::_QueryULong(Key, (const _UNICODE_STRING *)&valueName.Buffer, (unsigned int *)&pInfo);
  v6 = (int)pInfo;
  if ( ULong < 0 )
    v6 = -1;
  LODWORD(pInfo) = v6;
  if ( v6 != -1 )
    FxDriverGlobals->FxVerifyLeakDetection = (FxObjectDebugLeakDetection *)ExAllocatePoolWithTag(
                                                                             ExDefaultNonPagedPoolType,
                                                                             0x14uLL,
                                                                             FxDriverGlobals->Tag);
  FxVerifyLeakDetection = FxDriverGlobals->FxVerifyLeakDetection;
  if ( FxVerifyLeakDetection )
  {
    *(_QWORD *)&FxVerifyLeakDetection->Enabled = 0LL;
    *(_QWORD *)&FxVerifyLeakDetection->LimitScaled = 0LL;
    FxVerifyLeakDetection->DeviceCnt = 0;
    FxDriverGlobals->FxVerifyLeakDetection->Limit = v6;
    FxDriverGlobals->FxVerifyLeakDetection->LimitScaled = v6;
    FxDriverGlobals->FxVerifyLeakDetection->ObjectCnt = 0;
    FxDriverGlobals->FxVerifyLeakDetection->DeviceCnt = 0;
    FxDriverGlobals->FxVerifyLeakDetection->Enabled = 1;
    ObjectDebugInfo = FxVerifierReadObjectDebugInfo(
                        Key,
                        FxDriverGlobals,
                        (FxObjectDebugInfo **)&valueName,
                        L"ObjectsForLeakDetection",
                        FxObjectDebugTrackObjectCount,
                        FX_OBJECT_LEAK_DETECTION_DEFAULT_TYPES);
    v4 = *(_QWORD *)&valueName.Length;
    if ( ObjectDebugInfo < 0 || !*(_QWORD *)&valueName.Length )
    {
      ExFreePoolWithTag(FxDriverGlobals->FxVerifyLeakDetection, 0);
      FxDriverGlobals->FxVerifyLeakDetection = 0LL;
    }
  }
  return (FxObjectDebugInfo *)v4;
}
