/*
 * XREFs of NdisTryAcquireNicActive @ 0x1C0011BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0011D2C (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C003333C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_LDD @ 0x1C007DB4C (WPP_RECORDER_SF_LDD.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00BA6F0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BADA0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C00BDF70 (McTemplateK0xqqq.c)
 */

__int64 __fastcall NdisTryAcquireNicActive(__int64 a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  __int64 v2; // rsi
  char v3; // r14
  int v6; // r15d
  __int64 v7; // rdi
  const struct _GUID *v8; // rdx
  struct _GUID *v9; // rdx
  KIRQL v11; // r12
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // ebx
  char active; // al
  int v16; // edx
  int v17; // ecx
  struct _GUID *v18; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  LOBYTE(v6) = 0;
  v7 = *(_QWORD *)(v2 + 4456);
  v8 = &WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      14,
      51,
      (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
      a1,
      a2);
  }
  if ( !ndisValidComponentId(a2) )
    return 3221225485LL;
  if ( *(_QWORD *)(v2 + 4456) )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( ndisAoAcIsD0Required((struct _NDIS_MINIPORT_AOAC *)v7) && ((v13 = *(_DWORD *)(v7 + 376)) == 0 || v13 == 3) )
    {
      if ( *(_DWORD *)(v7 + 52) == 0x7FFFFFFF )
      {
        v14 = -1073741675;
      }
      else
      {
        active = ndisAoAcActiveRefIncrement((struct _NDIS_MINIPORT_AOAC *)v7, a2);
        ++*(_DWORD *)(a1 + 848);
        v3 = active;
        v6 = *(_DWORD *)(a1 + 848);
        v14 = 0;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_LDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          14,
          53,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          *(_DWORD *)(v7 + 376),
          *(_DWORD *)(v7 + 52),
          *(_DWORD *)(v7 + 380));
      }
      v14 = -1071448017;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v11);
    if ( !v14 && (byte_1C00E8043 & 4) != 0 )
      McTemplateK0xqqq(v17, (unsigned int)&NicActiveAcquired, v2 + 4008, *(_QWORD *)(v2 + 4024), a2, v6, v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        14,
        54,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        v14,
        v3,
        v6);
    }
    return v14;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = v9;
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(*((_QWORD *)WPP_GLOBAL_Control + 8), (int)v9, 14, 52, v18);
    }
    return 3221225659LL;
  }
}
