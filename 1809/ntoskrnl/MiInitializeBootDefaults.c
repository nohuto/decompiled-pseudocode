/*
 * XREFs of MiInitializeBootDefaults @ 0x1409DBEF0
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     KiInitializeMutant @ 0x1400DD358 (KiInitializeMutant.c)
 *     InitializeSListHead @ 0x1400F3160 (InitializeSListHead.c)
 *     strstr @ 0x140194EA0 (strstr.c)
 *     MmIsVerifierEnabled @ 0x140921490 (MmIsVerifierEnabled.c)
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
    byte_14043AED5 = 1;
    dword_14054017C = 0;
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
  qword_140438F30 = 0LL;
  v5 = byte_14043ADA0;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_14043AD80[i]);
    if ( i )
      v7 = 2 * byte_14043ADA0[i - 1];
    else
      v7 = 8;
    *v5++ = v7;
  }
  dword_14043A8EC = 5;
  qword_140439FF0 = (__int64)&qword_140439FE8;
  qword_140439FE8 = (__int64)&qword_140439FE8;
  qword_140439FE0 = -10000000LL * dword_140540194;
  SpinLock = 0LL;
  qword_14043AE80 = 0LL;
  qword_140438BD0 = 0LL;
  qword_140438BE8 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140438BE8 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
