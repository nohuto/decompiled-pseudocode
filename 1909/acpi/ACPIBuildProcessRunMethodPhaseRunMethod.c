/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0015C50
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  void *v1; // r12
  _QWORD *v2; // r15
  unsigned int v3; // ebp
  int v5; // esi
  ULONG_PTR v6; // rbx
  _SLIST_ENTRY *v7; // r13
  int v8; // edi
  __int64 *v9; // rbx
  KIRQL v10; // dl
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rax
  char v14; // al
  void *v15; // rdx
  __int64 v16; // rcx
  signed __int32 v17; // ecx
  KIRQL v18; // di
  int v19; // edx
  int v21; // edi
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  _QWORD *v24; // rdi
  volatile signed __int32 *v25; // rcx
  char v26; // al
  int v27; // edx
  void *v28; // r8
  void *v29; // rcx
  __int64 v30; // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  int v33; // edi
  unsigned __int64 v34; // rax
  char v35; // [rsp+28h] [rbp-A0h]
  __int64 v36; // [rsp+40h] [rbp-88h]
  _QWORD v37[10]; // [rsp+50h] [rbp-78h] BYREF

  v1 = &unk_1C006FE7D;
  v2 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 84) & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    v27 = 0;
    v28 = &unk_1C006FE7D;
    v29 = &unk_1C006FE7D;
    if ( v2 )
    {
      v30 = v2[1];
      v27 = (int)v2;
      if ( (v30 & 0x200000000000LL) != 0 )
      {
        v28 = (void *)v2[70];
        if ( (v30 & 0x400000000000LL) != 0 )
          v29 = (void *)v2[71];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = v27;
      LOBYTE(v27) = 4;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v27,
        6,
        66,
        (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
        v35,
        (__int64)v28,
        (__int64)v29);
    }
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v9 = (__int64 *)v2[89];
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = *v9;
  v12 = *(__int64 **)(*v9 + 24);
  v13 = (__int64 *)(v11 + 24);
  if ( v13 == v12 )
  {
LABEL_5:
    v12 = 0LL;
  }
  else
  {
    while ( v8 != *((_DWORD *)v12 + 10) )
    {
      v12 = (__int64 *)*v12;
      if ( v13 == v12 )
        goto LABEL_5;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_8;
  }
  v6 = (ULONG_PTR)(v12 + 15);
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  if ( v6 )
  {
    v21 = *(_DWORD *)(a1 + 84);
    if ( (v21 & 2) != 0 )
    {
      _m_prefetchw(v2 + 1);
      v22 = v2[1];
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64(v2 + 1, v22 | 0x20000000000000LL, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x20000000000000LL) != 0 )
        goto LABEL_8;
    }
    else
    {
      if ( (v21 & 8) != 0 )
      {
        if ( !*((_DWORD *)v2 + 126) )
          goto LABEL_8;
        memset(v37, 0, 0x28uLL);
        v24 = v37;
        v37[2] = 1LL;
        v5 = 1;
        WORD1(v37[0]) = 1;
        goto LABEL_31;
      }
      if ( (v21 & 0x30) != 0 )
      {
        v33 = v21 | 0x40;
        *(_DWORD *)(a1 + 84) = v33;
        memset(v37, 0, sizeof(v37));
        v37[2] = 2LL;
        WORD1(v37[0]) = 1;
        v5 = 2;
        WORD1(v37[5]) = 1;
        v34 = (unsigned __int8)v33;
        v24 = v37;
        v37[7] = (v34 >> 4) & 1;
        goto LABEL_31;
      }
      if ( (v21 & 0x80u) != 0 )
      {
        _m_prefetchw(v2 + 119);
        v31 = v2[119];
        do
        {
          v32 = v31;
          v31 = _InterlockedCompareExchange64(v2 + 119, v31 | 0x4000, v31);
        }
        while ( v32 != v31 );
        if ( (v31 & 0x4000) != 0 )
          goto LABEL_8;
        v7 = (_SLIST_ENTRY *)(a1 + 88);
        memset((void *)(a1 + 88), 0, 0x28uLL);
        *(_DWORD *)(a1 + 32) = 8;
      }
    }
    v24 = 0LL;
LABEL_31:
    v25 = *(volatile signed __int32 **)(a1 + 56);
    if ( v25 )
      AMLIDereferenceHandleEx(v25);
    v26 = gdwfAMLI;
    *(_QWORD *)(a1 + 56) = v6;
    dword_1C0082858 = 0;
    pszDest = 0;
    if ( (v26 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v5 = AMLIAsyncEvalObject((__int64 *)v6, v7, v5, v24, ACPIBuildCompleteMustSucceed, a1);
  }
LABEL_8:
  v14 = 0;
  v15 = &unk_1C006FE7D;
  if ( v2 )
  {
    v16 = v2[1];
    v14 = (char)v2;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v1 = (void *)v2[70];
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = (void *)v2[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = (__int64)v15;
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v15,
      6,
      67,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v5,
      v14,
      (__int64)v1,
      v36);
  }
  if ( v5 == 259 )
  {
    v5 = 0;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 32);
    if ( v5 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v5;
        if ( v6 )
          v3 = *(_DWORD *)(*(_QWORD *)v6 + 40LL);
        KeBugCheckEx(0xA5u, 3uLL, v6, v5, v3);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v17, 1);
      v18 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v19 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v19;
      if ( (v19 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v19 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v18);
    }
  }
  if ( v6 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  return (unsigned int)v5;
}
