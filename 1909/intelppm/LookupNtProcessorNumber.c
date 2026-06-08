/*
 * XREFs of LookupNtProcessorNumber @ 0x1C0003F94
 * Callers:
 *     GetNtProcessorNumber @ 0x1C0025460 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C002E9D0 (GetLpIndex.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall LookupNtProcessorNumber(_DWORD *a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // ebp
  int ProcessorIdByNtNumber; // edi
  int v5; // edx
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v2, &v9);
      if ( ProcessorIdByNtNumber >= 0 && v9 == a1[12] )
        break;
      if ( ++v2 >= ActiveProcessorCount )
        goto LABEL_12;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001B398,
      0LL);
    if ( (unsigned int)KeCheckProcessorAffinityEx(&unk_1C001B6B0, v2) )
    {
      ProcessorIdByNtNumber = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          1,
          48,
          (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids,
          a1[13],
          v9);
      }
    }
    else
    {
      a1[14] = v2;
      KeAddProcessorAffinityEx(&unk_1C001B6B0, v2);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001B398);
  }
  else
  {
LABEL_12:
    if ( (Globals & 0x200000000000LL) != 0 && (v7 = 0, (v8 = HalPrivateDispatchTable[145](0xFFFFFFFFLL)) != 0) )
    {
      while ( 1 )
      {
        ProcessorIdByNtNumber = ((__int64 (__fastcall *)(_QWORD, int *))HalPrivateDispatchTable[146])(v7, &v9);
        if ( ProcessorIdByNtNumber >= 0 && v9 == a1[12] )
          break;
        if ( ++v7 >= v8 )
          return (unsigned int)-1073741275;
      }
      a1[14] = -1;
      a1[18] = v7;
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)ProcessorIdByNtNumber;
}
