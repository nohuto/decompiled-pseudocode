/*
 * XREFs of ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C00160B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C020FD58 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0241AF0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

void __fastcall DxgkCompositionObject::Close(struct _EPROCESS *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v13; // [rsp+30h] [rbp-88h]
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = a2[2];
  PROCESS = 0LL;
  v15 = v4;
  v13 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) == v15 )
    goto LABEL_2;
  Global = DXGGLOBAL::GetGlobal(v10);
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v15, &PROCESS) >= 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v13 = 1;
LABEL_2:
    (*(void (__fastcall **)(_QWORD, struct _EPROCESS *, _DWORD *, __int64, __int64))(**((_QWORD **)a2 + 2) + 40LL))(
      *((_QWORD *)a2 + 2),
      a1,
      a2,
      a3,
      a4);
  }
  if ( v13 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}
