/*
 * XREFs of _PnpDispatchDevice @ 0x14059BFF0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140007248 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmGetDeviceMappedProperty @ 0x14059C184 (_CmGetDeviceMappedProperty.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x1405C86D0 (_CmValidateDeviceName.c)
 *     _CmSetDeviceMappedProperty @ 0x1406EA6D4 (_CmSetDeviceMappedProperty.c)
 *     _CmCreateDevice @ 0x1406FE62C (_CmCreateDevice.c)
 *     _CmGetMatchingDeviceList @ 0x14074AB28 (_CmGetMatchingDeviceList.c)
 *     _CmDeleteDevice @ 0x1408F7968 (_CmDeleteDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1408FED80 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceMappedPropertyLocales @ 0x1408FF080 (_CmGetDeviceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDevice(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(); // r10
  _QWORD *v6; // r8
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int DeviceMappedProperty; // eax
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    DeviceMappedProperty = CmSetDeviceMappedProperty(
                                             a1,
                                             (_DWORD)v5,
                                             *((_QWORD *)a5 + 2),
                                             a5[6],
                                             *((PLARGE_INTEGER *)a5 + 4),
                                             a5[10]);
                  else
                    DeviceMappedProperty = -1073741811;
                }
                else
                {
                  DeviceMappedProperty = CmGetDeviceMappedProperty(
                                           a1,
                                           (_DWORD)v5,
                                           *(_QWORD *)a5,
                                           *((_QWORD *)a5 + 1),
                                           *((_QWORD *)a5 + 2),
                                           *((_QWORD *)a5 + 3),
                                           *((_QWORD *)a5 + 4),
                                           a5[10],
                                           *((_QWORD *)a5 + 6),
                                           a5[14] & 0xFFFF0000);
                }
              }
              else
              {
                DeviceMappedProperty = CmGetDeviceMappedPropertyLocales(
                                         a1,
                                         0,
                                         0,
                                         *((_QWORD *)a5 + 1),
                                         *((_QWORD *)a5 + 2),
                                         a5[6],
                                         *((_QWORD *)a5 + 4));
              }
            }
            else
            {
              DeviceMappedProperty = CmGetDeviceMappedPropertyKeys(
                                       a1,
                                       (_DWORD)v5,
                                       *(_QWORD *)a5,
                                       0,
                                       *((_QWORD *)a5 + 3),
                                       a5[8],
                                       *((_QWORD *)a5 + 5));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              v17[0] = *(_QWORD *)a5;
              a2 = PnpCmMatchCallbackRoutine;
              v6 = v17;
              v17[1] = *((_QWORD *)a5 + 1);
            }
            DeviceMappedProperty = CmGetMatchingDeviceList(
                                     a1,
                                     (_DWORD)a2,
                                     (_DWORD)v6,
                                     *((_QWORD *)a5 + 2),
                                     a5[6],
                                     *((_QWORD *)a5 + 4),
                                     a5[10] & 0xFFFF0000);
          }
        }
        else
        {
          DeviceMappedProperty = CmDeleteDevice(a1, v5, *a5 & 0xFFFF0000);
        }
      }
      else
      {
        DeviceMappedProperty = CmCreateDevice(a1, (_DWORD)v5, *a5, (int)a5 + 8, (__int64)(a5 + 4), a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      DeviceMappedProperty = CmOpenDeviceRegKey(
                               a1,
                               (_DWORD)v5,
                               16,
                               0,
                               *a5,
                               *((_BYTE *)a5 + 4),
                               *((_QWORD *)a5 + 1),
                               (__int64)(a5 + 4));
    }
  }
  else
  {
    DeviceMappedProperty = CmValidateDeviceName(a1, v5, 0LL);
  }
  return PnpMapCmStatusToDispatchStatus(DeviceMappedProperty);
}
