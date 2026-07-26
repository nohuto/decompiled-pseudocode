/*
 * XREFs of ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00BC2FC
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA7F4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAE1C (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00BCFA8 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     McTemplateK0xqqq @ 0x1C00BDF70 (McTemplateK0xqqq.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C00BE228 (WPP_RECORDER_SF_DDL.c)
 *     WPP_RECORDER_SF_DDLqdL @ 0x1C00BE530 (WPP_RECORDER_SF_DDLqdL.c)
 */

__int64 __fastcall ndisNicActiveRelease(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  unsigned int v3; // ebx
  char active; // r12
  _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v9; // r15
  int v10; // eax
  int v11; // r9d
  int v12; // ecx
  unsigned __int8 IsTempRefNeededAfterDeref; // r13
  int v15; // [rsp+20h] [rbp-68h]

  v3 = 0;
  active = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, 24);
  AoAc = a1->AoAc;
  v9 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v10 = *((_DWORD *)a2 + 7);
  if ( v10 )
  {
    *((_DWORD *)a2 + 7) = v10 - 1;
    active = ndisAoAcActiveRefSubtract(AoAc, (enum _NDIS_PM_COMPONENT_ID)*((_DWORD *)a3 + 4), 1);
    IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    if ( (byte_1C00E8043 & 4) != 0 )
      McTemplateK0xqqq(
        v12,
        (unsigned int)&NicActiveReleased,
        (_DWORD)a1 + 4008,
        *((_QWORD *)a3 + 1),
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        active);
    KeReleaseSpinLock(&AoAc->Lock, v9);
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(a1, AoAc->DerefTimeoutMilliseconds);
  }
  else
  {
    v3 = -1073741675;
    KeReleaseSpinLock(&AoAc->Lock, v9);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLqdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      *((unsigned __int16 *)a3 + 7),
      (*((_QWORD *)a3 + 1) >> 24) & 0xFFFFFF,
      v11,
      v15,
      *((_WORD *)a3 + 7),
      BYTE3(*((_QWORD *)a3 + 1)),
      *((_DWORD *)a3 + 4),
      (char)a1,
      active,
      v3);
  return v3;
}
