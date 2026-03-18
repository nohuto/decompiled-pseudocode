/*
 * XREFs of CmGetSystemDriverList @ 0x140A11BA0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A10210 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x1401C0BD0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1401C2870 (ZwQueryDirectoryObject.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A11A10 (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140A11FB4 (CmpCloseSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140A12008 (CmpFreeDriverList.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140A121B4 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpSortDriverList @ 0x140A12368 (CmpSortDriverList.c)
 *     CmpFindDrivers @ 0x140A12EDC (CmpFindDrivers.c)
 */

HANDLE *__fastcall CmGetSystemDriverList(__int64 a1)
{
  char v1; // r13
  struct _PRIVILEGE_SET *v2; // rsi
  HANDLE *PoolWithTag; // r14
  char v4; // r15
  char v5; // r12
  struct _LOOKASIDE_LIST_EX *v6; // r9
  NTSTATUS i; // eax
  const UNICODE_STRING *v8; // rdi
  struct _LOOKASIDE_LIST_EX *v9; // r9
  PPRIVILEGE_SET j; // rdi
  __int64 *v11; // rax
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // edi
  PPRIVILEGE_SET v15; // rdi
  PPRIVILEGE_SET v16; // rcx
  int v18; // eax
  PVOID v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rax
  struct _LOOKASIDE_LIST_EX *v22; // r9
  _OWORD *v23; // rax
  _OWORD *v24; // rbx
  PPRIVILEGE_SET *v25; // rax
  PPRIVILEGE_SET *v26; // rbx
  PPRIVILEGE_SET *v27; // rbx
  int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+58h] [rbp-B0h]
  __int64 v32[2]; // [rsp+68h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-90h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+80h] [rbp-88h]
  ULONG v35; // [rsp+88h] [rbp-80h] BYREF
  PPRIVILEGE_SET v36; // [rsp+90h] [rbp-78h] BYREF
  PPRIVILEGE_SET *v37; // [rsp+98h] [rbp-70h]
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  ULONG v39; // [rsp+A8h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-28h]
  struct _PRIVILEGE_SET *TransientPoolWithTag; // [rsp+E8h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  ULONG_PTR v44[8]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v45[8]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v46[48]; // [rsp+188h] [rbp+80h] BYREF

  v41 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v1 = 0;
  memset(v46, 0, sizeof(v46));
  memset(v44, 0, sizeof(v44));
  LODWORD(v44[7]) = -1;
  memset(v45, 0, sizeof(v45));
  LODWORD(v45[7]) = -1;
  p_Privileges = &Privileges;
  DirectoryHandle = 0LL;
  Privileges = (PPRIVILEGE_SET)&Privileges;
  v2 = 0LL;
  v37 = &v36;
  PoolWithTag = 0LL;
  v4 = 0;
  v36 = (PPRIVILEGE_SET)&v36;
  v5 = 0;
  v32[1] = (__int64)v32;
  v32[0] = (__int64)v32;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString, (__int64)v44) >= 0 )
  {
    if ( !CmStateSeparationEnabled
      || (v18 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString, (__int64)v45), (int)(v18 + 0x80000000) < 0)
      || v18 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        v35 = 0;
        TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                          PagedPool,
                                                          0x400uLL,
                                                          0x20204D43u,
                                                          v6);
        v2 = TransientPoolWithTag;
        if ( TransientPoolWithTag )
        {
          for ( i = ZwQueryDirectoryObject(DirectoryHandle, TransientPoolWithTag, 0x400u, 1u, 1u, &v35, &v39);
                i != -2147483622;
                i = ZwQueryDirectoryObject(DirectoryHandle, v2, 0x400u, 1u, 0, &v35, &v39) )
          {
            if ( i < 0 )
              goto LABEL_29;
            v8 = (const UNICODE_STRING *)v2;
            if ( LOWORD(v2->PrivilegeCount) )
            {
              do
              {
                if ( !RtlEqualUnicodeString(v8, &CmpSystemFileName, 1u) )
                {
                  v19 = CmpAllocateTransientPoolWithTag(PagedPool, 0x40uLL, 0x20204D43u, v9);
                  v20 = (__int64)v19;
                  if ( !v19 )
                    goto LABEL_29;
                  memset(v19, 0, 0x40uLL);
                  *(_DWORD *)(v20 + 56) = -1;
                  if ( (int)CmpOpenSystemDriverHiveContext(v8, v20) >= 0 )
                  {
                    v21 = p_Privileges;
                    if ( *p_Privileges != (PPRIVILEGE_SET)&Privileges )
                      goto LABEL_61;
                    *(_QWORD *)(v20 + 8) = p_Privileges;
                    *(_QWORD *)v20 = &Privileges;
                    *v21 = v20;
                    p_Privileges = (PPRIVILEGE_SET *)v20;
                  }
                  else
                  {
                    CmSiFreeMemory((PPRIVILEGE_SET)v20);
                  }
                }
                v8 += 2;
              }
              while ( v8->Length );
            }
          }
          v5 = CmpAcquireShutdownRundown();
          if ( v5 )
          {
            CmpAttachToRegistryProcess((__int64)v46);
            v1 = 1;
            CmpLockRegistryExclusive();
            v4 = 1;
            if ( (int)CmpAcquireSystemDriverHiveContext(v44) >= 0
              && (!v45[4] || (int)CmpAcquireSystemDriverHiveContext(v45) >= 0) )
            {
              for ( j = Privileges; j != (PPRIVILEGE_SET)&Privileges; j = *(PPRIVILEGE_SET *)&j->PrivilegeCount )
              {
                if ( (int)CmpAcquireSystemDriverHiveContext(j) >= 0 )
                {
                  v23 = CmpAllocateTransientPoolWithTag(PagedPool, 0x30uLL, 0x20204D43u, v22);
                  v24 = v23;
                  if ( !v23 )
                    goto LABEL_29;
                  memset(v23, 0, 0x30uLL);
                  v24[1] = *(_OWORD *)&j->Privilege[0].Attributes;
                  *((_QWORD *)v24 + 4) = j[2].Privilege[0].Luid;
                  *((_DWORD *)v24 + 10) = j[2].Privilege[0].Attributes;
                  v25 = v37;
                  if ( *v37 != (PPRIVILEGE_SET)&v36 )
LABEL_61:
                    __fastfail(3u);
                  *((_QWORD *)v24 + 1) = v37;
                  *(_QWORD *)v24 = &v36;
                  *v25 = (PPRIVILEGE_SET)v24;
                  v37 = (PPRIVILEGE_SET *)v24;
                }
              }
              if ( (unsigned __int8)CmpFindDrivers(
                                      v44[6],
                                      (__int64)&v36,
                                      Context,
                                      (__int64)ReturnLength,
                                      (__int64)v32,
                                      v30,
                                      v41,
                                      v31)
                && (unsigned __int8)CmpSortDriverList(v44[6]) )
              {
                CmpUnlockRegistry();
                v11 = (__int64 *)v32[0];
                v12 = 0;
                v4 = 0;
                while ( v11 != v32 )
                {
                  v11 = (__int64 *)*v11;
                  ++v12;
                }
                PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          8LL * (unsigned int)(v12 + 1),
                                          0x32384D43u);
                if ( !PoolWithTag )
                  KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                v13 = v32[0];
                v14 = 0;
                if ( (__int64 *)v32[0] != v32 )
                {
                  do
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v13 + 32);
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 576;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( ZwOpenKey(&PoolWithTag[v14], 0x2001Fu, &ObjectAttributes) >= 0 )
                      ++v14;
                    v13 = *(_QWORD *)v13;
                  }
                  while ( (__int64 *)v13 != v32 );
                  v2 = TransientPoolWithTag;
                }
                PoolWithTag[v14] = 0LL;
              }
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( (__int64 *)v32[0] != v32 )
    CmpFreeDriverList(v44[6], v32);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v1 )
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v46);
  if ( v5 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v44);
  if ( v45[4] )
    CmpCloseSystemDriverHiveContext(v45);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( v2 )
    CmSiFreeMemory(v2);
  v15 = Privileges;
  if ( Privileges != (PPRIVILEGE_SET)&Privileges )
  {
    do
    {
      v26 = *(PPRIVILEGE_SET **)&v15->PrivilegeCount;
      CmpCloseSystemDriverHiveContext(v15);
      CmSiFreeMemory(v15);
      v15 = (PPRIVILEGE_SET)v26;
    }
    while ( v26 != &Privileges );
  }
  v16 = v36;
  if ( v36 != (PPRIVILEGE_SET)&v36 )
  {
    do
    {
      v27 = *(PPRIVILEGE_SET **)&v16->PrivilegeCount;
      CmSiFreeMemory(v16);
      v16 = (PPRIVILEGE_SET)v27;
    }
    while ( v27 != &v36 );
  }
  return PoolWithTag;
}
