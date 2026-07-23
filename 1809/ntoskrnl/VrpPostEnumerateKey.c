/*
 * XREFs of VrpPostEnumerateKey @ 0x14080B800
 * Callers:
 *     VrpRegistryCallback @ 0x1408091F0 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     EtwActivityIdControl @ 0x1400A3A90 (EtwActivityIdControl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExGetPreviousMode @ 0x1400DDCF0 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 *     VrpCleanupBufferParameter @ 0x1408095C4 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1408096C8 (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1408096F8 (VrpProcessBufferParameter.c)
 *     VrpFindExactNamespaceNode @ 0x14080B6F4 (VrpFindExactNamespaceNode.c)
 *     VrpUpdateKeyInformation @ 0x14080E174 (VrpUpdateKeyInformation.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
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
  const UNICODE_STRING *v10; // r15
  unsigned __int16 *v11; // r14
  int v12; // eax
  bool v13; // cc
  int v14; // eax
  unsigned __int16 *PoolWithTag; // rax
  __int64 v16; // r14
  int v17; // eax
  const UNICODE_STRING *v18; // rcx
  UNICODE_STRING *p_Destination; // rdx
  int v21; // eax
  wchar_t *v22; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 ExactNamespaceNode; // rax
  ULONG v25; // r9d
  PVOID v26; // rax
  void *v27; // rdi
  const void *v28; // r14
  NTSTATUS Key; // eax
  __int64 v30; // rcx
  int updated; // eax
  int v32; // eax
  const UNICODE_STRING *v33; // [rsp+48h] [rbp-1F0h]
  ULONG ResultLength; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v36; // [rsp+60h] [rbp-1D8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-1D0h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-1C8h] BYREF
  int v39; // [rsp+80h] [rbp-1B8h] BYREF
  int v40; // [rsp+84h] [rbp-1B4h] BYREF
  int v41; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v42; // [rsp+90h] [rbp-1A8h]
  HANDLE v43; // [rsp+98h] [rbp-1A0h] BYREF
  PVOID P; // [rsp+A0h] [rbp-198h]
  PVOID v45; // [rsp+A8h] [rbp-190h]
  unsigned __int16 *v46; // [rsp+B0h] [rbp-188h] BYREF
  UNICODE_STRING Destination; // [rsp+B8h] [rbp-180h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-168h]
  const UNICODE_STRING *v49; // [rsp+D8h] [rbp-160h]
  __int64 v50; // [rsp+E0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+118h] [rbp-120h] BYREF
  EVENT_DATA_DESCRIPTOR v53; // [rsp+130h] [rbp-108h] BYREF
  int *v54; // [rsp+150h] [rbp-E8h]
  __int64 v55; // [rsp+158h] [rbp-E0h]
  _DWORD *v56; // [rsp+160h] [rbp-D8h]
  __int64 v57; // [rsp+168h] [rbp-D0h]
  wchar_t *v58; // [rsp+170h] [rbp-C8h]
  _DWORD v59[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v60; // [rsp+180h] [rbp-B8h]
  __int64 v61; // [rsp+188h] [rbp-B0h]
  wchar_t *v62; // [rsp+190h] [rbp-A8h]
  _DWORD v63[2]; // [rsp+198h] [rbp-A0h] BYREF
  int *v64; // [rsp+1A0h] [rbp-98h]
  __int64 v65; // [rsp+1A8h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp-88h] BYREF
  int *v67; // [rsp+1D0h] [rbp-68h]
  __int64 v68; // [rsp+1D8h] [rbp-60h]
  _DWORD *v69; // [rsp+1E0h] [rbp-58h]
  __int64 v70; // [rsp+1E8h] [rbp-50h]
  wchar_t *v71; // [rsp+1F0h] [rbp-48h]
  _DWORD v72[2]; // [rsp+1F8h] [rbp-40h] BYREF

  v42 = a1;
  v48 = a2;
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
  v33 = v3;
  v49 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v50 = v4;
  v46 = 0LL;
  P = 0LL;
  PreviousMode = ExGetPreviousMode();
  ResultLength = 0;
  v36 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  v43 = 0LL;
  if ( stru_140400AD8.LevelPlus1 > 5 )
  {
    v39 = *(_DWORD *)(v4 + 12);
    v7 = v3 + 1;
    if ( !v3[1].Buffer )
      v7 = (const UNICODE_STRING *)&EmptyUnicodeString;
    v67 = &v39;
    v68 = 4LL;
    Length = v7->Length;
    Buffer = v7->Buffer;
    v69 = v72;
    v70 = 2LL;
    v71 = Buffer;
    v72[0] = Length;
    v72[1] = 0;
    TlgWrite(&stru_140400AD8, &unk_14036DB19, &ActivityId, 0LL, 5u, &pData);
  }
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
  {
    v10 = v3;
LABEL_29:
    v16 = a2;
LABEL_30:
    v17 = 0;
    goto LABEL_31;
  }
  v6 = VrpProcessBufferParameter(PreviousMode, *(_QWORD *)(v4 + 16), *(_DWORD *)(v4 + 24), &v46);
  if ( v6 < 0 )
    goto LABEL_28;
  v11 = v46;
  v6 = VrpOutputBufferParameter(PreviousMode, v46, *(_DWORD *)(v4 + 24), (const void **)(v4 + 16));
  if ( v6 < 0 )
    goto LABEL_28;
  v6 = VrpProcessBufferParameter(PreviousMode, *(_QWORD *)(v4 + 32), 4u, &v36);
  if ( v6 < 0 )
    goto LABEL_28;
  v6 = VrpOutputBufferParameter(PreviousMode, v36, 4u, (const void **)(v4 + 32));
  if ( v6 < 0 )
    goto LABEL_28;
  if ( PreviousMode == 1 && *(int *)(v42 + 8) >= 0 )
  {
    v12 = *(_DWORD *)(v4 + 12);
    if ( !v12 )
    {
      v13 = *((_DWORD *)v11 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
      goto LABEL_19;
    }
    if ( v12 == 1 )
    {
      v13 = *((_DWORD *)v11 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
LABEL_19:
      if ( v13 )
        goto LABEL_20;
LABEL_28:
      v10 = v33;
      goto LABEL_29;
    }
  }
LABEL_20:
  v14 = *(_DWORD *)(v42 + 8);
  if ( v14 == -1073741789 || v14 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
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
      goto LABEL_28;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
      goto LABEL_28;
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x67655256u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_28;
    }
    memset(PoolWithTag, 0, ResultLength);
    v45 = v11;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, v11, ResultLength, &ResultLength);
    if ( v6 < 0 )
      goto LABEL_28;
  }
  v21 = *(_DWORD *)(v4 + 12);
  if ( !v21 || v45 )
  {
    Source.MaximumLength = v11[6];
    Source.Length = Source.MaximumLength;
    v22 = v11 + 8;
  }
  else
  {
    if ( v21 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_28;
    }
    Source.MaximumLength = v11[10];
    Source.Length = Source.MaximumLength;
    v22 = v11 + 12;
  }
  Source.Buffer = v22;
  v6 = VrpBuildKeyPath(v33 + 1, &Source, &Destination);
  v16 = a2;
  if ( v6 < 0 )
  {
LABEL_69:
    v10 = v33;
    goto LABEL_30;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)&Destination, 0);
  if ( ExactNamespaceNode
    && (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v43, 0xF003Fu, &ObjectAttributes) >= 0) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a2 + 16));
    KeAbPostRelease(a2 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v25 = *(_DWORD *)(v4 + 24);
    if ( v25 )
    {
      v26 = ExAllocatePoolWithTag(PagedPool, v25, 0x67655256u);
      v27 = v26;
      P = v26;
      if ( !v26 )
      {
        v6 = -1073741670;
        goto LABEL_69;
      }
      memset(v26, 0, *(unsigned int *)(v4 + 24));
      v25 = *(_DWORD *)(v4 + 24);
    }
    else
    {
      v27 = 0LL;
    }
    v28 = v27;
    Key = ZwQueryKey(v43, *(KEY_INFORMATION_CLASS *)(v4 + 12), v27, v25, v36);
    v6 = Key;
    if ( Key == -1073741789 )
    {
      v28 = 0LL;
    }
    else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
    {
      v6 = 0;
      goto LABEL_28;
    }
    v30 = *(unsigned int *)(v4 + 12);
    if ( (_DWORD)v30 != 2 )
    {
      updated = VrpUpdateKeyInformation(v30, v28, *(unsigned int *)(v4 + 24), v36, &Destination, 0);
      v6 = updated;
      if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
        goto LABEL_28;
    }
    if ( v6 != -2147483643 && v6 != -1073741789 )
      memmove(*(void **)(v4 + 16), v28, *(unsigned int *)(v4 + 24));
    v32 = VrpOutputBufferParameter(PreviousMode, *(void **)(v4 + 32), 4u, (const void **)&v36);
    v10 = v33;
    v16 = a2;
    if ( v32 >= 0 )
    {
      *(_DWORD *)(v42 + 24) = v6;
      v6 = -1073740541;
    }
    else
    {
      v6 = v32;
    }
    v17 = 0;
  }
  else
  {
    v6 = 0;
    v10 = v33;
    v17 = 1;
  }
LABEL_31:
  if ( v17 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v16 + 16));
    KeAbPostRelease(v16 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v6 < 0 && stru_140400AD8.LevelPlus1 > 2 )
  {
    v40 = *(_DWORD *)(v4 + 12);
    v18 = v10 + 1;
    if ( !v10[1].Buffer )
      v18 = (const UNICODE_STRING *)&EmptyUnicodeString;
    p_Destination = &Destination;
    if ( !Destination.Buffer )
      p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
    v41 = v6;
    v54 = &v40;
    v55 = 4LL;
    v56 = v59;
    v57 = 2LL;
    v58 = v18->Buffer;
    v59[0] = v18->Length;
    v59[1] = 0;
    v60 = v63;
    v61 = 2LL;
    v62 = p_Destination->Buffer;
    v63[0] = p_Destination->Length;
    v63[1] = 0;
    v64 = &v41;
    v65 = 4LL;
    TlgWrite(&stru_140400AD8, &unk_14036DCA4, &ActivityId, 0LL, 8u, &v53);
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
  VrpCleanupBufferParameter(PreviousMode, (PVOID *)&v46);
  VrpCleanupBufferParameter(PreviousMode, (PVOID *)&v36);
  return (unsigned int)v6;
}
