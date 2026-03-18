/*
 * XREFs of ACPIBusReenumerateSelfInterface @ 0x1C0093448
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B2A0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C000CD58 (ACPIInitReferenceDeviceExtension.c)
 */

__int64 __fastcall ACPIBusReenumerateSelfInterface(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx

  if ( *(_WORD *)(a2 + 16) < 0x28u )
  {
    return (unsigned int)-1073741789;
  }
  else if ( *(_WORD *)(a2 + 18) )
  {
    v2 = ACPIInitReferenceDeviceExtension(a1);
    v5 = 0;
    if ( v2 )
    {
      *(_OWORD *)v3 = ReenumerateSelfInterface;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)&off_1C006D818;
      *(_QWORD *)(v3 + 32) = ACPIBusReenumerateSelf;
      *(_QWORD *)(v3 + 8) = v4;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v5;
}
