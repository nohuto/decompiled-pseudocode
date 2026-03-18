/*
 * XREFs of MiInitializeBootDefaults @ 0x140A1F410
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     InitializeSListHead @ 0x1400EA4C0 (InitializeSListHead.c)
 *     strstr @ 0x14019FD30 (strstr.c)
 *     MmIsVerifierEnabled @ 0x140960530 (MmIsVerifierEnabled.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ecx
  char *v5; // rdi
  unsigned int v6; // ebx
  char v7; // al
  __int64 result; // rax
  int v9; // eax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_140466655 = 1;
    dword_14057118C = 0;
    MEMORY[0xFFFFF780000002EC] = 1;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      MiFlags |= 0x80u;
      MmPageValidationFrequency = v1 - 1;
    }
    if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
    {
      v9 = MiFlags | 1;
      MiFlags |= 1u;
      if ( KernelVerifier == 1 )
        MiFlags = v9 | 2;
    }
    if ( MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
    if ( (MiFlags & 1) != 0 )
    {
      MmLargePageDriverBufferLength = -1;
      MmProtectFreedNonPagedPool = 1;
    }
  }
  v4 = MiFlags | 8;
  MiFlags |= 8u;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v4 | 0x40;
  Dpc.TargetInfoAsUlong = 275;
  Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch;
  v5 = byte_140466520;
  Dpc.DeferredContext = 0LL;
  Dpc.DpcData = 0LL;
  v6 = 0;
  Dpc.ProcessorHistory = 0LL;
  qword_1404645D0 = 0LL;
  qword_140464650 = 0LL;
  do
  {
    InitializeSListHead(&stru_140466500[v6]);
    if ( v6 )
      v7 = 2 * byte_140466520[v6 - 1];
    else
      v7 = 8;
    *v5 = v7;
    ++v6;
    ++v5;
  }
  while ( v6 < 2 );
  dword_14046606C = 5;
  qword_140465708 = (__int64)&qword_140465700;
  qword_140465700 = (__int64)&qword_140465700;
  qword_1404656F8 = -10000000LL * dword_1405711A4;
  qword_140466080 = 0LL;
  SpinLock = 0LL;
  qword_140464290 = 0LL;
  qword_1404642A8 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_1404642A8 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
