/*
 * XREFs of _CmDeleteDeviceWorker @ 0x1408F887C
 * Callers:
 *     _CmDeleteDevice @ 0x1408F7968 (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x14059FD20 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceMappedProperty @ 0x1406EA6D4 (_CmSetDeviceMappedProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EB90C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingDeviceList @ 0x14074AB28 (_CmGetMatchingDeviceList.c)
 *     _CmDeleteDeviceInterface @ 0x1408F7A94 (_CmDeleteDeviceInterface.c)
 *     _CmDeleteDeviceRegKey @ 0x1408F8274 (_CmDeleteDeviceRegKey.c)
 *     _CmRemoveDeviceFromContainer @ 0x1408FAA54 (_CmRemoveDeviceFromContainer.c)
 *     _CmRaiseDeleteEvent @ 0x1408FC154 (_CmRaiseDeleteEvent.c)
 *     _CmRemovePanelDevice @ 0x1408FD6F0 (_CmRemovePanelDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1408FED80 (_CmGetDeviceMappedPropertyKeys.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(__int64 a1, const WCHAR *a2, __int16 a3)
{
  int v5; // esi
  PVOID v6; // r13
  PVOID v7; // r14
  int v8; // ebx
  int v9; // edi
  int DeviceRegProp; // eax
  int ObjectProperty; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  unsigned int v13; // ebx
  _WORD *i; // rbx
  __int64 v15; // rax
  PVOID v16; // rsi
  int j; // eax
  int MatchingDeviceList; // ebx
  unsigned int v19; // ebx
  _WORD *k; // rbx
  __int64 v21; // rax
  unsigned int v22; // esi
  int *v23; // r14
  int v24; // eax
  int v25; // r9d
  PVOID v26; // r14
  unsigned int v27; // esi
  unsigned int v28; // r14d
  int DeviceMappedPropertyKeys; // eax
  unsigned int v30; // ebx
  int v31; // eax
  PVOID v33; // [rsp+20h] [rbp-E0h]
  unsigned int v34; // [rsp+28h] [rbp-D8h]
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  PVOID v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  PVOID PoolWithTag; // [rsp+90h] [rbp-70h]
  _BYTE v44[8]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v45[2]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t v46[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v47[40]; // [rsp+110h] [rbp+10h] BYREF

  Handle = 0LL;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  v37 = 0;
  v7 = 0LL;
  v38 = 0;
  v8 = 0;
  v40 = 0LL;
  PoolWithTag = 0LL;
  if ( a3 )
    return (unsigned int)-1073741811;
  v9 = CmOpenDeviceRegKey(a1, (__int64)a2, 16, 0, 33619970, 0, (__int64)&Handle, 0LL);
  if ( v9 >= 0 )
  {
    NumberOfBytes = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      a1,
                      (__int64)a2,
                      (__int64)Handle,
                      37,
                      (__int64)v44,
                      (__int64)v46,
                      (__int64)&NumberOfBytes,
                      0);
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp == -1073741275 )
        goto LABEL_10;
      goto LABEL_6;
    }
    DeviceRegProp = CmGetDeviceContainerIdFromBase(a1, (__int64)a2, v46, v47);
    if ( DeviceRegProp < 0 || (DeviceRegProp = CmRemoveDeviceFromContainer(a1, v47, v46, a2), DeviceRegProp < 0) )
    {
LABEL_6:
      v9 = DeviceRegProp;
      goto LABEL_96;
    }
LABEL_10:
    while ( 1 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         (__int64)a2,
                         1u,
                         (__int64)Handle,
                         0LL,
                         (__int64)&DEVPKEY_Device_PanelId,
                         (__int64)&v41,
                         (__int64)v7,
                         v8,
                         (__int64)&NumberOfBytes,
                         0);
      if ( ObjectProperty != -1073741789 )
        break;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v8 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ObjectProperty = -1073741801;
        break;
      }
    }
    if ( ObjectProperty < 0 )
    {
      if ( ObjectProperty == -1073741275 )
      {
        while ( 1 )
        {
LABEL_23:
          MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                                  a1,
                                                  0LL,
                                                  (__int64)a2,
                                                  0,
                                                  0LL,
                                                  0LL,
                                                  (__int64)v6,
                                                  v5,
                                                  (__int64)&v37,
                                                  0);
          if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
            goto LABEL_30;
          if ( 2 * (unsigned __int64)v37 > 0xFFFFFFFF )
          {
            MatchingFilteredDeviceInterfaceList = -1073741811;
            goto LABEL_31;
          }
          v13 = 2 * v37;
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          v6 = ExAllocatePoolWithTag(PagedPool, v13, 0x52504E50u);
          if ( !v6 )
            break;
          v5 = v37;
        }
        MatchingFilteredDeviceInterfaceList = -1073741801;
LABEL_30:
        if ( MatchingFilteredDeviceInterfaceList )
        {
LABEL_31:
          v9 = MatchingFilteredDeviceInterfaceList;
          goto LABEL_90;
        }
        if ( v37 )
        {
          for ( i = v6; *i; i += v15 + 1 )
          {
            CmDeleteDeviceInterface(a1, (__int64)i, 0);
            v15 = -1LL;
            do
              ++v15;
            while ( i[v15] );
          }
        }
        v16 = P;
        for ( j = 0; ; j = v38 )
        {
          MatchingDeviceList = CmGetMatchingDeviceList(
                                 a1,
                                 (__int64)&CmMatchLastKnownParentCallback,
                                 (__int64)a2,
                                 (__int64)v16,
                                 j,
                                 (__int64)&v38,
                                 0);
          if ( MatchingDeviceList != -1073741789 )
            goto LABEL_46;
          if ( 2 * (unsigned __int64)v38 > 0xFFFFFFFF )
          {
            MatchingDeviceList = -1073741811;
            goto LABEL_47;
          }
          v19 = 2 * v38;
          if ( v16 )
            ExFreePoolWithTag(v16, 0);
          P = ExAllocatePoolWithTag(PagedPool, v19, 0x52504E50u);
          v16 = P;
          if ( !P )
            break;
        }
        MatchingDeviceList = -1073741801;
LABEL_46:
        if ( MatchingDeviceList )
        {
LABEL_47:
          v9 = MatchingDeviceList;
          goto LABEL_88;
        }
        if ( v38 )
        {
          for ( k = v16; *k; k += v21 + 1 )
          {
            PnpSetObjectProperty(a1, (__int64)k, 1u, 0LL, 0LL, (__int64)&DEVPKEY_Device_LastKnownParent, 0, 0LL, 0, 0);
            v21 = -1LL;
            do
              ++v21;
            while ( k[v21] );
          }
        }
        v22 = 0;
        v23 = (int *)v45;
        v45[0] = _mm_load_si128((const __m128i *)&_xmm);
        v45[1] = _mm_load_si128((const __m128i *)&_xmm);
        while ( 1 )
        {
          v24 = CmDeleteDeviceRegKey(a1, (__int64)a2, *v23, 0);
          if ( v24 )
          {
            if ( v24 != -1073741772 && v24 != -1073741811 && v24 != -1073741637 )
              break;
          }
          ++v22;
          ++v23;
          if ( v22 >= 8 )
            goto LABEL_62;
        }
        v9 = v24;
LABEL_62:
        v26 = 0LL;
        if ( v9 >= 0 )
        {
          v40 = 0LL;
          v34 = 0;
          v33 = 0LL;
          NumberOfBytes_4 = 0;
          while ( 1 )
          {
            LOBYTE(v25) = 1;
            DeviceMappedPropertyKeys = CmGetDeviceMappedPropertyKeys(
                                         a1,
                                         (_DWORD)a2,
                                         (_DWORD)Handle,
                                         v25,
                                         (__int64)v33,
                                         v34,
                                         (__int64)&NumberOfBytes_4);
            if ( DeviceMappedPropertyKeys != -1073741789 )
              break;
            v27 = NumberOfBytes_4;
            if ( 20 * (unsigned __int64)NumberOfBytes_4 > 0xFFFFFFFF )
            {
              DeviceMappedPropertyKeys = -1073741811;
              goto LABEL_73;
            }
            v28 = 20 * NumberOfBytes_4;
            if ( v40 )
              ExFreePoolWithTag(v40, 0);
            v40 = ExAllocatePoolWithTag(PagedPool, v28, 0x52504E50u);
            v26 = v40;
            if ( !v40 )
            {
              DeviceMappedPropertyKeys = -1073741801;
              goto LABEL_71;
            }
            v34 = v27;
            v33 = v40;
          }
          v27 = NumberOfBytes_4;
LABEL_71:
          if ( DeviceMappedPropertyKeys && DeviceMappedPropertyKeys != -1073741275 )
          {
LABEL_73:
            v9 = DeviceMappedPropertyKeys;
            goto LABEL_88;
          }
          v30 = 0;
          if ( v27 )
          {
            while ( 1 )
            {
              v31 = CmSetDeviceMappedProperty(a1, a2, (__int64)Handle, 0LL, (__int64)v26 + 20 * v30, 0, 0LL, 0);
              if ( v31 )
              {
                if ( v31 != -1073741275 && v31 != -1073741790 && v31 != -1073741802 && v31 != -1073741637 )
                  break;
              }
              if ( ++v30 >= v27 )
                goto LABEL_85;
            }
            v9 = v31;
          }
LABEL_85:
          if ( v9 >= 0 )
          {
            v9 = CmDeleteDeviceRegKey(a1, (__int64)a2, 16, 0);
            if ( v9 >= 0 )
              CmRaiseDeleteEvent(a1, a2, 1LL);
          }
        }
LABEL_88:
        if ( P )
          ExFreePoolWithTag(P, 0);
LABEL_90:
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        if ( v40 )
          ExFreePoolWithTag(v40, 0);
        goto LABEL_94;
      }
    }
    else
    {
      if ( v41 != 18 || NumberOfBytes < 2 || *((_WORD *)v7 + ((unsigned __int64)NumberOfBytes >> 1) - 1) )
      {
        v9 = -1073741823;
LABEL_94:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_96;
      }
      ObjectProperty = CmRemovePanelDevice(a1, v7, a2);
      if ( ObjectProperty >= 0 )
        goto LABEL_23;
    }
    v9 = ObjectProperty;
    goto LABEL_94;
  }
LABEL_96:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
