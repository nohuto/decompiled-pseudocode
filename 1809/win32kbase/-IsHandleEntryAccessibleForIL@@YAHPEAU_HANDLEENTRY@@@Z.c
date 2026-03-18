/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002DA88
 * Callers:
 *     ValidateHandleSecure @ 0x1C002D9C0 (ValidateHandleSecure.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C003B748 (EtwTraceUIPIHandleValidationError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rbx
  __int64 CurrentProcessWin32Process; // rbp
  __int16 v5; // cx
  __int64 v6; // rbx
  __int64 v8; // rbx

  v1 = gpKernelHandleTable;
  v3 = 3LL * (unsigned int)((a1 - (struct _HANDLEENTRY *)qword_1C01CBA58) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v5 = *((_WORD *)&unk_1C018DB4C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v5 & 2) != 0 )
  {
    v6 = v1[v3 + 1];
  }
  else
  {
    if ( (v5 & 1) == 0 )
      return 1LL;
    v8 = v1[v3 + 1];
    if ( !v8 )
      return 1LL;
    v6 = *(_QWORD *)(v8 + 424);
  }
  if ( !v6
    || *(PVOID *)v6 == gpepCSRSS
    || (unsigned int)CheckAccessForIntegrityLevelEx(
                       *(_QWORD *)(CurrentProcessWin32Process + 880),
                       *(_QWORD *)(v6 + 880),
                       0LL) )
  {
    return 1LL;
  }
  EtwTraceUIPIHandleValidationError((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v6);
  UserSetLastError(5LL);
  return 0LL;
}
