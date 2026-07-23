/*
 * XREFs of ViDeadlockAnalyze @ 0x14093DAA8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     ViDeadlockAnalyze @ 0x14093DAA8 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1401BC400 (KeGetCurrentStackPointer.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViDeadlockAddParticipant @ 0x14093D71C (ViDeadlockAddParticipant.c)
 *     ViDeadlockAnalyze @ 0x14093DAA8 (ViDeadlockAnalyze.c)
 *     ViDeadlockCertify @ 0x14093DD8C (ViDeadlockCertify.c)
 *     ViDeadlockPreprocessOptions @ 0x14093E718 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockAnalyze(ULONG_PTR a1, ULONG_PTR a2, int a3, unsigned int a4, __int64 a5)
{
  unsigned int v8; // ebx
  PVOID v9; // rcx
  bool v10; // zf
  _DWORD *v11; // rdx
  int v12; // ecx
  __int64 v14; // r15
  _QWORD **v15; // r15
  _QWORD *v16; // rsi
  _QWORD *v17; // r14
  __int64 v18; // rdx
  int v19; // r9d
  unsigned int v20; // ecx
  int v21; // [rsp+78h] [rbp+20h]

  v21 = a4;
  v8 = 1;
  if ( a3 )
  {
    v9 = ViDeadlockGlobals;
    ++*((_DWORD *)ViDeadlockGlobals + 8201);
    v10 = *((_DWORD *)v9 + 8201) == 1073741822;
    *((_DWORD *)v9 + 8199) = 0;
    *((_DWORD *)v9 + 8216) = 0;
    *((_QWORD *)v9 + 4107) = 0LL;
    if ( v10 )
      ViDeadlockState |= 8u;
    KeQueryCurrentStackInformation((_DWORD *)v9 + 8283, (char **)v9 + 4142, (unsigned __int64 *)v9 + 4143);
    a4 = v21;
  }
  v11 = ViDeadlockGlobals;
  v12 = *((_DWORD *)ViDeadlockGlobals + 8201);
  if ( *(_DWORD *)(a2 + 72) >> 3 == v12 )
    return 0LL;
  ++*((_DWORD *)ViDeadlockGlobals + 8199);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a2 + 72) & 7 | (8 * v12);
  if ( a4 > v11[8202] )
  {
    ++v11[8204];
    return 0LL;
  }
  if ( v11[8199] >= v11[8203] )
  {
    ++v11[8205];
    return 0LL;
  }
  if ( (unsigned __int64)&KeGetCurrentStackPointer()[-*((_QWORD *)ViDeadlockGlobals + 4142)] <= 0x1630 )
  {
    ++*((_DWORD *)ViDeadlockGlobals + 8206);
    return 0LL;
  }
  v14 = *(_QWORD *)(a2 + 56);
  if ( a1 != *(_QWORD *)(v14 + 8) || (*(_DWORD *)(a2 + 72) & 4) != 0 )
  {
    v15 = (_QWORD **)(v14 + 24);
    v8 = 0;
    v16 = *v15;
    if ( *v15 == v15 )
      goto LABEL_30;
    while ( 1 )
    {
      v17 = v16 - 5;
      v18 = *(v16 - 5);
      *((_DWORD *)v16 + 8) = v16[4] & 7 | (8 * *((_DWORD *)ViDeadlockGlobals + 8201));
      if ( v18 )
      {
        v19 = v21 + 1;
        if ( v17 == (_QWORD *)a2 )
          v19 = v21;
        v8 = ViDeadlockAnalyze(a1, v18, 0, v19, a5);
        if ( v8 )
          break;
      }
      v16 = (_QWORD *)*v16;
      if ( v16 == v15 )
        goto LABEL_25;
    }
    ViDeadlockAddParticipant((__int64)(v16 - 5));
    if ( v17 != (_QWORD *)a2 )
      ViDeadlockAddParticipant(a2);
LABEL_25:
    if ( !v8 )
    {
LABEL_30:
      if ( a3 )
      {
        v20 = *((_DWORD *)ViDeadlockGlobals + 8199);
        if ( v20 > *((_DWORD *)ViDeadlockGlobals + 8200) )
          *((_DWORD *)ViDeadlockGlobals + 8200) = v20;
      }
      return v8;
    }
  }
  else
  {
    ViDeadlockAddParticipant(a2);
  }
  if ( a3 )
  {
    if ( (unsigned int)ViDeadlockCertify(a5, a2) )
    {
      *((_QWORD *)ViDeadlockGlobals + 4107) = a1;
      ViDeadlockPreprocessOptions(
        byte_14040655C,
        "Type !deadlock in the debugger for more information.",
        4097LL,
        a1,
        a2,
        0LL);
      VfReportIssueWithOptions(0xC4u, 0x1001uLL, a1, a2, 0LL, byte_14040655C);
      return 0LL;
    }
    v8 = 0;
    goto LABEL_30;
  }
  return v8;
}
