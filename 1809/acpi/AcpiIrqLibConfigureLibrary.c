/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00B9364
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C0094A94 (IcAddSecondaryIcInstance.c)
 *     TraceLoggingRegisterEx @ 0x1C009FFC8 (TraceLoggingRegisterEx.c)
 *     IcAddGicInstance @ 0x1C00B3358 (IcAddGicInstance.c)
 *     IrqArbUpdateInterruptLimit @ 0x1C00B7078 (IrqArbUpdateInterruptLimit.c)
 *     IrqPolicyConfigure @ 0x1C00B869C (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00B946C (IrqPolicyUpdatePolicy.c)
 *     IrqLibpParseMadt @ 0x1C00B94CC (IrqLibpParseMadt.c)
 *     ProcessorConfigure @ 0x1C00B96D8 (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1, ETWENABLECALLBACK *a2, void *a3)
{
  int v4; // edx
  __int64 result; // rax

  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C007D120, a2, a3);
  IrqLibRealInterruptModel = a1;
  v4 = 1;
  if ( (unsigned int)(a1 - 2) > 2 )
    v4 = a1;
  IrqLibInterruptModel = v4;
  if ( v4 != 1 )
    return 3221225485LL;
  result = ProcessorConfigure();
  if ( (int)result >= 0 )
  {
    result = IrqPolicyConfigure();
    if ( (int)result >= 0 )
    {
      if ( IrqLibRealInterruptModel != 1 )
      {
        switch ( IrqLibRealInterruptModel )
        {
          case 2:
            IrqLibGicVersion = 1;
            break;
          case 3:
            IrqLibGicVersion = 3;
            break;
          case 4:
            IrqLibpParseMadt();
            result = IcAddGicInstance(0);
            goto LABEL_16;
          default:
            return 3221225473LL;
        }
      }
      result = IrqLibpParseMadt();
LABEL_16:
      if ( (int)result >= 0 )
      {
        result = IrqPolicyUpdatePolicy();
        if ( (int)result >= 0 )
        {
          IrqArbUpdateInterruptLimit();
          IcAddSecondaryIcInstance();
          HalPrivateDispatchTable[22] = (__int64 (__fastcall *)(_QWORD, __int64))IrqTransGetInterruptVector;
          HalPrivateDispatchTable[23] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibpGetVectorInput;
          HalPrivateDispatchTable[27] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibAllocateMessageTarget;
          HalPrivateDispatchTable[28] = (__int64 (__fastcall *)(_QWORD, __int64))IrqLibFreeMessageTarget;
          return 0LL;
        }
      }
    }
  }
  return result;
}
