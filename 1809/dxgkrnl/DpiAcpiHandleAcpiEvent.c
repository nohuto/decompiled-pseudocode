/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C026FF04
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x1C02703E0 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00BCCF0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00BCFB8 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0145088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C014517C (DxgkAcquireAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02704CC (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C0273984 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(char *P)
{
  int v2; // ebx
  bool v3; // zf
  int v4; // eax
  char v5; // dl
  _QWORD *v6; // r14
  struct _KMUTANT *v7; // r13
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edx
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+38h] [rbp-39h] BYREF
  __int64 v24; // [rsp+40h] [rbp-31h]
  _QWORD v25[10]; // [rsp+48h] [rbp-29h] BYREF

  v23 = 0;
  AcquireMiniportListMutex();
  v2 = *((_DWORD *)P + 6);
  if ( v2 == 1 )
  {
    v2 = 1;
    if ( (_BYTE)word_1C008E75C )
    {
      if ( HIBYTE(word_1C008E75C) && qword_1C008E768 == *((_QWORD *)P + 2) )
      {
        *((_DWORD *)P + 6) = 4;
        v2 = 4;
        *((_QWORD *)P + 2) = qword_1C008E760;
      }
    }
  }
  memset(v25, 0, 0x48uLL);
  v25[0] = 0x4000000006LL;
  v3 = *((_QWORD *)P + 4) == 0LL;
  memset(&v25[1], 0, 36);
  LODWORD(v25[7]) = *((_DWORD *)P + 7);
  HIDWORD(v25[7]) = !v3;
  LODWORD(v25[6]) = 25;
  HIDWORD(v25[6]) = v2;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
  v4 = *((_DWORD *)P + 6);
  do
  {
    v5 = 0;
    v6 = (_QWORD *)qword_1C008E778;
    if ( (_QWORD *)*v6 != v6 )
    {
      while ( 1 )
      {
        v7 = (struct _KMUTANT *)(v6 + 9);
        KeWaitForSingleObject(v6 + 9, Executive, 0, 0, 0LL);
        v8 = v6[7];
        if ( *(_QWORD *)v8 == v8 )
          goto LABEL_46;
        do
        {
          if ( *(_DWORD *)(v8 + 16) != 1953656900 || *(_DWORD *)(v8 + 20) != 2 )
            goto LABEL_44;
          v9 = *((_DWORD *)P + 6);
          if ( (v9 == 1 || v9 == 4) && *((_QWORD *)P + 2) != *(_QWORD *)(v8 + 24) )
            goto LABEL_44;
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v8 + 483) )
          {
            DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v8 + 3816), 4023LL);
            DpiCheckForOutstandingD3Requests(v8);
          }
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
          if ( *(_BYTE *)(v8 + 1150) == 1 && v6[29] && *(_DWORD *)(v8 + 236) == 2 )
          {
            v23 = 0;
            if ( *(_DWORD *)(v8 + 3888) == 1 || *(_DWORD *)(v8 + 284) != 1 )
            {
              v10 = 2;
            }
            else
            {
              DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 3792), 2);
              v10 = 1;
            }
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3792), v10);
            v11 = (int)DpiDxgkDdiNotifyAcpiEvent(
                         (_DWORD)v6,
                         *(_QWORD *)(v8 + 48),
                         *((_DWORD *)P + 6),
                         *((_DWORD *)P + 7),
                         *((_QWORD *)P + 4),
                         (__int64)&v23);
            if ( *(_DWORD *)(v8 + 3888) == 1 || *(_DWORD *)(v8 + 284) != 1 )
            {
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3792));
            }
            else
            {
              DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3792));
              DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 3792));
            }
            v12 = *(_QWORD *)(v8 + 3792);
            v13 = 0;
            if ( v12 )
            {
              v24 = *(_QWORD *)(v12 + 276);
              v13 = v24;
            }
            memset(v25, 0, 0x48uLL);
            v14 = *(_QWORD *)(v8 + 2600);
            memset(&v25[1], 0, 36);
            v25[7] = __PAIR64__(v11, v23);
            v25[0] = 0x480000001ELL;
            LODWORD(v25[6]) = 42;
            HIDWORD(v25[6]) = v13;
            v25[8] = v14;
            DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v25);
            if ( (int)v11 < 0 )
            {
              v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
              *(_QWORD *)(v18 + 24) = v11;
              WdLogEvent5_WdWarning(v18);
              goto LABEL_36;
            }
            v19 = v23;
            if ( *((_DWORD *)P + 6) == 4 )
            {
              v16 = (unsigned int)(-((v23 & 8) != 0) - 8);
              if ( ((unsigned int)v16 & v23) != 0 )
              {
                v20 = WdLogNewEntry5_WdError(v16);
                *(_QWORD *)(v20 + 24) = v23;
                WdLogEvent5_WdError(v20);
                v19 = 0LL;
                v23 = 0;
              }
            }
            LOBYTE(v16) = (*(_BYTE *)(v8 + 3800) & 1) == 0;
            LOBYTE(v19) = -(v19 & 7);
            if ( ((unsigned __int8)-((_BYTE)v19 != 0) & (unsigned __int8)v16) != 0 )
            {
              v21 = WdLogNewEntry5_WdError(v16);
              *(_QWORD *)(v21 + 24) = -1073741823LL;
              WdLogEvent5_WdError(v21);
LABEL_36:
              v23 = 0;
            }
            v22 = WdLogNewEntry5_WdEvent(v16, v19);
            *(_QWORD *)(v22 + 24) = v23;
            WdLogEvent5_WdEvent(v22);
            if ( *(_DWORD *)(v8 + 3888) != 1 && *(_DWORD *)(v8 + 284) == 1 && (v23 & 7) != 0 )
              DpiAcpiProcessEventRequests(*(_QWORD *)(v8 + 24), v23, P, P + 40);
          }
          if ( *(_BYTE *)(v8 + 483) )
          {
            DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v8 + 3816), 4023LL);
            DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
          }
          ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
          KeLeaveCriticalRegion();
LABEL_44:
          v8 = *(_QWORD *)v8;
        }
        while ( *(_QWORD *)v8 != v6[7] );
        v7 = (struct _KMUTANT *)(v6 + 9);
LABEL_46:
        KeReleaseMutex(v7, 0);
        v6 = (_QWORD *)*v6;
        if ( *v6 == qword_1C008E778 )
        {
          v4 = *((_DWORD *)P + 6);
          v5 = 0;
          break;
        }
      }
    }
    if ( v4 == 4 && (v23 & 8) != 0 )
    {
      *((_DWORD *)P + 6) = 1;
      v5 = 1;
      *((_QWORD *)P + 2) = qword_1C008E768;
      v4 = 1;
    }
  }
  while ( v5 );
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(P, 0);
}
