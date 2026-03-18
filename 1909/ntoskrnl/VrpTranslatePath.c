/*
 * XREFs of VrpTranslatePath @ 0x140845B18
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1408452F8 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     VrpFindNamespaceNode @ 0x14084342C (VrpFindNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x140846F5C (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14084717C (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x140847260 (VrpStripTrailingCharacters.c)
 */

__int64 __fastcall VrpTranslatePath(
        PVOID Object,
        void *a2,
        __int64 a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *a5,
        _QWORD *a6,
        __int64 a7,
        int *a8)
{
  int v8; // r13d
  PVOID v9; // r14
  UNICODE_STRING v11; // xmm0
  PVOID v12; // rdi
  int v13; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 NamespaceNode; // r13
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  wchar_t *Buffer; // r14
  unsigned __int16 v19; // r15
  NTSTATUS v20; // ebx
  UNICODE_STRING v21; // xmm6
  int v22; // ecx
  int v23; // r12d
  int v24; // ecx
  int v25; // eax
  void *v26; // rbx
  int v27; // r14d
  int v28; // edx
  PVOID v29; // rax
  __int64 v30; // rsi
  wchar_t *v31; // r15
  unsigned __int16 Length; // bx
  unsigned __int64 i; // rcx
  __int64 v34; // r14
  __int16 v35; // bx
  unsigned __int64 v37; // [rsp+38h] [rbp-B1h] BYREF
  int v38; // [rsp+40h] [rbp-A9h]
  UNICODE_STRING v39; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-71h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-61h] BYREF
  PVOID v44; // [rsp+90h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-51h] BYREF
  int v48; // [rsp+148h] [rbp+5Fh]

  v8 = *(unsigned __int16 *)(a3 + 32);
  v9 = Object;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v11 = *a4;
  v48 = v8;
  v12 = v9;
  KeyHandle = 0LL;
  v39 = v11;
  v13 = 0;
  LOBYTE(v38) = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v12 + 16, 0LL);
    NamespaceNode = VrpFindNamespaceNode((ULONGLONG *)v12, (__int64)&v39, 1, 0LL, &v43);
    if ( !NamespaceNode )
    {
      v20 = -1073741772;
      goto LABEL_42;
    }
    v16 = v43;
    v17 = 0LL;
    v37 = 0LL;
    if ( v43 )
    {
      do
      {
        VrpGetNextToken(&v39, &v37, &Source);
        --v16;
      }
      while ( v16 );
      v17 = v37;
    }
    Buffer = v39.Buffer;
    v19 = v39.Length - 2 * v17;
    Source.Buffer = &v39.Buffer[v17];
    Source.Length = v19;
    Source.MaximumLength = v19;
    v20 = VrpBuildKeyPath((PCUNICODE_STRING)(NamespaceNode + 24), &Source, &DestinationString);
    if ( v20 < 0 )
      break;
    VrpStripTrailingCharacters(&DestinationString);
    if ( Buffer != a4->Buffer )
      ExFreePoolWithTag(Buffer, 0);
    v21 = DestinationString;
    v39 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v22 = *(_DWORD *)(NamespaceNode + 56);
    v23 = v22 & 4 | v13;
    if ( v12 == Object )
      v23 |= v22 & 2;
    v24 = *(unsigned __int16 *)(NamespaceNode + 60);
    v25 = v23 | 0x20000000;
    v26 = *(void **)(NamespaceNode + 16);
    if ( v19 )
      v25 = v23;
    v27 = (unsigned __int8)v38;
    v13 = v25;
    if ( v48 < v24 )
      v27 = 1;
    v28 = *(unsigned __int16 *)(NamespaceNode + 62) - v24 + v48;
    v38 = v27;
    v48 = v28;
    if ( !v26 )
    {
      if ( a6 )
      {
        if ( (_BYTE)v27 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(NamespaceNode + 24);
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v20 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
          if ( v20 < 0 )
            break;
          v20 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v44, 0LL);
          v29 = v44;
          if ( v20 < 0 )
            break;
        }
        else
        {
          ObfReferenceObject(a2);
          v29 = a2;
        }
        v28 = v48;
        *a6 = v29;
      }
      v30 = a7;
      if ( a7 )
      {
        v31 = v39.Buffer;
        Length = v39.Length;
        if ( (_BYTE)v27 )
        {
          for ( i = (unsigned __int64)*(unsigned __int16 *)(NamespaceNode + 24) >> 1; ; ++i )
          {
            v37 = i;
            if ( 2 * i >= v39.Length || v39.Buffer[i] != 92 )
              break;
          }
        }
        else
        {
          v37 = 0LL;
          i = 0LL;
          v34 = 0LL;
          if ( v28 > 0 )
          {
            do
            {
              VrpGetNextToken(&v39, &v37, &Source);
              ++v34;
            }
            while ( (int)v34 < v48 );
            i = v37;
            v30 = a7;
          }
        }
        v35 = Length - 2 * i;
        *(_QWORD *)(v30 + 8) = &v31[i];
        *(_WORD *)v30 = v35;
        *(_WORD *)(v30 + 2) = v35;
      }
      if ( a8 )
        *a8 = v13;
      *a5 = v21;
      RtlInitUnicodeString(&v39, 0LL);
      v20 = 0;
      break;
    }
    ObfReferenceObjectWithTag(v26, 0x67655256u);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v12 + 2);
    KeAbPostRelease((ULONG_PTR)v12 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v9 = Object;
    if ( v12 != Object )
      ObfDereferenceObjectWithTag(v12, 0x67655256u);
    v12 = v26;
  }
  v9 = Object;
LABEL_42:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v12 + 2);
  KeAbPostRelease((ULONG_PTR)v12 + 16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 && v12 != v9 )
    ObfDereferenceObjectWithTag(v12, 0x67655256u);
  if ( v39.Buffer && v39.Buffer != a4->Buffer )
    ExFreePoolWithTag(v39.Buffer, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v20;
}
