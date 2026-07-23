/*
 * XREFs of CmGetSystemDriverList @ 0x1409CD66C
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1409CBCC4 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1401B8DF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401BAA70 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpAcquireShutdownRundown @ 0x1405B1138 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x1405B1174 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpDetachFromRegistryProcess @ 0x1405D2AE8 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CD4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x1409CDBFC (CmpCloseSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x1409CDC50 (CmpFreeDriverList.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x1409CDEA8 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x1409CE05C (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x1409CF508 (CmpFindDrivers.c)
 */

HANDLE *__fastcall CmGetSystemDriverList(__int64 a1)
{
  char v1; // r13
  UNICODE_STRING *v2; // rsi
  HANDLE *v3; // r14
  char v4; // r15
  BOOLEAN v5; // r12
  int v6; // eax
  NTSTATUS i; // eax
  const UNICODE_STRING *j; // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  PVOID *v11; // rax
  PVOID *k; // rdi
  _OWORD *v13; // rax
  _OWORD *v14; // rbx
  PVOID *v15; // rax
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  int v19; // edi
  PVOID **v20; // rdi
  PVOID *v21; // rbx
  PVOID **v22; // rcx
  PVOID *v23; // rbx
  int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  __int64 v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  ULONG v32; // [rsp+88h] [rbp-80h] BYREF
  PVOID v33; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v34; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  ULONG v36; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING *PoolWithTag; // [rsp+B8h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR v40[8]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v41[8]; // [rsp+138h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+178h] [rbp+70h] BYREF
  PVOID v43[2]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v44[48]; // [rsp+198h] [rbp+90h] BYREF

  v37 = a1;
  v1 = 0;
  memset(v44, 0, sizeof(v44));
  memset(v40, 0, sizeof(v40));
  LODWORD(v40[7]) = -1;
  memset(v41, 0, sizeof(v41));
  LODWORD(v41[7]) = -1;
  p_P = &P;
  DirectoryHandle = 0LL;
  P = &P;
  v2 = 0LL;
  v3 = 0LL;
  v34 = &v33;
  v4 = 0;
  v5 = 0;
  v33 = &v33;
  CmpInitializeThreadInfo(v43);
  v29[1] = (__int64)v29;
  v29[0] = (__int64)v29;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString, (__int64)v40) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v6 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString, (__int64)v41), (int)(v6 + 0x80000000) < 0)
      || v6 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        v32 = 0;
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20204D43u);
        v2 = PoolWithTag;
        if ( PoolWithTag )
        {
          for ( i = ZwQueryDirectoryObject(DirectoryHandle, PoolWithTag, 0x400u, 1u, 1u, &v32, &v36);
                i != -2147483622;
                i = ZwQueryDirectoryObject(DirectoryHandle, v2, 0x400u, 1u, 0, &v32, &v36) )
          {
            if ( i < 0 )
              goto LABEL_43;
            for ( j = v2; j->Length; j += 2 )
            {
              if ( !RtlEqualUnicodeString(j, &CmpSystemFileName, 1u) )
              {
                v9 = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x20204D43u);
                v10 = v9;
                if ( !v9 )
                  goto LABEL_43;
                memset(v9, 0, 0x40uLL);
                v10[14] = -1;
                if ( (int)CmpOpenSystemDriverHiveContext(j, (__int64)v10) >= 0 )
                {
                  v11 = p_P;
                  if ( *p_P != &P )
LABEL_30:
                    __fastfail(3u);
                  *((_QWORD *)v10 + 1) = p_P;
                  *(_QWORD *)v10 = &P;
                  *v11 = v10;
                  p_P = (PVOID *)v10;
                }
                else
                {
                  ExFreePoolWithTag(v10, 0);
                }
              }
            }
          }
          v5 = CmpAcquireShutdownRundown();
          if ( v5 )
          {
            CmpAttachToRegistryProcess((__int64)v44);
            v1 = 1;
            CmpLockRegistryExclusive();
            v4 = 1;
            if ( (int)CmpAcquireSystemDriverHiveContext(v40) >= 0
              && (!v41[4] || (int)CmpAcquireSystemDriverHiveContext(v41) >= 0) )
            {
              for ( k = (PVOID *)P; k != &P; k = (PVOID *)*k )
              {
                if ( (int)CmpAcquireSystemDriverHiveContext(k) >= 0 )
                {
                  v13 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20204D43u);
                  v14 = v13;
                  if ( !v13 )
                    goto LABEL_43;
                  memset(v13, 0, 0x30uLL);
                  v14[1] = *((_OWORD *)k + 1);
                  *((_QWORD *)v14 + 4) = k[6];
                  *((_DWORD *)v14 + 10) = *((_DWORD *)k + 14);
                  v15 = v34;
                  if ( *v34 != &v33 )
                    goto LABEL_30;
                  *((_QWORD *)v14 + 1) = v34;
                  *(_QWORD *)v14 = &v33;
                  *v15 = v14;
                  v34 = (PVOID *)v14;
                }
              }
              if ( (unsigned __int8)CmpFindDrivers(
                                      v40[6],
                                      (__int64)&v33,
                                      Context,
                                      (__int64)ReturnLength,
                                      (__int64)v29,
                                      v27,
                                      v37,
                                      v28)
                && (unsigned __int8)CmpSortDriverList(v40[6]) )
              {
                CmpUnlockRegistry();
                v16 = (__int64 *)v29[0];
                v17 = 0;
                v4 = 0;
                while ( v16 != v29 )
                {
                  v16 = (__int64 *)*v16;
                  ++v17;
                }
                v3 = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v17 + 1), 0x32384D43u);
                if ( !v3 )
                  KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                v18 = v29[0];
                v19 = 0;
                if ( (__int64 *)v29[0] != v29 )
                {
                  do
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v18 + 32);
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 576;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&v3[v19], 0x2001Fu, &ObjectAttributes) >= 0 )
                      ++v19;
                    v18 = *(_QWORD *)v18;
                  }
                  while ( (__int64 *)v18 != v29 );
                  v2 = PoolWithTag;
                }
                v3[v19] = 0LL;
              }
            }
          }
        }
      }
    }
  }
LABEL_43:
  if ( (__int64 *)v29[0] != v29 )
    CmpFreeDriverList(v40[6], v29);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v1 )
    CmpDetachFromRegistryProcess((__int64)v44);
  if ( v5 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v40);
  if ( v41[4] )
    CmpCloseSystemDriverHiveContext(v41);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v20 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v21 = *v20;
      CmpCloseSystemDriverHiveContext(v20);
      ExFreePoolWithTag(v20, 0);
      v20 = (PVOID **)v21;
    }
    while ( v21 != &P );
  }
  v22 = (PVOID **)v33;
  if ( v33 != &v33 )
  {
    do
    {
      v23 = *v22;
      ExFreePoolWithTag(v22, 0);
      v22 = (PVOID **)v23;
    }
    while ( v23 != &v33 );
  }
  CmCleanupThreadInfo(v43);
  return v3;
}
