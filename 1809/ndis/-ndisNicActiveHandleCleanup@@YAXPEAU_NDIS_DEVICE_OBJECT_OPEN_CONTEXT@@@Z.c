/*
 * XREFs of ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001F9B4
 * Callers:
 *     ndisDispatchRequest @ 0x1C00CB980 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0016670 (ndisReferenceMiniportByHandle.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0076BF8 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00787C4 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C0079F18 (McTemplateK0xqqq.c)
 *     WPP_SF_qLd @ 0x1C007A340 (WPP_SF_qLd.c)
 */

void __fastcall ndisNicActiveHandleCleanup(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 v6; // rcx
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **v7; // rdx
  signed int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 6) && v2 && ndisReferenceMiniportByHandle(*((_NDIS_MINIPORT_BLOCK **)a1 + 4), 0) )
  {
    AoAc = v2->AoAc;
    v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v5 = v4;
    if ( *((_QWORD *)a1 + 4) )
    {
      v6 = *((_QWORD *)a1 + 1);
      if ( *(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)(v6 + 8) != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8)
        || (v7 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)*((_QWORD *)a1 + 2),
            *v7 != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8)) )
      {
        __fastfail(3u);
      }
      *v7 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      --AoAc->HandleListCount;
      v8 = *((_DWORD *)a1 + 7);
      if ( v8 > 0 )
      {
        ndisAoAcActiveRefSubtract(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)a1 + 6), v8);
        if ( (unsigned __int8)byte_1C00A025D >= 4u )
          WPP_SF_qLd(v10, v9, v2, *((unsigned int *)a1 + 6), AoAc->ActiveRef);
        if ( (byte_1C00A2083 & 4) != 0 )
          McTemplateK0xqqq(
            v10,
            (unsigned int)&NicActiveReleased,
            (_DWORD)v2 + 4040,
            v2->NetLuid.Value,
            *((_DWORD *)a1 + 6),
            0,
            AoAc->ActiveRef);
      }
      KeReleaseSpinLock(&AoAc->Lock, v5);
      ndisNicQuietCheckRef(v2);
    }
    else
    {
      KeReleaseSpinLock(&AoAc->Lock, v4);
    }
    ndisDereferenceMiniport((__int64)v2, 3u);
  }
}
