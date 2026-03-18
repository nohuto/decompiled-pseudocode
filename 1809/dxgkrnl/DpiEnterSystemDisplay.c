/*
 * XREFs of DpiEnterSystemDisplay @ 0x1C001E470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00034EC (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

__int64 __fastcall DpiEnterSystemDisplay(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ecx
  unsigned int i; // r13d
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  ADAPTER_DISPLAY *v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int (__fastcall *v17)(__int64, __int64, int *, int *, int *, int *); // rax
  int v18; // edx
  int v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+44h] [rbp-54h] BYREF
  int v21; // [rsp+48h] [rbp-50h] BYREF
  int v22; // [rsp+4Ch] [rbp-4Ch] BYREF
  unsigned int v23[18]; // [rsp+50h] [rbp-48h] BYREF
  int v24; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+B0h] [rbp+18h]
  unsigned int v26; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a3;
  v26 = -1;
  v24 = 3;
  v20 = 0;
  v5 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  if ( byte_1C008EAA8 )
  {
    v6 = 640;
    *(_DWORD *)(a2 + 16) = 5;
    v7 = 480;
LABEL_4:
    *(_WORD *)a2 = 0;
    *(_QWORD *)(a2 + 32) = DpiSystemDisplayWrite;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_DWORD *)(a2 + 8) = v6;
    *(_DWORD *)(a2 + 4) = v7;
    *(_DWORD *)(a2 + 12) = v6;
    if ( a3 )
      *a3 = DpiLeaveSystemDisplay;
    return 0LL;
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  for ( i = 0; i < 4; ++i )
  {
    v10 = qword_1C008E778;
    if ( *(_QWORD *)v10 == v10 )
      continue;
    while ( *(_DWORD *)(v10 + 28) < 0x3004u || !*(_QWORD *)(v10 + 744) )
    {
LABEL_63:
      v10 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 == qword_1C008E778 )
        goto LABEL_47;
    }
    if ( !a1 )
      KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v11 = *(_QWORD *)(v10 + 56);
    if ( *(_QWORD *)v11 == v11 )
      goto LABEL_61;
    do
    {
      if ( *(_DWORD *)(v11 + 16) != 1953656900
        || *(_DWORD *)(v11 + 20) != 2
        || i == 3 && *(_BYTE *)(v11 + 1147) && *(_BYTE *)(v11 + 480) )
      {
        goto LABEL_39;
      }
      v5 = v11;
      if ( !a1 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v11 + 483) )
        {
          DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v11 + 3816), 4023LL);
          DpiCheckForOutstandingD3Requests(v11);
        }
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v11 + 168), 1u);
      }
      if ( (*(_BYTE *)(v11 + 3800) & 4) == 0 )
        goto LABEL_34;
      if ( !a1 )
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v11 + 3792), 2LL);
      v12 = *(_QWORD *)(v11 + 3792);
      if ( v12 )
      {
        v13 = *(ADAPTER_DISPLAY **)(v12 + 2520);
        if ( v13 )
        {
          ADAPTER_DISPLAY::GetPrimaryPath(v13, v23, &v26, (enum _DXGK_PRIMARY_TARGET_TYPE *)&v24);
          if ( v24 == i )
            break;
        }
      }
      if ( !a1 )
      {
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v11 + 3792), 2LL);
LABEL_34:
        if ( !a1 )
        {
          if ( *(_BYTE *)(v11 + 483) )
          {
            DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v11 + 3816), 4023LL);
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL) + 3992LL));
          }
          ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
          KeLeaveCriticalRegion();
        }
      }
      v5 = 0LL;
LABEL_39:
      v11 = *(_QWORD *)v11;
    }
    while ( *(_QWORD *)v11 != *(_QWORD *)(v10 + 56) );
    if ( !v5 )
    {
LABEL_61:
      if ( !a1 )
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      goto LABEL_63;
    }
    v14 = v26;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, int *, int *, int *, int *))(v10 + 744))(
           *(_QWORD *)(v5 + 48),
           v26,
           &v20,
           &v21,
           &v22,
           &v19) >= 0 )
    {
      v18 = v19;
      if ( !v19 && qword_1C008E9E0 && v5 == *(_QWORD *)(qword_1C008E9E0 + 64) )
        *(_DWORD *)(a2 + 16) = 1;
      else
        *(_DWORD *)(a2 + 16) = 5;
LABEL_60:
      v7 = v22;
      a3 = v25;
      dword_1C008EAC0 = v24;
      v6 = v21;
      dword_1C008EAC8 = v21;
      byte_1C008EAA9 = a1;
      qword_1C008EAB0 = v10;
      qword_1C008EAB8 = v5;
      dword_1C008EAC4 = v14;
      dword_1C008EACC = v22;
      dword_1C008EAD0 = v18;
      goto LABEL_4;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3792), 2LL);
      if ( *(_BYTE *)(v5 + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v5 + 3816), 4023LL);
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3992LL));
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      _InterlockedExchange64(&qword_1C008E788, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    v5 = 0LL;
LABEL_47:
    ;
  }
  if ( qword_1C008E9D8 )
  {
    v15 = *(_QWORD *)(qword_1C008E9D8 + 64);
    if ( *(_DWORD *)(v15 + 236) == 2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v15 + 40) + 240LL))(*(_QWORD *)(v15 + 48));
  }
  if ( !a1 )
    AcquireMiniportListMutex();
  if ( qword_1C008E9E0 )
  {
    v5 = *(_QWORD *)(qword_1C008E9E0 + 64);
    v10 = *(_QWORD *)(v5 + 40);
    if ( !a1 )
    {
      KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v5 + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v5 + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(v5);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 168), 1u);
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 3792), 2LL);
    }
    v16 = *(_QWORD *)(v5 + 48);
    v17 = *(int (__fastcall **)(__int64, __int64, int *, int *, int *, int *))(v10 + 744);
    v24 = 3;
    v14 = -1;
    v26 = -1;
    if ( v17(v16, 0xFFFFFFFFLL, &v20, &v21, &v22, &v19) >= 0 )
    {
      v18 = v19;
      *(_DWORD *)(a2 + 16) = v19 != 0 ? 5 : 1;
      goto LABEL_60;
    }
    if ( !a1 )
    {
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 3792), 2LL);
      if ( *(_BYTE *)(v5 + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v5 + 3816), 4023LL);
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 64LL) + 3992LL));
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 168));
      KeLeaveCriticalRegion();
      KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      _InterlockedExchange64(&qword_1C008E788, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
  }
  return 3221225473LL;
}
