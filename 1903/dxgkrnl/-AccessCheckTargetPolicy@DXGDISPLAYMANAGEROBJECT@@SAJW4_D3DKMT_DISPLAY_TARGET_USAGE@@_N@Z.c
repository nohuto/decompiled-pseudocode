/*
 * XREFs of ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C028C574
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028CA74 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C00C609C (MonitorAreSpecializedDisplaysSupported.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C025E89C (-IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v3; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rcx
  char IsMultiSessionSku; // bl
  bool IsCurrentThreadAppContainer; // al
  bool v16; // zf
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v7 = Current;
  if ( Current && *((_BYTE *)Current + 298) )
    return 0LL;
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 74);
  if ( v10 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18491) )
    return 0LL;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v7 + 12) + 208LL))() )
    return 3221225506LL;
  IsMultiSessionSku = RtlIsMultiSessionSku(v13);
  IsCurrentThreadAppContainer = DXGPROCESS::IsCurrentThreadAppContainer();
  if ( !IsMultiSessionSku )
  {
    if ( !IsCurrentThreadAppContainer )
      return 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellDisplayManagement");
    v19 = 0;
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v19) >= 0 )
    {
      v16 = v19 == 0;
      goto LABEL_18;
    }
    return 3221225506LL;
  }
  if ( IsCurrentThreadAppContainer || v2 && !g_OSTestSigningEnabled )
    return 3221225506LL;
  if ( v3 != 2 )
  {
    if ( v3 != 1 )
      return 3221225506LL;
    return 0LL;
  }
  v16 = !MonitorAreSpecializedDisplaysSupported();
LABEL_18:
  if ( v16 )
    return 3221225506LL;
  return 0LL;
}
