/*
 * XREFs of ValidateArgTypes @ 0x1C00099D0
 * Callers:
 *     LogOp2_32 @ 0x1C0002144 (LogOp2_32.c)
 *     LogOp2 @ 0x1C0009560 (LogOp2.c)
 *     IfElse @ 0x1C00096F0 (IfElse.c)
 *     While @ 0x1C000ACB0 (While.c)
 *     Index @ 0x1C000ADE0 (Index.c)
 *     Buffer @ 0x1C000B020 (Buffer.c)
 *     DerefOf @ 0x1C000B120 (DerefOf.c)
 *     ToInteger @ 0x1C000BDD0 (ToInteger.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     Package @ 0x1C0020DF0 (Package.c)
 *     LNot @ 0x1C0020F10 (LNot.c)
 *     SleepStall @ 0x1C0021550 (SleepStall.c)
 *     Acquire @ 0x1C00226E0 (Acquire.c)
 *     Release @ 0x1C0022840 (Release.c)
 *     Load @ 0x1C00248D0 (Load.c)
 *     OSInterface @ 0x1C00249C0 (OSInterface.c)
 *     Notify @ 0x1C0024BD0 (Notify.c)
 *     CreateXField @ 0x1C0028790 (CreateXField.c)
 *     ExprOp1_64 @ 0x1C002ED8C (ExprOp1_64.c)
 *     Fatal @ 0x1C0066460 (Fatal.c)
 *     ResetSignal @ 0x1C00664D0 (ResetSignal.c)
 *     Unload @ 0x1C0066660 (Unload.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00669C0 (ConcatenateResTemplate.c)
 *     Divide @ 0x1C0066CE0 (Divide.c)
 *     ExprOp1_32 @ 0x1C0066D74 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0066EB0 (ExprOp2_32.c)
 *     LoadTable @ 0x1C0067040 (LoadTable.c)
 *     Match_32 @ 0x1C0067554 (Match_32.c)
 *     Match_64 @ 0x1C0067674 (Match_64.c)
 *     MidString @ 0x1C00677B0 (MidString.c)
 *     ProcessLoadTable @ 0x1C0067C40 (ProcessLoadTable.c)
 *     ToBuffer @ 0x1C0068220 (ToBuffer.c)
 *     ToDecStr @ 0x1C00682A0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0068670 (ToHexStr.c)
 *     ToString @ 0x1C0068990 (ToString.c)
 *     Wait @ 0x1C0068B70 (Wait.c)
 * Callees:
 *     ConvertToInteger @ 0x1C000BE4C (ConvertToInteger.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C0068CD8 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0068E18 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v6; // r9
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r8
  _WORD *v13; // rdi
  _BYTE *v14; // r13
  unsigned __int64 v15; // rdx
  unsigned int v17; // eax
  int ObjectTypeName; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // eax

  v6 = 0LL;
  v8 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  v11 = (int)v10;
  if ( (int)v10 > 0 )
  {
    v12 = 128LL;
    v13 = (_WORD *)(a2 + 2);
    v14 = a4;
    v15 = 0x1C0000000uLL;
    while ( 1 )
    {
      if ( (_DWORD)v6 )
        return (unsigned int)v6;
      if ( *v14 != 73 )
        break;
      if ( *v13 != 1 )
      {
        if ( !a3 || (v33 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8), (v6 = v33) != 0) )
        {
          LogError(3222536200LL, v15, v12, v6);
          AcpiDiagTraceAmlError(a1, 3222536200LL);
          ObjectTypeName = GetObjectTypeName((unsigned __int16)*v13);
          v19 = 198;
          goto LABEL_63;
        }
        goto LABEL_64;
      }
LABEL_8:
      ++v14;
      ++v8;
      v13 += 20;
      if ( v14 - a4 >= v11 )
        return (unsigned int)v6;
    }
    switch ( *v14 )
    {
      case 'A':
        if ( *v13 == 129 )
          goto LABEL_8;
        LogError(3222536201LL, 0x1C0000000uLL, 128LL, v6);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        v22 = GetObjectTypeName((unsigned __int16)*v13);
        PrintDebugMessage(195, v8, v22, 0, 0LL);
        v6 = 3222536201LL;
        goto LABEL_64;
      case 'B':
        if ( *v13 == 3 )
          goto LABEL_8;
        if ( a3 )
        {
          v20 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8);
          v6 = v20;
          if ( !v20 )
            goto LABEL_64;
        }
        LogError(3222536200LL, v15, v12, v6);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v13);
        v19 = 193;
        break;
      case 'C':
        if ( (unsigned __int16)(*v13 - 3) <= 1u )
          goto LABEL_8;
        if ( !a3 || (v29 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8), (v6 = v29) != 0) )
        {
          LogError(3222536201LL, v15, v12, v6);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          v30 = GetObjectTypeName((unsigned __int16)*v13);
          PrintDebugMessage(194, v8, v30, 0, 0LL);
          v6 = 3222536201LL;
        }
        goto LABEL_64;
      case 'D':
        if ( (unsigned __int16)(*v13 - 1) <= 2u )
          goto LABEL_8;
        if ( !a3 || (v23 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8), (v6 = v23) != 0) )
        {
          LogError(3222536201LL, v15, v12, v6);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          v24 = GetObjectTypeName((unsigned __int16)*v13);
          PrintDebugMessage(199, v8, v24, 0, 0LL);
          v6 = 3222536201LL;
        }
        goto LABEL_64;
      case 'E':
        if ( (unsigned __int16)(*v13 - 1) <= 2u || *v13 == 15 )
          goto LABEL_8;
        if ( !a3 || (v25 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8), (v6 = v25) != 0) )
        {
          LogError(3222536201LL, v15, v12, v6);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          v26 = GetObjectTypeName((unsigned __int16)*v13);
          PrintDebugMessage(200, v8, v26, 0, 0LL);
          v6 = 3222536201LL;
        }
        goto LABEL_64;
      case 'F':
        if ( *v13 == 5 )
          goto LABEL_8;
        LogError(3222536200LL, 0x1C0000000uLL, 128LL, v6);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v13);
        v19 = 197;
        break;
      case 'H':
        if ( *v13 == 1 )
        {
          if ( !a3 || (v31 = ConvertToDDBHandle(a2 + 40LL * v8, a2 + 40LL * v8), (v6 = v31) != 0) )
          {
            LogError(3222536201LL, v15, v12, v6);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v32 = GetObjectTypeName((unsigned __int16)*v13);
            PrintDebugMessage(196, v8, v32, 0, 0LL);
            v6 = 3222536201LL;
          }
          goto LABEL_64;
        }
        if ( *v13 == 15 )
          goto LABEL_8;
        LogError(3222536200LL, 0x1C0000000uLL, 128LL, v6);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v13);
        v19 = 196;
        break;
      case 'O':
        if ( *v13 == 128 )
          goto LABEL_8;
        LogError(3222536201LL, 0x1C0000000uLL, 128LL, v6);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        v21 = GetObjectTypeName((unsigned __int16)*v13);
        PrintDebugMessage(201, v8, v21, 0, 0LL);
        v6 = 3222536201LL;
        goto LABEL_64;
      case 'P':
        if ( *v13 == 4 )
          goto LABEL_8;
        LogError(3222536200LL, 0x1C0000000uLL, 128LL, v6);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v13);
        v19 = 202;
        break;
      case 'R':
        if ( (unsigned __int16)(*v13 - 128) <= 1u || *v13 == 14 )
          goto LABEL_8;
        LogError(3222536200LL, 0x1C0000000uLL, 128LL, v6);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v13);
        v19 = 203;
        break;
      case 'T':
        if ( (unsigned __int16)(*v13 - 2) <= 1u )
          goto LABEL_8;
        if ( !a3 || (v27 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8), (v6 = v27) != 0) )
        {
          LogError(3222536201LL, v15, v12, v6);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          v28 = GetObjectTypeName((unsigned __int16)*v13);
          PrintDebugMessage(204, v8, v28, 0, 0LL);
          v6 = 3222536201LL;
        }
        goto LABEL_64;
      case 'U':
        goto LABEL_8;
      case 'Z':
        if ( *v13 == 2 )
          goto LABEL_8;
        if ( a3 )
        {
          v17 = ConvertToString(a2 + 40LL * v8, 0LL, a2 + 40LL * v8);
          v6 = v17;
          if ( !v17 )
            goto LABEL_64;
        }
        LogError(3222536200LL, v15, v12, v6);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v13);
        v19 = 205;
        break;
      default:
        LogError(3222536195LL, 0x1C0000000uLL, 128LL, v6);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(206, (char)*v14, 0, 0, 0LL);
        v6 = 3222536195LL;
        goto LABEL_64;
    }
LABEL_63:
    PrintDebugMessage(v19, v8, ObjectTypeName, 0, 0LL);
    v6 = 3222536200LL;
LABEL_64:
    v12 = 128LL;
    v15 = 0x1C0000000uLL;
    goto LABEL_8;
  }
  return 0LL;
}
