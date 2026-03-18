/*
 * XREFs of ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C0016DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C020FD58 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0241AF0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

void __fastcall DxgkCompositionObject::Delete(void *a1)
{
  bool v2; // zf
  __int64 CurrentProcess; // rax
  __int64 v4; // rcx
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v7; // [rsp+20h] [rbp-68h]
  PRKPROCESS PROCESS; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-58h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  PROCESS = 0LL;
  v2 = *((_QWORD *)a1 + 2) == 0LL;
  v7 = 0;
  v9 = *((_DWORD *)a1 + 2);
  if ( v2 )
    return;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v9 )
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
    if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v9, &PROCESS) < 0 )
      goto LABEL_4;
    KeStackAttachProcess(PROCESS, &ApcState);
    v7 = 1;
  }
  (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)a1 + 2) + 48LL))(*((_QWORD *)a1 + 2), a1);
LABEL_4:
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
}
