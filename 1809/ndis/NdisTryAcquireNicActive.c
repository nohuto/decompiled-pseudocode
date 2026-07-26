/*
 * XREFs of NdisTryAcquireNicActive @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00010A8 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_DDD @ 0x1C0043B48 (WPP_SF_DDD.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0076AF4 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0077144 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C0079F18 (McTemplateK0xqqq.c)
 */

__int64 __fastcall NdisTryAcquireNicActive(__int64 a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r14d
  int v6; // r15d
  __int64 v7; // rdi
  KIRQL v9; // r12
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int active; // eax
  int v13; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 4496);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(49LL, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, a1, (unsigned int)a2);
  if ( !ndisValidComponentId(a2) )
    return 3221225485LL;
  if ( *(_QWORD *)(v2 + 4496) )
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    if ( ndisAoAcIsD0Required((struct _NDIS_MINIPORT_AOAC *)v7) && ((v10 = *(_DWORD *)(v7 + 376)) == 0 || v10 == 3) )
    {
      if ( *(_DWORD *)(v7 + 52) == 0x7FFFFFFF )
      {
        v11 = -1073741675;
      }
      else
      {
        active = ndisAoAcActiveRefIncrement((struct _NDIS_MINIPORT_AOAC *)v7, a2);
        ++*(_DWORD *)(a1 + 848);
        v3 = active;
        v6 = *(_DWORD *)(a1 + 848);
        v11 = 0;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A025D >= 3u )
        WPP_SF_DDD(
          51LL,
          &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids,
          *(unsigned int *)(v7 + 376),
          *(unsigned int *)(v7 + 52),
          *(_DWORD *)(v7 + 380));
      v11 = -1071448017;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v7, v9);
    if ( !v11 && (byte_1C00A2083 & 4) != 0 )
      McTemplateK0xqqq(v13, (unsigned int)&NicActiveAcquired, v2 + 4040, *(_QWORD *)(v2 + 4056), a2, v6, v3);
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_DDD(52LL, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, v11, v3, v6);
    return v11;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 3u )
      WPP_SF_(50LL, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids);
    return 3221225659LL;
  }
}
