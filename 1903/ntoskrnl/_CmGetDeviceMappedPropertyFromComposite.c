/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1406242B0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14093C038 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140002B5C (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x14012DB38 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     wcscmp @ 0x1401A1F50 (wcscmp.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceStatus @ 0x140625EA8 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140625FB8 (_NtPlugPlayGetDeviceStatus.c)
 *     _PnpMultiSzGetLen @ 0x1406E12A0 (_PnpMultiSzGetLen.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406E9290 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceParent @ 0x1406F1670 (_CmGetDeviceParent.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _CmGetDeviceCompoundFilters @ 0x140707510 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070B530 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140718FC8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceRelationsList @ 0x14093847C (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x14093B50C (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x14093C448 (_CmGetDeviceSiblings.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        size_t a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  int *v9; // rsi
  int DeviceStatus; // ebx
  wchar_t *v12; // r15
  __int64 v13; // r12
  int v14; // r8d
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // edx
  int *v27; // r14
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // r11
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  int DeviceParent; // eax
  _DWORD *v45; // r14
  __int64 v46; // rax
  size_t v47; // rdi
  int ObjectProperty; // eax
  __int64 v49; // r9
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  size_t v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  __int64 v65; // rax
  int DeviceProperty; // eax
  _DWORD *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  int DeviceRelationsList; // eax
  unsigned int v74; // eax
  int v75; // r8d
  __int64 v76; // rax
  int DeviceSiblings; // eax
  _DWORD *v78; // r14
  __int64 v79; // rax
  int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  size_t v85; // rdi
  size_t v86; // r9
  __int64 v87; // rcx
  int v88; // eax
  bool v89; // zf
  __int64 v90; // r9
  int v91; // eax
  char v93[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v94; // [rsp+70h] [rbp-90h]
  int v95; // [rsp+78h] [rbp-88h] BYREF
  int v96; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v97; // [rsp+80h] [rbp-80h] BYREF
  int v98; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v99; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v100; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v101; // [rsp+90h] [rbp-70h]
  size_t pcchLength; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v104; // [rsp+B0h] [rbp-50h]
  unsigned int v105; // [rsp+B8h] [rbp-48h] BYREF
  char v106[4]; // [rsp+BCh] [rbp-44h] BYREF
  char v107[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD Buf2[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD Buf1[2]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Str2[40]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[40]; // [rsp+140h] [rbp+40h] BYREF

  v9 = a8;
  DeviceStatus = 0;
  v99 = 0;
  v12 = a6;
  pcchLength = a3;
  v13 = a1;
  v14 = a9;
  v94 = a1;
  v104 = a5;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Buf2[0] = 0LL;
  Buf2[1] = 0LL;
  Buf1[0] = 0LL;
  Buf1[1] = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v9 = 0;
  v101 = v14 & 0xFFFF0000;
  if ( a6 )
  {
    v15 = a7;
    v12 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v15 = 0;
    a7 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  switch ( v16 )
  {
    case 0xAu:
      v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v46 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v46 )
      {
        v47 = pcchLength;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           (__int64)a2,
                           1LL,
                           pcchLength,
                           0LL,
                           (__int64)&DEVPKEY_Device_FriendlyName,
                           (__int64)a5,
                           (__int64)v12,
                           v15,
                           (__int64)&v95,
                           v14 & 0xFFFF0000);
        DeviceStatus = ObjectProperty;
        if ( !ObjectProperty || ObjectProperty == -1073741789 )
        {
          *v9 = v95;
        }
        else if ( ObjectProperty == -1073741275 )
        {
          v49 = v47;
          v19 = (__int64)a2;
          v50 = PnpGetObjectProperty(
                  v13,
                  (__int64)a2,
                  1LL,
                  v49,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v104,
                  (__int64)v12,
                  a7,
                  (__int64)&v95,
                  v101);
          DeviceStatus = v50;
          if ( !v50 || v50 == -1073741789 )
          {
            *v9 = v95;
          }
          else if ( v50 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      v79 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
        v79 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
      if ( v79 )
        return (unsigned int)DeviceStatus;
      v97 = v15 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v12, &v97);
      goto LABEL_222;
    case 0x100u:
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v30 )
        return (unsigned int)DeviceStatus;
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *v9 = 2 * pcchLength + 2;
      *v31 = 18;
      if ( v15 < *v9 )
        return (unsigned int)-1073741789;
      v19 = (__int64)a2;
      DeviceStatus = RtlStringCbCopyExW(v12, (unsigned int)*v9, a2, 0LL, 0LL, 0x900u);
      if ( DeviceStatus >= 0 )
        goto LABEL_31;
      v67 = v104;
      goto LABEL_185;
    case 2u:
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( !v22 )
        goto LABEL_40;
      break;
  }
  if ( v16 == 3 )
  {
    v55 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v55 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v55 )
    {
LABEL_40:
      v96 = 0;
      v100 = 0;
      DeviceStatus = CmGetDeviceStatus(v13, (_DWORD)a2, pcchLength, (unsigned int)&v96, (__int64)&v100, (__int64)&v99);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      v23 = *(_DWORD *)(a4 + 16);
      v24 = v96;
      if ( v23 == 2 )
      {
        v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v25 )
          goto LABEL_45;
      }
      if ( v23 != 3 )
        goto LABEL_190;
      v58 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v58 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v58 )
      {
LABEL_45:
        v26 = 7;
      }
      else
      {
LABEL_190:
        if ( (v96 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v26 = 24;
      }
      v27 = v104;
      *v9 = 4;
      *v27 = v26;
      if ( a7 < *v9 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a4 + 16) == 12 )
      {
        v69 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
          v69 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
        if ( !v69 )
        {
          if ( (int)PnpGetObjectProperty(
                      v94,
                      (__int64)a2,
                      1LL,
                      pcchLength,
                      0LL,
                      (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                      (__int64)&v98,
                      (__int64)&v105,
                      4,
                      (__int64)&v95,
                      v101) >= 0
            && v98 == 24 )
          {
            v70 = v99;
            if ( v95 == 4 )
              v70 = v105;
            v99 = v70;
          }
          v24 = v96;
        }
      }
      v28 = *(_DWORD *)(a4 + 16);
      if ( v28 == 2 )
      {
        v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v29 )
        {
          *(_DWORD *)v12 = v24;
          goto LABEL_53;
        }
      }
      else if ( v28 == 3 )
      {
        v59 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v59 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v59 )
        {
          v60 = (v24 & 0x400) != 0 ? v100 : 0;
LABEL_155:
          *(_DWORD *)v12 = v60;
          goto LABEL_53;
        }
      }
      v60 = v99;
      goto LABEL_155;
    }
  }
  if ( v16 == 12 )
  {
    v68 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v68 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( v68 )
      return (unsigned int)DeviceStatus;
    goto LABEL_40;
  }
  v17 = 4;
  switch ( v16 )
  {
    case 4u:
      v51 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
        v51 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
      if ( v51 )
      {
        v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
          v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
        if ( v52 )
          return (unsigned int)DeviceStatus;
        v13 = v94;
        v53 = pcchLength;
        v54 = v94;
        *a5 = 17;
        *v9 = 1;
        DeviceStatus = PnpGetObjectProperty(
                         v54,
                         (__int64)a2,
                         1LL,
                         v53,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         (__int64)&v98,
                         (__int64)Buf2,
                         16,
                         (__int64)&v95,
                         v14 & 0xFFFF0000);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        DeviceStatus = PnpGetObjectProperty(
                         v13,
                         (__int64)L"HTREE\\ROOT\\0",
                         1LL,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_BaseContainerId,
                         (__int64)&v98,
                         (__int64)Buf1,
                         16,
                         (__int64)&v95,
                         v101);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        if ( a7 >= *v9 )
        {
          *(_BYTE *)v12 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
          goto LABEL_30;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_212;
    case 5u:
      v40 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
        v40 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
      if ( v40 )
      {
        v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v41 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v41 )
          return (unsigned int)DeviceStatus;
        *v9 = 1;
        *a5 = 17;
        if ( v15 < *v9 )
          return (unsigned int)-1073741789;
        v13 = v94;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        *(_BYTE *)v12 = 0;
        v42 = NtPlugPlayGetDeviceStatus(
                v13,
                (unsigned int)&DestinationString,
                (unsigned int)&v96,
                (unsigned int)&v100,
                (__int64)&v99);
        DeviceStatus = v42;
        if ( v42 != -1073741810 )
        {
          v19 = (__int64)a2;
          if ( v42 < 0 )
            goto LABEL_31;
LABEL_101:
          *(_BYTE *)v12 = -1;
          goto LABEL_31;
        }
        return 0;
      }
      v17 = 8;
      goto LABEL_212;
    case 6u:
      v35 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
        v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
      if ( !v35 )
      {
        v17 = 16;
LABEL_212:
        DeviceRelationsList = CmGetDeviceRelationsList(v94, (_DWORD)a2, v17, 0, 0, (__int64)&v97);
        DeviceStatus = DeviceRelationsList;
        if ( DeviceRelationsList == -1073741772 || !DeviceRelationsList )
          return (unsigned int)-1073741275;
        if ( DeviceRelationsList != -1073741789 )
        {
          v13 = v94;
          goto LABEL_30;
        }
        v67 = v104;
        *v9 = 2 * v97;
        v74 = a7;
        *v67 = 8210;
        if ( v74 < *v9 )
          return (unsigned int)-1073741789;
        v19 = (__int64)a2;
        v75 = v17;
        v13 = v94;
        DeviceStatus = CmGetDeviceRelationsList(v94, (_DWORD)a2, v75, (_DWORD)v12, v74 >> 1, (__int64)&v97);
        if ( !DeviceStatus )
        {
          *v9 = 2 * PnpMultiSzGetLen(v12);
          return (unsigned int)DeviceStatus;
        }
LABEL_185:
        *v9 = 0;
        *v67 = 0;
        goto LABEL_31;
      }
      v36 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
        v36 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
      if ( v36 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus >= 0 )
      {
        v37 = v94;
        *(_BYTE *)v12 = 0;
        v38 = NtPlugPlayGetDeviceStatus(
                v37,
                (unsigned int)&DestinationString,
                (unsigned int)&v96,
                (unsigned int)&v100,
                (__int64)&v99);
        DeviceStatus = v38;
        if ( v38 == -1073741810 )
          return 0;
        if ( v38 >= 0 )
        {
          if ( (v96 & 0x8000) == 0 )
          {
            if ( (v96 & 0x400) == 0 || v100 <= 0x1D && (v80 = 591396864, _bittest(&v80, v100)) )
            {
              v19 = (__int64)a2;
              if ( (v96 & 8) == 0 )
              {
                v13 = v94;
                v39 = PnpGetObjectProperty(
                        v94,
                        (__int64)a2,
                        1LL,
                        pcchLength,
                        0LL,
                        (__int64)&DEVPKEY_Device_Capabilities,
                        (__int64)&v98,
                        (__int64)v106,
                        4,
                        (__int64)&v95,
                        v101);
                DeviceStatus = v39;
                if ( v39 == -1073741275 )
                  return 0;
                if ( v39 < 0 )
                  goto LABEL_31;
                if ( (v106[0] & 0x40) != 0 )
                  *(_BYTE *)v12 = -1;
              }
LABEL_54:
              v13 = v94;
              goto LABEL_31;
            }
          }
          *(_BYTE *)v12 = -1;
        }
      }
LABEL_53:
      v19 = (__int64)a2;
      goto LABEL_54;
    case 7u:
      v71 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
        v71 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
      if ( v71 )
        return (unsigned int)DeviceStatus;
      v17 = 32;
      goto LABEL_212;
    case 0xBu:
      v72 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
        v72 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
      if ( v72 )
        return (unsigned int)DeviceStatus;
      v17 = 64;
      goto LABEL_212;
    case 8u:
      v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
        v43 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
      if ( v43 )
      {
        v65 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
          v65 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
        if ( v65 )
          return (unsigned int)DeviceStatus;
        *a5 = 7;
        *v9 = 4;
        v13 = v94;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v94,
                           (unsigned int)&DestinationString,
                           13,
                           (_DWORD)v12,
                           v15,
                           (__int64)&a7);
LABEL_175:
        DeviceStatus = DeviceProperty;
        if ( DeviceProperty == -1073741772 )
          return (unsigned int)-1073741275;
        goto LABEL_30;
      }
      v13 = v94;
      v97 = v15 >> 1;
      DeviceParent = CmGetDeviceParent(v94, a2, v12, &v97);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_30;
      v45 = v104;
      *v9 = 2 * v97;
      *v45 = 18;
      goto LABEL_107;
    case 9u:
      v76 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
        v76 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
      if ( v76 )
        return (unsigned int)DeviceStatus;
      v13 = v94;
      v97 = v15 >> 1;
      DeviceSiblings = CmGetDeviceChildren(v94, a2, v12, &v97);
LABEL_222:
      DeviceStatus = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 && DeviceSiblings )
        goto LABEL_30;
      v78 = v104;
      *v9 = 2 * v97;
      *v78 = 8210;
LABEL_107:
      if ( a7 >= *v9 )
        goto LABEL_30;
      return (unsigned int)-1073741789;
    case 2u:
      v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
        v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
      if ( v32 )
      {
        v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
          v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
        if ( v33 )
          return (unsigned int)DeviceStatus;
        v13 = v94;
        v95 = 78;
        DeviceStatus = CmGetDeviceRegProp(
                         v94,
                         (__int64)a2,
                         pcchLength,
                         37,
                         (__int64)v107,
                         (__int64)Str2,
                         (__int64)&v95,
                         v14);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        if ( !wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          return (unsigned int)-1073741275;
        v34 = v104;
        *v9 = 16;
        *v34 = 13;
        if ( a7 >= *v9 )
        {
          v19 = (__int64)a2;
          DeviceStatus = CmGetDeviceContainerIdFromBase(v13, a2, Str2, SourceString);
          if ( DeviceStatus >= 0 )
          {
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
            if ( DeviceStatus >= 0 )
              DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v12);
          }
          goto LABEL_31;
        }
      }
      else
      {
        *v9 = 1;
        *a5 = 17;
        if ( v15 >= *v9 )
        {
          *(_BYTE *)v12 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(v94, a2, pcchLength) != 0);
          return (unsigned int)DeviceStatus;
        }
      }
      return (unsigned int)-1073741789;
    case 0xFu:
      v62 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v62 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v62 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *(_BYTE *)v12 = 0;
      v63 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v96,
              (unsigned int)&v100,
              (__int64)&v99);
      DeviceStatus = v63;
      if ( v63 != -1073741810 )
      {
        if ( v63 >= 0 )
        {
          v19 = (__int64)a2;
          if ( (v96 & 0x2000000) != 0 )
            goto LABEL_31;
          v64 = PnpGetObjectProperty(
                  v13,
                  (__int64)a2,
                  1LL,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                  (__int64)&v98,
                  (__int64)v93,
                  1,
                  (__int64)&v95,
                  v101);
          DeviceStatus = v64;
          if ( v64 >= 0 )
          {
            if ( v98 == 17 && v93[0] == -1 )
              goto LABEL_31;
          }
          else
          {
            if ( v64 != -1073741275 && v64 != -1073741789 )
              goto LABEL_31;
            DeviceStatus = 0;
          }
          goto LABEL_101;
        }
        goto LABEL_30;
      }
      return 0;
    case 0x10u:
      v56 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
        v56 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
      if ( v56 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *(_BYTE *)v12 = 0;
      v57 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v96,
              (unsigned int)&v100,
              (__int64)&v99);
      DeviceStatus = v57;
      if ( v57 != -1073741810 )
      {
        if ( v57 >= 0 && ((v96 & 0x100) != 0 || (v96 & 0x400) != 0 && v100 == 14) )
          *(_BYTE *)v12 = -1;
        goto LABEL_30;
      }
      return 0;
    case 0xEu:
      v81 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
        v81 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
      if ( v81 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v94,
                         (unsigned int)&DestinationString,
                         14,
                         (_DWORD)v12,
                         v15,
                         (__int64)v9);
      goto LABEL_175;
    case 0x14u:
      v82 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v82 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v82 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v94,
                         (unsigned int)&DestinationString,
                         15,
                         (_DWORD)v12,
                         v15,
                         (__int64)v9);
      goto LABEL_175;
    case 0x15u:
      v83 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v83 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v83 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v94,
                         (unsigned int)&DestinationString,
                         16,
                         (_DWORD)v12,
                         v15,
                         (__int64)v9);
      goto LABEL_175;
  }
  if ( v16 != 26 )
  {
    if ( v16 != 22 )
      goto LABEL_28;
    v21 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
    if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
      v21 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
    if ( v21 )
    {
LABEL_28:
      if ( v16 != 23 )
        return (unsigned int)DeviceStatus;
      v18 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundLowerFilters;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundLowerFilters )
        v18 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v18 )
        return (unsigned int)DeviceStatus;
    }
    v13 = v94;
    DeviceStatus = CmGetDeviceCompoundFilters(v94, (__int64)a5, (__int64)v12, v15, (__int64)v9);
    goto LABEL_30;
  }
  v84 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
    v84 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
  if ( v84 )
    return (unsigned int)DeviceStatus;
  *a5 = 17;
  *v9 = 1;
  if ( !v15 )
    return (unsigned int)-1073741789;
  v85 = pcchLength;
  v13 = v94;
  v86 = pcchLength;
  v87 = v94;
  *(_BYTE *)v12 = 0;
  v88 = PnpGetObjectProperty(
          v87,
          (__int64)a2,
          1LL,
          v86,
          0LL,
          (__int64)&DEVPKEY_Device_UpdateWithUngroupedDrivers,
          (__int64)&v98,
          (__int64)v93,
          1,
          (__int64)&v95,
          v14 & 0xFFFF0000);
  DeviceStatus = v88;
  if ( v88 < 0 )
  {
    if ( v88 == -1073741275 || v88 == -1073741789 )
      goto LABEL_266;
LABEL_30:
    v19 = (__int64)a2;
    goto LABEL_31;
  }
  if ( v98 == 17 && v95 == 1 )
  {
    v19 = (__int64)a2;
    v89 = v93[0] == 0;
    goto LABEL_262;
  }
LABEL_266:
  v90 = v85;
  v19 = (__int64)a2;
  v91 = PnpGetObjectProperty(
          v13,
          (__int64)a2,
          1LL,
          v90,
          0LL,
          (__int64)&DEVPKEY_Device_DriverInGroup,
          (__int64)&v98,
          (__int64)v93,
          1,
          (__int64)&v95,
          v101);
  DeviceStatus = v91;
  if ( v91 < 0 )
  {
    if ( v91 == -1073741275 || v91 == -1073741789 )
      DeviceStatus = 0;
    goto LABEL_31;
  }
  if ( v98 == 17 && v95 == 1 )
  {
    v89 = v93[0] == -1;
LABEL_262:
    if ( !v89 )
      goto LABEL_31;
    goto LABEL_101;
  }
LABEL_31:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(v13, v19, 16, 0, 1, 0, (__int64)&v108, 0LL);
  if ( !DeviceStatus )
  {
    PnpCtxRegCloseKey(v61, v108);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
