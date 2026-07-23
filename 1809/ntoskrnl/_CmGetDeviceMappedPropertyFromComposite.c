/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x14059C184 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1408FED80 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140007504 (RtlStringCbCopyExW.c)
 *     RtlUnalignedStringCchLengthW @ 0x140015DA0 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     wcscmp @ 0x140197840 (wcscmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _PnpMultiSzGetLen @ 0x14059E928 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceStatus @ 0x14059F508 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x14059F640 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406C8EEC (_NtPlugPlayGetDeviceProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406DAC64 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x1406EA8C4 (_CmGetDeviceParent.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EB90C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceRelationsList @ 0x1408FBADC (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x1408FE818 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x1408FF190 (_CmGetDeviceSiblings.c)
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
  int DeviceStatus; // ebx
  int *v11; // rsi
  wchar_t *v12; // r15
  __int64 v13; // r12
  int v14; // r8d
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // r12d
  __int64 v18; // rax
  size_t v19; // rdi
  size_t v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r9
  int v24; // edi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  int DeviceParent; // eax
  _DWORD *v29; // r14
  __int64 v31; // rcx
  int v32; // edx
  int v33; // ecx
  __int64 v34; // rax
  int v35; // edx
  int *v36; // r14
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  _DWORD *v40; // r11
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rax
  _DWORD *v51; // r14
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  size_t v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  size_t v59; // rdi
  int ObjectProperty; // eax
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rax
  int DeviceProperty; // eax
  __int64 v68; // rax
  int v69; // eax
  int v70; // eax
  int v71; // edx
  _DWORD *v72; // r14
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  int DeviceRelationsList; // eax
  unsigned int v79; // eax
  int v80; // r8d
  __int64 v81; // rax
  int DeviceSiblings; // eax
  _DWORD *v83; // r14
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  bool v88; // zf
  char v90[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v91; // [rsp+70h] [rbp-90h]
  int v92; // [rsp+78h] [rbp-88h] BYREF
  int v93; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v94; // [rsp+80h] [rbp-80h] BYREF
  int v95; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v96; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v97; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v98; // [rsp+90h] [rbp-70h]
  size_t pcchLength; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v100; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v102; // [rsp+B8h] [rbp-48h] BYREF
  char v103[4]; // [rsp+BCh] [rbp-44h] BYREF
  char v104[8]; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE Buf2[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE Buf1[16]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Str2[40]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[40]; // [rsp+140h] [rbp+40h] BYREF

  DeviceStatus = 0;
  v96 = 0;
  v11 = a8;
  v12 = a6;
  v13 = a1;
  pcchLength = a3;
  v14 = a9;
  v91 = a1;
  v100 = a5;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v11 = 0;
  v98 = v14 & 0xFFFF0000;
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
      v58 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v58 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v58 )
      {
        v59 = pcchLength;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           (__int64)a2,
                           1u,
                           pcchLength,
                           0LL,
                           (__int64)&DEVPKEY_Device_FriendlyName,
                           (__int64)a5,
                           (__int64)v12,
                           v15,
                           (__int64)&v92,
                           v14 & 0xFFFF0000);
        DeviceStatus = ObjectProperty;
        if ( !ObjectProperty || ObjectProperty == -1073741789 )
        {
          *v11 = v92;
        }
        else if ( ObjectProperty == -1073741275 )
        {
          v61 = v59;
          v24 = (int)a2;
          v62 = PnpGetObjectProperty(
                  v13,
                  (__int64)a2,
                  1u,
                  v61,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v100,
                  (__int64)v12,
                  a7,
                  (__int64)&v92,
                  v98);
          DeviceStatus = v62;
          if ( !v62 || v62 == -1073741789 )
          {
            *v11 = v92;
          }
          else if ( v62 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
          goto LABEL_44;
        }
        goto LABEL_43;
      }
      v84 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
        v84 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
      if ( v84 )
        return (unsigned int)DeviceStatus;
      v94 = v15 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v12, &v94);
      goto LABEL_225;
    case 0x100u:
      v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v39 )
        return (unsigned int)DeviceStatus;
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_43;
      *v11 = 2 * pcchLength + 2;
      *v40 = 18;
      if ( v15 < *v11 )
        return (unsigned int)-1073741789;
      v24 = (int)a2;
      DeviceStatus = RtlStringCbCopyExW(v12, (unsigned int)*v11, a2, 0LL, 0LL, 0x900u);
      if ( DeviceStatus >= 0 )
        goto LABEL_44;
      v72 = v100;
      goto LABEL_188;
    case 2u:
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( !v26 )
        goto LABEL_49;
      break;
  }
  if ( v16 == 3 )
  {
    v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v31 )
      goto LABEL_49;
  }
  if ( v16 == 12 )
  {
    v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( v73 )
      return (unsigned int)DeviceStatus;
LABEL_49:
    v93 = 0;
    v97 = 0;
    v96 = 0;
    DeviceStatus = CmGetDeviceStatus(v13, (_DWORD)a2, pcchLength, (unsigned int)&v93, (__int64)&v97, (__int64)&v96);
    if ( DeviceStatus >= 0 )
    {
      v32 = *(_DWORD *)(a4 + 16);
      v33 = v93;
      if ( v32 == 2 )
      {
        v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v34 )
          goto LABEL_54;
      }
      if ( v32 != 3 )
        goto LABEL_193;
      v63 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v63 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v63 )
      {
LABEL_54:
        v35 = 7;
      }
      else
      {
LABEL_193:
        if ( (v93 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v35 = 24;
      }
      v36 = v100;
      *v11 = 4;
      *v36 = v35;
      if ( a7 >= *v11 )
      {
        if ( *(_DWORD *)(a4 + 16) == 12 )
        {
          v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
            v74 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
          if ( !v74 )
          {
            if ( (int)PnpGetObjectProperty(
                        v91,
                        (__int64)a2,
                        1u,
                        pcchLength,
                        0LL,
                        (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                        (__int64)&v95,
                        (__int64)&v102,
                        4,
                        (__int64)&v92,
                        v98) >= 0
              && v95 == 24 )
            {
              v75 = v96;
              if ( v92 == 4 )
                v75 = v102;
              v96 = v75;
            }
            v33 = v93;
          }
        }
        v37 = *(_DWORD *)(a4 + 16);
        if ( v37 == 2 )
        {
          v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v38 )
          {
            *(_DWORD *)v12 = v33;
LABEL_62:
            v24 = (int)a2;
LABEL_63:
            LODWORD(v13) = v91;
            goto LABEL_44;
          }
        }
        else if ( v37 == 3 )
        {
          v64 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
            v64 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
          if ( !v64 )
          {
            v65 = (v33 & 0x400) != 0 ? v97 : 0;
LABEL_158:
            *(_DWORD *)v12 = v65;
            goto LABEL_62;
          }
        }
        v65 = v96;
        goto LABEL_158;
      }
      return (unsigned int)-1073741789;
    }
    goto LABEL_43;
  }
  v17 = 4;
  switch ( v16 )
  {
    case 4u:
      v54 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
        v54 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
      if ( v54 )
      {
        v55 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
          v55 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
        if ( v55 )
          return (unsigned int)DeviceStatus;
        v13 = v91;
        v56 = pcchLength;
        v57 = v91;
        *a5 = 17;
        *v11 = 1;
        DeviceStatus = PnpGetObjectProperty(
                         v57,
                         (__int64)a2,
                         1u,
                         v56,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         (__int64)&v95,
                         (__int64)Buf2,
                         16,
                         (__int64)&v92,
                         v14 & 0xFFFF0000);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = PnpGetObjectProperty(
                           v13,
                           (__int64)L"HTREE\\ROOT\\0",
                           1u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_BaseContainerId,
                           (__int64)&v95,
                           (__int64)Buf1,
                           16,
                           (__int64)&v92,
                           v98);
          if ( DeviceStatus >= 0 )
          {
            if ( a7 < *v11 )
              return (unsigned int)-1073741789;
            *(_BYTE *)v12 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
          }
        }
        goto LABEL_43;
      }
      goto LABEL_215;
    case 5u:
      v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
        v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
      if ( v42 )
      {
        v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v43 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v43 )
          return (unsigned int)DeviceStatus;
        *v11 = 1;
        *a5 = 17;
        if ( v15 < *v11 )
          return (unsigned int)-1073741789;
        LODWORD(v13) = v91;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_43;
        *(_BYTE *)v12 = 0;
        v44 = NtPlugPlayGetDeviceStatus(
                v13,
                (unsigned int)&DestinationString,
                (unsigned int)&v93,
                (unsigned int)&v97,
                (__int64)&v96);
        DeviceStatus = v44;
        if ( v44 != -1073741810 )
        {
          v24 = (int)a2;
          if ( v44 < 0 )
            goto LABEL_44;
LABEL_86:
          *(_BYTE *)v12 = -1;
          goto LABEL_44;
        }
        return 0;
      }
      v17 = 8;
      goto LABEL_215;
    case 6u:
      v45 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
        v45 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
      if ( v45 )
      {
        v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
          v46 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
        if ( v46 )
          return (unsigned int)DeviceStatus;
        *a5 = 17;
        *v11 = 1;
        if ( !v15 )
          return (unsigned int)-1073741789;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_62;
        v47 = v91;
        *(_BYTE *)v12 = 0;
        v48 = NtPlugPlayGetDeviceStatus(
                v47,
                (unsigned int)&DestinationString,
                (unsigned int)&v93,
                (unsigned int)&v97,
                (__int64)&v96);
        DeviceStatus = v48;
        if ( v48 != -1073741810 )
        {
          if ( v48 < 0 )
            goto LABEL_62;
          if ( (v93 & 0x8000) != 0 || (v93 & 0x400) != 0 && (v97 > 0x1D || (v71 = 591396864, !_bittest(&v71, v97))) )
          {
            *(_BYTE *)v12 = -1;
            goto LABEL_62;
          }
          v24 = (int)a2;
          if ( (v93 & 8) != 0 )
            goto LABEL_63;
          LODWORD(v13) = v91;
          v49 = PnpGetObjectProperty(
                  v91,
                  (__int64)a2,
                  1u,
                  pcchLength,
                  0LL,
                  (__int64)&DEVPKEY_Device_Capabilities,
                  (__int64)&v95,
                  (__int64)v103,
                  4,
                  (__int64)&v92,
                  v98);
          DeviceStatus = v49;
          if ( v49 != -1073741275 )
          {
            if ( v49 < 0 )
              goto LABEL_44;
            if ( (v103[0] & 0x40) != 0 )
              *(_BYTE *)v12 = -1;
            goto LABEL_63;
          }
        }
        return 0;
      }
      v17 = 16;
      goto LABEL_215;
    case 7u:
      v76 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
        v76 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
      if ( v76 )
        return (unsigned int)DeviceStatus;
      v17 = 32;
      goto LABEL_215;
    case 0xBu:
      v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
        v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
      if ( v77 )
        return (unsigned int)DeviceStatus;
      v17 = 64;
