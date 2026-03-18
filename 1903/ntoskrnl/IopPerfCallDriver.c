/*
 * XREFs of IopPerfCallDriver @ 0x14029A534
 * Callers:
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140180740 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x140962E34 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140963620 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x14096368C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IopAllocateIrpExtension @ 0x1400A7E50 (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x140180764 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14029A32C (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x14029A998 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x14029AA68 (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, IRP *a2)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp

  if ( (IopPerfStatus & 2) != 0 )
  {
    if ( IopIrpHasValidCombinationOfExtensionTypes((__int64)a2, 1) )
    {
      IrpExtension = IopAllocateIrpExtension((__int64)a2, 1);
      if ( IrpExtension )
        *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
    }
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v5 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v5);
    v6 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v5);
    ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v6;
}
