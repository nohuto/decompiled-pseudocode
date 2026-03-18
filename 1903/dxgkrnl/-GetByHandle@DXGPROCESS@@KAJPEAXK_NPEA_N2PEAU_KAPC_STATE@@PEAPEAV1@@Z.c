/*
 * XREFs of ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C013C40C
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        __int64 DesiredAccess,
        char a3,
        bool *a4,
        bool *a5,
        PRKAPC_STATE ApcState,
        LUID PrivilegeValue)
{
  ACCESS_MASK v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool *v13; // r12
  struct DXGPROCESS **v14; // r15
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 ProcessDxgProcess; // rsi
  int ProcessSessionId; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  BOOLEAN v31; // al
  struct _KAPC_STATE *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 CurrentProcess; // rax
  __int64 v45; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v9 = DesiredAccess;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)Handle, DesiredAccess) + 28) != KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v30 + 24) = 2566LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v13 = a5;
  v14 = (struct DXGPROCESS **)PrivilegeValue;
  *a4 = 0;
  *v13 = 0;
  *v14 = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, v9, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v18 = Object;
  v19 = v15;
  if ( v15 < 0 )
  {
    v35 = *((unsigned int *)DXGGLOBAL::GetGlobal(v17, v16) + 320);
    if ( (v35 & 1) != 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
      v37[3] = 275LL;
      v37[4] = 33LL;
      v37[5] = v19;
      v37[6] = 0LL;
      v37[7] = 0LL;
      WdLogEvent5_WdCriticalError(v37);
    }
    v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v38 + 24) = Handle;
    WdLogEvent5_WdWarning(v38);
    return (unsigned int)v19;
  }
  if ( !Object )
  {
    v39 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v39 + 24) = 2600LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v18) )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v20);
    LODWORD(v19) = -1073741558;
    v40[3] = v18;
    v40[4] = Handle;
    v40[5] = -1073741558LL;
    WdLogEvent5_WdEvent(v40);
LABEL_16:
    ObfDereferenceObject(v18);
    return (unsigned int)v19;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v18);
  if ( !ProcessDxgProcess )
  {
    v33 = WdLogNewEntry5_WdEvent(v21);
    *(_QWORD *)(v33 + 24) = v18;
    WdLogEvent5_WdEvent(v33);
    LODWORD(v19) = -1073741811;
  }
  if ( (int)v19 < 0 )
    goto LABEL_16;
  ProcessSessionId = PsGetProcessSessionId(v18);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v25, v24) )
  {
    if ( a3 )
    {
      v41 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      CurrentProcess = PsGetCurrentProcess(v43, v42);
      *(_QWORD *)(v41 + 32) = v18;
      *(_QWORD *)(v41 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v41);
    }
    else
    {
      PrivilegeValue = (LUID)14LL;
      v31 = SeSinglePrivilegeCheck((LUID)14LL, 1);
      v32 = ApcState;
      *v13 = v31 != 0;
      KeStackAttachProcess((PRKPROCESS)v18, v32);
      *a4 = 1;
    }
  }
  if ( *(PVOID *)(ProcessDxgProcess + 56) != v18 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v27, v26);
    *(_QWORD *)(v45 + 24) = 2660LL;
    WdLogEvent5_WdAssertion(v45);
  }
  *v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  return 0LL;
}
