/*
 * XREFs of CmLoadKey @ 0x1406E94C4
 * Callers:
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x14069010C (CmpCmdHiveOpen.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406E97F4 (CmpQueryHiveRedirectionFileList.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 *     CmpDestroyHive @ 0x14082F4C4 (CmpDestroyHive.c)
 *     ObDrainDeferredObjectDeletion @ 0x14089DD9C (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmLoadKey(
        __int64 a1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        struct _KEVENT *a7,
        void *a8,
        char a9,
        __int64 a10,
        ULONG_PTR *a11)
{
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // r14
  UNICODE_STRING *v20; // rcx
  int v21; // ecx
  BOOLEAN v22; // dl
  BOOLEAN v23; // r8
  int v24; // edi
  ULONG_PTR v25; // rbx
  int KeyCommon; // eax
  const GUID *v27; // r9
  UNICODE_STRING *p_Destination; // rax
  NTSTATUS v30; // ebx
  int Conflict; // ebx
  const GUID *v32; // r9
  _WORD v33[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v34[2]; // [rsp+54h] [rbp-ACh] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v37; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR *v38; // [rsp+70h] [rbp-90h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  struct _KEVENT *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  _BYTE v43[48]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44[44]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v45; // [rsp+230h] [rbp+130h] BYREF
  PVOID *p_Object; // [rsp+250h] [rbp+150h]
  __int64 v47; // [rsp+258h] [rbp+158h]
  _WORD *v48; // [rsp+260h] [rbp+160h]
  __int64 v49; // [rsp+268h] [rbp+168h]
  _WORD *v50; // [rsp+270h] [rbp+170h]
  __int64 v51; // [rsp+278h] [rbp+178h]
  __int64 *v52; // [rsp+280h] [rbp+180h]
  __int64 v53; // [rsp+288h] [rbp+188h]
  char *v54; // [rsp+290h] [rbp+190h]
  int v55; // [rsp+298h] [rbp+198h]
  int v56; // [rsp+29Ch] [rbp+19Ch]
  char *v57; // [rsp+2A0h] [rbp+1A0h]
  __int64 v58; // [rsp+2A8h] [rbp+1A8h]
  char *v59; // [rsp+2B0h] [rbp+1B0h]
  int v60; // [rsp+2B8h] [rbp+1B8h]
  int v61; // [rsp+2BCh] [rbp+1BCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF
  PVOID *v63; // [rsp+2E0h] [rbp+1E0h]
  __int64 v64; // [rsp+2E8h] [rbp+1E8h]

  v37 = 0LL;
  v42 = a5;
  v40 = a10;
  v38 = a11;
  v41 = a7;
  Handle = a8;
  LOBYTE(v33[0]) = 0;
  memset(v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
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
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    ExFreePoolWithTag(v19, 0);
    return 3221225865LL;
  }
  LOBYTE(v34[0]) = 1;
  LODWORD(Object) = a3 & 0x2000;
  v21 = (_DWORD)Object != 0 ? 3 : 0;
  v22 = v21 | 8;
  if ( (a3 & 0x4000) == 0 )
    v22 = v21;
  v23 = v22 | 4;
  if ( !v42 )
    v23 = v22;
  v24 = CmpCmdHiveOpen(
          a2,
          1,
          (char *)v34,
          &v37,
          ((a3 & 0xFFFFF221 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1090001,
          v23,
          (__int64)a8,
          (__int64)v33,
          v44);
  if ( (int)(v24 + 0x80000000) >= 0 )
  {
    if ( v24 != -1073741757 )
    {
LABEL_42:
      v25 = v37;
      goto LABEL_19;
    }
LABEL_36:
    v24 = 0;
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, (int *)&Object, 8u, Handle, 0LL, 0LL, 0LL) < 0
      || (v30 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL),
          ZwClose(Handle),
          v30 < 0) )
    {
      v24 = -1073741757;
    }
    else
    {
      Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)Object, a3, a4, (__int64)a7, a9, v40, (__int64)v38);
      ObfDereferenceObject(Object);
      if ( Conflict < 0 )
        v24 = -1073741757;
    }
    goto LABEL_42;
  }
  if ( v24 == -1073741757 )
    goto LABEL_36;
  v25 = v37;
  if ( !(_DWORD)Object )
    goto LABEL_15;
  v24 = ObReferenceObjectByHandle(*(HANDLE *)(v37 + 1536), 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Handle, 0LL);
  if ( v24 >= 0 )
  {
    v24 = CmpResolveHiveLoadConflict(a1, (_DWORD)Handle, a3, a4, (__int64)v41, a9, v40, (__int64)v38);
    ObfDereferenceObject(Handle);
    if ( v24 >= 0 )
    {
LABEL_18:
      v24 = 0;
      goto LABEL_19;
    }
    if ( v24 == -1073741275 )
    {
LABEL_15:
      if ( a6 )
        *(_DWORD *)(v25 + 4152) |= 0x2000u;
      KeyCommon = CmpLoadKeyCommon((char *)v25, (_QWORD *)a1, a3, a4, v42, v41, a9, v38, v34[0], v33[0]);
      v25 = 0LL;
      v24 = KeyCommon;
      if ( KeyCommon < 0 )
        goto LABEL_21;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( v25 )
  {
    ObDrainDeferredObjectDeletion();
    CmpAttachToRegistryProcess((__int64)v43);
    CmpDestroyHive((PVOID)v25);
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v43);
  }
LABEL_21:
  CmpReleaseShutdownRundown();
  ExFreePoolWithTag(v19, 0);
  if ( v24 < 0 )
  {
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      p_Object = &Object;
      v48 = v34;
      v50 = v33;
      v52 = &v44[1];
      v54 = (char *)&v44[1] + 4;
      v33[0] = WORD1(v44[1]);
      v34[0] = v44[1];
      v57 = (char *)&v44[1] + 2;
      v59 = (char *)&v44[13] + 4;
      v60 = 12 * WORD1(v44[1]);
      LODWORD(Object) = v24;
      v47 = 4LL;
      v49 = 2LL;
      v51 = 2LL;
      v53 = 2LL;
      v55 = 12 * LOWORD(v44[1]);
      v56 = (int)v32;
      v58 = 2LL;
      v61 = (int)v32;
      TlgWrite(&stru_140425BC0, &unk_14038B675, 0LL, v32, 9u, &v45);
    }
  }
  else if ( stru_140425BC0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425BC0, 0x400000000000uLL) )
    {
      LODWORD(Object) = v24;
      v63 = &Object;
      v64 = 4LL;
      TlgWrite(&stru_140425BC0, &unk_14038B649, 0LL, v27, 3u, &pData);
    }
  }
  return (unsigned int)v24;
}
