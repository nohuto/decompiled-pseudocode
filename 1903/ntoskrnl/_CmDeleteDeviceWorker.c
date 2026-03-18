/*
 * XREFs of _CmDeleteDeviceWorker @ 0x140935264
 * Callers:
 *     _CmDeleteDevice @ 0x140934384 (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140625D38 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _CmSetDeviceMappedProperty @ 0x14070181C (_CmSetDeviceMappedProperty.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14070B530 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingDeviceList @ 0x140767340 (_CmGetMatchingDeviceList.c)
 *     _CmDeleteDeviceInterface @ 0x1409344B0 (_CmDeleteDeviceInterface.c)
 *     _CmDeleteDeviceRegKey @ 0x140934C58 (_CmDeleteDeviceRegKey.c)
 *     _CmRemoveDeviceFromContainer @ 0x140937414 (_CmRemoveDeviceFromContainer.c)
 *     _CmRaiseDeleteEvent @ 0x140938B48 (_CmRaiseDeleteEvent.c)
 *     _CmRemovePanelDevice @ 0x14093A0E8 (_CmRemovePanelDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14093C038 (_CmGetDeviceMappedPropertyKeys.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(__int64 a1, const WCHAR *a2, __int16 a3)
{
  _WORD *v5; // rsi
  void *v6; // r14
  PVOID PoolWithTag; // r13
  int v8; // edi
  PVOID v9; // rcx
  int DeviceRegProp; // eax
  int i; // eax
  int v12; // ebx
  int MatchingFilteredDeviceInterfaceList; // ebx
  unsigned __int64 v14; // rbx
  _WORD *v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // rax
  int j; // eax
  unsigned __int64 v19; // rbx
  PVOID v20; // rax
  int v21; // ebx
  _WORD *k; // rbx
  __int64 v23; // rax
  int *v24; // r14
  int v25; // eax
  int v26; // r9d
  PVOID v27; // r14
  unsigned int v28; // esi
  unsigned __int64 v29; // r14
  int DeviceMappedPropertyKeys; // eax
  unsigned int v31; // ebx
  int v32; // eax
  PVOID v34; // [rsp+20h] [rbp-E0h]
  unsigned int v35; // [rsp+28h] [rbp-D8h]
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+6Ch] [rbp-94h] BYREF
  void *v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  PVOID v43; // [rsp+88h] [rbp-78h]
  PVOID v44; // [rsp+90h] [rbp-70h]
  _BYTE v45[8]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t v47[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v48[40]; // [rsp+110h] [rbp+10h] BYREF

  v40 = 0LL;
  v44 = 0LL;
  v5 = 0LL;
  v43 = 0LL;
  v6 = 0LL;
  NumberOfBytes_4 = 0;
  PoolWithTag = 0LL;
  v38 = 0;
  P = 0LL;
  if ( a3 )
    return (unsigned int)-1073741811;
  v8 = CmOpenDeviceRegKey(a1, (__int64)a2, 16, 0, 33619970, 0, (__int64)&v40, 0LL);
  if ( v8 >= 0 )
  {
    NumberOfBytes = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      a1,
                      (__int64)a2,
                      (__int64)v40,
                      37,
                      (__int64)v45,
                      (__int64)v47,
                      (__int64)&NumberOfBytes,
                      0);
    if ( DeviceRegProp < 0 )
    {
      if ( DeviceRegProp != -1073741275 )
      {
LABEL_6:
        v8 = DeviceRegProp;
        goto LABEL_103;
      }
    }
    else
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(a1, (__int64)a2, v47, v48);
      if ( DeviceRegProp < 0 )
        goto LABEL_6;
      DeviceRegProp = CmRemoveDeviceFromContainer(a1, v48, v47, a2);
      if ( DeviceRegProp < 0 )
        goto LABEL_6;
    }
    for ( i = PnpGetObjectProperty(
                a1,
                (__int64)a2,
                1LL,
                (__int64)v40,
                0LL,
                (__int64)&DEVPKEY_Device_PanelId,
                (__int64)&v41,
                0LL,
                0,
                (__int64)&NumberOfBytes,
                0);
          i == -1073741789;
          i = PnpGetObjectProperty(
                a1,
                (__int64)a2,
                1LL,
                (__int64)v40,
                0LL,
                (__int64)&DEVPKEY_Device_PanelId,
                (__int64)&v41,
                (__int64)PoolWithTag,
                v12,
                (__int64)&NumberOfBytes,
                0) )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      v12 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x52504E50u);
      if ( !PoolWithTag )
      {
        i = -1073741801;
        break;
      }
    }
    if ( i < 0 )
    {
      if ( i != -1073741275 )
        goto LABEL_23;
    }
    else
    {
      if ( v41 != 18 || NumberOfBytes < 2 || *((_WORD *)PoolWithTag + ((unsigned __int64)NumberOfBytes >> 1) - 1) )
      {
        v8 = -1073741823;
LABEL_101:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_103;
      }
      i = CmRemovePanelDevice(a1, PoolWithTag, a2);
      if ( i < 0 )
      {
LABEL_23:
        v8 = i;
        goto LABEL_101;
      }
    }
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0LL,
                                            (__int64)a2,
                                            0,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0,
                                            (__int64)&NumberOfBytes_4,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList == -1073741789 )
    {
      while ( 1 )
      {
        v14 = 2LL * NumberOfBytes_4;
        if ( v14 > 0xFFFFFFFF )
          break;
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v44 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x52504E50u);
        v5 = v44;
        if ( !v44 )
        {
          MatchingFilteredDeviceInterfaceList = -1073741801;
          goto LABEL_35;
        }
        MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                                a1,
                                                0LL,
                                                (__int64)a2,
                                                0,
                                                0LL,
                                                0LL,
                                                (__int64)v44,
                                                NumberOfBytes_4,
                                                (__int64)&NumberOfBytes_4,
                                                0);
        if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
          goto LABEL_35;
      }
      MatchingFilteredDeviceInterfaceList = -1073741811;
    }
    else
    {
LABEL_35:
      if ( !MatchingFilteredDeviceInterfaceList )
      {
        if ( NumberOfBytes_4 && (v15 = v5, *v5) )
        {
          v16 = 0;
          do
          {
            CmDeleteDeviceInterface(a1, (__int64)v15, 0);
            v17 = -1LL;
            do
              ++v17;
            while ( v15[v17] );
            v15 += v17 + 1;
          }
          while ( *v15 );
        }
        else
        {
          v16 = 0;
        }
        for ( j = CmGetMatchingDeviceList(
                    a1,
                    (__int64)&CmMatchLastKnownParentCallback,
                    (__int64)a2,
                    0LL,
                    0,
                    (__int64)&v38,
                    0);
              ;
              j = CmGetMatchingDeviceList(
                    a1,
                    (__int64)&CmMatchLastKnownParentCallback,
                    (__int64)a2,
                    (__int64)v20,
                    v38,
                    (__int64)&v38,
                    0) )
        {
          v21 = j;
          if ( j != -1073741789 )
            goto LABEL_52;
          v19 = 2LL * v38;
          if ( v19 > 0xFFFFFFFF )
          {
            v21 = -1073741811;
            goto LABEL_53;
          }
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          v20 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v19, 0x52504E50u);
          v43 = v20;
          v6 = v20;
          if ( !v20 )
            break;
        }
        v21 = -1073741801;
LABEL_52:
        if ( v21 )
        {
LABEL_53:
          v8 = v21;
          goto LABEL_95;
        }
        if ( v38 )
        {
          for ( k = v6; *k; k += v23 + 1 )
          {
            PnpSetObjectProperty(a1, (__int64)k, 1u, 0LL, 0LL, (__int64)&DEVPKEY_Device_LastKnownParent, 0, 0LL, 0, 0);
            v23 = -1LL;
            do
              ++v23;
            while ( k[v23] );
          }
        }
        v24 = (int *)v46;
        v46[0] = _mm_load_si128((const __m128i *)&_xmm);
        v46[1] = _mm_load_si128((const __m128i *)&_xmm);
        while ( 1 )
        {
          v25 = CmDeleteDeviceRegKey(a1, (__int64)a2, *v24, 0);
          if ( v25 )
          {
            if ( v25 != -1073741772 && v25 != -1073741811 && v25 != -1073741637 )
              break;
          }
          ++v16;
          ++v24;
          if ( v16 >= 8 )
            goto LABEL_69;
        }
        v8 = v25;
LABEL_69:
        if ( v8 >= 0 )
        {
          P = 0LL;
          v27 = 0LL;
          v35 = 0;
          v34 = 0LL;
          v39 = 0;
          while ( 1 )
          {
            LOBYTE(v26) = 1;
            DeviceMappedPropertyKeys = CmGetDeviceMappedPropertyKeys(
                                         a1,
                                         (_DWORD)a2,
                                         (_DWORD)v40,
                                         v26,
                                         (__int64)v34,
                                         v35,
                                         (__int64)&v39);
            if ( DeviceMappedPropertyKeys != -1073741789 )
              break;
            v28 = v39;
            v29 = 20LL * v39;
            if ( v29 > 0xFFFFFFFF )
            {
              DeviceMappedPropertyKeys = -1073741811;
              goto LABEL_80;
            }
            if ( P )
              ExFreePoolWithTag(P, 0);
            P = ExAllocatePoolWithTag(PagedPool, (unsigned int)v29, 0x52504E50u);
            v27 = P;
            if ( !P )
            {
              DeviceMappedPropertyKeys = -1073741801;
              goto LABEL_78;
            }
            v35 = v28;
            v34 = P;
          }
          v28 = v39;
LABEL_78:
          if ( DeviceMappedPropertyKeys && DeviceMappedPropertyKeys != -1073741275 )
          {
LABEL_80:
            v8 = DeviceMappedPropertyKeys;
            goto LABEL_95;
          }
          v31 = 0;
          if ( v28 )
          {
            while ( 1 )
            {
              v32 = CmSetDeviceMappedProperty(a1, a2, (__int64)v40, 0LL, (__int64)v27 + 20 * v31, 0, 0LL, 0);
              if ( v32 )
              {
                if ( v32 != -1073741275 && v32 != -1073741790 && v32 != -1073741802 && v32 != -1073741637 )
                  break;
              }
              if ( ++v31 >= v28 )
                goto LABEL_92;
            }
            v8 = v32;
          }
LABEL_92:
          if ( v8 >= 0 )
          {
            v8 = CmDeleteDeviceRegKey(a1, (__int64)a2, 16, 0);
            if ( v8 >= 0 )
              CmRaiseDeleteEvent(a1, a2, 1LL);
          }
        }
LABEL_95:
        if ( v43 )
          ExFreePoolWithTag(v43, 0);
        goto LABEL_97;
      }
    }
    v8 = MatchingFilteredDeviceInterfaceList;
LABEL_97:
    v9 = v44;
    if ( v44 )
      ExFreePoolWithTag(v44, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_101;
  }
LABEL_103:
  if ( v40 )
    PnpCtxRegCloseKey((__int64)v9, v40);
  return (unsigned int)v8;
}
