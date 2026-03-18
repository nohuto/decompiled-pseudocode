/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BBC4
 * Callers:
 *     ValidateHandleSecure @ 0x1C002BCE0 (ValidateHandleSecure.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C002BDE4 (CheckAccessEx.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C005BEC4 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rbp
  __int16 v8; // cx
  struct tagPROCESSINFO *v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(14LL, a2, a3);
  v4 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a1 - qword_1C0210758) >> 5);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v6);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v8 = *((_WORD *)&unk_1C01D0EAC + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v8 & 2) != 0 )
  {
    v9 = (struct tagPROCESSINFO *)v4[v5 + 1];
  }
  else
  {
    if ( (v8 & 1) == 0 )
      return 1LL;
    v11 = v4[v5 + 1];
    if ( !v11 )
      return 1LL;
    v9 = *(struct tagPROCESSINFO **)(v11 + 416);
  }
  if ( !v9
    || *(PVOID *)v9 == gpepCSRSS
    || (unsigned __int8)CheckAccessEx((char *)CurrentProcessWin32Process + 872, (char *)v9 + 872, 0LL) )
  {
    return 1LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v13);
  EtwTraceUIPIHandleValidationError(CurrentProcessWin32Process, v9);
  UserSetLastError(5LL, v12);
  return 0LL;
}
