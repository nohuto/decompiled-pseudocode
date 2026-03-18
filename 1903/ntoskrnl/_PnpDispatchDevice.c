/*
 * XREFs of _PnpDispatchDevice @ 0x140624110
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140088114 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x1405C3240 (_CmValidateDeviceName.c)
 *     _CmGetDeviceMappedProperty @ 0x1406242B0 (_CmGetDeviceMappedProperty.c)
 *     _CmSetDeviceMappedProperty @ 0x14070181C (_CmSetDeviceMappedProperty.c)
 *     _CmCreateDevice @ 0x1407195D0 (_CmCreateDevice.c)
 *     _CmGetMatchingDeviceList @ 0x140767340 (_CmGetMatchingDeviceList.c)
 *     _CmDeleteDevice @ 0x140934384 (_CmDeleteDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14093C038 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceMappedPropertyLocales @ 0x14093C338 (_CmGetDeviceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDevice(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 *a5)
{
  const wchar_t *v5; // r10
  __int64 *v6; // r8
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int DeviceMappedProperty; // eax
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-10h]

  v5 = (const wchar_t *)a2;
  LODWORD(a2) = 0;
  v17 = 0LL;
  v18 = 0LL;
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
                                             a5[2],
                                             *((_DWORD *)a5 + 6),
                                             (PLARGE_INTEGER)a5[4],
                                             *((_DWORD *)a5 + 10));
                  else
                    DeviceMappedProperty = -1073741811;
                }
                else
                {
                  DeviceMappedProperty = CmGetDeviceMappedProperty(
                                           a1,
                                           (_DWORD)v5,
                                           *a5,
                                           a5[1],
                                           a5[2],
                                           a5[3],
                                           a5[4],
                                           *((_DWORD *)a5 + 10),
                                           a5[6],
                                           (_DWORD)a5[7] & 0xFFFF0000);
                }
              }
              else
              {
                DeviceMappedProperty = CmGetDeviceMappedPropertyLocales(
                                         a1,
                                         0,
                                         0,
                                         a5[1],
                                         a5[2],
                                         *((_DWORD *)a5 + 6),
                                         a5[4]);
              }
            }
            else
            {
              DeviceMappedProperty = CmGetDeviceMappedPropertyKeys(
                                       a1,
                                       (_DWORD)v5,
                                       *a5,
                                       0,
                                       a5[3],
                                       *((_DWORD *)a5 + 8),
                                       a5[5]);
            }
          }
          else
          {
            if ( *a5 )
            {
              v17 = *a5;
              a2 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              v18 = a5[1];
            }
            DeviceMappedProperty = CmGetMatchingDeviceList(
                                     a1,
                                     (_DWORD)a2,
                                     (_DWORD)v6,
                                     a5[2],
                                     *((_DWORD *)a5 + 6),
                                     a5[4],
                                     (_DWORD)a5[5] & 0xFFFF0000);
          }
        }
        else
        {
          DeviceMappedProperty = CmDeleteDevice(a1, v5, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        DeviceMappedProperty = CmCreateDevice(
                                 a1,
                                 (_DWORD)v5,
                                 *(_DWORD *)a5,
                                 (int)a5 + 8,
                                 (__int64)(a5 + 2),
                                 *((_DWORD *)a5 + 5) & 0xFFFF0000);
      }
    }
    else
    {
      DeviceMappedProperty = CmOpenDeviceRegKey(
                               a1,
                               (__int64)v5,
                               16,
                               0,
                               *(_DWORD *)a5,
                               *((_BYTE *)a5 + 4),
                               a5[1],
                               (_DWORD *)a5 + 4);
    }
  }
  else
  {
    DeviceMappedProperty = CmValidateDeviceName(a1, v5);
  }
  return PnpMapCmStatusToDispatchStatus(DeviceMappedProperty);
}
