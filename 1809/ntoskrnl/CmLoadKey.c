/*
 * XREFs of CmLoadKey @ 0x1406C9E18
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpLoadKeyCommon @ 0x140010994 (CmpLoadKeyCommon.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x1405B594C (CmpCmdHiveOpen.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406CA164 (CmpQueryHiveRedirectionFileList.c)
 *     CmpResolveHiveLoadConflict @ 0x1407F1528 (CmpResolveHiveLoadConflict.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     ObDrainDeferredObjectDeletion @ 0x14086256C (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmLoadKey(
        __int64 a1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        struct _KEVENT *a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 *a11)
{
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // r14
  UNICODE_STRING *v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v22; // ecx
  BOOLEAN v23; // dl
  BOOLEAN v24; // r8
  int v25; // edi
  _DWORD *v26; // rbx
  int KeyCommon; // eax
  const GUID *v28; // r9
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v31; // ebx
  int Conflict; // ebx
  const GUID *v33; // r9
  char v34; // [rsp+50h] [rbp-B0h] BYREF
  char v35; // [rsp+51h] [rbp-AFh] BYREF
  __int16 v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 *v41; // [rsp+70h] [rbp-90h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+98h] [rbp-68h]
  PVOID v46; // [rsp+A0h] [rbp-60h] BYREF
  struct _KEVENT *v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-40h]
  _BYTE v51[56]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52[44]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR v53; // [rsp+260h] [rbp+160h] BYREF
  int *v54; // [rsp+280h] [rbp+180h]
  __int64 v55; // [rsp+288h] [rbp+188h]
  __int16 *v56; // [rsp+290h] [rbp+190h]
  __int64 v57; // [rsp+298h] [rbp+198h]
  int *v58; // [rsp+2A0h] [rbp+1A0h]
  __int64 v59; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v60; // [rsp+2B0h] [rbp+1B0h]
  __int64 v61; // [rsp+2B8h] [rbp+1B8h]
  char *v62; // [rsp+2C0h] [rbp+1C0h]
  int v63; // [rsp+2C8h] [rbp+1C8h]
  int v64; // [rsp+2CCh] [rbp+1CCh]
  char *v65; // [rsp+2D0h] [rbp+1D0h]
  __int64 v66; // [rsp+2D8h] [rbp+1D8h]
  char *v67; // [rsp+2E0h] [rbp+1E0h]
  int v68; // [rsp+2E8h] [rbp+1E8h]
  int v69; // [rsp+2ECh] [rbp+1ECh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v71; // [rsp+310h] [rbp+210h]
  __int64 v72; // [rsp+318h] [rbp+218h]

  v38 = 0LL;
  v48 = a5;
  v45 = a10;
  v41 = a11;
  v47 = a7;
  v50 = a8;
  v34 = 0;
  memset(v52, 0, sizeof(v52));
  v15 = **(_WORD **)(a1 + 16);
  if ( v15 >= 2u )
  {
    for ( LODWORD(v16) = v15 >> 1; (_DWORD)v16; *(_WORD *)v17 -= 2 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      v16 = (unsigned int)(v16 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v17 + 8) + 2 * v16) != 92 )
        break;
    }
  }
  if ( **(_WORD **)(a1 + 16) < 2u )
    return 3221225485LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x62534D43u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v20 = *(UNICODE_STRING **)(a1 + 16);
  Destination.Buffer = PoolWithTag;
  *(_QWORD *)&Destination.Length = 17039360LL;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(v20, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v19, 0);
    return 3221225865LL;
  }
  v35 = 1;
  v37 = a3 & 0x2000;
  v22 = v37 != 0 ? 3 : 0;
  v23 = v22 | 8;
  if ( (a3 & 0x4000) == 0 )
    v23 = v22;
  v24 = v23 | 4;
  if ( !v48 )
    v24 = v23;
  v25 = CmpCmdHiveOpen(
          a2,
          1,
          &v35,
          &v38,
          ((a3 & 0xFFFFF223 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1190001,
          v24,
          a8,
          &v34,
          v52);
  if ( (int)(v25 + 0x80000000) >= 0 )
  {
    if ( v25 != -1073741757 )
    {
LABEL_42:
      v26 = (_DWORD *)v38;
      goto LABEL_19;
    }
LABEL_36:
    v25 = 0;
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, &v49, 8u, (void *)v50, 0LL, 0LL, 0LL) < 0
      || (v31 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL),
          ZwClose(Handle),
          v31 < 0) )
    {
      v25 = -1073741757;
    }
    else
    {
      Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)Object, a3, a4, (__int64)a7, a9, v45, (__int64)v41);
      ObfDereferenceObject(Object);
      if ( Conflict < 0 )
        v25 = -1073741757;
    }
    goto LABEL_42;
  }
  if ( v25 == -1073741757 )
    goto LABEL_36;
  v26 = (_DWORD *)v38;
  if ( !v37 )
    goto LABEL_15;
  v25 = ObReferenceObjectByHandle(*(HANDLE *)(v38 + 1536), 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v46, 0LL);
  if ( v25 >= 0 )
  {
    v25 = CmpResolveHiveLoadConflict(a1, (_DWORD)v46, a3, a4, (__int64)v47, a9, v45, (__int64)v41);
    ObfDereferenceObject(v46);
    if ( v25 >= 0 )
    {
LABEL_18:
      v25 = 0;
      goto LABEL_19;
    }
    if ( v25 == -1073741275 )
    {
LABEL_15:
      if ( a6 )
        v26[1038] |= 0x2000u;
      KeyCommon = CmpLoadKeyCommon((ULONG_PTR)v26, (_QWORD *)a1, a3, a4, v48, v47, a9, v41, v35, v34);
      v26 = 0LL;
      v25 = KeyCommon;
      if ( KeyCommon < 0 )
        goto LABEL_21;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v26 )
  {
    ObDrainDeferredObjectDeletion();
    CmpAttachToRegistryProcess((__int64)v51);
    CmpDestroyHive(v26);
    KiUnstackDetachProcess((__int64)v51, 0LL);
  }
LABEL_21:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v19, 0);
  if ( v25 < 0 )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
    {
      v54 = &v39;
      v56 = &v36;
      v58 = &v37;
      v60 = &v52[1];
      v62 = (char *)&v52[1] + 4;
      LOWORD(v37) = WORD1(v52[1]);
      v36 = v52[1];
      v65 = (char *)&v52[1] + 2;
      v67 = (char *)&v52[13] + 4;
      v68 = 12 * WORD1(v52[1]);
      v39 = v25;
      v55 = 4LL;
      v57 = 2LL;
      v59 = 2LL;
      v61 = 2LL;
      v63 = 12 * LOWORD(v52[1]);
      v64 = (int)v33;
      v66 = 2LL;
      v69 = (int)v33;
      TlgWrite(&stru_140400AA0, &unk_14036CC17, 0LL, v33, 9u, &v53);
    }
  }
  else if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
    {
      v40 = v25;
      v71 = &v40;
      v72 = 4LL;
      TlgWrite(&stru_140400AA0, &unk_14036CBEB, 0LL, v28, 3u, &pData);
    }
  }
  return (unsigned int)v25;
}
