/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C02AC8A4
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x1C02ACD70 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00D0970 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00D1A5C (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0157B30 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0157B64 (DxgkReleaseAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02ACE5C (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C02AF0B4 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(char *P)
{
  int v2; // ebx
  bool v3; // zf
  __int64 v4; // r8
  int v5; // eax
  char v6; // r13
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // eax
  const GUID *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r12
  const GUID *v15; // r8
  __int64 v16; // rax
  int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+38h] [rbp-39h] BYREF
  __int64 v29; // [rsp+40h] [rbp-31h]
  _QWORD v30[10]; // [rsp+48h] [rbp-29h] BYREF

  v28 = 0;
  AcquireMiniportListMutex();
  v2 = *((_DWORD *)P + 6);
  if ( v2 == 1 )
  {
    v2 = 1;
    if ( (_BYTE)word_1C00A275C )
    {
      if ( HIBYTE(word_1C00A275C) && qword_1C00A2768 == *((_QWORD *)P + 2) )
      {
        *((_DWORD *)P + 6) = 4;
        v2 = 4;
        *((_QWORD *)P + 2) = qword_1C00A2760;
      }
    }
  }
  memset(v30, 0, 0x48uLL);
  v30[0] = 0x4000000006LL;
  v3 = *((_QWORD *)P + 4) == 0LL;
  memset(&v30[1], 0, 36);
  LODWORD(v30[7]) = *((_DWORD *)P + 7);
  HIDWORD(v30[7]) = !v3;
  LODWORD(v30[6]) = 25;
  HIDWORD(v30[6]) = v2;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, 0x200000000LL, v4);
  v5 = *((_DWORD *)P + 6);
  do
  {
    v6 = 0;
    v7 = qword_1C00A2778;
    if ( *(_QWORD *)v7 != v7 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
        v8 = *(_QWORD *)(v7 + 56);
        if ( *(_QWORD *)v8 != v8 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == qword_1C00A2778 )
        {
          v5 = *((_DWORD *)P + 6);
          v6 = 0;
          goto LABEL_47;
        }
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
        {
          v9 = *((_DWORD *)P + 6);
          if ( v9 != 1 && v9 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v8 + 24) )
            break;
        }
LABEL_44:
        v8 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 == *(_QWORD *)(v7 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v8 + 484) )
        DpiCheckForOutstandingD3Requests(v8);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
      if ( *(_BYTE *)(v8 + 1158) != 1 || !*(_QWORD *)(v7 + 232) || *(_DWORD *)(v8 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v8 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v28 = 0;
      if ( *(_DWORD *)(v8 + 3992) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        v11 = 2LL;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 3896), 2, v10);
        v11 = 1LL;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3896), v11, (__int64)v10);
      v14 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v7,
                   *(_QWORD *)(v8 + 48),
                   *((_DWORD *)P + 6),
                   *((_DWORD *)P + 7),
                   *((_QWORD *)P + 4),
                   (__int64)&v28);
      if ( *(_DWORD *)(v8 + 3992) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v12, v13);
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3896), v12, v13);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 3896), 2u, v15);
      }
      v16 = *(_QWORD *)(v8 + 3896);
      v17 = 0;
      if ( v16 )
      {
        v29 = *(_QWORD *)(v16 + 276);
        v17 = v29;
      }
      memset(v30, 0, 0x48uLL);
      v18 = *(_QWORD *)(v8 + 2672);
      memset(&v30[1], 0, 36);
      v30[7] = __PAIR64__(v14, v28);
      v30[0] = 0x480000001ELL;
      LODWORD(v30[6]) = 42;
      HIDWORD(v30[6]) = v17;
      v30[8] = v18;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, 0x200000000LL, v19);
      if ( (int)v14 >= 0 )
      {
        v24 = v28;
        if ( *((_DWORD *)P + 6) == 4 )
        {
          v21 = (unsigned int)(-((v28 & 8) != 0) - 8);
          if ( ((unsigned int)v21 & v28) != 0 )
          {
            v25 = WdLogNewEntry5_WdError(v21, v28, v22);
            *(_QWORD *)(v25 + 24) = v28;
            WdLogEvent5_WdError(v25);
            v24 = 0LL;
            v28 = 0;
          }
        }
        LOBYTE(v21) = (*(_BYTE *)(v8 + 3904) & 1) == 0;
        LOBYTE(v24) = -(v24 & 7);
        if ( ((unsigned __int8)-((_BYTE)v24 != 0) & (unsigned __int8)v21) == 0 )
          goto LABEL_37;
        v26 = WdLogNewEntry5_WdError(v21, v24, v22);
        *(_QWORD *)(v26 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v26);
      }
      else
      {
        v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v23 + 24) = v14;
        WdLogEvent5_WdWarning(v23);
      }
      v28 = 0;
LABEL_37:
      v27 = WdLogNewEntry5_WdEvent(v21);
      *(_QWORD *)(v27 + 24) = v28;
      WdLogEvent5_WdEvent(v27);
      if ( *(_DWORD *)(v8 + 3992) != 1 && *(_DWORD *)(v8 + 284) == 1 && (v28 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v8 + 24), v28, P, P + 40);
      goto LABEL_41;
    }
LABEL_47:
    if ( v5 == 4 && (v28 & 8) != 0 )
    {
      *((_DWORD *)P + 6) = 1;
      v6 = 1;
      *((_QWORD *)P + 2) = qword_1C00A2768;
      v5 = 1;
    }
  }
  while ( v6 );
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(P, 0);
}
