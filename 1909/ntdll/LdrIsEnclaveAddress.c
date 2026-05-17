/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800CD6C0
 * Callers:
 *     RtlGuardCheckImageBase @ 0x18007358C (RtlGuardCheckImageBase.c)
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     LdrpDereferenceEnclave @ 0x1800CDC04 (LdrpDereferenceEnclave.c)
 */

char __fastcall LdrIsEnclaveAddress(unsigned __int64 a1)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  char v7; // [rsp+3Ch] [rbp-2Ch]

  v2 = LdrpObtainLockedEnclave(a1, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 14) == 16 )
    {
      v5 = v2[14];
      if ( v5 )
      {
        if ( a1 == *(_QWORD *)(v5 + 184) && (int)ZwQueryVirtualMemory() >= 0 )
          v3 = (v7 & 0x40) != 0;
      }
    }
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    LdrpDereferenceEnclave(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
