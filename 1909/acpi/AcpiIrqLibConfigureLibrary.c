/*
 * XREFs of AcpiIrqLibConfigureLibrary @ 0x1C00BE590
 * Callers:
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 * Callees:
 *     IcAddSecondaryIcInstance @ 0x1C009D764 (IcAddSecondaryIcInstance.c)
 *     TraceLoggingRegisterEx @ 0x1C00A2E08 (TraceLoggingRegisterEx.c)
 *     IcAddGicInstance @ 0x1C00B6E58 (IcAddGicInstance.c)
 *     IrqArbUpdateInterruptLimit @ 0x1C00BB078 (IrqArbUpdateInterruptLimit.c)
 *     IrqPolicyConfigure @ 0x1C00BD694 (IrqPolicyConfigure.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00BE698 (IrqPolicyUpdatePolicy.c)
 *     IrqLibpParseMadt @ 0x1C00BE6F8 (IrqLibpParseMadt.c)
 *     ProcessorConfigure @ 0x1C00BE904 (ProcessorConfigure.c)
 */

__int64 __fastcall AcpiIrqLibConfigureLibrary(int a1, ETWENABLECALLBACK *a2, void *a3)
{
  int v4; // edx
  __int64 result; // rax

  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C007F120, a2, a3);
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
          HalPrivateDispatchTable[22] = IrqTransGetInterruptVector;
          HalPrivateDispatchTable[23] = IrqLibpGetVectorInput;
          HalPrivateDispatchTable[27] = IrqLibAllocateMessageTarget;
          HalPrivateDispatchTable[28] = IrqLibFreeMessageTarget;
          return 0LL;
        }
      }
    }
  }
  return result;
}
