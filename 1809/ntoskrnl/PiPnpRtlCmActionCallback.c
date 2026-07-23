/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x14059A080
 * Callers:
 *     <none>
 * Callees:
 *     _CmDevicePropertyRead @ 0x140015BB4 (_CmDevicePropertyRead.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _CmDevicePropertyWrite @ 0x140159BD8 (_CmDevicePropertyWrite.c)
 *     _CmClassPropertyRead @ 0x14015B71C (_CmClassPropertyRead.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     McTemplateK0zjdd @ 0x140288D60 (McTemplateK0zjdd.c)
 *     _CmClassPropertyWrite @ 0x140329964 (_CmClassPropertyWrite.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405911B0 (PnpIsNullGuid.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059924C (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14059A67C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14059A7C0 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14059A89C (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14059A8D8 (PiPnpRtlCacheObjectBaseKey.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D3204 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406D3510 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1406F24D4 (_CmGetInstallerClassRegProp.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F2C4C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406FA96C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406FA9D0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x140701B30 (PiDmListAddList.c)
 *     PiDmGetCmObjectListFromCache @ 0x140701DE0 (PiDmGetCmObjectListFromCache.c)
 *     PnpIsValidGuidString @ 0x1407034E0 (PnpIsValidGuidString.c)
 *     PiDmListAddObject @ 0x140703B2C (PiDmListAddObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14082A0E0 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14082A124 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14082A184 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14082A240 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14082A358 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14082A600 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDmListRemoveList @ 0x14082A77C (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14082A8DC (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(
        __int64 a1,
        const wchar_t *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned int v9; // edi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  unsigned int v20; // eax
  PVOID PoolWithTag; // r12
  int v22; // r9d
  int v23; // edx
  __int64 v24; // rcx
  int DeviceRegProp; // eax
  int v26; // edi
  bool v27; // sf
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // r9
  unsigned int *v40; // r14
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int *v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r9
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v49; // rbx
  int v50; // edi
  unsigned int v51; // eax
  int v52; // ecx
  __int64 v53; // rax
  WCHAR *v54; // rdi
  bool v55; // al
  __int64 v56; // r8
  bool IsNullGuid; // al
  __int64 v58; // r8
  _QWORD *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // r9
  int Object; // r14d
  unsigned int *v68; // rdi
  __int64 v69; // r9
  _QWORD *v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  _QWORD *v74; // rbx
  __int64 v75; // rdx
  char v76; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v77[3]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int Size; // [rsp+54h] [rbp-ACh] BYREF
  size_t Size_4; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+68h] [rbp-98h] BYREF
  __int64 v82; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v84; // [rsp+80h] [rbp-80h] BYREF
  PVOID v85; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v86; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v87[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v89; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v92[3]; // [rsp+C8h] [rbp-38h] BYREF
  char v93; // [rsp+E0h] [rbp-20h]
  _QWORD v94[3]; // [rsp+E8h] [rbp-18h] BYREF
  char v95; // [rsp+100h] [rbp+0h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  GUID Guid; // [rsp+118h] [rbp+18h] BYREF

  v9 = -1073741822;
  if ( (int)a4 > 13 )
  {
    v17 = a4 - 14;
    if ( !v17 )
    {
      if ( a5 != 1 )
      {
        if ( a3 == 5 )
        {
          if ( *(int *)a6 >= 0 )
          {
            v70 = *(_QWORD **)(a6 + 8);
            v71 = v70[1];
            if ( v71 )
            {
              if ( *v70 )
              {
                PiDmListRemoveObject(4LL, v71, *v70, v77);
                if ( v77[0] )
                  PiDmListRemoveList(v72, v70[1], v73, *v70);
              }
            }
            PiPnpRtlFreePanelRemoveInfo(v70);
          }
        }
        else if ( a3 == 6 && *(int *)a6 >= 0 )
        {
          v74 = *(_QWORD **)(a6 + 8);
          v75 = v74[1];
          if ( v75 && *v74 )
            PiDmListRemoveObject(6LL, v75, *v74, (char *)&Size_4 + 1);
          PiPnpRtlFreePanelRemoveInfo(v74);
        }
        return 0;
      }
      if ( a3 == 5 )
      {
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v90);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v53 = v90;
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v91);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v53 = v91;
      }
      goto LABEL_118;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceList(a6);
      }
LABEL_30:
      if ( FilteredDeviceInterfaceList != -1073741802 )
      {
LABEL_31:
        *(_DWORD *)a6 = FilteredDeviceInterfaceList;
        return (unsigned int)-1073741536;
      }
      return 0;
    }
    if ( a5 != 1 )
      return v9;
    if ( a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      memset(v92, 0, a3 + 27);
      v85 = 0LL;
      Object = PiDmGetObject(5LL, (__int64)a2, (__int64 *)&v85, v66);
      if ( Object < 0 )
        goto LABEL_163;
      v68 = (unsigned int *)v85;
      v92[1] = *(_QWORD *)(a6 + 24);
      v92[2] = *(_QWORD *)(a6 + 32);
      v92[0] = a1;
      do
      {
        v93 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   4,
                   (ULONG_PTR)v68,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)v92);
      }
      while ( Object >= 0 && v93 );
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      memset(v94, 0, a3 + 26);
      v86 = 0LL;
      Object = PiDmGetObject(6LL, (__int64)a2, (__int64 *)&v86, v69);
      if ( Object < 0 )
        goto LABEL_163;
      v68 = v86;
      v94[1] = *(_QWORD *)(a6 + 24);
      v94[2] = *(_QWORD *)(a6 + 32);
      v94[0] = a1;
      do
      {
        v95 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   6,
                   (ULONG_PTR)v68,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)v94);
      }
      while ( Object >= 0 && v95 );
    }
    if ( v68 )
      PiDmObjectRelease(v68);
LABEL_163:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( (_DWORD)a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      P = 0LL;
      v81 = 0LL;
      v37 = 0LL;
      v76 = 0;
      v38 = PiDmGetObject(5LL, (__int64)a2, (__int64 *)&P, a4);
      v40 = (unsigned int *)P;
      if ( v38 >= 0 )
      {
        v41 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v81, v39);
        v37 = v81;
        if ( v41 >= 0 )
        {
          PiDmListAddObject(4LL, v40, v81, &v76);
          if ( !v76 )
            PiDmListAddList(v42, v40, v43, v37);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      v84 = 0LL;
      v82 = 0LL;
      v37 = 0LL;
      v63 = PiDmGetObject(6LL, (__int64)a2, (__int64 *)&v84, a4);
      v40 = v84;
      if ( v63 >= 0 )
      {
        v65 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v82, v64);
        v37 = v82;
        if ( v65 >= 0 )
          PiDmListAddObject(6LL, v40, v82, &Size_4);
      }
    }
    if ( v40 )
      PiDmObjectRelease(v40);
    if ( !v37 )
      return 0;
    v44 = (unsigned int *)v37;
    goto LABEL_99;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v28 = CmMapCmObjectTypeToPnpObjectType(a3);
      v30 = PiDmAddCacheReferenceForObject(v28, v29, 0LL);
      *(_DWORD *)a6 = v30;
      return (v30 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v35 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v35, v36);
      return 0;
    }
    BugCheckParameter2 = 0LL;
    v45 = (unsigned int)CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v45, v46, (__int64 *)&BugCheckParameter2, v47) < 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v49 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v50 = *(_DWORD *)(v49 + 32);
    *(_DWORD *)(v49 + 32) = v50 | 1;
    ExReleasePushLockEx(v49, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( (v50 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject((unsigned int)v45, a2);
    v44 = (unsigned int *)BugCheckParameter2;
LABEL_99:
    PiDmObjectRelease(v44);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 != 1 )
    {
      if ( a3 == 1 )
      {
        v54 = *(WCHAR **)(a6 + 8);
        RtlInitUnicodeString(&DestinationString, v54 + 2);
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
        {
          *(_QWORD *)&Guid.Data1 = 0LL;
          *(_QWORD *)Guid.Data4 = 0LL;
        }
        if ( *(int *)a6 < 0 )
        {
          if ( (byte_140406846 & 0x10) != 0 )
          {
            IsNullGuid = PnpIsNullGuid(&Guid);
            McTemplateK0zjdd(
              (unsigned int)-!IsNullGuid,
              &KMPnPEvt_DeviceDelete_Failure,
              v58,
              a2,
              (unsigned __int64)&Guid & -(__int64)!IsNullGuid,
              *(_DWORD *)v54,
              *(_DWORD *)a6);
          }
        }
        else if ( (byte_140406846 & 8) != 0 )
        {
          v55 = PnpIsNullGuid(&Guid);
          McTemplateK0zjdd(
            (unsigned int)-!v55,
            &KMPnPEvt_DeviceDelete_Success,
            v56,
            a2,
            (unsigned __int64)&Guid & -(__int64)!v55,
            *(_DWORD *)v54,
            *(_DWORD *)a6);
        }
        if ( *(int *)a6 >= 0 && v54[2] )
        {
          v89 = MEMORY[0xFFFFF78000000014];
          PnpSetObjectProperty(
            a1,
            (_DWORD)v54 + 4,
            2,
            0LL,
            (__int64)&DEVPKEY_DeviceClass_LastDeleteDate,
            16,
            (__int64)&v89,
            8,
            0);
        }
        if ( v54 )
          ExFreePoolWithTag(v54, 0x47706E50u);
      }
      else if ( a3 == 3 )
      {
        v59 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v59 )
        {
          v60 = v59[1];
          if ( v60 )
            PiDmListRemoveObject(0LL, v60, *v59, 0LL);
          v61 = v59[2];
          if ( v61 )
            PiDmListRemoveObject(1LL, v61, *v59, 0LL);
          v62 = v59[3];
          if ( v62 )
            PiDmListRemoveObject(2LL, v62, *v59, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v59);
      }
      return 0;
    }
    if ( a3 == 1 )
    {
      FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
      v53 = v87[1];
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v88);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
      v53 = v88;
    }
LABEL_118:
    *(_QWORD *)(a6 + 8) = v53;
    return v9;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    FilteredDeviceInterfaceList = PiDmGetCmObjectListFromCache(
                                    a3,
                                    *(_QWORD *)(a6 + 16),
                                    *(_QWORD *)(a6 + 24),
                                    *(_QWORD *)(a6 + 32),
                                    *(_DWORD *)(a6 + 40),
                                    *(_QWORD *)(a6 + 48));
    goto LABEL_30;
  }
  v13 = v12 - 5;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v9;
    if ( a5 != 1 )
    {
      if ( *(int *)a6 < 0 )
        return v9;
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        *(_DWORD *)(a6 + 28),
        *(PCWSTR *)(a6 + 32),
        *(_DWORD *)(a6 + 40));
      if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
      {
        v32 = *(_QWORD **)(a6 + 8);
        if ( *v32 )
        {
          v33 = v32[1];
          if ( v33 )
            PiDmListRemoveObject(5LL, v33, *v32, 0LL);
          v34 = v32[2];
          if ( v34 )
            PiDmListAddObject(5LL, v34, *v32, 0LL);
        }
        PiPnpRtlFreeInstallerClassChangeInfo(v32);
      }
      return 0;
    }
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
      || ((v20 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, HIDWORD(Size_4) = 0, Size = 0, !v20)
       || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x47706E50u)) == 0LL)
      && *(_DWORD *)(a6 + 40) )
    {
LABEL_54:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_55:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v31 = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1
          && *(_DWORD *)(a6 + 40) == 78
          && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
        {
          v31 = *(_QWORD *)(a6 + 32);
        }
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v31, v87);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = v87[0];
          return v9;
        }
        goto LABEL_31;
      }
      v51 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, a2, v51);
      v27 = (v9 & 0x80000000) != 0;
