/*
 * XREFs of DpiGetDxgAdapterSafe @ 0x1C00E3F4C
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00E2BA0 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C000F748 (DpiDisableD3Requests.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E4290 (-IgnoreCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?StopCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00E42EC (-StopCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

__int64 __fastcall DpiGetDxgAdapterSafe(struct _DEVICE_OBJECT *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  _QWORD *v4; // rdi
  unsigned int v7; // r13d
  _QWORD *v8; // r15
  struct _KMUTANT *v9; // rbx
  __int64 *v10; // r14
  struct _DEVICE_OBJECT *v11; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *i; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  _QWORD *j; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rdi
  __int64 CurrentProcess; // rbx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rcx
  struct DXGGLOBAL *v31; // rax
  __int64 v32; // rax

  v3 = 0LL;
  v4 = a3;
  *a2 = 0LL;
  v7 = -1073741811;
  AcquireMiniportListMutex();
  v8 = (_QWORD *)qword_1C008E778;
  if ( (_QWORD *)*v8 != v8 )
  {
    do
    {
      if ( v3 )
        break;
      v9 = (struct _KMUTANT *)(v8 + 9);
      KeWaitForSingleObject(v8 + 9, Executive, 0, 0, 0LL);
      v10 = (__int64 *)v8[7];
      if ( (__int64 *)*v10 != v10 )
      {
        do
        {
          if ( v3 )
            break;
          if ( *((_DWORD *)v10 + 4) == 1953656900 && *((_DWORD *)v10 + 5) == 2 )
          {
            v11 = (struct _DEVICE_OBJECT *)v10[3];
            if ( v11 == a1 || (struct _DEVICE_OBJECT *)v10[19] == a1 )
            {
              v3 = v10;
            }
            else
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v11);
              if ( a1 == AttachedDeviceReference )
                v3 = v10;
              ObfDereferenceObject(AttachedDeviceReference);
            }
            if ( v3 )
              goto LABEL_26;
            KeWaitForSingleObject(v10 + 435, Executive, 0, 0, 0LL);
            v13 = (_QWORD *)v10[433];
            v14 = v13;
            for ( i = (_QWORD *)*v13; i != v14; i = (_QWORD *)*i )
            {
              if ( (struct _DEVICE_OBJECT *)v13[3] == a1 )
                v3 = *(__int64 **)(v13[4] + 64LL);
              v13 = i;
            }
            KeReleaseMutex((PRKMUTEX)(v10 + 435), 0);
            if ( v3 )
              goto LABEL_26;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v10 + 404), 1u);
            v16 = (_QWORD *)v10[443];
            v17 = v16;
            for ( j = (_QWORD *)*v16; j != v17; j = (_QWORD *)*j )
            {
              if ( (struct _DEVICE_OBJECT *)v16[3] == a1 )
                v3 = *(__int64 **)(v16[4] + 64LL);
              v16 = j;
            }
            ExReleaseResourceLite((PERESOURCE)(v10 + 404));
            KeLeaveCriticalRegion();
            if ( v3 )
            {
LABEL_26:
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v3 + 483) )
              {
                v23 = v3[477];
                CurrentProcess = PsGetCurrentProcess();
                Global = DXGGLOBAL::GetGlobal(v25);
                DXGGLOBAL::IgnoreCoreDripsBlockerTracking(Global, v23, CurrentProcess, 4023LL);
                DpiDisableD3Requests(v3[3]);
                v4 = a3;
              }
              ExAcquireResourceSharedLite((PERESOURCE)v3[21], 1u);
              if ( *((_DWORD *)v3 + 59) == 2 )
              {
                v27 = v3[474];
                if ( v27 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
                  *v4 = -1LL;
                  v7 = 0;
                  *a2 = v3[474];
                }
              }
              if ( *((_BYTE *)v3 + 483) )
              {
                v28 = v3[477];
                v29 = PsGetCurrentProcess();
                v31 = DXGGLOBAL::GetGlobal(v30);
                DXGGLOBAL::StopCoreDripsBlockerTracking(v31, v28, v29, 4023LL);
                DpiEnableD3Requests(v3[3]);
              }
              ExReleaseResourceLite((PERESOURCE)v3[21]);
              KeLeaveCriticalRegion();
              v4 = a3;
            }
          }
          v10 = (__int64 *)*v10;
        }
        while ( *v10 != v8[7] );
        v9 = (struct _KMUTANT *)(v8 + 9);
      }
      KeReleaseMutex(v9, 0);
      v8 = (_QWORD *)*v8;
    }
    while ( *v8 != qword_1C008E778 );
  }
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( !*a2 )
  {
    v32 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v32 + 24) = 0LL;
    WdLogEvent5_WdWarning(v32);
  }
  return v7;
}
