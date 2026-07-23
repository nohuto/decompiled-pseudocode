/*
 * XREFs of _CmUpdateDevicePanel @ 0x1406E9878
 * Callers:
 *     PiUpdateDevicePanel @ 0x1406EACBC (PiUpdateDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406EA2CC (_CmQueryDevicePanelPldProperty.c)
 *     _CmGetDeviceParent @ 0x1406EA8C4 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x1406EAA2C (_CmIsRootDevice.c)
 *     _CmBuildDevicePanelId @ 0x1407632A4 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x1407645A8 (_CmGetDevicePanelGroup.c)
 *     _CmAddPanelDevice @ 0x1408FC390 (_CmAddPanelDevice.c)
 *     _CmCreateDevicePanel @ 0x1408FC688 (_CmCreateDevicePanel.c)
 *     _CmRemovePanelDevice @ 0x1408FD6F0 (_CmRemovePanelDevice.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int64 v3; // rdi
  _BYTE *v4; // r13
  wchar_t *v5; // rsi
  void *v6; // r12
  int DevicePanelPldProperty; // eax
  int DeviceParent; // ebx
  PVOID v11; // rax
  int ObjectProperty; // eax
  const wchar_t *v13; // rbx
  SIZE_T v14; // rdx
  int v15; // eax
  char v17; // al
  __int64 v18; // rax
  PVOID PoolWithTag; // rax
  POOL_TYPE v20; // r10d
  __int64 v21; // rcx
  unsigned int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  wchar_t *v25; // rax
  int v26; // ebx
  SIZE_T i; // rdx
  _BYTE *v28; // rax
  void *v29; // rax
  int v30; // eax
  PVOID v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // ecx
  int v36; // r8d
  int DevicePanel; // eax
  PVOID v38; // rax
  unsigned int v39; // ebx
  _DWORD *v40; // rbx
  int v41; // eax
  unsigned int v42; // ecx
  PVOID v43; // r9
  __int64 v44; // r8
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // edx
  _DWORD *v49; // rbx
  unsigned int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // eax
  void *v53; // rax
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  char v55; // [rsp+64h] [rbp-9Ch] BYREF
  char v56; // [rsp+65h] [rbp-9Bh]
  unsigned int v57; // [rsp+68h] [rbp-98h] BYREF
  char v58[4]; // [rsp+6Ch] [rbp-94h] BYREF
  int v59; // [rsp+70h] [rbp-90h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  PVOID v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+90h] [rbp-70h] BYREF
  unsigned int DevicePanelGroup; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v65; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v66; // [rsp+9Ch] [rbp-64h]
  unsigned int v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A4h] [rbp-5Ch] BYREF
  PVOID v69; // [rsp+B0h] [rbp-50h]
  PVOID v70; // [rsp+B8h] [rbp-48h]
  void *v71; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v72; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v73[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v74[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+F8h] [rbp-8h] BYREF
  int v77; // [rsp+108h] [rbp+8h]

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  v72 = 0LL;
  v4 = 0LL;
  NumberOfBytes = 0LL;
  v5 = 0LL;
  v68 = 0LL;
  v6 = 0LL;
  v62 = 0LL;
  v66 = 0;
  v69 = 0LL;
  v63 = 0;
  DevicePanelGroup = 0;
  v65 = 0;
  P = 0LL;
  v70 = 0LL;
  v56 = 0;
  v71 = 0LL;
  v55 = 0;
  v54 = 0;
  v58[0] = 0;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             v3,
                             (int)a2,
                             a3,
                             (int)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v72,
                             (__int64)&v68 + 4,
                             (SIZE_T)&NumberOfBytes,
                             (__int64)&v68);
  DeviceParent = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    NumberOfBytes = 0LL;
    goto LABEL_4;
  }
  if ( DevicePanelPldProperty >= 0 )
  {
    if ( !NumberOfBytes )
      goto LABEL_4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
    v69 = PoolWithTag;
    if ( PoolWithTag )
    {
      v63 = 200;
      DeviceParent = CmGetDeviceParent(v3, a2, PoolWithTag, &v63);
      if ( DeviceParent < 0 )
        goto LABEL_27;
      DeviceParent = PnpGetObjectProperty(
                       v3,
                       (__int64)v69,
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v59,
                       (__int64)v73,
                       16,
                       (__int64)&v57,
                       0);
      if ( DeviceParent < 0 )
        goto LABEL_27;
      if ( v59 != 13 || v57 != 16 )
      {
        DeviceParent = -1073741823;
        goto LABEL_27;
      }
      v63 = 1;
      DevicePanelGroup = CmGetDevicePanelGroup(NumberOfBytes);
      v22 = *(_DWORD *)(v21 + 8);
      v23 = 0;
      v24 = (v22 >> 3) & 7;
      if ( (unsigned int)v24 < 7 )
        v23 = dword_14036A6D8[v24];
      v65 = v23;
      v25 = (wchar_t *)ExAllocatePoolWithTag(v20, 0x72uLL, 0x52504E50u);
      v5 = v25;
      if ( !v25 )
        goto LABEL_102;
      DeviceParent = CmBuildDevicePanelId(v73, DevicePanelGroup, v65, v25);
      if ( DeviceParent < 0 )
        goto LABEL_27;
      v26 = 16;
      for ( i = 16LL; ; i = v57 )
      {
        v67 = v26;
        v28 = ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
        v4 = v28;
        if ( !v28 )
          goto LABEL_102;
        DeviceParent = PnpGetObjectProperty(
                         v3,
                         (__int64)a2,
                         1u,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                         (__int64)&v59,
                         (__int64)v28,
                         v26,
                         (__int64)&v57,
                         0);
        if ( DeviceParent != -1073741789 )
          goto LABEL_79;
        if ( v57 <= v67 )
          break;
        ExFreePoolWithTag(v4, 0);
        v26 = v57;
      }
      DeviceParent = -1073741823;
LABEL_79:
      if ( DeviceParent == -1073741275 )
        goto LABEL_80;
      if ( DeviceParent < 0 )
        goto LABEL_27;
      if ( v59 != 4099 || v57 < 0x10 || (*v4 & 0x1F) == 0 )
      {
LABEL_80:
        ExFreePoolWithTag(v4, 0);
        v4 = 0LL;
      }
LABEL_4:
      v11 = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
      P = v11;
      if ( v11 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           v3,
                           (__int64)a2,
                           1u,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_Device_PanelId,
                           (__int64)&v59,
                           (__int64)v11,
                           114,
                           (__int64)&v57,
                           0);
        DeviceParent = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
          goto LABEL_6;
        if ( ObjectProperty < 0 )
          goto LABEL_27;
        if ( v59 != 18 || v57 < 2 )
        {
LABEL_6:
          ExFreePoolWithTag(P, 0);
          v13 = 0LL;
          P = 0LL;
        }
        else
        {
          v13 = (const wchar_t *)P;
        }
        if ( v5 )
        {
          if ( v13 && !wcsicmp(v13, v5) )
          {
            v17 = 0;
LABEL_45:
            if ( v13 && v17 )
            {
              DeviceParent = CmRemovePanelDevice(v3, v13, a2);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v13 = (const wchar_t *)P;
            }
            if ( v5 )
            {
              v18 = -1LL;
              do
                ++v18;
              while ( v5[v18] );
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (__int64)a2,
                               1u,
                               a3,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelId,
                               18,
                               (__int64)v5,
                               2 * (int)v18 + 2,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (__int64)a2,
                               1u,
                               a3,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelGroup,
                               7,
                               (__int64)&DevicePanelGroup,
                               4u,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (__int64)a2,
                               1u,
                               a3,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelSide,
                               7,
                               (__int64)&v65,
                               4u,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v13 = (const wchar_t *)P;
            }
            else
            {
              if ( !v13 )
                goto LABEL_9;
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
            }
            if ( v5 && NumberOfBytes )
            {
              if ( v4 )
              {
                v54 = (unsigned __int16)*((_DWORD *)v4 + 1);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (__int64)a2,
                                 1u,
                                 a3,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelWidth,
                                 7,
                                 (__int64)&v54,
                                 4u,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v54 = *((unsigned __int16 *)v4 + 3);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (__int64)a2,
                                 1u,
                                 a3,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelHeight,
                                 7,
                                 (__int64)&v54,
                                 4u,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v54 = (unsigned __int16)*((_DWORD *)v4 + 2);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (__int64)a2,
                                 1u,
                                 a3,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelLength,
                                 7,
                                 (__int64)&v54,
                                 4u,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v13 = (const wchar_t *)P;
              }
              else
              {
                v54 = (unsigned __int16)*(_DWORD *)(NumberOfBytes + 4);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (__int64)a2,
                                 1u,
                                 a3,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelWidth,
                                 7,
                                 (__int64)&v54,
                                 4u,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v54 = *(unsigned __int16 *)(NumberOfBytes + 6);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (__int64)a2,
                                 1u,
                                 a3,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelHeight,
                                 7,
                                 (__int64)&v54,
                                 4u,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v13 = (const wchar_t *)P;
                if ( P )
                  PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
              }
            }
            else if ( v13 )
            {
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelWidth, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelHeight, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
            }
            v14 = NumberOfBytes;
            if ( v5
              && NumberOfBytes
              && *(_WORD *)(NumberOfBytes + 18) != 0xFFFF
              && (unsigned __int16)*(_DWORD *)(NumberOfBytes + 16) != 0xFFFF )
            {
              goto LABEL_124;
            }
            goto LABEL_10;
          }
        }
        else if ( !v13 )
        {
LABEL_9:
          v14 = NumberOfBytes;
LABEL_10:
          if ( !v4 )
          {
            if ( v13 )
            {
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelPositionX, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelPositionY, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
            }
            goto LABEL_13;
          }
LABEL_124:
          if ( v4 )
          {
            v54 = *((unsigned __int16 *)v4 + 5);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (__int64)a2,
                             1u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionX,
                             7,
                             (__int64)&v54,
                             4u,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v54 = (unsigned __int16)*((_DWORD *)v4 + 3);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (__int64)a2,
                             1u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionY,
                             7,
                             (__int64)&v54,
                             4u,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v54 = *((unsigned __int16 *)v4 + 7);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (__int64)a2,
                             1u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionZ,
                             7,
                             (__int64)&v54,
                             4u,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v13 = (const wchar_t *)P;
          }
          else
          {
            v54 = *(unsigned __int16 *)(v14 + 18);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (__int64)a2,
                             1u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionX,
                             7,
                             (__int64)&v54,
                             4u,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v54 = (unsigned __int16)*(_DWORD *)(NumberOfBytes + 16);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (__int64)a2,
                             1u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionY,
                             7,
                             (__int64)&v54,
                             4u,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v13 = (const wchar_t *)P;
            if ( P )
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
          }
LABEL_13:
          if ( v5 && NumberOfBytes )
          {
            if ( v4 )
            {
              v54 = ((*(_DWORD *)v4 >> 5) & 0x1FFu) % 0x168;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (__int64)a2,
                               1u,
                               a3,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelRotationX,
                               7,
                               (__int64)&v54,
                               4u,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v54 = ((*(_DWORD *)v4 >> 14) & 0x1FFu) % 0x168;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (__int64)a2,
                               1u,
                               a3,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelRotationY,
                               7,
                               (__int64)&v54,
                               4u,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v54 = (*(_DWORD *)v4 >> 23) % 0x168u;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (__int64)a2,
                               1u,
                               a3,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelRotationZ,
                               7,
                               (__int64)&v54,
                               4u,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v13 = (const wchar_t *)P;
              goto LABEL_15;
            }
            v54 = 45 * ((*(_DWORD *)(NumberOfBytes + 12) >> 19) & 0xFu) % 0x168;
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (__int64)a2,
                             1u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelRotationZ,
                             7,
                             (__int64)&v54,
                             4u,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v13 = (const wchar_t *)P;
            if ( !P )
              goto LABEL_15;
            PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
            v29 = &DEVPKEY_Device_PanelRotationY;
          }
          else
          {
            if ( !v13 )
              goto LABEL_15;
            PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
            PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
            v29 = &DEVPKEY_Device_PanelRotationZ;
          }
          PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)v29, 0, 0LL, 0, 0);
LABEL_15:
          if ( !v5 || !NumberOfBytes || (*(_DWORD *)NumberOfBytes & 0x80u) != 0 )
          {
            if ( v13 )
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelColor, 0, 0LL, 0, 0);
LABEL_18:
            if ( v5 && NumberOfBytes )
            {
              v58[0] = -((*(_BYTE *)(NumberOfBytes + 8) & 1) != 0);
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (__int64)a2,
                               1u,
                               a3,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelVisible,
                               17,
                               (__int64)v58,
                               1u,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
            }
            else if ( v13 )
            {
              PnpSetObjectProperty(v3, (__int64)a2, 1u, a3, 0LL, (__int64)&DEVPKEY_Device_PanelVisible, 0, 0LL, 0, 0);
            }
            if ( v5 )
            {
              if ( v56 )
              {
                v30 = CmAddPanelDevice(v3, v5, a2);
                DeviceParent = v30;
                if ( v30 < 0 )
                  goto LABEL_27;
              }
            }
            v75 = 2;
            *(_OWORD *)v74 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
            v77 = 2;
            v76 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
            while ( 2 )
            {
              v15 = CmQueryDevicePanelPldProperty(
                      v3,
                      (int)a2,
                      a3,
                      (int)v74,
                      (__int64)&v72,
                      (__int64)&v68 + 4,
                      (SIZE_T)&NumberOfBytes,
                      (__int64)&v68);
              DeviceParent = v15;
              if ( v15 == -1073741275 )
              {
                DeviceParent = 0;
                goto LABEL_25;
              }
              if ( v15 < 0 )
                goto LABEL_25;
              if ( !v63 )
              {
                v31 = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
                v69 = v31;
                if ( !v31 )
                  goto LABEL_224;
                v63 = 200;
                DeviceParent = CmGetDeviceParent(v3, a2, v31, &v63);
                if ( DeviceParent < 0 )
                  goto LABEL_25;
                DeviceParent = PnpGetObjectProperty(
                                 v3,
                                 (__int64)v69,
                                 1u,
                                 0LL,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_ContainerId,
                                 (__int64)&v59,
                                 (__int64)v73,
                                 16,
                                 (__int64)&v57,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_25;
                if ( v59 != 13 || v57 != 16 )
                {
                  DeviceParent = -1073741823;
                  goto LABEL_25;
                }
                v63 = 1;
              }
              DevicePanelGroup = CmGetDevicePanelGroup(NumberOfBytes);
              v33 = DevicePanelGroup;
              v34 = 0LL;
              v35 = (*(_DWORD *)(v32 + 8) >> 3) & 7;
              if ( v35 < 7 )
                v34 = (unsigned int)dword_14036A6D8[v35];
              v65 = v34;
              if ( v5 )
              {
LABEL_154:
                DeviceParent = CmBuildDevicePanelId(v73, v33, v34, v5);
                if ( DeviceParent >= 0 )
                {
                  DevicePanel = CmCreateDevicePanel(v3, (_DWORD)v5, v36, (unsigned int)&v71, (__int64)&v55);
                  v6 = v71;
                  DeviceParent = DevicePanel;
                  if ( DevicePanel >= 0 )
                  {
                    v54 = (unsigned __int16)*(_DWORD *)(NumberOfBytes + 4);
                    DeviceParent = PnpSetObjectProperty(
                                     v3,
                                     (__int64)v5,
                                     6u,
                                     (__int64)v71,
                                     0LL,
                                     (__int64)&DEVPKEY_DevicePanel_Width,
                                     7,
                                     (__int64)&v54,
                                     4u,
                                     0);
                    if ( DeviceParent >= 0 )
                    {
                      v54 = *(unsigned __int16 *)(NumberOfBytes + 6);
                      DeviceParent = PnpSetObjectProperty(
                                       v3,
                                       (__int64)v5,
                                       6u,
                                       (__int64)v6,
                                       0LL,
                                       (__int64)&DEVPKEY_DevicePanel_Height,
                                       7,
                                       (__int64)&v54,
                                       4u,
                                       0);
                      if ( DeviceParent >= 0 )
                      {
                        if ( (*(_DWORD *)NumberOfBytes & 0x80u) != 0 )
                        {
                          if ( !v55 )
                            PnpSetObjectProperty(
                              v3,
                              (__int64)v5,
                              6u,
                              (__int64)v6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_Color,
                              0,
                              0LL,
                              0,
                              0);
                        }
                        else
                        {
                          v54 = (unsigned __int8)BYTE1(*(_DWORD *)NumberOfBytes) | (((*(unsigned __int8 *)(NumberOfBytes + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)NumberOfBytes)) << 8) | 0xFF000000;
                          DeviceParent = PnpSetObjectProperty(
                                           v3,
                                           (__int64)v5,
                                           6u,
                                           (__int64)v6,
                                           0LL,
                                           (__int64)&DEVPKEY_DevicePanel_Color,
                                           7,
                                           (__int64)&v54,
                                           4u,
                                           0);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                        }
                        v38 = v62;
                        v39 = v66;
                        if ( !v62 )
                          v39 = 16;
                        while ( 1 )
                        {
                          v66 = v39;
                          if ( !v38 )
                          {
                            v38 = ExAllocatePoolWithTag(PagedPool, v39, 0x52504E50u);
                            v62 = v38;
                            if ( !v38 )
                              goto LABEL_224;
                          }
                          DeviceParent = PnpGetObjectProperty(
                                           v3,
                                           (__int64)a2,
                                           1u,
                                           a3,
                                           0LL,
                                           (__int64)&v76,
                                           (__int64)&v59,
                                           (__int64)v38,
                                           v39,
                                           (__int64)&v57,
                                           0);
                          if ( DeviceParent != -1073741789 )
                            goto LABEL_171;
                          if ( v57 <= v66 )
                            break;
                          ExFreePoolWithTag(v62, 0);
                          v39 = v57;
                          v38 = 0LL;
                          v62 = 0LL;
                        }
                        DeviceParent = -1073741823;
LABEL_171:
                        if ( DeviceParent == -1073741275 )
                        {
                          v40 = v62;
                          *(_DWORD *)v62 &= 0xFFFFFFE0;
                        }
                        else
                        {
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          if ( v59 == 4099 && v57 >= 0x10 )
                          {
                            v40 = v62;
                          }
                          else
                          {
                            v40 = v62;
                            *(_DWORD *)v62 &= 0xFFFFFFE0;
                          }
                        }
                        if ( (*v40 & 0x1F) == 0 )
                        {
                          if ( v55 )
                          {
LABEL_222:
                            ++v75;
                            ++v77;
                            continue;
                          }
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointType,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointSourcePanelEdge,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetPanelId,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetPanelEdge,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetPositionX,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetPositionY,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetPositionZ,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetRotationX,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetRotationY,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointTargetRotationZ,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointPositionMin,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointPositionMax,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointPositionDefault,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointPositionCurrent,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointRotationMin,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointRotationMax,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointRotationDefault,
                            0,
                            0LL,
                            0,
                            0);
                          PnpSetObjectProperty(
                            v3,
                            (__int64)v5,
                            6u,
                            (__int64)v6,
                            0LL,
                            (__int64)&DEVPKEY_DevicePanel_JointRotationCurrent,
                            0,
                            0LL,
                            0,
                            0);
                          v53 = &DEVPKEY_DevicePanel_JointDetachable;
LABEL_221:
                          PnpSetObjectProperty(v3, (__int64)v5, 6u, (__int64)v6, 0LL, (__int64)v53, 0, 0LL, 0, 0);
                          goto LABEL_222;
                        }
                        v54 = (*v40 >> 5) & 0xF;
                        DeviceParent = PnpSetObjectProperty(
                                         v3,
                                         (__int64)v5,
                                         6u,
                                         (__int64)v6,
                                         0LL,
                                         (__int64)&DEVPKEY_DevicePanel_JointType,
                                         7,
                                         (__int64)&v54,
                                         4u,
                                         0);
                        if ( DeviceParent < 0 )
                          goto LABEL_25;
                        v41 = 0;
                        v42 = (*(_DWORD *)v62 >> 9) & 7;
                        if ( v42 < 5 )
                          v41 = dword_140384550[v42];
                        v54 = v41;
                        DeviceParent = PnpSetObjectProperty(
                                         v3,
                                         (__int64)v5,
                                         6u,
                                         (__int64)v6,
                                         0LL,
                                         (__int64)&DEVPKEY_DevicePanel_JointSourcePanelEdge,
                                         7,
                                         (__int64)&v54,
                                         4u,
                                         0);
                        if ( DeviceParent < 0 )
                          goto LABEL_25;
                        v43 = v70;
                        if ( v70 || (v70 = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u), (v43 = v70) != 0LL) )
                        {
                          v44 = 0LL;
                          if ( ((*(_DWORD *)v62 >> 20) & 7) != 7 )
                            v44 = (unsigned int)dword_14036A6D8[(*(_DWORD *)v62 >> 20) & 7];
                          v54 = v44;
                          DeviceParent = CmBuildDevicePanelId(v73, (unsigned __int8)(*(_DWORD *)v62 >> 12), v44, v43);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          v45 = -1LL;
                          do
                            ++v45;
                          while ( *((_WORD *)v70 + v45) );
                          DeviceParent = PnpSetObjectProperty(
                                           v3,
                                           (__int64)v5,
                                           6u,
                                           (__int64)v6,
                                           0LL,
                                           (__int64)&DEVPKEY_DevicePanel_JointTargetPanelId,
                                           18,
                                           (__int64)v70,
                                           2 * (int)v45 + 2,
                                           0);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          v46 = 0;
                          v47 = (*(_DWORD *)v62 >> 23) & 7;
                          if ( v47 < 5 )
                            v46 = dword_140384550[v47];
                          v54 = v46;
                          DeviceParent = PnpSetObjectProperty(
                                           v3,
                                           (__int64)v5,
                                           6u,
                                           (__int64)v6,
                                           0LL,
                                           (__int64)&DEVPKEY_DevicePanel_JointTargetPanelEdge,
                                           7,
                                           (__int64)&v54,
                                           4u,
                                           0);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          v54 = (unsigned __int16)*((_DWORD *)v62 + 2);
                          DeviceParent = PnpSetObjectProperty(
                                           v3,
                                           (__int64)v5,
                                           6u,
                                           (__int64)v6,
                                           0LL,
                                           (__int64)&DEVPKEY_DevicePanel_JointTargetPositionX,
                                           7,
                                           (__int64)&v54,
                                           4u,
                                           0);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          v54 = *((unsigned __int16 *)v62 + 5);
                          DeviceParent = PnpSetObjectProperty(
                                           v3,
                                           (__int64)v5,
                                           6u,
                                           (__int64)v6,
                                           0LL,
                                           (__int64)&DEVPKEY_DevicePanel_JointTargetPositionY,
                                           7,
                                           (__int64)&v54,
                                           4u,
                                           0);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          v54 = (unsigned __int16)*((_DWORD *)v62 + 3);
                          DeviceParent = PnpSetObjectProperty(
                                           v3,
                                           (__int64)v5,
                                           6u,
                                           (__int64)v6,
                                           0LL,
                                           (__int64)&DEVPKEY_DevicePanel_JointTargetPositionZ,
                                           7,
                                           (__int64)&v54,
                                           4u,
                                           0);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          v48 = (1813430637 * (unsigned __int64)(*((_WORD *)v62 + 7) & 0x1FF)) >> 32;
                          v54 = (*((_WORD *)v62 + 7) & 0x1FF)
                              - 360 * ((v48 + (((*((_WORD *)v62 + 7) & 0x1FFu) - v48) >> 1)) >> 8);
                          DeviceParent = PnpSetObjectProperty(
                                           v3,
                                           (__int64)v5,
                                           6u,
                                           (__int64)v6,
                                           0LL,
                                           (__int64)&DEVPKEY_DevicePanel_JointTargetRotationZ,
                                           7,
                                           (__int64)&v54,
                                           4u,
                                           0);
                          if ( DeviceParent < 0 )
                            goto LABEL_25;
                          v49 = v62;
                          v50 = *(_DWORD *)v62 & 0x1E0;
                          if ( v50 == 32 )
                          {
                            v54 = 0;
                            if ( (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointPositionMin,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0 )
                              goto LABEL_222;
                            v54 = (unsigned __int16)v49[1] + HIWORD(v49[1]);
                            if ( (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointPositionMax,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0 )
                              goto LABEL_222;
                            v54 = *((unsigned __int16 *)v49 + 3);
                            if ( (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointPositionDefault,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0
                              || (unsigned int)PnpGetObjectProperty(
                                                 v3,
                                                 (__int64)v5,
                                                 6u,
                                                 (__int64)v6,
                                                 0LL,
                                                 (__int64)&DEVPKEY_DevicePanel_JointPositionCurrent,
                                                 (__int64)&v59,
                                                 0LL,
                                                 0,
                                                 (__int64)&v57,
                                                 0) == -1073741275
                              && (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointPositionCurrent,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0 )
                            {
                              goto LABEL_222;
                            }
                            if ( v55 )
                              goto LABEL_222;
                            PnpSetObjectProperty(
                              v3,
                              (__int64)v5,
                              6u,
                              (__int64)v6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointRotationMin,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (__int64)v5,
                              6u,
                              (__int64)v6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointRotationMax,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (__int64)v5,
                              6u,
                              (__int64)v6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointRotationDefault,
                              0,
                              0LL,
                              0,
                              0);
                            v53 = &DEVPKEY_DevicePanel_JointRotationCurrent;
                          }
                          else
                          {
                            if ( v50 <= 0x20 )
                              goto LABEL_222;
                            if ( v50 > 0x60 )
                              goto LABEL_222;
                            v54 = 0;
                            if ( (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointRotationMin,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0 )
                              goto LABEL_222;
                            v51 = (unsigned __int16)v49[1] + HIWORD(v49[1]);
                            if ( v51 > 0x168 )
                              v51 = 360;
                            v54 = v51;
                            if ( (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointRotationMax,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0 )
                              goto LABEL_222;
                            v52 = *((unsigned __int16 *)v49 + 3);
                            if ( v52 > 0x168 )
                              v52 = 360;
                            v54 = v52;
                            if ( (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointRotationDefault,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0
                              || (unsigned int)PnpGetObjectProperty(
                                                 v3,
                                                 (__int64)v5,
                                                 6u,
                                                 (__int64)v6,
                                                 0LL,
                                                 (__int64)&DEVPKEY_DevicePanel_JointRotationCurrent,
                                                 (__int64)&v59,
                                                 0LL,
                                                 0,
                                                 (__int64)&v57,
                                                 0) == -1073741275
                              && (int)PnpSetObjectProperty(
                                        v3,
                                        (__int64)v5,
                                        6u,
                                        (__int64)v6,
                                        0LL,
                                        (__int64)&DEVPKEY_DevicePanel_JointRotationCurrent,
                                        7,
                                        (__int64)&v54,
                                        4u,
                                        0) < 0 )
                            {
                              goto LABEL_222;
                            }
                            if ( v55 )
                              goto LABEL_222;
                            PnpSetObjectProperty(
                              v3,
                              (__int64)v5,
                              6u,
                              (__int64)v6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointPositionMin,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (__int64)v5,
                              6u,
                              (__int64)v6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointPositionMax,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (__int64)v5,
                              6u,
                              (__int64)v6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointPositionDefault,
                              0,
                              0LL,
                              0,
                              0);
                            v53 = &DEVPKEY_DevicePanel_JointPositionCurrent;
                          }
                          goto LABEL_221;
                        }
                        goto LABEL_224;
                      }
                    }
                  }
                }
LABEL_25:
                if ( v6 )
                  ZwClose(v6);
                goto LABEL_27;
              }
              break;
            }
            v5 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
            if ( v5 )
            {
              v33 = DevicePanelGroup;
              v34 = v65;
              goto LABEL_154;
            }
LABEL_224:
            DeviceParent = -1073741801;
            goto LABEL_25;
          }
          v54 = (unsigned __int8)BYTE1(*(_DWORD *)NumberOfBytes) | (((*(unsigned __int8 *)(NumberOfBytes + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)NumberOfBytes)) << 8) | 0xFF000000;
          DeviceParent = PnpSetObjectProperty(
                           v3,
                           (__int64)a2,
                           1u,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_Device_PanelColor,
                           7,
                           (__int64)&v54,
                           4u,
                           0);
          if ( DeviceParent >= 0 )
          {
            v13 = (const wchar_t *)P;
            goto LABEL_18;
          }
LABEL_27:
          if ( v69 )
            ExFreePoolWithTag(v69, 0);
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v70 )
            ExFreePoolWithTag(v70, 0);
          goto LABEL_35;
        }
        v17 = 1;
        v56 = 1;
        goto LABEL_45;
      }
LABEL_102:
      DeviceParent = -1073741801;
      goto LABEL_27;
    }
    DeviceParent = -1073741801;
  }
LABEL_35:
  if ( v72 )
    ExFreePoolWithTag(v72, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v62 )
    ExFreePoolWithTag(v62, 0);
  return (unsigned int)DeviceParent;
}
