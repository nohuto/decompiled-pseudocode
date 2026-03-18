/*
 * XREFs of ACPIEcStartDevice @ 0x1C0053640
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIEcCreateEcData @ 0x1C00534A0 (ACPIEcCreateEcData.c)
 *     AMLIIsEqualHandle @ 0x1C006308C (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIEcStartDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // r8
  _QWORD *EcData; // rax
  __int64 result; // rax
  __int64 v10; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(_QWORD **)(DeviceExtension + 184);
  if ( !v7 )
  {
    if ( !gECDTContext
      || !(unsigned __int8)AMLIIsEqualHandle(*(_QWORD *)(DeviceExtension + 712), *(_QWORD *)(gECDTContext + 56)) )
    {
      EcData = ACPIEcCreateEcData();
      v7 = EcData;
      if ( !EcData )
        return 3221225626LL;
      v10 = *(_QWORD *)(v6 + 712);
      EcData[7] = v10;
      dword_1C0082858 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    *(_QWORD *)(v6 + 184) = v7;
  }
  *v7 = BugCheckParameter3;
  result = ACPIInitStartDevice(
             BugCheckParameter3,
             v5,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))&ACPIEcStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
