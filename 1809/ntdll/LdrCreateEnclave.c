/*
 * XREFs of LdrCreateEnclave @ 0x1800CEBB0
 * Callers:
 *     <none>
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     ZwCreateEnclave @ 0x1800A1730 (ZwCreateEnclave.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CF1E0 (LdrpCreateSoftwareEnclave.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800D1E18 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 */

__int64 __fastcall LdrCreateEnclave(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int Enclave; // ebx
  __int64 v10; // [rsp+58h] [rbp-10h]

  v10 = *a2;
  Enclave = ZwCreateEnclave();
  if ( Enclave >= 0 )
  {
    if ( a6 == 16 && (Enclave = LdrpCreateSoftwareEnclave(v10, a4), Enclave < 0) )
      ZwFreeVirtualMemory();
    else
      *a2 = v10;
  }
  if ( a6 == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16LL, (unsigned int)Enclave);
  return (unsigned int)Enclave;
}
