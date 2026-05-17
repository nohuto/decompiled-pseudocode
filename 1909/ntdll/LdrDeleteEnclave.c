/*
 * XREFs of LdrDeleteEnclave @ 0x1800CD530
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800CDB84 (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CDC04 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800D06EC (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 *v2; // rdi
  int v3; // ebx
  int v4; // esi

  v1 = LdrpObtainLockedEnclave(a1, 1);
  v2 = v1;
  if ( !v1 )
    goto LABEL_5;
  v3 = *((_DWORD *)v1 + 14);
  v4 = LdrpDeleteEnclave(v1);
  RtlLeaveCriticalSection((__int64)(v2 + 2));
  LdrpDereferenceEnclave(v2);
  if ( v3 != 16 )
    v2 = 0LL;
  if ( v4 >= 0 )
LABEL_5:
    v4 = ZwFreeVirtualMemory();
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return (unsigned int)v4;
}
