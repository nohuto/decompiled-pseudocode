/*
 * XREFs of ValidateArgTypes @ 0x1C001A610
 * Callers:
 *     CreateXField @ 0x1C0019A9C (CreateXField.c)
 *     While @ 0x1C0019B90 (While.c)
 *     Package @ 0x1C0019CC0 (Package.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     LogOp2 @ 0x1C001A1A0 (LogOp2.c)
 *     IfElse @ 0x1C001A330 (IfElse.c)
 *     LNot @ 0x1C001AC80 (LNot.c)
 *     Index @ 0x1C001AEF0 (Index.c)
 *     SleepStall @ 0x1C001BC80 (SleepStall.c)
 *     Buffer @ 0x1C001BD00 (Buffer.c)
 *     DerefOf @ 0x1C001BE00 (DerefOf.c)
 *     Notify @ 0x1C001E6E0 (Notify.c)
 *     Load @ 0x1C001E7B0 (Load.c)
 *     ExprOp1_64 @ 0x1C001ED2C (ExprOp1_64.c)
 *     OSInterface @ 0x1C001EF70 (OSInterface.c)
 *     Release @ 0x1C001F230 (Release.c)
 *     LogOp2_32 @ 0x1C001F31C (LogOp2_32.c)
 *     Acquire @ 0x1C001F460 (Acquire.c)
 *     ToInteger @ 0x1C002AAB0 (ToInteger.c)
 *     Fatal @ 0x1C00684C0 (Fatal.c)
 *     ResetSignal @ 0x1C0068530 (ResetSignal.c)
 *     Unload @ 0x1C00686C0 (Unload.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0068A20 (ConcatenateResTemplate.c)
 *     Divide @ 0x1C0068D40 (Divide.c)
 *     ExprOp1_32 @ 0x1C0068DD4 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0068F10 (ExprOp2_32.c)
 *     LoadTable @ 0x1C00690A0 (LoadTable.c)
 *     Match_32 @ 0x1C00695B4 (Match_32.c)
 *     Match_64 @ 0x1C00696D4 (Match_64.c)
 *     MidString @ 0x1C0069810 (MidString.c)
 *     ProcessLoadTable @ 0x1C0069CA0 (ProcessLoadTable.c)
 *     ToBuffer @ 0x1C006A280 (ToBuffer.c)
 *     ToDecStr @ 0x1C006A300 (ToDecStr.c)
 *     ToHexStr @ 0x1C006A6D0 (ToHexStr.c)
 *     ToString @ 0x1C006A9F0 (ToString.c)
 *     Wait @ 0x1C006ABD0 (Wait.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     ConvertToInteger @ 0x1C002AB2C (ConvertToInteger.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C006AD38 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006AE6C (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C006AF00 (ConvertToString.c)
 */

__int64 __fastcall ValidateArgTypes(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  unsigned int v6; // r9d
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // r12
  _WORD *v12; // rdi
  _BYTE *v13; // r13
  int ObjectTypeName; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v6 = 0;
  v8 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  v11 = (int)v10;
  if ( (int)v10 <= 0 )
    return 0LL;
  v12 = (_WORD *)(a2 + 2);
  v13 = a4;
  do
  {
    if ( v6 )
      break;
    if ( *v13 == 73 )
    {
      if ( *v12 != 1 && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
      {
        LogError(3222536200LL);
        AcpiDiagTraceAmlError(a1, 3222536200LL);
        ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
        v16 = 198;
LABEL_63:
        PrintDebugMessage(v16, v8, ObjectTypeName, 0, 0LL);
        v6 = -1072431096;
      }
    }
    else
    {
      switch ( *v13 )
      {
        case 'A':
          if ( *v12 != 129 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v18 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(195, v8, v18, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'B':
          if ( *v12 != 3 && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 193;
            goto LABEL_63;
          }
          break;
        case 'C':
          if ( (unsigned __int16)(*v12 - 3) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v22 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(194, v8, v22, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'D':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v19 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(199, v8, v19, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'E':
          if ( (unsigned __int16)(*v12 - 1) > 2u
            && *v12 != 15
            && (!a3 || (v6 = ConvertToInteger(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v20 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(200, v8, v20, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'F':
          if ( *v12 != 5 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 197;
            goto LABEL_63;
          }
          break;
        case 'H':
          if ( *v12 == 1 )
          {
            if ( !a3 || (v6 = ConvertToDDBHandle(a2 + 40LL * v8, a2 + 40LL * v8)) != 0 )
            {
              LogError(3222536201LL);
              AcpiDiagTraceAmlError(a1, 3222536201LL);
              v23 = GetObjectTypeName((unsigned __int16)*v12);
              PrintDebugMessage(196, v8, v23, 0, 0LL);
              v6 = -1072431095;
            }
          }
          else if ( *v12 != 15 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 196;
            goto LABEL_63;
          }
          break;
        case 'O':
          if ( *v12 != 128 )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v17 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(201, v8, v17, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'P':
          if ( *v12 != 4 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 202;
            goto LABEL_63;
          }
          break;
        case 'R':
          if ( (unsigned __int16)(*v12 - 128) > 1u && *v12 != 14 )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 203;
            goto LABEL_63;
          }
          break;
        case 'T':
          if ( (unsigned __int16)(*v12 - 2) > 1u && (!a3 || (v6 = ConvertToBuffer(a2 + 40LL * v8, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            v21 = GetObjectTypeName((unsigned __int16)*v12);
            PrintDebugMessage(204, v8, v21, 0, 0LL);
            v6 = -1072431095;
          }
          break;
        case 'U':
          break;
        case 'Z':
          if ( *v12 != 2 && (!a3 || (v6 = ConvertToString(a2 + 40LL * v8, 0LL, a2 + 40LL * v8)) != 0) )
          {
            LogError(3222536200LL);
            AcpiDiagTraceAmlError(a1, 3222536200LL);
            ObjectTypeName = GetObjectTypeName((unsigned __int16)*v12);
            v16 = 205;
            goto LABEL_63;
          }
          break;
        default:
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(206, (char)*v13, 0, 0, 0LL);
          v6 = -1072431101;
          break;
      }
    }
    ++v13;
    ++v8;
    v12 += 20;
  }
  while ( v13 - a4 < v11 );
  return v6;
}
