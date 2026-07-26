/*
 * XREFs of NdisReleaseNicActive @ 0x1C00BE090
 * Callers:
 *     ndisCleanUpForProtocol @ 0x1C0093634 (ndisCleanUpForProtocol.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0011D2C (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00693E4 (WPP_RECORDER_SF_DD_ea_1C00693E4.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA7F4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAE1C (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00BCFA8 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     McTemplateK0xqqq @ 0x1C00BDF70 (McTemplateK0xqqq.c)
 */

char __fastcall NdisReleaseNicActive(__int64 a1, int a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  unsigned __int8 IsTempRefNeededAfterDeref; // r13
  int v4; // r14d
  enum _NDIS_PM_COMPONENT_ID v5; // ebp
  int v7; // r15d
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  _UNKNOWN **v9; // rax
  KIRQL v10; // r12
  int active; // eax
  __int64 v12; // rcx
  struct _GUID *v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  char v17; // [rsp+30h] [rbp-38h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  IsTempRefNeededAfterDeref = 0;
  v4 = 0;
  v5 = a2;
  v7 = 0;
  AoAc = v2->AoAc;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      55,
      (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
      a1,
      v17);
  }
  LOBYTE(v9) = ndisValidComponentId(v5);
  if ( (_BYTE)v9 && v2->AoAc )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    if ( *(_DWORD *)(a1 + 848) && AoAc->ActiveRef > 0 )
    {
      active = ndisAoAcActiveRefSubtract(AoAc, v5, 1);
      v7 = --*(_DWORD *)(a1 + 848);
      v4 = active;
      IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    }
    KeReleaseSpinLock(&AoAc->Lock, v10);
    if ( (byte_1C00E8043 & 4) != 0 )
    {
      LODWORD(v16) = v4;
      LODWORD(v15) = v7;
      LODWORD(v14) = v5;
      McTemplateK0xqqq(v12, &NicActiveReleased, &v2->InterfaceGuid, v2->NetLuid.Value, v14, v15, v16);
    }
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(v2, AoAc->DerefTimeoutMilliseconds);
    v9 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v7;
      LOBYTE(v9) = WPP_RECORDER_SF_DD(
                     *((_QWORD *)WPP_GLOBAL_Control + 8),
                     4u,
                     0xEu,
                     0x38u,
                     (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
                     v4,
                     v16);
    }
  }
  return (char)v9;
}
