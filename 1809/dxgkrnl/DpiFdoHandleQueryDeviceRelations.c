/*
 * XREFs of DpiFdoHandleQueryDeviceRelations @ 0x1C01448B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0144B80 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C0265030 (DpiFdoHandleQueryPowerRelations.c)
 */

__int64 __fastcall DpiFdoHandleQueryDeviceRelations(__int64 a1, IRP *a2)
{
  int PowerRelations; // esi
  int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Length; // ecx
  char v10; // bp
  unsigned int *Information; // r14
  int v12; // eax
  unsigned int v13; // ebp
  _DWORD *PoolWithTag; // rax
  __int64 v15; // rcx
  _DWORD *v16; // r15
  __int64 *v17; // rbp
  unsigned int i; // r13d
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD v24[10]; // [rsp+20h] [rbp-98h] BYREF

  memset(v24, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v24[1]);
  PowerRelations = 0;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v24[8] = MEMORY[0xFFFFF78000000014];
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LODWORD(v24[3]) = 6;
  LOBYTE(v24[6]) = -1;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 2 )
  {
    PowerRelations = DpiFdoHandleQueryPowerRelations(v7, a2);
  }
  else
  {
    if ( Length )
      goto LABEL_28;
    _m_prefetchw((const void *)(v7 + 3540));
    v10 = _InterlockedOr((volatile signed __int32 *)(v7 + 3540), 1u);
    if ( (v10 & 2) == 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v7 + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(v7);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( (v10 & 1) == 0 && *(_DWORD *)(v7 + 236) == 2 && *(_DWORD *)(v7 + 3888) != 1 && *(_DWORD *)(v7 + 284) == 1 )
        DpiFdoInvalidateChildRelations(a1, 6LL, v24);
      if ( *(_BYTE *)(v7 + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v7 + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
      KeLeaveCriticalRegion();
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3232), 1u);
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information && *Information )
    {
      v6 = *Information;
      v5 = *Information - 1;
    }
    v12 = *(_DWORD *)(v7 + 3560);
    if ( v12 )
      v5 = v6 + v12 - 1;
    v13 = 8 * v5 + 16;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x74727044u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v13);
      *v16 = v6 + *(_DWORD *)(v7 + 3560);
      if ( v6 )
        memmove(v16 + 2, Information + 2, 8LL * v6);
      v17 = *(__int64 **)(v7 + 3544);
      for ( i = 0; i < *(_DWORD *)(v7 + 3560); v17 = (__int64 *)*v17 )
      {
        if ( *v17 == *(_QWORD *)(v7 + 3544) )
          break;
        *(_QWORD *)&v16[2 * v6 + 2 + 2 * i] = v17[3];
        ObfReferenceObject((PVOID)v17[3]);
        *((_BYTE *)v17 + 509) = 1;
        ++i;
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Information = (ULONG_PTR)v16;
      v19 = (_QWORD *)(v7 + 3568);
      while ( 1 )
      {
        v20 = (_QWORD *)*v19;
        if ( (_QWORD *)*v19 == v19 )
          break;
        if ( (_QWORD *)v20[1] != v19 || (v23 = *v20, *(_QWORD **)(*v20 + 8LL) != v20) )
          __fastfail(3u);
        *v19 = v23;
        *(_QWORD *)(v23 + 8) = v19;
        *((_BYTE *)v20 + 509) = 0;
      }
    }
    else
    {
      PowerRelations = -1073741801;
      v22 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v22 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v22);
    }
    _InterlockedAnd((volatile signed __int32 *)(v7 + 3540), 0xFFFFFFFE);
    ExReleaseResourceLite((PERESOURCE)(v7 + 3232));
    KeLeaveCriticalRegion();
  }
  if ( PowerRelations < 0 )
  {
    if ( PowerRelations != -1073741637 )
    {
      a2->IoStatus.Status = PowerRelations;
      IofCompleteRequest(a2, 1);
      return (unsigned int)PowerRelations;
    }
  }
  else
  {
    a2->IoStatus.Status = PowerRelations;
  }
LABEL_28:
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 160), a2);
}
