/*
 * XREFs of ACPIWriteOscSupportToRegistry @ 0x1C0093BC8
 * Callers:
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 * Callees:
 *     OSCreateHandle @ 0x1C0093C84 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0093D78 (OSWriteRegValue.c)
 */

NTSTATUS __fastcall ACPIWriteOscSupportToRegistry(int a1, int a2, int a3)
{
  NTSTATUS result; // eax
  int Data; // [rsp+30h] [rbp+10h] BYREF
  int v5; // [rsp+38h] [rbp+18h] BYREF
  int v6; // [rsp+40h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+28h]

  v6 = a3;
  v5 = a2;
  Data = a1;
  Handle = 0LL;
  result = OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  if ( result >= 0 )
  {
    OSWriteRegValue("WHEAOSCImplemented", Handle, &Data, 4u);
    OSWriteRegValue("APEIOSCGranted", Handle, &v5, 4u);
    result = OSWriteRegValue("CPPCRevisionGranted", Handle, &v6, 4u);
    if ( Handle )
      return ZwClose(Handle);
  }
  return result;
}
