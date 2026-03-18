/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x14082C810
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406AD800 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcess @ 0x14012AA90 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x140672F30 (SeCreateAccessStateEx.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 */

BOOLEAN __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, ACCESS_MASK a3, char a4)
{
  BOOLEAN v8; // si
  _QWORD *v10; // r14
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *v12; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  _QWORD *v14; // rcx
  BOOLEAN v15; // bl
  __int64 v16; // [rsp+50h] [rbp-1D8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-1D0h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+60h] [rbp-1C8h] BYREF
  _QWORD v19[28]; // [rsp+100h] [rbp-128h] BYREF

  memset(&AccessState, 0, sizeof(AccessState));
  memset(v19, 0, sizeof(v19));
  v8 = 0;
  if ( (int)ObCreateObject(a4, CmKeyObjectType, 0, a4, 0, 96, 0, 0, &Object) < 0 )
    return 0;
  v10 = Object;
  *((_QWORD *)Object + 7) = 0LL;
  v10[8] = 0LL;
  *(_DWORD *)v10 = 1803104306;
  v10[1] = 0LL;
  *((_DWORD *)v10 + 12) = 0;
  v10[10] = v10 + 9;
  v10[9] = v10 + 9;
  CurrentThread = KeGetCurrentThread();
  v12 = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  LODWORD(v16) = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, &AccessState, v19, a3, v12);
  if ( (int)v16 >= 0 )
  {
    v14 = Object;
    v10[1] = a1;
    v15 = CmpCheckKeyBodyAccess(v14, a2, &AccessState, a4, (NTSTATUS *)&v16);
    SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&AccessState);
    v10[1] = 0LL;
    v8 = v15;
  }
  ObfDereferenceObject(Object);
  return v8;
}