LABEL_215:
      DeviceRelationsList = CmGetDeviceRelationsList(v91, (_DWORD)a2, v17, 0, 0, (__int64)&v94);
      DeviceStatus = DeviceRelationsList;
      if ( DeviceRelationsList == -1073741772 || !DeviceRelationsList )
        return (unsigned int)-1073741275;
      if ( DeviceRelationsList != -1073741789 )
      {
        LODWORD(v13) = v91;
        goto LABEL_43;
      }
      v72 = v100;
      *v11 = 2 * v94;
      v79 = a7;
      *v72 = 8210;
      if ( v79 < *v11 )
        return (unsigned int)-1073741789;
      v24 = (int)a2;
      v80 = v17;
      LODWORD(v13) = v91;
      DeviceStatus = CmGetDeviceRelationsList(v91, (_DWORD)a2, v80, (_DWORD)v12, v79 >> 1, (__int64)&v94);
      if ( !DeviceStatus )
      {
        *v11 = 2 * PnpMultiSzGetLen(v12);
        return (unsigned int)DeviceStatus;
      }
LABEL_188:
      *v11 = 0;
      *v72 = 0;
      goto LABEL_44;
    case 8u:
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
      if ( v27 )
      {
        v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
          v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
        if ( v66 )
          return (unsigned int)DeviceStatus;
        *a5 = 7;
        *v11 = 4;
        LODWORD(v13) = v91;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_43;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v91,
                           (unsigned int)&DestinationString,
                           13,
                           (_DWORD)v12,
                           v15,
                           (__int64)&a7);
