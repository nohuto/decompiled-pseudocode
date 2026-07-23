/*
 * XREFs of ViInitSystemPhase0 @ 0x1409DBF34
 * Callers:
 *     VerifierInitSystem @ 0x1409DBED4 (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409275A0 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x1409286B8 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x140938490 (VfSetVerifierRunningMode.c)
 *     ViInitPickRandomTargets @ 0x1409DC108 (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x1409DC150 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x1409F9498 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  LARGE_INTEGER v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  __int64 *v13; // rdi
  __int64 v14; // r12
  unsigned __int16 v15; // dx
  __int64 *QuadPart; // rbx
  unsigned __int16 v17; // dx
  int v18; // edx
  __int64 v19; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 240);
  v4 = 2LL;
  v6 = *(_QWORD *)(v3 + 240);
  v7 = *(_DWORD *)(v3 + 116) & 2;
  v8 = VfOptionFlags & 0x7FF;
  VfOptionFlags = v8;
  if ( (v8 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v8 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  LOBYTE(a3) = 1;
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0LL, a3);
  qword_14040E7E8 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_14040E2F8 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_14040E2E8 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (MmVerifierData & 0x400000) != 0 ? 2 : 4;
    dword_14041BADC = VfVerifyMode;
  }
  if ( MmVerifyDriverLevel != -1 )
    VfRuleClasses[0] = MmVerifyDriverLevel;
  if ( !v7 && v6 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v6 + 56);
    BugCheckParameter1 = *(_QWORD *)(v6 + 64);
    qword_140986A70 = *(_QWORD *)(v6 + 72);
    qword_140986A78 = *(_QWORD *)(v6 + 80);
    qword_140986A80 = *(_QWORD *)(v6 + 88);
  }
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || ((MmVerifyDriverBufferLength + 1) & 0xFFFFFFFE) == 0 && !VfRandomVerifiedDrivers
    || (v11 = 1, v7) )
  {
    v11 = 0;
  }
  v9 = *(const char **)(a1 + 216);
  VfClearanceFlag = v11;
  if ( strstr(v9, "SAFEBOOT:") || VfClearanceFlag )
  {
    MmVerifyDriverLevel = 0;
    v19 = 0LL;
    do
    {
      VfRuleClassesRecord[v19] = VfRuleClasses[v19];
      VfRuleClasses[v19++] = 0;
      --v4;
    }
    while ( v4 );
    MmVerifyDriverBufferLength = -1;
    VfRandomVerifiedDrivers = 0;
    ViVerifyAllDrivers = 0;
    VfSafeMode = 1;
    return;
  }
  VfTriageSystem(a1);
  if ( MmVerifyDriverLevel == -1 )
    goto LABEL_15;
  if ( !VfRandomVerifiedDrivers && MmVerifyDriverBufferLength == -1 )
    VfInitSetVerifyDriverTargets(L"*");
  if ( MmVerifyDriverLevel == -1 || (MmVerifyDriverLevel & 0x400000) == 0 )
LABEL_15:
    VfRandomVerifiedDrivers = 0;
  if ( VfRandomVerifiedDrivers )
  {
    v12 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v12;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v12 >= 3 )
    {
      if ( v12 > 0x200 )
        ViExpectedDriversCount = 512;
    }
    else
    {
      ViExpectedDriversCount = 256;
    }
  }
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_40;
  if ( ViVerifyAllDrivers == 2 )
  {
    ViVerifyAllDrivers = 1;
    KernelVerifier = 1;
    ViForceAllDriversSuspect = 1;
LABEL_40:
    MmVerifyDriverBufferLength = 0;
    goto LABEL_41;
  }
  if ( MmVerifyDriverBufferLength == -1 )
  {
    if ( !(unsigned int)ViInitPickRandomTargets() )
      return;
    MmVerifyDriverBufferLength = 0;
    if ( VfVerifyMode > 2 )
      VfSetVerifierRunningMode(2);
    goto LABEL_42;
  }
LABEL_41:
  VfRandomVerifiedDrivers = 0;
LABEL_42:
  if ( (VfOptionFlags & 1) != 0 && !VfRandomVerifiedDrivers )
  {
LABEL_72:
    ViVerifyAllDrivers = 1;
  }
  else if ( !ViVerifyAllDrivers && !VfRandomVerifiedDrivers )
  {
    v10.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v13 = (__int64 *)((char *)MmVerifyDriverBuffer
                    + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v13 )
    {
      v14 = 0x100002601LL;
      do
      {
        v15 = *(_WORD *)v10.QuadPart;
        if ( *(_WORD *)v10.QuadPart <= 0x20u && _bittest64(&v14, v15) || v15 == 12288 )
        {
          QuadPart = (__int64 *)v10.QuadPart;
        }
        else
        {
          if ( v15 == 42 )
            goto LABEL_72;
          QuadPart = (__int64 *)(v10.QuadPart + 2);
          if ( v15 == 34 )
          {
            v10.QuadPart += 2LL;
            QuadPart = (__int64 *)((char *)QuadPart + 2);
            if ( QuadPart >= v13 )
              break;
            do
            {
              if ( *(_WORD *)QuadPart == 34 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
            while ( QuadPart < v13 );
            if ( QuadPart >= v13 )
              break;
          }
          else
          {
            while ( QuadPart < v13 )
            {
              v17 = *(_WORD *)QuadPart;
              if ( *(_WORD *)QuadPart <= 0x20u )
              {
                if ( _bittest64(&v14, v17) )
                  break;
              }
              if ( v17 == 12288 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
          }
          v18 = 2 * (((__int64)QuadPart - v10.QuadPart) >> 1);
          if ( v18 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v10.QuadPart) >> 1);
            String2.MaximumLength = v18 + 2;
            if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
              break;
            String2.Buffer = (wchar_t *)v10.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v10.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v13 );
    }
  }
  VfInitSystemNoRebootNeeded(v10.QuadPart, 1);
}
