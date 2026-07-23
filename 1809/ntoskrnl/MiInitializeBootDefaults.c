/*
 * XREFs of MiInitializeBootDefaults @ 0x1409DCEF0
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     MmIsVerifierEnabled @ 0x140922490 (MmIsVerifierEnabled.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ecx
  char *v5; // rdi
  unsigned int i; // ebx
  char v7; // al
  __int64 result; // rax
  int v9; // eax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_14043BF95 = 1;
    dword_14054117C = 0;
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
  Dpc.DeferredContext = 0LL;
  Dpc.DpcData = 0LL;
  Dpc.ProcessorHistory = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0LL, 0LL);
  qword_140439FF0 = 0LL;
  v5 = byte_14043BE60;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_14043BE40[i]);
    if ( i )
      v7 = 2 * byte_14043BE60[i - 1];
    else
      v7 = 8;
    *v5++ = v7;
  }
  dword_14043B9AC = 5;
  qword_14043B0B0 = (__int64)&qword_14043B0A8;
  qword_14043B0A8 = (__int64)&qword_14043B0A8;
  qword_14043B0A0 = -10000000LL * dword_140541194;
  SpinLock = 0LL;
  qword_14043BF40 = 0LL;
  qword_140439C90 = 0LL;
  qword_140439CA8 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140439CA8 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
