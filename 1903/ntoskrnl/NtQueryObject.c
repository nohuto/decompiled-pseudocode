/*
 * XREFs of NtQueryObject @ 0x14062A260
 * Callers:
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14000A2B8 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeInfo @ 0x1406270B0 (ObQueryTypeInfo.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS v9; // esi
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v11; // r8d
  PULONG v12; // r14
  __int64 v13; // rcx
  NTSTATUS result; // eax
  __int64 *v15; // rdi
  ACCESS_MASK GrantedAccess; // r9d
  char *v17; // r8
  __int64 v18; // r10
  NTSTATUS NameStringMode; // eax
  __int32 v20; // ebx
  __int32 v21; // ebx
  char v22; // al
  ULONG HandleAttributes; // eax
  char v24; // cl
  _QWORD *v25; // rax
  __int64 v26; // r8
  struct _OBJECT_TYPE *v27; // r10
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v30; // r13
  ULONG_PTR v31; // rdi
  int v32; // r13d
  __int64 v33; // rax
  void *v34; // rcx
  unsigned int v35; // ebx
  unsigned int v36; // ecx
  __int64 v37; // rcx
  NTSTATUS TypeInfo; // eax
  int v39; // r13d
  char *v40; // rcx
  struct _KTHREAD *v41; // rax
  char *v42; // rcx
  void *v43; // rdx
  void *v44; // rcx
  ULONG_PTR v45; // rcx
  NTSTATUS v46; // [rsp+50h] [rbp-128h]
  unsigned int v47[3]; // [rsp+54h] [rbp-124h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-118h]
  unsigned int i; // [rsp+68h] [rbp-110h]
  int v50; // [rsp+6Ch] [rbp-10Ch]
  __int64 *v51; // [rsp+70h] [rbp-108h]
  ACCESS_MASK v52; // [rsp+78h] [rbp-100h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-F8h] BYREF
  PVOID v54; // [rsp+88h] [rbp-F0h]
  __int64 v55; // [rsp+90h] [rbp-E8h]
  _QWORD v56[8]; // [rsp+98h] [rbp-E0h] BYREF
  PVOID v57; // [rsp+D8h] [rbp-A0h]
  char *v58; // [rsp+F0h] [rbp-88h]
  PVOID Object[4]; // [rsp+108h] [rbp-70h] BYREF
  signed __int64 v60; // [rsp+128h] [rbp-50h]
  __int64 v61; // [rsp+130h] [rbp-48h]
  signed __int64 v62; // [rsp+138h] [rbp-40h]
  __int64 v63; // [rsp+140h] [rbp-38h]
  signed __int64 v64; // [rsp+148h] [rbp-30h]
  __int64 v65; // [rsp+150h] [rbp-28h]
  signed __int64 v66; // [rsp+158h] [rbp-20h]

  v9 = 0;
  HandleInformation = 0LL;
  memset(&v56[1], 0, 0x38uLL);
  v47[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
      v11 = 1;
    else
      v11 = 4;
    ProbeForWrite(ObjectInformation, ObjectInformationLength, v11);
    v12 = ReturnLength;
    if ( ReturnLength )
    {
      v13 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  else
  {
    v12 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    GrantedAccess = 0;
    v52 = 0;
    v15 = 0LL;
    v51 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v55 = 0LL;
    v46 = 0;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v9 = result;
    v15 = (__int64 *)Object[0];
    v51 = (__int64 *)Object[0];
    v46 = result;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v52 = HandleInformation.GrantedAccess;
    v17 = (char *)Object[0] - 48;
    v18 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    v55 = v18;
  }
  BugCheckParameter2 = (ULONG_PTR)v17;
  if ( ObjectInformationClass == ObjectNameInformation )
  {
    NameStringMode = ObQueryNameStringMode(
                       (_DWORD)v15,
                       (_DWORD)ObjectInformation,
                       ObjectInformationLength,
                       (unsigned int)v47,
                       PreviousMode);
  }
  else
  {
    if ( ObjectInformationClass == ObjectBasicInformation )
    {
      if ( ObjectInformationLength != 56 )
      {
        ObfDereferenceObject(v15);
        return -1073741820;
      }
      memset(&v56[4], 0, 24);
      HandleAttributes = HandleInformation.HandleAttributes;
      LODWORD(v56[1]) = HandleInformation.HandleAttributes;
      v24 = v17[27];
      if ( (v24 & 0x10) != 0 )
      {
        HandleAttributes = HandleInformation.HandleAttributes | 0x10;
        LODWORD(v56[1]) = HandleInformation.HandleAttributes | 0x10;
      }
      if ( (v24 & 8) != 0 )
        LODWORD(v56[1]) = HandleAttributes | 0x20;
      HIDWORD(v56[1]) = GrantedAccess;
      LODWORD(v56[2]) = *((_DWORD *)v17 + 2);
      HIDWORD(v56[2]) = *(_DWORD *)v17;
      v25 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v17);
      if ( v25 )
        v56[3] = *v25;
      else
        v56[3] = 0LL;
      if ( v27 == ObpSymbolicLinkObjectType )
        v28 = *v15;
      else
        v28 = 0LL;
      v56[7] = v28;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v30 = (volatile signed __int64 *)(v26 + 16);
      ExAcquirePushLockSharedEx(v26 + 16, 0LL);
      v31 = BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 2) != 0
        && (v33 = ObpInfoMaskToOffset[*(_BYTE *)(BugCheckParameter2 + 26) & 3], BugCheckParameter2 -= v33, v31 != v33)
        && (v34 = *(void **)(v31 - v33), (v54 = v34) != 0LL) )
      {
        ObfReferenceObject(v34);
        Object[3] = (PVOID)17;
        v60 = _InterlockedCompareExchange64(v30, 0LL, 17LL);
        if ( v60 != 17 )
          ExfReleasePushLockShared((signed __int64 *)v30);
        KeAbPostRelease((ULONG_PTR)v30);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v39 = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
        while ( 1 )
        {
          v57 = v54;
          if ( !v54 )
            break;
          v40 = (char *)v54 - 48;
          v58 = (char *)v54 - 48;
          v41 = KeGetCurrentThread();
          --v41->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v40 + 16);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v40 + 16), 0LL);
          if ( (v58[26] & 2) == 0
            || (v42 = &v58[-ObpInfoMaskToOffset[v58[26] & 3]]) == 0LL
            || (v43 = *(void **)v42) == 0LL )
          {
            v63 = 17LL;
            v64 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
            if ( v64 != 17 )
              ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            KeAbPostRelease(BugCheckParameter2);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( v54 )
              ObfDereferenceObject(v54);
            break;
          }
          v39 += *((unsigned __int16 *)v42 + 4) + 2;
          v44 = *(void **)v42;
          v54 = v43;
          ObfReferenceObject(v44);
          v61 = 17LL;
          v45 = BugCheckParameter2;
          v62 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
          if ( v62 != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v45 = BugCheckParameter2;
          }
          KeAbPostRelease(v45);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v57);
        }
        v32 = v39 + 18;
      }
      else
      {
        v65 = 17LL;
        v66 = _InterlockedCompareExchange64(v30, 0LL, 17LL);
        if ( v66 != 17 )
          ExfReleasePushLockShared((signed __int64 *)v30);
        KeAbPostRelease((ULONG_PTR)v30);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v32 = 0;
      }
      HIDWORD(v56[5]) = v32;
      LODWORD(v56[6]) = *(unsigned __int16 *)(v55 + 16) + 106;
      if ( (v52 & 0x20000) != 0 && *(_QWORD *)(v31 + 40) )
      {
        LODWORD(v56[0]) = 15;
        v50 = 0;
        v15 = v51;
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD *))(v55 + 152))(v51, 1LL, v56);
      }
      else
      {
        v50 = 0;
        v15 = v51;
      }
      HIDWORD(v56[6]) = 0;
      *(_OWORD *)ObjectInformation = *(_OWORD *)&v56[1];
      *((_OWORD *)ObjectInformation + 1) = *(_OWORD *)&v56[3];
      *((_OWORD *)ObjectInformation + 2) = *(_OWORD *)&v56[5];
      *((_QWORD *)ObjectInformation + 6) = v56[7];
      v47[0] = 56;
      v9 = v46;
      goto LABEL_15;
    }
    v20 = ObjectInformationClass - 2;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
        {
          ObfDereferenceObject(v15);
          return -1073741821;
        }
        v47[0] = 2;
        if ( ObjectInformationLength < 2 )
        {
          v9 = -1073741820;
        }
        else
        {
          *(_BYTE *)ObjectInformation = 0;
          v22 = HandleInformation.HandleAttributes;
          if ( (HandleInformation.HandleAttributes & 2) != 0 )
            *(_BYTE *)ObjectInformation = 1;
          *((_BYTE *)ObjectInformation + 1) = 0;
          if ( (v22 & 1) != 0 )
            *((_BYTE *)ObjectInformation + 1) = 1;
        }
      }
      else
      {
        v47[0] = 8;
        Object[1] = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          v35 = 0;
          *(_DWORD *)ObjectInformation = 0;
          v36 = 0;
          for ( i = 0; v36 < 0x100; i = v36 )
          {
            v55 = ObpObjectTypes[v36];
            if ( !v55 )
              break;
            ++*(_DWORD *)ObjectInformation;
            ++v36;
          }
          while ( 1 )
          {
            i = v35;
            if ( v35 >= 0x100 )
              break;
            Object[2] = (char *)ObjectInformation + v47[0];
            v37 = ObpObjectTypes[v35];
            v55 = v37;
            if ( !v37 )
              break;
            TypeInfo = ObQueryTypeInfo(v37, (__int64)ObjectInformation + v47[0], ObjectInformationLength, v47);
            v9 = TypeInfo;
            if ( ((TypeInfo + 0x80000000) & 0x80000000) == 0 && TypeInfo != -1073741820 )
              break;
            ++v35;
          }
        }
        else
        {
          v9 = -1073741820;
        }
      }
      goto LABEL_15;
    }
    NameStringMode = ObQueryTypeInfo(v18, (__int64)ObjectInformation, ObjectInformationLength, v47);
  }
  v9 = NameStringMode;
LABEL_15:
  if ( v12 )
    *v12 = v47[0];
  if ( v15 )
    ObfDereferenceObject(v15);
  return v9;
}