LABEL_50:
      if ( v27 )
        return v9;
      goto LABEL_55;
    }
    Size = *(_DWORD *)(a6 + 40);
    if ( a3 == 1 )
    {
      v22 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v22 - 1) > 0x24 || !CmDevicePropertyRead(a3 - 1, v22) || CmDevicePropertyWrite(v24, v23) )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)a2,
                          *(_QWORD *)(a6 + 16),
                          v22,
                          (__int64)&Size_4 + 4,
                          (__int64)PoolWithTag,
                          (__int64)&Size,
                          0);
        goto LABEL_42;
      }
    }
    else
    {
      if ( a3 != 2 )
      {
LABEL_75:
        v9 = 0;
LABEL_47:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
        v27 = (v9 & 0x80000000) != 0;
        if ( v9 )
          goto LABEL_50;
        goto LABEL_54;
      }
      v52 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v52 - 1) > 0x24 || !CmClassPropertyRead(v52) || CmClassPropertyWrite(v52) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)a2,
                          *(_QWORD *)(a6 + 16),
                          v52,
                          (__int64)&Size_4 + 4,
                          (__int64)PoolWithTag,
                          (__int64)&Size);
LABEL_42:
        v26 = DeviceRegProp;
        if ( (DeviceRegProp < 0
           || HIDWORD(Size_4) != *(_DWORD *)(a6 + 28)
           || Size != *(_DWORD *)(a6 + 40)
           || memcmp(PoolWithTag, *(const void **)(a6 + 32), Size))
          && (v26 != -1073741275 || *(_DWORD *)(a6 + 40))
          && v26 != -1073741790 )
        {
          goto LABEL_75;
        }
