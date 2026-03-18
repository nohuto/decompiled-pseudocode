/*
 * XREFs of ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DE00
 * Callers:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001DDD0 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0141900 (DpiMiracastQueryMiracastSupportForFDO.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkIgnoreCoreDripsBlockerTracking @ 0x1C013BB54 (DxgkIgnoreCoreDripsBlockerTracking.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 */

void __fastcall AUTO_PNPPOWER_LOCK::Acquire(AUTO_PNPPOWER_LOCK *this)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( !*((_BYTE *)this + 10) )
  {
    v2 = *((_BYTE *)this + 9);
    if ( !*((_BYTE *)this + 8) )
    {
      if ( v2 )
      {
        KeEnterCriticalRegion();
        v3 = *(_QWORD *)this;
        if ( !*(_BYTE *)(*(_QWORD *)this + 483LL) )
          goto LABEL_7;
        DxgkIgnoreCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 64LL)
                                                        + 3992LL));
      }
      else
      {
        KeEnterCriticalRegion();
        v3 = *(_QWORD *)this;
        if ( !*(_BYTE *)(*(_QWORD *)this + 483LL) )
        {
LABEL_7:
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
LABEL_8:
          *((_BYTE *)this + 10) = 1;
          return;
        }
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v3 + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(*(_QWORD *)this);
      }
      v3 = *(_QWORD *)this;
      goto LABEL_7;
    }
    if ( v2 )
    {
      KeEnterCriticalRegion();
      v4 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 483LL) )
      {
        DxgkIgnoreCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 64LL)
                                                        + 3992LL));
LABEL_15:
        v4 = *(_QWORD *)this;
      }
    }
    else
    {
      KeEnterCriticalRegion();
      v4 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 483LL) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(*(_QWORD *)this);
        goto LABEL_15;
      }
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    goto LABEL_8;
  }
}
