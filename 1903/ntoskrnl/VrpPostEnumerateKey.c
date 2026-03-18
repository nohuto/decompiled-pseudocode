/*
 * XREFs of VrpPostEnumerateKey @ 0x140844004
 * Callers:
 *     VrpRegistryCallback @ 0x1408418A0 (VrpRegistryCallback.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExGetPreviousMode @ 0x1400BA3B0 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x14010AB90 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401C0390 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1401C0710 (ZwEnumerateKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     VrpCleanupBufferParameter @ 0x140841C84 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x140841DB4 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x140841DE4 (VrpProcessBufferParameter.c)
 *     VrpFindExactNamespaceNode @ 0x140843D98 (VrpFindExactNamespaceNode.c)
 *     VrpUpdateKeyInformation @ 0x1408468CC (VrpUpdateKeyInformation.c)
 *     VrpBuildKeyPath @ 0x140847854 (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  const UNICODE_STRING *v3; // r14
  __int64 v4; // rsi
  KPROCESSOR_MODE PreviousMode; // r13
  int v6; // edi
  const UNICODE_STRING *v7; // rax
  int Length; // ecx
  wchar_t *Buffer; // rax
  const UNICODE_STRING *v10; // r13
  _WORD *v11; // r14
  int v12; // eax
  PVOID v13; // r13
  _WORD *PoolWithTag; // rax
  __int64 v15; // r14
  int v16; // eax
  char v17; // r15
  const UNICODE_STRING *v18; // rcx
  UNICODE_STRING *p_Destination; // rdx
  int v21; // eax
  wchar_t *v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 ExactNamespaceNode; // rax
  unsigned int v25; // eax
  PVOID v26; // rax
  const void *v27; // r14
  int v28; // r13d
  NTSTATUS Key; // eax
  int v30; // ecx
  int updated; // eax
  int v32; // eax
  char v33; // [rsp+40h] [rbp-1F8h]
  const UNICODE_STRING *v35; // [rsp+50h] [rbp-1E8h]
  ULONG ResultLength; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v37; // [rsp+60h] [rbp-1D8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-1D0h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-1C8h] BYREF
  int v40; // [rsp+80h] [rbp-1B8h] BYREF
  int v41; // [rsp+88h] [rbp-1B0h] BYREF
  int v42; // [rsp+8Ch] [rbp-1ACh] BYREF
  HANDLE v43; // [rsp+90h] [rbp-1A8h] BYREF
  PVOID P; // [rsp+98h] [rbp-1A0h]
  PVOID v45; // [rsp+A0h] [rbp-198h]
  _WORD *v46; // [rsp+A8h] [rbp-190h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-178h]
  const UNICODE_STRING *v49; // [rsp+C8h] [rbp-170h]
  __int64 v50; // [rsp+D0h] [rbp-168h]
  __int64 v51; // [rsp+D8h] [rbp-160h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-158h] BYREF
  signed __int64 v53; // [rsp+110h] [rbp-128h]
  GUID ActivityId; // [rsp+120h] [rbp-118h] BYREF
  EVENT_DATA_DESCRIPTOR v55; // [rsp+130h] [rbp-108h] BYREF
  int *v56; // [rsp+150h] [rbp-E8h]
  __int64 v57; // [rsp+158h] [rbp-E0h]
  _DWORD *v58; // [rsp+160h] [rbp-D8h]
  __int64 v59; // [rsp+168h] [rbp-D0h]
  wchar_t *v60; // [rsp+170h] [rbp-C8h]
  _DWORD v61[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v62; // [rsp+180h] [rbp-B8h]
  __int64 v63; // [rsp+188h] [rbp-B0h]
  wchar_t *v64; // [rsp+190h] [rbp-A8h]
  _DWORD v65[2]; // [rsp+198h] [rbp-A0h] BYREF
  int *v66; // [rsp+1A0h] [rbp-98h]
  __int64 v67; // [rsp+1A8h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp-88h] BYREF
  int *v69; // [rsp+1D0h] [rbp-68h]
  __int64 v70; // [rsp+1D8h] [rbp-60h]
  _DWORD *v71; // [rsp+1E0h] [rbp-58h]
  __int64 v72; // [rsp+1E8h] [rbp-50h]
  wchar_t *v73; // [rsp+1F0h] [rbp-48h]
  _DWORD v74[2]; // [rsp+1F8h] [rbp-40h] BYREF

  v48 = a1;
  v51 = a2;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v45 = 0LL;
  v3 = *(const UNICODE_STRING **)(a1 + 40);
  v35 = v3;
  v49 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v50 = v4;
  v46 = 0LL;
  P = 0LL;
  PreviousMode = ExGetPreviousMode();
  v33 = PreviousMode;
  ResultLength = 0;
  v37 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  v43 = 0LL;
  if ( stru_140425BF8.LevelPlus1 > 5 )
  {
    v40 = *(_DWORD *)(v4 + 12);
    v7 = v3 + 1;
    if ( !v3[1].Buffer )
      v7 = (const UNICODE_STRING *)&EmptyUnicodeString;
    v69 = &v40;
    v70 = 4LL;
    Length = v7->Length;
    Buffer = v7->Buffer;
    v71 = v74;
    v72 = 2LL;
    v73 = Buffer;
    v74[0] = Length;
    v74[1] = 0;
    TlgWrite(&stru_140425BF8, &unk_14038C675, &ActivityId, 0LL, 5u, &pData);
  }
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
  {
    v10 = v3;
LABEL_23:
    v15 = a2;
LABEL_24:
    v16 = 0;
LABEL_25:
    v17 = v33;
    goto LABEL_26;
  }
  v6 = VrpProcessBufferParameter(PreviousMode, *(_QWORD *)(v4 + 16), *(_DWORD *)(v4 + 24), &v46);
  if ( v6 < 0 )
    goto LABEL_22;
  v11 = v46;
  v6 = VrpOutputBufferParameter(PreviousMode, v46, *(_DWORD *)(v4 + 24), (const void **)(v4 + 16));
  if ( v6 < 0 )
    goto LABEL_22;
  v6 = VrpProcessBufferParameter(PreviousMode, *(_QWORD *)(v4 + 32), 4u, &v37);
  if ( v6 < 0 )
    goto LABEL_22;
  v6 = VrpOutputBufferParameter(PreviousMode, v37, 4u, (const void **)(v4 + 32));
  if ( v6 < 0 )
    goto LABEL_22;
  v12 = *(_DWORD *)(v48 + 8);
  if ( v12 == -1073741789 || v12 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
  {
    v6 = ObOpenObjectByPointer(
           *(PVOID *)v4,
           0x240u,
           0LL,
           0xF003Fu,
           (POBJECT_TYPE)CmKeyObjectType,
           PreviousMode,
           &KeyHandle);
    if ( v6 < 0 )
      goto LABEL_22;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
      goto LABEL_22;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x67655256u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_22;
    }
    v13 = PoolWithTag;
    v45 = PoolWithTag;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
    if ( v6 < 0 )
      goto LABEL_22;
  }
  else
  {
    v13 = 0LL;
  }
  v21 = *(_DWORD *)(v4 + 12);
  if ( v21 && !v13 )
  {
    if ( v21 == 1 )
    {
      Source.MaximumLength = v11[10];
      Source.Length = Source.MaximumLength;
      v22 = v11 + 12;
      goto LABEL_55;
    }
    v6 = -1073741811;
LABEL_22:
    v10 = v35;
    goto LABEL_23;
  }
  Source.MaximumLength = v11[6];
  Source.Length = Source.MaximumLength;
  v22 = v11 + 8;
LABEL_55:
  Source.Buffer = v22;
  v10 = v35;
  v6 = VrpBuildKeyPath(v35 + 1, &Source, &Destination);
  v15 = a2;
  if ( v6 < 0 )
    goto LABEL_24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)&Destination, 0);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v43, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v6 = 0;
    v16 = 1;
    goto LABEL_25;
  }
  v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), 0LL, 17LL);
  if ( v53 != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 16));
  KeAbPostRelease(a2 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v25 = *(_DWORD *)(v4 + 24);
  if ( v25 )
  {
    v26 = ExAllocatePoolWithTag(PagedPool, v25, 0x67655256u);
    P = v26;
    if ( !v26 )
    {
      v6 = -1073741670;
      goto LABEL_24;
    }
  }
  else
  {
    v26 = 0LL;
  }
  v27 = v26;
  v28 = (int)v37;
  Key = ZwQueryKey(v43, *(KEY_INFORMATION_CLASS *)(v4 + 12), v26, *(_DWORD *)(v4 + 24), v37);
  v6 = Key;
  if ( Key == -1073741789 )
  {
    v27 = 0LL;
    goto LABEL_70;
  }
  if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v6 = 0;
    goto LABEL_22;
  }
LABEL_70:
  v30 = *(_DWORD *)(v4 + 12);
  if ( v30 != 2 )
  {
    updated = VrpUpdateKeyInformation(v30, (_DWORD)v27, *(_DWORD *)(v4 + 24), v28, (__int64)&Destination, 0);
    v6 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_22;
  }
  if ( v6 != -2147483643 && v6 != -1073741789 )
    memmove(*(void **)(v4 + 16), v27, *(unsigned int *)(v4 + 24));
  v17 = v33;
  v32 = VrpOutputBufferParameter(v33, *(void **)(v4 + 32), 4u, (const void **)&v37);
  v10 = v35;
  v15 = a2;
  if ( v32 >= 0 )
  {
    *(_DWORD *)(v48 + 24) = v6;
    v6 = -1073740541;
  }
  else
  {
    v6 = v32;
  }
  v16 = 0;
LABEL_26:
  if ( v16 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v15 + 16));
    KeAbPostRelease(v15 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v6 < 0 && stru_140425BF8.LevelPlus1 > 2 )
  {
    v41 = *(_DWORD *)(v4 + 12);
    v18 = v10 + 1;
    if ( !v10[1].Buffer )
      v18 = (const UNICODE_STRING *)&EmptyUnicodeString;
    p_Destination = &Destination;
    if ( !Destination.Buffer )
      p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
    v42 = v6;
    v56 = &v41;
    v57 = 4LL;
    v58 = v61;
    v59 = 2LL;
    v60 = v18->Buffer;
    v61[0] = v18->Length;
    v61[1] = 0;
    v62 = v65;
    v63 = 2LL;
    v64 = p_Destination->Buffer;
    v65[0] = p_Destination->Length;
    v65[1] = 0;
    v66 = &v42;
    v67 = 4LL;
    TlgWrite(&stru_140425BF8, &unk_14038C5F5, &ActivityId, 0LL, 8u, &v55);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v43 )
    ZwClose(v43);
  if ( P )
    ExFreePoolWithTag(P, 0x67655256u);
  if ( v45 )
    ExFreePoolWithTag(v45, 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  VrpCleanupBufferParameter(v17, (PVOID *)&v46);
  VrpCleanupBufferParameter(v17, (PVOID *)&v37);
  return (unsigned int)v6;
}
