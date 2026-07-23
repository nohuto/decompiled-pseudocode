/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1407F3AB8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateEx @ 0x140613280 (SeCreateAccessStateEx.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 */

char __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, ACCESS_MASK a3, unsigned __int8 a4)
{
  char v4; // si
  _QWORD *v8; // r14
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *v10; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  PVOID v12; // rcx
  char v13; // bl
  __int64 v14; // [rsp+20h] [rbp-208h]
  __int64 v15; // [rsp+50h] [rbp-1D8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-1C8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v19[28]; // [rsp+100h] [rbp-128h] BYREF

  v4 = 0;
  if ( (int)ObCreateObjectEx(a4, CmKeyObjectType, 0, a4, v14, 96, 0, 0, &Object, 0LL) < 0 )
    return 0;
  v8 = Object;
  *((_QWORD *)Object + 7) = 0LL;
  v8[8] = 0LL;
  *(_DWORD *)v8 = 1803104306;
  v8[1] = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  v8[10] = v8 + 9;
  v8[9] = v8 + 9;
  CurrentThread = KeGetCurrentThread();
  v10 = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  LODWORD(v15) = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, v17, v19, a3, v10);
  if ( (int)v15 >= 0 )
  {
    v12 = Object;
    v8[1] = a1;
    v13 = CmpCheckKeyBodyAccess(v12, (__int64)&v15);
    SepDeleteAccessState((__int64)v17);
    SeReleaseSubjectContext(&SubjectContext);
    v8[1] = 0LL;
    v4 = v13;
  }
  ObfDereferenceObject(Object);
  return v4;
}
