/*
 * XREFs of VrpTranslatePath @ 0x14080DD70
 * Callers:
 *     VrpPreOpenOrCreate @ 0x14080D4E0 (VrpPreOpenOrCreate.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     VrpFindNamespaceNode @ 0x14080B714 (VrpFindNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
 *     VrpGetNextToken @ 0x14080F41C (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14080F500 (VrpStripTrailingCharacters.c)
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
  PVOID v10; // rbx
  int v11; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 NamespaceNode; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  wchar_t *Buffer; // r14
  unsigned __int16 v17; // r15
  NTSTATUS v18; // edi
  UNICODE_STRING v19; // xmm6
  int v20; // ecx
  int v21; // r12d
  int v22; // ecx
  int v23; // eax
  void *v24; // rdi
  int v25; // r14d
  int v26; // edx
  PVOID v27; // rax
  __int64 v28; // rsi
  wchar_t *v29; // r15
  unsigned __int16 Length; // di
  unsigned __int64 i; // rcx
  __int64 v32; // r14
  __int16 v33; // di
  unsigned __int64 v35; // [rsp+38h] [rbp-B1h] BYREF
  int v36; // [rsp+40h] [rbp-A9h]
  UNICODE_STRING v37; // [rsp+48h] [rbp-A1h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-89h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-79h] BYREF
  PVOID v41; // [rsp+78h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-49h] BYREF
  int v46; // [rsp+148h] [rbp+5Fh]

  v8 = *(unsigned __int16 *)(a3 + 32);
  v9 = Object;
  v37 = *a4;
  v10 = Object;
  KeyHandle = 0LL;
  v11 = 0;
  v46 = v8;
  LOBYTE(v36) = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v10 + 16, 0LL);
    NamespaceNode = VrpFindNamespaceNode((ULONGLONG *)v10, (__int64)&v37, 1, 0LL, &v40);
    if ( !NamespaceNode )
    {
      v18 = -1073741772;
      goto LABEL_42;
    }
    v14 = v40;
    v15 = 0LL;
    v35 = 0LL;
    if ( v40 )
    {
      do
      {
        VrpGetNextToken(&v37, &v35, &Source);
        --v14;
      }
      while ( v14 );
      v15 = v35;
    }
    Buffer = v37.Buffer;
    v17 = v37.Length - 2 * v15;
    Source.Buffer = &v37.Buffer[v15];
    Source.Length = v17;
    Source.MaximumLength = v17;
    v18 = VrpBuildKeyPath((PCUNICODE_STRING)(NamespaceNode + 24), &Source, &DestinationString);
    if ( v18 < 0 )
      break;
    VrpStripTrailingCharacters(&DestinationString);
    if ( Buffer != a4->Buffer )
      ExFreePoolWithTag(Buffer, 0);
    v19 = DestinationString;
    v37 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v20 = *(_DWORD *)(NamespaceNode + 56);
    v21 = v20 & 4 | v11;
    if ( v10 == Object )
      v21 |= v20 & 2;
    v22 = *(unsigned __int16 *)(NamespaceNode + 60);
    v23 = v21 | 0x20000000;
    v24 = *(void **)(NamespaceNode + 16);
    if ( v17 )
      v23 = v21;
    v25 = (unsigned __int8)v36;
    v11 = v23;
    if ( v46 < v22 )
      v25 = 1;
    v26 = *(unsigned __int16 *)(NamespaceNode + 62) - v22 + v46;
    v36 = v25;
    v46 = v26;
    if ( !v24 )
    {
      if ( a6 )
      {
        if ( (_BYTE)v25 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(NamespaceNode + 24);
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v18 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
          if ( v18 < 0 )
            break;
          v18 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v41, 0LL);
          v27 = v41;
          if ( v18 < 0 )
            break;
        }
        else
        {
          ObfReferenceObject(a2);
          v27 = a2;
        }
        v26 = v46;
        *a6 = v27;
      }
      v28 = a7;
      if ( a7 )
      {
        v29 = v37.Buffer;
        Length = v37.Length;
        if ( (_BYTE)v25 )
        {
          for ( i = (unsigned __int64)*(unsigned __int16 *)(NamespaceNode + 24) >> 1; ; ++i )
          {
            v35 = i;
            if ( 2 * i >= v37.Length || v37.Buffer[i] != 92 )
              break;
          }
        }
        else
        {
          v35 = 0LL;
          i = 0LL;
          v32 = 0LL;
          if ( v26 > 0 )
          {
            do
            {
              VrpGetNextToken(&v37, &v35, &Source);
              ++v32;
            }
            while ( (int)v32 < v46 );
            i = v35;
            v28 = a7;
          }
        }
        v33 = Length - 2 * i;
        *(_QWORD *)(v28 + 8) = &v29[i];
        *(_WORD *)v28 = v33;
        *(_WORD *)(v28 + 2) = v33;
      }
      if ( a8 )
        *a8 = v11;
      *a5 = v19;
      RtlInitUnicodeString(&v37, 0LL);
      v18 = 0;
      break;
    }
    ObfReferenceObjectWithTag(v24, 0x67655256u);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v10 + 2);
    KeAbPostRelease((ULONG_PTR)v10 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v9 = Object;
    if ( v10 != Object )
      ObfDereferenceObjectWithTag(v10, 0x67655256u);
    v10 = v24;
  }
  v9 = Object;
LABEL_42:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10 + 2);
  KeAbPostRelease((ULONG_PTR)v10 + 16);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v10 && v10 != v9 )
    ObfDereferenceObjectWithTag(v10, 0x67655256u);
  if ( v37.Buffer && v37.Buffer != a4->Buffer )
    ExFreePoolWithTag(v37.Buffer, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v18;
}
