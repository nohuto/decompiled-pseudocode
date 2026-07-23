/*
 * XREFs of NtQueryObject @ 0x140661C70
 * Callers:
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140681304 (IopQueryRegistryKeySystemPath.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14001622C (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ObQueryTypeInfo @ 0x14065FB6C (ObQueryTypeInfo.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  unsigned int v8; // ecx
  KPROCESSOR_MODE PreviousMode; // r12
  ULONG v10; // r8d
  PULONG v11; // r15
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // r14d
  __int64 *v15; // rsi
  void *v16; // r10
  ULONG HandleAttributes; // ebx
  NTSTATUS NameStringMode; // eax
  __int32 v19; // edi
  __int32 v20; // edi
  char *v21; // rdi
  char v22; // al
  ACCESS_MASK v23; // r14d
  _QWORD *v24; // rax
  __int64 v25; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v27; // rsi
  ACCESS_MASK v28; // eax
  _BYTE *v29; // rax
  void *v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rcx
  NTSTATUS TypeInfo; // eax
  signed __int64 *v34; // rcx
  char *v35; // rcx
  struct _KTHREAD *v36; // rax
  char *v37; // rcx
  void *v38; // rdx
  ULONG_PTR v39; // rcx
  NTSTATUS v40; // [rsp+50h] [rbp-F8h]
  ULONG v41[2]; // [rsp+54h] [rbp-F4h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp-ECh]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-E8h]
  unsigned int i; // [rsp+68h] [rbp-E0h]
  int v45; // [rsp+6Ch] [rbp-DCh]
  __int64 *v46; // [rsp+70h] [rbp-D8h]
  PVOID v47; // [rsp+78h] [rbp-D0h]
  PVOID v48; // [rsp+80h] [rbp-C8h]
  char *v49; // [rsp+88h] [rbp-C0h]
  __int64 v50; // [rsp+90h] [rbp-B8h]
  int v51; // [rsp+98h] [rbp-B0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-A8h] BYREF
  _BYTE v53[56]; // [rsp+A8h] [rbp-A0h] BYREF
  PVOID Object[8]; // [rsp+E0h] [rbp-68h] BYREF

  v8 = 0;
  BugCheckParameter2 = 0LL;
  v41[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 4;
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
      v10 = 1;
    ProbeForWrite(ObjectInformation, ObjectInformationLength, v10);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
    v8 = 0;
  }
  else
  {
    v11 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    GrantedAccess = 0;
    v15 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v16 = 0LL;
    v48 = 0LL;
    v50 = 0LL;
    v14 = 0;
    v40 = 0;
    HandleAttributes = 0;
    HandleInformation = 0LL;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v14 = result;
    v15 = (__int64 *)Object[0];
    v46 = (__int64 *)Object[0];
    v40 = result;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v47 = (char *)Object[0] - 48;
    v16 = (void *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    v48 = v16;
    v50 = (__int64)v16;
    HandleAttributes = HandleInformation.HandleAttributes;
    v8 = 0;
  }
  if ( ObjectInformationClass == ObjectNameInformation )
  {
    NameStringMode = ObQueryNameStringMode(
                       (_DWORD)v15,
                       (_DWORD)ObjectInformation,
                       ObjectInformationLength,
                       (unsigned int)v41,
                       PreviousMode);
LABEL_14:
    v14 = NameStringMode;
    goto LABEL_15;
  }
  if ( ObjectInformationClass )
  {
    v19 = ObjectInformationClass - 2;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
        {
          ObfDereferenceObject(v15);
          return -1073741821;
        }
        v41[0] = 2;
        if ( ObjectInformationLength < 2 )
        {
          v14 = -1073741820;
        }
        else
        {
          *(_BYTE *)ObjectInformation = 0;
          if ( (HandleAttributes & 2) != 0 )
            *(_BYTE *)ObjectInformation = 1;
          *((_BYTE *)ObjectInformation + 1) = 0;
          if ( (HandleAttributes & 1) != 0 )
            *((_BYTE *)ObjectInformation + 1) = 1;
        }
      }
      else
      {
        v41[0] = 8;
        Object[5] = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          v31 = 0;
          for ( i = 0; v31 < 0x100; i = v31 )
          {
            v50 = ObpObjectTypes[v31];
            if ( !v50 )
              break;
            ++*(_DWORD *)ObjectInformation;
            ++v31;
          }
          while ( 1 )
          {
            i = v8;
            if ( v8 >= 0x100 )
              break;
            Object[6] = (char *)ObjectInformation + v41[0];
            v32 = ObpObjectTypes[v8];
            v50 = v32;
            if ( !v32 )
              break;
            TypeInfo = ObQueryTypeInfo(v32, (__int64)ObjectInformation + v41[0], ObjectInformationLength, v41);
            v14 = TypeInfo;
            if ( ((TypeInfo + 0x80000000) & 0x80000000) == 0 && TypeInfo != -1073741820 )
              break;
            v8 = BugCheckParameter2 + 1;
            BugCheckParameter2 = (unsigned int)(BugCheckParameter2 + 1);
          }
        }
        else
        {
          v14 = -1073741820;
        }
      }
      goto LABEL_15;
    }
    NameStringMode = ObQueryTypeInfo((__int64)v16, (__int64)ObjectInformation, ObjectInformationLength, v41);
    goto LABEL_14;
  }
  if ( ObjectInformationLength != 56 )
  {
    ObfDereferenceObject(v15);
    return -1073741820;
  }
  memset(v53, 0, sizeof(v53));
  *(_DWORD *)v53 = HandleAttributes;
  v21 = (char *)v47;
  v22 = *((_BYTE *)v47 + 27);
  if ( (v22 & 0x10) != 0 )
  {
    HandleAttributes |= 0x10u;
    *(_DWORD *)v53 = HandleAttributes;
  }
  if ( (v22 & 8) != 0 )
    *(_DWORD *)v53 = HandleAttributes | 0x20;
  v23 = GrantedAccess;
  *(_DWORD *)&v53[4] = GrantedAccess;
  *(_DWORD *)&v53[8] = *((_DWORD *)v47 + 2);
  *(_DWORD *)&v53[12] = *(_DWORD *)v47;
  v24 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v47);
  if ( v24 )
    *(_QWORD *)&v53[16] = *v24;
  else
    *(_QWORD *)&v53[16] = 0LL;
  if ( v48 == ObpSymbolicLinkObjectType )
    v25 = *v15;
  else
    v25 = 0LL;
  *(_QWORD *)&v53[48] = v25;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v27 = (signed __int64 *)(v21 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v21 + 16), 0LL);
  if ( (v21[26] & 2) != 0 )
  {
    v29 = (_BYTE *)ObpInfoMaskToOffset[v21[26] & 3];
    BugCheckParameter2 = v21 - v29;
    if ( v21 != v29 )
    {
      v30 = *(void **)(v21 - v29);
      v47 = v30;
      if ( v30 )
      {
        ObfReferenceObject(v30);
        v34 = (signed __int64 *)(v21 + 16);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21 + 2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared(v34);
          v34 = (signed __int64 *)(v21 + 16);
        }
        KeAbPostRelease((ULONG_PTR)v34);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        GrantedAccess = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
        while ( 1 )
        {
          v48 = v47;
          if ( !v47 )
            break;
          v35 = (char *)v47 - 48;
          v49 = (char *)v47 - 48;
          v36 = KeGetCurrentThread();
          --v36->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v35 + 16);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v35 + 16), 0LL);
          if ( (v49[26] & 2) == 0
            || (v37 = &v49[-ObpInfoMaskToOffset[v49[26] & 3]]) == 0LL
            || (v38 = *(void **)v37) == 0LL )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            KeAbPostRelease(BugCheckParameter2);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v47 )
              ObfDereferenceObject(v47);
            break;
          }
          GrantedAccess += *((unsigned __int16 *)v37 + 4) + 2;
          v47 = v38;
          ObfReferenceObject(v38);
          v39 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v39 = BugCheckParameter2;
          }
          KeAbPostRelease(v39);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v48);
        }
        v28 = GrantedAccess + 18;
        goto LABEL_45;
      }
    }
    v27 = (signed __int64 *)(v21 + 16);
  }
  if ( _InterlockedCompareExchange64(v27, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v27);
  KeAbPostRelease((ULONG_PTR)v27);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v28 = 0;
LABEL_45:
  *(_DWORD *)&v53[36] = v28;
  *(_DWORD *)&v53[40] = *(unsigned __int16 *)(v50 + 16) + 106;
  if ( (v23 & 0x20000) != 0 && *((_QWORD *)v21 + 5) )
  {
    v51 = 15;
    v45 = 0;
    v15 = v46;
    (*(void (__fastcall **)(__int64 *, __int64, int *))(v50 + 152))(v46, 1LL, &v51);
  }
  else
  {
    v45 = 0;
    v15 = v46;
  }
  *(_DWORD *)&v53[44] = 0;
  *(_OWORD *)ObjectInformation = *(_OWORD *)v53;
  *((_OWORD *)ObjectInformation + 1) = *(_OWORD *)&v53[16];
  *((_OWORD *)ObjectInformation + 2) = *(_OWORD *)&v53[32];
  *((_QWORD *)ObjectInformation + 6) = *(_QWORD *)&v53[48];
  v41[0] = 56;
  v14 = v40;
LABEL_15:
  if ( v11 )
    *v11 = v41[0];
  if ( v15 )
    ObfDereferenceObject(v15);
  return v14;
}