LABEL_46:
        *(_DWORD *)a6 = v26;
        v9 = -1073741536;
        goto LABEL_47;
      }
    }
    v26 = -1073741790;
    goto LABEL_46;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 >= 0 )
    {
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    else if ( *(_DWORD *)a6 == -1073741275 )
    {
      PiDmObjectUpdateCachedCmProperty(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    return 0;
  }
  if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
    goto LABEL_14;
  FilteredDeviceInterfaceList = PiDmObjectGetCachedCmProperty(
                                  a3,
                                  (_DWORD)a2,
                                  a3,
                                  *(_DWORD *)(a6 + 24),
                                  *(_QWORD *)(a6 + 32),
                                  *(_QWORD *)(a6 + 40),
                                  *(_QWORD *)(a6 + 48));
  if ( FilteredDeviceInterfaceList >= 0
    || FilteredDeviceInterfaceList == -1073741275
    || FilteredDeviceInterfaceList == -1073741789
    || FilteredDeviceInterfaceList == -1073741772 )
  {
    goto LABEL_31;
  }
  v9 = 0;
LABEL_14:
  if ( !*(_QWORD *)(a6 + 16) )
  {
    v15 = CmMapCmObjectTypeToPnpObjectType(a3);
    PiPnpRtlCacheObjectBaseKey(a1, a2, v15);
  }
  return v9;
}
