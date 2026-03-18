/*
 * XREFs of ViInitSystemPhase0 @ 0x140A1E0C0
 * Callers:
 *     VerifierInitSystem @ 0x140A1E060 (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x140108C48 (KiInitializeMutant.c)
 *     strstr @ 0x14019F610 (strstr.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x140964AD4 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x140965BD4 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x140976D44 (VfSetVerifierRunningMode.c)
 *     ViInitPickRandomTargets @ 0x140A1E2A0 (ViInitPickRandomTargets.c)
 *     VfTriageSystem @ 0x140A1E2E8 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x140A3DFD4 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  const char *v7; // rcx
  LARGE_INTEGER v8; // rdx
  LARGE_INTEGER v9; // rcx
  int v10; // eax
  unsigned int v11; // eax
  __int64 *v12; // rdi
  __int64 v13; // r12
  unsigned __int16 v14; // dx
  __int64 *QuadPart; // rbx
  unsigned __int16 v16; // dx
  int v17; // edx
  __int64 v18; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v1 = 2LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  v4 = *(_QWORD *)(v3 + 264);
  v5 = *(_DWORD *)(v3 + 116) & 2;
  v6 = VfOptionFlags & 0x7FF;
  VfOptionFlags = v6;
  if ( (v6 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v6 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  KiInitializeMutant(&ViDriversLoadLock, 0, 1);
  qword_140435EC8 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140435A08 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_1404359F8 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = (MmVerifierData & 0x400000) != 0 ? 2 : 4;
    dword_14044665C = VfVerifyMode;
  }
  if ( MmVerifyDriverLevel != -1 )
    VfRuleClasses[0] = MmVerifyDriverLevel;
  if ( !v5 && v4 )
  {
    *(_QWORD *)&VfBugcheckTmpData = *(unsigned int *)(v4 + 56);
    BugCheckParameter1 = *(_QWORD *)(v4 + 64);
    qword_1409C7DB0 = *(_QWORD *)(v4 + 72);
    qword_1409C7DB8 = *(_QWORD *)(v4 + 80);
    qword_1409C7DC0 = *(_QWORD *)(v4 + 88);
  }
  if ( (VfOptionFlags & 0x410) == 0
    || MmVerifyDriverLevel == -1
    || ((MmVerifyDriverBufferLength + 1) & 0xFFFFFFFE) == 0 && !VfRandomVerifiedDrivers
    || (v10 = 1, v5) )
  {
    v10 = 0;
  }
  v7 = *(const char **)(a1 + 216);
  VfClearanceFlag = v10;
  if ( strstr(v7, "SAFEBOOT:") || VfClearanceFlag )
  {
    MmVerifyDriverLevel = 0;
    v18 = 0LL;
    do
    {
      VfRuleClassesRecord[v18] = VfRuleClasses[v18];
      VfRuleClasses[v18++] = 0;
      --v1;
    }
    while ( v1 );
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
    v11 = HIWORD(VfRandomVerifiedDrivers);
    ViExpectedDriversCount = v11;
    HIWORD(VfRandomVerifiedDrivers) = 0;
    if ( v11 >= 3 )
    {
      if ( v11 > 0x200 )
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
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))ViInitPickRandomTargets)(
                          (LARGE_INTEGER)v9.QuadPart,
                          (LARGE_INTEGER)v8.QuadPart) )
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
    v9.QuadPart = (LONGLONG)MmVerifyDriverBuffer;
    v12 = (__int64 *)((char *)MmVerifyDriverBuffer
                    + 2 * (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1));
    if ( MmVerifyDriverBuffer < v12 )
    {
      v13 = 0x100002601LL;
      do
      {
        v14 = *(_WORD *)v9.QuadPart;
        if ( *(_WORD *)v9.QuadPart <= 0x20u && _bittest64(&v13, v14) || v14 == 12288 )
        {
          QuadPart = (__int64 *)v9.QuadPart;
        }
        else
        {
          if ( v14 == 42 )
            goto LABEL_72;
          QuadPart = (__int64 *)(v9.QuadPart + 2);
          if ( v14 == 34 )
          {
            v9.QuadPart += 2LL;
            QuadPart = (__int64 *)((char *)QuadPart + 2);
            if ( QuadPart >= v12 )
              break;
            do
            {
              if ( *(_WORD *)QuadPart == 34 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
            while ( QuadPart < v12 );
            if ( QuadPart >= v12 )
              break;
          }
          else
          {
            while ( QuadPart < v12 )
            {
              v16 = *(_WORD *)QuadPart;
              if ( *(_WORD *)QuadPart <= 0x20u )
              {
                if ( _bittest64(&v13, v16) )
                  break;
              }
              if ( v16 == 12288 )
                break;
              QuadPart = (__int64 *)((char *)QuadPart + 2);
            }
          }
          v17 = 2 * (((__int64)QuadPart - v9.QuadPart) >> 1);
          if ( v17 )
          {
            String2.Length = 2 * (((__int64)QuadPart - v9.QuadPart) >> 1);
            String2.MaximumLength = v17 + 2;
            if ( (unsigned __int16)(v17 + 2) < (unsigned __int16)v17 )
              break;
            String2.Buffer = (wchar_t *)v9.QuadPart;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
        }
        v9.QuadPart = (LONGLONG)QuadPart + 2;
      }
      while ( (__int64 *)((char *)QuadPart + 2) < v12 );
    }
  }
  VfInitSystemNoRebootNeeded(v9.QuadPart, 1);
}
