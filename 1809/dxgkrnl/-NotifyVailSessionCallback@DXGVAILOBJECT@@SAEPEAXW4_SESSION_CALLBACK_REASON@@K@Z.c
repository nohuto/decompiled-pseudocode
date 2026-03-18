/*
 * XREFs of ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C025AB70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0241AF0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x1C025D6BC (-VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z.c)
 */

char __fastcall DXGVAILOBJECT::NotifyVailSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  __int64 v8; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v14; // [rsp+58h] [rbp-20h]

  if ( a2 )
    return 1;
  Object = 0LL;
  Global = DXGGLOBAL::GetGlobal(a1);
  if ( (int)DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)Global + 77),
              a3,
              (struct _KPROCESS **)&Object) >= 0 )
  {
    v14 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
    v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 77);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
    DXGSESSIONDATA::VailSendWnfToDwm(SessionDataForSpecifiedSession, a1 != 0);
    if ( v14 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(Object);
  }
  return 0;
}
