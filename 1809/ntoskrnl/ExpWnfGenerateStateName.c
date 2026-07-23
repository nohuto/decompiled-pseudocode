/*
 * XREFs of ExpWnfGenerateStateName @ 0x14060F3A8
 * Callers:
 *     NtCreateWnfStateName @ 0x14060ED20 (NtCreateWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DC560 (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(__int64 *a1, int a2, int a3, char a4)
{
  char v4; // si
  __int64 HostSilo; // rbx
  char *ServerSiloGlobals; // rax
  volatile signed __int64 *v10; // rax
  signed __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rdx
  __int64 result; // rax
  signed __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  if ( a3 == 4 )
  {
    HostSilo = PsGetHostSilo();
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(HostSilo);
  }
  else
  {
    HostSilo = PsGetCurrentServerSilo();
    ServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  v10 = (volatile signed __int64 *)(ServerSiloGlobals + 904);
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(HostSilo, v15);
    if ( (int)result < 0 )
      return result;
    v13 = v15[0];
  }
  else
  {
    do
    {
      v11 = _InterlockedExchangeAdd64(v10 + 6, 1uLL);
      v12 = v11 == -1;
      v13 = v11 + 1;
      v15[0] = v13;
    }
    while ( v12 );
  }
  if ( (v13 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = (16 * ((v13 << 7) | a2 & 3)) | (a4 != 0 ? 0x400 : 0) | ((v4 & 0xF) << 6) & 0x7FEu | 1;
  return 0LL;
}
