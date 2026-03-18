/*
 * XREFs of ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0015F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C020FD58 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0241AF0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

bool __fastcall DxgkCompositionObject::OkToClose(struct _EPROCESS *a1, _DWORD *a2, void *a3, char a4)
{
  int v8; // ebx
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  bool v11; // bl
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v15; // [rsp+20h] [rbp-A8h]
  char v16; // [rsp+30h] [rbp-98h]
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-80h] BYREF

  PROCESS = 0LL;
  v16 = 0;
  v18 = a2[2];
  if ( a4 && (unsigned int)PsGetProcessSessionIdEx(a1) == -1 )
  {
    v8 = -1073741790;
  }
  else
  {
    v8 = 0;
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v18 )
    {
      Global = DXGGLOBAL::GetGlobal(v10);
      SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
      v8 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v18, &PROCESS);
      if ( v8 >= 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v16 = 1;
      }
    }
    if ( v8 >= 0 )
    {
      v15 = a4;
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, void *, char))(**((_QWORD **)a2 + 2) + 32LL))(
             *((_QWORD *)a2 + 2),
             a1,
             a2,
             a3,
             v15);
    }
  }
  v11 = v8 >= 0;
  if ( v16 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return v11;
}