LABEL_164:
        DeviceStatus = DeviceProperty;
        if ( DeviceProperty == -1073741772 )
          return (unsigned int)-1073741275;
        goto LABEL_43;
      }
      LODWORD(v13) = v91;
      v94 = v15 >> 1;
      DeviceParent = CmGetDeviceParent(v91, a2, v12, &v94);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_43;
      v29 = v100;
      *v11 = 2 * v94;
      *v29 = 18;
LABEL_42:
      if ( a7 < *v11 )
        return (unsigned int)-1073741789;
      goto LABEL_43;
    case 9u:
      v81 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
        v81 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
      if ( v81 )
        return (unsigned int)DeviceStatus;
      LODWORD(v13) = v91;
      v94 = v15 >> 1;
      DeviceSiblings = CmGetDeviceChildren(v91, a2, v12, &v94);
LABEL_225:
      DeviceStatus = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 && DeviceSiblings )
        goto LABEL_43;
      v83 = v100;
      *v11 = 2 * v94;
      *v83 = 8210;
      goto LABEL_42;
    case 2u:
      v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
        v41 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
      if ( !v41 )
      {
        *v11 = 1;
        *a5 = 17;
        if ( v15 >= *v11 )
        {
          *(_BYTE *)v12 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(v91, a2, pcchLength) != 0);
          return (unsigned int)DeviceStatus;
        }
        return (unsigned int)-1073741789;
      }
      v50 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
        v50 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
      if ( v50 )
        return (unsigned int)DeviceStatus;
      v13 = v91;
      v92 = 78;
      DeviceStatus = CmGetDeviceRegProp(
                       v91,
                       (_DWORD)a2,
                       pcchLength,
                       37,
                       (__int64)v104,
                       (__int64)Str2,
                       (__int64)&v92,
                       v14);
      if ( DeviceStatus >= 0 )
      {
        if ( !wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          return (unsigned int)-1073741275;
        v51 = v100;
        *v11 = 16;
        *v51 = 13;
        if ( a7 >= *v11 )
        {
          v24 = (int)a2;
          DeviceStatus = CmGetDeviceContainerIdFromBase(v13, a2, Str2, SourceString);
          if ( DeviceStatus >= 0 )
          {
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
            if ( DeviceStatus >= 0 )
              DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v12);
          }
          goto LABEL_44;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_43;
    case 0xFu:
      v68 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v68 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v68 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v11 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_43;
      *(_BYTE *)v12 = 0;
      v69 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v93,
              (unsigned int)&v97,
              (__int64)&v96);
      DeviceStatus = v69;
      if ( v69 != -1073741810 )
      {
        if ( v69 >= 0 )
        {
          v24 = (int)a2;
          if ( (v93 & 0x2000000) != 0 )
            goto LABEL_44;
          v70 = PnpGetObjectProperty(
                  v13,
                  (__int64)a2,
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                  (__int64)&v95,
                  (__int64)v90,
                  1,
                  (__int64)&v92,
                  v98);
          DeviceStatus = v70;
          if ( v70 >= 0 )
          {
            if ( v95 == 17 && v90[0] == -1 )
              goto LABEL_44;
          }
          else
          {
            if ( v70 != -1073741275 && v70 != -1073741789 )
              goto LABEL_44;
            DeviceStatus = 0;
          }
          goto LABEL_86;
        }
        goto LABEL_43;
      }
      return 0;
    case 0x10u:
      v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
        v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
      if ( v52 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v11 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      LODWORD(v13) = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_43;
      *(_BYTE *)v12 = 0;
      v53 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v93,
              (unsigned int)&v97,
              (__int64)&v96);
      DeviceStatus = v53;
      if ( v53 != -1073741810 )
      {
        if ( v53 >= 0 && ((v93 & 0x100) != 0 || (v93 & 0x400) != 0 && v97 == 14) )
          *(_BYTE *)v12 = -1;
        goto LABEL_43;
      }
      return 0;
    case 0xEu:
      v85 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
        v85 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
      if ( v85 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      LODWORD(v13) = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_43;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v91,
                         (unsigned int)&DestinationString,
                         14,
                         (_DWORD)v12,
                         v15,
                         (__int64)v11);
      goto LABEL_164;
    case 0x14u:
      v86 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v86 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v86 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      LODWORD(v13) = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_43;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v91,
                         (unsigned int)&DestinationString,
                         15,
                         (_DWORD)v12,
                         v15,
                         (__int64)v11);
      goto LABEL_164;
    case 0x15u:
      v87 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v87 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v87 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      LODWORD(v13) = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_43;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v91,
                         (unsigned int)&DestinationString,
                         16,
                         (_DWORD)v12,
                         v15,
                         (__int64)v11);
      goto LABEL_164;
  }
  if ( v16 != 26 )
    return (unsigned int)DeviceStatus;
  v18 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
    v18 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
  if ( v18 )
    return (unsigned int)DeviceStatus;
  *a5 = 17;
  *v11 = 1;
  if ( !v15 )
    return (unsigned int)-1073741789;
  v19 = pcchLength;
  v13 = v91;
  v20 = pcchLength;
  v21 = v91;
  *(_BYTE *)v12 = 0;
  v22 = PnpGetObjectProperty(
          v21,
          (__int64)a2,
          1u,
          v20,
          0LL,
          (__int64)&DEVPKEY_Device_UpdateWithUngroupedDrivers,
          (__int64)&v95,
          (__int64)v90,
          1,
          (__int64)&v92,
          v14 & 0xFFFF0000);
  DeviceStatus = v22;
  if ( v22 < 0 )
  {
    if ( v22 == -1073741275 || v22 == -1073741789 )
      goto LABEL_30;
LABEL_43:
    v24 = (int)a2;
    goto LABEL_44;
  }
  if ( v95 == 17 && v92 == 1 )
  {
    v24 = (int)a2;
    v88 = v90[0] == 0;
    goto LABEL_256;
  }
LABEL_30:
  v23 = v19;
  v24 = (int)a2;
  v25 = PnpGetObjectProperty(
          v13,
          (__int64)a2,
          1u,
          v23,
          0LL,
          (__int64)&DEVPKEY_Device_DriverInGroup,
          (__int64)&v95,
          (__int64)v90,
          1,
          (__int64)&v92,
          v98);
  DeviceStatus = v25;
  if ( v25 < 0 )
  {
    if ( v25 == -1073741275 || v25 == -1073741789 )
      DeviceStatus = 0;
    goto LABEL_44;
  }
  if ( v95 == 17 && v92 == 1 )
  {
    v88 = v90[0] == -1;
LABEL_256:
    if ( !v88 )
      goto LABEL_44;
    goto LABEL_86;
  }
LABEL_44:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(v13, v24, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceStatus )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
