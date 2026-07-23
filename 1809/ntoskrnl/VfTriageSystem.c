/*
 * XREFs of VfTriageSystem @ 0x1409DC150
 * Callers:
 *     ViInitSystemPhase0 @ 0x1409DBF34 (ViInitSystemPhase0.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     MmTriageActiveInLastCrash @ 0x1409F7E98 (MmTriageActiveInLastCrash.c)
 *     ViFindTriageDriverTargets @ 0x1409F95E0 (ViFindTriageDriverTargets.c)
 *     ViFindTriageRule @ 0x1409F9660 (ViFindTriageRule.c)
 *     ViMakeVerifierSettings @ 0x1409F9700 (ViMakeVerifierSettings.c)
 *     ViTriageSameDriversFromDump @ 0x1409F97F4 (ViTriageSameDriversFromDump.c)
 *     ViValidateTriageRules @ 0x1409F98AC (ViValidateTriageRules.c)
 *     TriageGetBugcheckData @ 0x1409FB6FC (TriageGetBugcheckData.c)
 */

__int64 __fastcall VfTriageSystem(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // edi
  int v7; // r13d
  int v8; // ebx
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  __int64 TriageDriverTargets; // rsi
  __int64 v13; // rcx
  _DWORD *TriageRule; // rbx
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h]

  v1 = 0;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: verifier triage global/registry settings %X \n", ViVerifyTriage);
  if ( MmVerifyDriverLevel != -1 || ViVerifyAllDrivers )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: driver verifier settings present.\n");
    return 0LL;
  }
  if ( ViVerifyTriage == -1 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is not enabled by default.\n");
    return 0LL;
  }
  if ( !ViVerifyTriage )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is disabled explicitely.\n");
    return 0LL;
  }
  if ( ViVerifyTriage < 0 )
  {
    v1 = (unsigned __int16)ViVerifyTriage;
    v4 = (unsigned __int16)ViVerifyTriage;
    ViVerifyTriage = 1;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: simulated crash code %X.\n", v4);
  }
  v5 = *(_QWORD *)(a1 + 240);
  if ( !v5 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: null loader extension.\n");
    return 0LL;
  }
  if ( *(_DWORD *)v5 < 0xD78u )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: unexpected loader extension size.\n");
    return 0LL;
  }
  v18 = *(_QWORD *)(v5 + 40);
  if ( (int)TriageGetBugcheckData(
              v18,
              (unsigned int)&v15,
              (unsigned int)&v15 + 8,
              (unsigned int)&v16,
              (__int64)&v16 + 8,
              (__int64)&v17) >= 0 )
  {
    v11 = v17;
    v9 = v16;
    v7 = 1;
    v10 = DWORD2(v16);
    v8 = DWORD2(v15);
    v6 = v15;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a real crash happened.\n");
  }
  else
  {
    if ( !v1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: standard retail exit point.\n");
      return 0LL;
    }
    v6 = v1;
    v7 = 0;
    *(_QWORD *)&v15 = v1;
    v8 = -1;
    *((_QWORD *)&v15 + 1) = -1LL;
    v9 = -1;
    *(_QWORD *)&v16 = -1LL;
    v10 = -1;
    *((_QWORD *)&v16 + 1) = -1LL;
    v11 = -1;
    v17 = -1LL;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a fake crash will be simulated.\n");
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: previous crash was %Ix %Ix %Ix %Ix %Ix.\n", v6, v8, v9, v10, v11);
  ViTriageCrashData = v15;
  qword_14040E540 = v17;
  xmmword_14040E530 = v16;
  if ( v7 )
  {
    if ( (unsigned int)MmTriageActiveInLastCrash(a1) == 1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it was active in previous crash or server system.\n");
      return 0LL;
    }
    if ( !(unsigned int)ViTriageSameDriversFromDump(a1, v18) )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: some drivers changed from previous crash.\n");
      return 0LL;
    }
  }
  if ( !(unsigned int)ViValidateTriageRules(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid registry rules.\n");
    return 0LL;
  }
  if ( !(unsigned int)ViValidateTriageRules(&ViInternalTriageRules, 48LL) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid internal rules!\n");
    return 0LL;
  }
  TriageDriverTargets = 0LL;
  TriageRule = (_DWORD *)ViFindTriageRule(&ViVerifyTriageRules, (unsigned int)ViVerifyTriageRulesSize, v6);
  if ( !TriageRule )
  {
    TriageRule = (_DWORD *)ViFindTriageRule(&ViInternalTriageRules, 48LL, v6);
    if ( !TriageRule )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: crash code %Ix will not be triaged.\n", v6);
      return 0LL;
    }
  }
  if ( *TriageRule < 0x80000u )
  {
    TriageDriverTargets = ViFindTriageDriverTargets(v13, (unsigned int)ViVerifyTriageRulesSize);
    if ( TriageDriverTargets )
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no `targets' rule found.\n");
  }
  if ( !TriageRule[1] )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to rule with null features.\n");
    return 0LL;
  }
  ViMakeVerifierSettings(TriageRule, TriageDriverTargets);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage enabled!\n");
  return 1LL;
}
