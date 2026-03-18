/*
 * XREFs of ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C0016940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C0243E50 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0276F3C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkCompositionObject::Open(unsigned int a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // eax
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rcx
  int ProcessSessionId; // eax
  int v13; // ebx
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGGLOBAL *Global; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  char v21; // [rsp+40h] [rbp-59h]
  PRKPROCESS PROCESS; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v23; // [rsp+50h] [rbp-49h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-41h] BYREF

  v6 = *(_DWORD *)(a4 + 8);
  v8 = *(unsigned __int8 (__fastcall ****)(_QWORD))(a4 + 16);
  PROCESS = 0LL;
  v23 = v6;
  v21 = 0;
  if ( (**v8)(v8)
    && ((unsigned __int8)PsIsSystemProcess(a3)
     || (ProcessSessionId = PsGetProcessSessionIdEx(a3), ProcessSessionId != -1)
     && ProcessSessionId == *(_DWORD *)(a4 + 8)) )
  {
    v13 = 0;
    CurrentProcess = PsGetCurrentProcess();
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v23 )
    {
      Global = DXGGLOBAL::GetGlobal(v16, v15);
      SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
      v13 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v23, &PROCESS);
      if ( v13 >= 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v21 = 1;
      }
    }
    if ( v13 >= 0 )
    {
      LOBYTE(v17) = a2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, int))(**(_QWORD **)(a4 + 16)
                                                                                               + 24LL))(
              *(_QWORD *)(a4 + 16),
              a1,
              v17,
              a3,
              a4,
              a5,
              a6);
    }
  }
  else
  {
    v13 = -1073741790;
  }
  if ( v21 )
    KeUnstackDetachProcess(&ApcState);
  if ( PROCESS )
    ObfDereferenceObject(PROCESS);
  return (unsigned int)v13;
}
