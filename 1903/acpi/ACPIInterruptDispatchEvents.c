/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x1C002220C
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0021910 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0022400 (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0022470 (ACPIReadGpeStatusRegister.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // r15d
  unsigned int v1; // edi
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  unsigned __int8 v4; // si
  char v5; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v6; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  char *v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+5Ch] [rbp-14h]

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0LL;
    do
    {
      v3 = ACPIReadGpeStatusRegister(v1);
      v4 = v3 & *((_BYTE *)GpeCurEnable + v2);
      if ( (v3 & (unsigned __int8)~*((_BYTE *)GpeHandlerRegistered + v2)) != 0 )
      {
        v5 = v3 & ~*((_BYTE *)GpeHandlerRegistered + v2);
        v6 = v1;
        if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_UNEXPECTED_GPE) )
        {
          UserData.Reserved = 0;
          v10 = 0;
          UserData.Ptr = (unsigned __int64)&v6;
          UserData.Size = 4;
          v8 = &v5;
          v9 = 1;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_UNEXPECTED_GPE, 0LL, 2u, &UserData);
        }
        ACPIWriteGpeStatusRegister(v1);
      }
      *((_BYTE *)GpePending + v2) |= v4;
      *((_BYTE *)GpeRunMethod + v2) |= v4;
      if ( (AcpiOverrideAttributes & 0x2000000) != 0 )
        *((_BYTE *)GpeCurEnable + v2) &= ~(v4 & *((_BYTE *)GpeIsLevel + v2));
      else
        *((_BYTE *)GpeCurEnable + v2) &= ~v4;
      if ( (v4 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v2)) != 0 )
        ACPIWriteGpeStatusRegister(v1);
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  AcpiGpeWorkDone = 1;
  if ( !AcpiGpeDpcRunning && !AcpiGpeDpcScheduled )
  {
    AcpiGpeDpcScheduled = 1;
    KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
