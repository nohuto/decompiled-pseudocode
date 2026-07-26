/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C011DCE8 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     PktMonClientComponentUnregister @ 0x1C0023D0C (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0027CDC (WPP_RECORDER_SF_qqZZ.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0029CBC (ndisHandleFilterHandlersChange.c)
 *     ndisCloseRef @ 0x1C003E9FC (ndisCloseRef.c)
 *     ndisReferenceMiniportByHandle @ 0x1C003F98C (ndisReferenceMiniportByHandle.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     McTemplateK0qqq @ 0x1C007D7C8 (McTemplateK0qqq.c)
 *     ndisDereferenceFilter @ 0x1C008E22C (ndisDereferenceFilter.c)
 *     ndisFNotifyDetach @ 0x1C008F420 (ndisFNotifyDetach.c)
 *     ndisFilterAttachCleanUp @ 0x1C008F67C (ndisFilterAttachCleanUp.c)
 *     ndisReferenceFilterByHandle @ 0x1C0090608 (ndisReferenceFilterByHandle.c)
 *     McTemplateK0juqjzzz @ 0x1C00BE9F0 (McTemplateK0juqjzzz.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisFInvokeDetach @ 0x1C0116D14 (ndisFInvokeDetach.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C011DE24 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, __int64 P)
{
  char v2; // r14
  __int64 v3; // rdi
  char v4; // r15
  char v6; // dl
  PVOID v7; // rbp
  char *v8; // rbx
  int v9; // edx
  struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  signed int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  KIRQL v15; // al
  int v16; // edx
  char Arg2; // [rsp+28h] [rbp-50h]
  PVOID WnodeEventItem; // [rsp+90h] [rbp+18h] BYREF
  struct NDISWATCHDOG__ *v19; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = P;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Arg2 = P;
    LOBYTE(P) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      P,
      1,
      43,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      Arg2);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( ndisReferenceFilterByHandle((KSPIN_LOCK *)v3, v6) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0) )
    {
      v4 = 1;
      ndisFNotifyDetach((struct _NDIS_FILTER_BLOCK *)v3);
      ndisCloseRef((PKSPIN_LOCK)(v3 + 312));
      ndisSetupWmiNode(
        (__int64)a1,
        *(const void ***)(v3 + 48),
        a1->BindPaths->Paths[0].Length + 4 + *(unsigned __int16 *)(*(_QWORD *)(v3 + 16) + 128LL),
        (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
        &WnodeEventItem);
      v7 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v8 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(v8, *(const void **)(*(_QWORD *)(v3 + 16) + 136LL), *(unsigned __int16 *)(*(_QWORD *)(v3 + 16) + 128LL));
        memmove(
          &v8[*(unsigned __int16 *)(*(_QWORD *)(v3 + 16) + 128LL) + 2],
          a1->BindPaths->Paths[0].Buffer,
          a1->BindPaths->Paths[0].Length);
        v11 = IoWMIWriteEvent(v7);
        if ( v11 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              1,
              44,
              (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids);
          }
          if ( (byte_1C00E8081 & 1) != 0 )
            McTemplateK0qqq(v10, &FilterRemovalIndicationFailed, (const GUID *)(v3 + 672), v11, 0x10001u, 0);
          ExFreePoolWithTag(v7, 0);
        }
      }
      *(_BYTE *)(v3 + 64) = 6;
      if ( (byte_1C00E8083 & 1) != 0 )
        McTemplateK0juqjzzz(
          *(_QWORD *)(v3 + 32) + 4008LL,
          *(_QWORD *)(v3 + 40),
          (const GUID *)(v3 + 672),
          v3 + 672,
          6,
          8,
          *(_QWORD *)(v3 + 32) + 4008LL,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 3856LL) + 8LL),
          *(const wchar_t **)(*(_QWORD *)(v3 + 40) + 8LL),
          *(const wchar_t **)(*(_QWORD *)(v3 + 48) + 8LL));
      PktMonClientComponentUnregister((_QWORD *)(v3 + 792));
      ndisFilterWaitForPnPComplete((struct _NDIS_FILTER_BLOCK *)v3);
      ndisMakeWatchdog(&v19, (void *)v3, 20, *(void **)(*(_QWORD *)(v3 + 16) + 184LL), 0x41EB0u, 0LL);
      ndisFInvokeDetach(v3);
      if ( v19 != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog(v19);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          v13,
          0x2Du,
          (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
          (char)a1,
          v3,
          (unsigned __int16 *)(*(_QWORD *)(v3 + 16) + 112LL),
          &a1->pAdapterInstanceName->Length);
      while ( *(_BYTE *)(v3 + 288) )
        NdisMSleep(0x3E8u);
      if ( (*(_DWORD *)(v3 + 56) & 0x8000) != 0 )
      {
        v14 = *(_QWORD *)(v3 + 112);
        if ( v14 )
        {
          a1->MediaType = *(_DWORD *)(v14 + 336);
          a1->PhysicalMediumType = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 340LL);
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 144));
      *(_DWORD *)(v3 + 56) &= ~0x100u;
      *(_QWORD *)(v3 + 152) = 0LL;
      *(_BYTE *)(v3 + 56) = 0;
      *(_DWORD *)(v3 + 56) |= 8u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 144), v15);
      *(_BYTE *)(v3 + 64) = 0;
      if ( (byte_1C00E8083 & 1) != 0 )
        McTemplateK0juqjzzz(
          *(_QWORD *)(v3 + 32) + 4008LL,
          *(_QWORD *)(v3 + 40),
          (const GUID *)(v3 + 672),
          v3 + 672,
          0,
          9,
          *(_QWORD *)(v3 + 32) + 4008LL,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 3856LL) + 8LL),
          *(const wchar_t **)(*(_QWORD *)(v3 + 40) + 8LL),
          *(const wchar_t **)(*(_QWORD *)(v3 + 48) + 8LL));
      if ( (*(_DWORD *)(v3 + 56) & 0x8000) != 0 )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp((PVOID)v3, a1, 1);
      ndisDereferenceMiniport((__int64)a1, 0x28u);
    }
  }
  ndisHandleFilterHandlersChange(a1);
  if ( v2 )
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    ndisDereferenceFilter((KSPIN_LOCK *)v3, 0);
  }
  if ( v4 )
    ndisDereferenceMiniport((__int64)a1, 0x29u);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      1,
      46,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      v3);
  }
}
