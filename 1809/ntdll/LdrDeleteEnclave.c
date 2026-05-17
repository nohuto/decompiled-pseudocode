/*
 * XREFs of LdrDeleteEnclave @ 0x1800CECB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800CF2BC (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800D1F1C (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rdi
  int v3; // ebx

  v1 = LdrpObtainLockedEnclave(a1, 1);
  v2 = v1;
  if ( !v1
    || (v3 = LdrpDeleteEnclave(v1), RtlLeaveCriticalSection((__int64)(v2 + 2)), LdrpDereferenceEnclave(v2), v3 >= 0) )
  {
    v3 = ZwFreeVirtualMemory();
  }
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v3);
  return (unsigned int)v3;
}
