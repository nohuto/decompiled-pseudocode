/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BC44
 * Callers:
 *     ValidateHandleSecure @ 0x1C002BD60 (ValidateHandleSecure.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C002C1F4 (CheckAccessEx.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0072394 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rbp
  __int16 v9; // cx
  struct tagPROCESSINFO *v10; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(14LL, a2, a3);
  v4 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a1 - qword_1C0213758) >> 5);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v7, v6);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v9 = *((_WORD *)&unk_1C01D2E9C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v9 & 2) != 0 )
  {
    v10 = (struct tagPROCESSINFO *)v4[v5 + 1];
  }
  else
  {
    if ( (v9 & 1) == 0 )
      return 1LL;
    v12 = v4[v5 + 1];
    if ( !v12 )
      return 1LL;
    v10 = *(struct tagPROCESSINFO **)(v12 + 416);
  }
  if ( !v10
    || *(PVOID *)v10 == gpepCSRSS
    || (unsigned __int8)CheckAccessEx((char *)CurrentProcessWin32Process + 872, (char *)v10 + 872, 0LL) )
  {
    return 1LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v14);
  EtwTraceUIPIHandleValidationError(CurrentProcessWin32Process, v10);
  UserSetLastError(5LL, v13);
  return 0LL;
}
