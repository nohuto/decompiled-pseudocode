/*
 * XREFs of DpiGetDxgAdapterSafe @ 0x1C0100428
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0100220 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0008B68 (DpiDisableD3Requests.c)
 */

__int64 __fastcall DpiGetDxgAdapterSafe(struct _DEVICE_OBJECT *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v5; // r12d
  __int64 *v6; // rbx
  _QWORD *v7; // rsi
  struct _KMUTANT *v8; // r13
  __int64 *v9; // rdi
  struct _DEVICE_OBJECT *v10; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *i; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  _QWORD *j; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  *a2 = 0LL;
  v5 = -1073741811;
  v6 = 0LL;
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C00A2788, (__int64)KeGetCurrentThread());
  v7 = (_QWORD *)qword_1C00A2778;
  if ( (_QWORD *)*v7 != v7 )
  {
    do
    {
      if ( v6 )
        break;
      v8 = (struct _KMUTANT *)(v7 + 9);
      KeWaitForSingleObject(v7 + 9, Executive, 0, 0, 0LL);
      v9 = (__int64 *)v7[7];
      if ( (__int64 *)*v9 != v9 )
      {
        do
        {
          if ( v6 )
            break;
          if ( *((_DWORD *)v9 + 4) == 1953656900 && *((_DWORD *)v9 + 5) == 2 )
          {
            v10 = (struct _DEVICE_OBJECT *)v9[3];
            if ( v10 == a1 || (struct _DEVICE_OBJECT *)v9[19] == a1 )
            {
              v6 = v9;
            }
            else
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v10);
              if ( a1 == AttachedDeviceReference )
                v6 = v9;
              ObfDereferenceObject(AttachedDeviceReference);
            }
            if ( v6 )
              goto LABEL_26;
            KeWaitForSingleObject(v9 + 448, Executive, 0, 0, 0LL);
            v12 = (_QWORD *)v9[446];
            v13 = v12;
            for ( i = (_QWORD *)*v12; i != v13; i = (_QWORD *)*i )
            {
              if ( (struct _DEVICE_OBJECT *)v12[3] == a1 )
                v6 = *(__int64 **)(v12[4] + 64LL);
              v12 = i;
            }
            KeReleaseMutex((PRKMUTEX)v9 + 64, 0);
            if ( v6 )
              goto LABEL_26;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v9 + 413), 1u);
            v15 = (_QWORD *)v9[456];
            v16 = v15;
            for ( j = (_QWORD *)*v15; j != v16; j = (_QWORD *)*j )
            {
              if ( (struct _DEVICE_OBJECT *)v15[3] == a1 )
                v6 = *(__int64 **)(v15[4] + 64LL);
              v15 = j;
            }
            ExReleaseResourceLite((PERESOURCE)(v9 + 413));
            KeLeaveCriticalRegion();
            if ( v6 )
            {
LABEL_26:
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v6 + 484) )
                DpiDisableD3Requests(v6[3]);
              ExAcquireResourceSharedLite((PERESOURCE)v6[21], 1u);
              if ( *((_DWORD *)v6 + 59) == 2 )
              {
                v22 = v6[487];
                if ( v22 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
                  v23 = v6[487];
                  v5 = 0;
                  *a3 = -1LL;
                  *a2 = v23;
                }
              }
              if ( *((_BYTE *)v6 + 484) )
                DpiEnableD3Requests(v6[3]);
              ExReleaseResourceLite((PERESOURCE)v6[21]);
              KeLeaveCriticalRegion();
            }
          }
          v9 = (__int64 *)*v9;
        }
        while ( *v9 != v7[7] );
        v8 = (struct _KMUTANT *)(v7 + 9);
      }
      KeReleaseMutex(v8, 0);
      v7 = (_QWORD *)*v7;
    }
    while ( *v7 != qword_1C00A2778 );
  }
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( !*a2 )
  {
    v24 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdWarning(v24);
  }
  return v5;
}
