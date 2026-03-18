/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x1405BDA80
 * Callers:
 *     <none>
 * Callees:
 *     _CmDevicePropertyRead @ 0x140002974 (_CmDevicePropertyRead.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _CmClassPropertyRead @ 0x140145480 (_CmClassPropertyRead.c)
 *     _CmDevicePropertyWrite @ 0x140145C04 (_CmDevicePropertyWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     McTemplateK0zjdd @ 0x14029ECE0 (McTemplateK0zjdd.c)
 *     _CmClassPropertyWrite @ 0x14034B004 (_CmClassPropertyWrite.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405B6094 (PnpIsNullGuid.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1405BE04C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405BE198 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405BE288 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405BE2C8 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405BF280 (PiPnpRtlCacheObjectBaseKey.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406A2E4C (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406F08E4 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406F0C04 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F9B64 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406FA9C4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     _CmGetInstallerClassRegProp @ 0x140701190 (_CmGetInstallerClassRegProp.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140714EB4 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140714F18 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x14071BCE0 (PiDmListAddList.c)
 *     PiDmGetCmObjectListFromCache @ 0x14071C2BC (PiDmGetCmObjectListFromCache.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14071CDC8 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmObjectReleaseLock @ 0x14071CEC4 (PiDmObjectReleaseLock.c)
 *     PnpIsValidGuidString @ 0x14071D8E8 (PnpIsValidGuidString.c)
 *     PiDmListAddObject @ 0x140723984 (PiDmListAddObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1408634C0 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140863504 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140863524 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140863584 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140863640 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140863798 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140863A48 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDmListRemoveList @ 0x140863CCC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140863E38 (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const wchar_t *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // esi
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
  int v26; // esi
  bool v27; // sf
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rsi
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  _DWORD *v37; // rsi
  int v38; // eax
  PVOID v39; // r14
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r14
  __int64 v44; // rdx
  int v45; // ebx
  unsigned int v46; // eax
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rsi
  bool v50; // al
  __int64 v51; // r8
  bool IsNullGuid; // al
  __int64 v53; // r8
  _QWORD *v54; // rax
  _DWORD *v55; // rdx
  _QWORD *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  int v60; // eax
  int v61; // eax
  int Object; // esi
  PVOID v63; // r14
  _QWORD *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  _QWORD *v68; // rbx
  __int64 v69; // rdx
  char v70; // [rsp+50h] [rbp-B0h] BYREF
  char v71; // [rsp+51h] [rbp-AFh] BYREF
  char v72; // [rsp+52h] [rbp-AEh] BYREF
  char v73; // [rsp+53h] [rbp-ADh] BYREF
  int v74; // [rsp+54h] [rbp-ACh] BYREF
  size_t Size; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v76; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v77; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v79; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v80; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  void *v82; // [rsp+98h] [rbp-68h] BYREF
  PVOID v83; // [rsp+A0h] [rbp-60h] BYREF
  void *v84; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v85[3]; // [rsp+B0h] [rbp-50h] BYREF
  char v86; // [rsp+C8h] [rbp-38h]
  int v87; // [rsp+C9h] [rbp-37h]
  __int16 v88; // [rsp+CDh] [rbp-33h]
  char v89; // [rsp+CFh] [rbp-31h]
  _QWORD v90[3]; // [rsp+D0h] [rbp-30h] BYREF
  char v91; // [rsp+E8h] [rbp-18h]
  int v92; // [rsp+E9h] [rbp-17h]
  __int16 v93; // [rsp+EDh] [rbp-13h]
  char v94; // [rsp+EFh] [rbp-11h]
  _QWORD v95[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v96; // [rsp+100h] [rbp+0h] BYREF
  __int64 v97; // [rsp+108h] [rbp+8h] BYREF
  __int64 v98; // [rsp+110h] [rbp+10h] BYREF
  GUID Guid; // [rsp+118h] [rbp+18h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
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
            v64 = *(_QWORD **)(a6 + 8);
            v65 = v64[1];
            if ( v65 )
            {
              if ( *v64 )
              {
                PiDmListRemoveObject(4LL, v65, *v64, &v71);
                if ( v71 )
                  PiDmListRemoveList(v66, v64[1], v67, *v64);
              }
            }
            PiPnpRtlFreePanelRemoveInfo(v64);
          }
        }
        else if ( a3 == 6 && *(int *)a6 >= 0 )
        {
          v68 = *(_QWORD **)(a6 + 8);
          v69 = v68[1];
          if ( v69 && *v68 )
            PiDmListRemoveObject(6LL, v69, *v68, &v73);
          PiPnpRtlFreePanelRemoveInfo(v68);
        }
        return 0;
      }
      if ( a3 == 5 )
      {
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v97);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v48 = v97;
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v98);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v48 = v98;
      }
      goto LABEL_117;
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
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v83 = 0LL;
      Object = PiDmGetObject(5LL, a2, &v83);
      if ( Object < 0 )
        goto LABEL_168;
      v63 = v83;
      v85[1] = *(_QWORD *)(a6 + 24);
      v85[2] = *(_QWORD *)(a6 + 32);
      v85[0] = a1;
      do
      {
        v86 = 0;
        Object = PiDmListEnumObjectsWithCallback(4LL, v63, PiPnpRtlEnumDevicesCallback, v85);
      }
      while ( Object >= 0 && v86 );
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v84 = 0LL;
      Object = PiDmGetObject(6LL, a2, &v84);
      if ( Object < 0 )
        goto LABEL_168;
      v63 = v84;
      v90[1] = *(_QWORD *)(a6 + 24);
      v90[2] = *(_QWORD *)(a6 + 32);
      v90[0] = a1;
      do
      {
        v91 = 0;
        Object = PiDmListEnumObjectsWithCallback(6LL, v63, PiPnpRtlEnumDevicesCallback, v90);
      }
      while ( Object >= 0 && v91 );
    }
    if ( v63 )
      PiDmObjectRelease(v63);
LABEL_168:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      P = 0LL;
      v76 = 0LL;
      v37 = 0LL;
      v70 = 0;
      v38 = PiDmGetObject(5LL, a2, &P);
      v39 = P;
      if ( v38 >= 0 )
      {
        v40 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v76);
        v37 = v76;
        if ( v40 >= 0 )
        {
          PiDmListAddObject(4LL, v39, v76, &v70);
          if ( !v70 )
            PiDmListAddList(v41, v39, v42, v37);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      v82 = 0LL;
      v77 = 0LL;
      v37 = 0LL;
      v60 = PiDmGetObject(6LL, a2, &v82);
      v39 = v82;
      if ( v60 >= 0 )
      {
        v61 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v77);
        v37 = v77;
        if ( v61 >= 0 )
          PiDmListAddObject(6LL, v39, v77, &v72);
      }
    }
    if ( v39 )
      PiDmObjectRelease(v39);
    if ( !v37 )
      return 0;
    goto LABEL_95;
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
    v80 = 0LL;
    v43 = (unsigned int)CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v43, v44, &v80) < 0 )
      return 0;
    v37 = v80;
    PiDmObjectAcquireExclusiveLock(v80);
    v45 = v37[8];
    v37[8] = v45 | 1;
    PiDmObjectReleaseLock(v37);
    if ( (v45 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject((unsigned int)v43, a2);
LABEL_95:
    PiDmObjectRelease(v37);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 != 1 )
    {
      if ( a3 == 1 )
      {
        v49 = *(_QWORD *)(a6 + 8);
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        *(_QWORD *)&Guid.Data1 = 0LL;
        *(_QWORD *)Guid.Data4 = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(v49 + 4));
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
        {
          *(_QWORD *)&Guid.Data1 = 0LL;
          *(_QWORD *)Guid.Data4 = 0LL;
        }
        if ( *(int *)a6 < 0 )
        {
          if ( (byte_14042BDBA & 0x10) != 0 )
          {
            IsNullGuid = PnpIsNullGuid(&Guid);
            McTemplateK0zjdd(
              (unsigned int)-!IsNullGuid,
              &KMPnPEvt_DeviceDelete_Failure,
              v53,
              a2,
              (unsigned __int64)&Guid & -(__int64)!IsNullGuid,
              *(_DWORD *)v49,
              *(_DWORD *)a6);
          }
        }
        else if ( (byte_14042BDBA & 8) != 0 )
        {
          v50 = PnpIsNullGuid(&Guid);
          McTemplateK0zjdd(
            (unsigned int)-!v50,
            &KMPnPEvt_DeviceDelete_Success,
            v51,
            a2,
            (unsigned __int64)&Guid & -(__int64)!v50,
            *(_DWORD *)v49,
            *(_DWORD *)a6);
        }
        if ( *(int *)a6 >= 0 )
        {
          if ( *(_WORD *)(v49 + 4) )
          {
            v79 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              a1,
              v49 + 4,
              2,
              0LL,
              (__int64)&DEVPKEY_DeviceClass_LastDeleteDate,
              16,
              (__int64)&v79,
              8,
              0);
          }
          if ( (unsigned __int8)CmIsRootEnumeratedDevice(a2) )
          {
            RtlInitUnicodeString(&DestinationString, a2);
            if ( DestinationString.Length >= 2u )
            {
              if ( *DestinationString.Buffer )
              {
                v54 = (_QWORD *)PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
                if ( v54 )
                {
                  v55 = (_DWORD *)v54[8];
                  if ( v55 )
                    *v55 |= 1u;
                  ObfDereferenceObject(v54);
                }
              }
            }
          }
        }
        PiPnpRtlFreeDeviceDeleteInfo(v49);
      }
      else if ( a3 == 3 )
      {
        v56 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v56 )
        {
          v57 = v56[1];
          if ( v57 )
            PiDmListRemoveObject(0LL, v57, *v56, 0LL);
          v58 = v56[2];
          if ( v58 )
            PiDmListRemoveObject(1LL, v58, *v56, 0LL);
          v59 = v56[3];
          if ( v59 )
            PiDmListRemoveObject(2LL, v59, *v56, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v56);
      }
      return 0;
    }
    if ( a3 == 1 )
    {
      FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
      v48 = v95[1];
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v96);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
      v48 = v96;
    }
LABEL_117:
    *(_QWORD *)(a6 + 8) = v48;
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
      || ((v20 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, v74 = 0, !v20)
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
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v31, v95);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = v95[0];
          return v9;
        }
        goto LABEL_31;
      }
      v46 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, a2, v46);
      v27 = (v9 & 0x80000000) != 0;
LABEL_50:
      if ( v27 )
        return v9;
      goto LABEL_55;
    }
    LODWORD(Size) = *(_DWORD *)(a6 + 40);
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
                          (__int64)&v74,
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
      v47 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v47 - 1) > 0x24 || !CmClassPropertyRead(v47) || CmClassPropertyWrite(v47) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)a2,
                          *(_QWORD *)(a6 + 16),
                          v47,
                          (__int64)&v74,
                          (__int64)PoolWithTag,
                          (__int64)&Size);
LABEL_42:
        v26 = DeviceRegProp;
        if ( (DeviceRegProp < 0
           || v74 != *(_DWORD *)(a6 + 28)
           || (_DWORD)Size != *(_DWORD *)(a6 + 40)
           || memcmp(PoolWithTag, *(const void **)(a6 + 32), (unsigned int)Size))
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
