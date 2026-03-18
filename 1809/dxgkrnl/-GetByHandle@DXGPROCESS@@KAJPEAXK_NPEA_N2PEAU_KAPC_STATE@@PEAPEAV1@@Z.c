/*
 * XREFs of ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C012EAF8
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        char a3,
        bool *a4,
        bool *a5,
        PRKAPC_STATE ApcState,
        LUID PrivilegeValue)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  bool *v13; // r12
  struct DXGPROCESS **v14; // r15
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  PVOID v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 ProcessDxgProcess; // rsi
  int ProcessSessionId; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  BOOLEAN v30; // al
  struct _KAPC_STATE *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 CurrentProcess; // rax
  __int64 v44; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)Handle) + 27) != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 2562LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = a5;
  v14 = (struct DXGPROCESS **)PrivilegeValue;
  *a4 = 0;
  *v13 = 0;
  *v14 = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, DesiredAccess, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v17 = Object;
  v18 = v15;
  if ( v15 < 0 )
  {
    v34 = *((unsigned int *)DXGGLOBAL::GetGlobal(v16) + 328);
    if ( (v34 & 1) != 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34);
      v36[3] = 275LL;
      v36[4] = 33LL;
      v36[5] = v18;
      v36[6] = 0LL;
      v36[7] = 0LL;
      WdLogEvent5_WdCriticalError(v36);
    }
    v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v37 + 24) = Handle;
    WdLogEvent5_WdWarning(v37);
    return (unsigned int)v18;
  }
  if ( !Object )
  {
    v38 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v38 + 24) = 2596LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v17) )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
    LODWORD(v18) = -1073741558;
    v39[3] = v17;
    v39[4] = Handle;
    v39[5] = -1073741558LL;
    WdLogEvent5_WdEvent(v39);
LABEL_16:
    ObfDereferenceObject(v17);
    return (unsigned int)v18;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v17);
  if ( !ProcessDxgProcess )
  {
    v32 = WdLogNewEntry5_WdEvent(v22, v21);
    *(_QWORD *)(v32 + 24) = v17;
    WdLogEvent5_WdEvent(v32);
    LODWORD(v18) = -1073741811;
  }
  if ( (int)v18 < 0 )
    goto LABEL_16;
  ProcessSessionId = PsGetProcessSessionId(v17);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v25) )
  {
    if ( a3 )
    {
      v40 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      CurrentProcess = PsGetCurrentProcess(v42, v41);
      *(_QWORD *)(v40 + 32) = v17;
      *(_QWORD *)(v40 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v40);
    }
    else
    {
      PrivilegeValue = (LUID)14LL;
      v30 = SeSinglePrivilegeCheck((LUID)14LL, 1);
      v31 = ApcState;
      *v13 = v30 != 0;
      KeStackAttachProcess((PRKPROCESS)v17, v31);
      *a4 = 1;
    }
  }
  if ( *(PVOID *)(ProcessDxgProcess + 56) != v17 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v44 + 24) = 2656LL;
    WdLogEvent5_WdAssertion(v44);
  }
  *v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  return 0LL;
}
