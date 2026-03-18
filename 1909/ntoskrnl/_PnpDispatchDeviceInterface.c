/*
 * XREFs of _PnpDispatchDeviceInterface @ 0x140627E30
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140089418 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C2E70 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1406290B0 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062920C (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmCreateDeviceInterface @ 0x14072CD1C (_CmCreateDeviceInterface.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x1407380B0 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x14078A3DC (_CmGetMatchingDeviceInterfaceList.c)
 *     _CmDeleteDeviceInterface @ 0x140933F24 (_CmDeleteDeviceInterface.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x14093B778 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmGetDeviceInterfaceMappedPropertyLocales @ 0x14093B9DC (_CmGetDeviceInterfaceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDeviceInterface(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 *v6; // r8
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  NTSTATUS DeviceInterfaceMappedProperty; // eax
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-10h]

  v5 = (__int64)a2;
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
                    DeviceInterfaceMappedProperty = CmSetDeviceInterfaceMappedProperty(
                                                      a1,
                                                      v5,
                                                      *((_QWORD *)a5 + 2),
                                                      a5[6],
                                                      *((_QWORD *)a5 + 4),
                                                      a5[10]);
                  else
                    DeviceInterfaceMappedProperty = -1073741811;
                }
                else
                {
                  DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedProperty(
                                                    a1,
                                                    v5,
                                                    *(_QWORD *)a5,
                                                    *((_QWORD *)a5 + 1),
                                                    *((_QWORD *)a5 + 2),
                                                    *((_QWORD *)a5 + 3),
                                                    *((_QWORD *)a5 + 4),
                                                    a5[10],
                                                    *((_QWORD *)a5 + 6));
                }
              }
              else
              {
                DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedPropertyLocales(
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
              DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedPropertyKeys(
                                                a1,
                                                v5,
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
              v17 = *(_QWORD *)a5;
              a2 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              v18 = *((_QWORD *)a5 + 1);
            }
            DeviceInterfaceMappedProperty = CmGetMatchingDeviceInterfaceList(
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
          DeviceInterfaceMappedProperty = CmDeleteDeviceInterface(a1, v5);
        }
      }
      else
      {
        DeviceInterfaceMappedProperty = CmCreateDeviceInterface(
                                          a1,
                                          v5,
                                          *a5,
                                          (int)a5 + 8,
                                          (__int64)(a5 + 4),
                                          a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      DeviceInterfaceMappedProperty = CmOpenDeviceInterfaceRegKey(
                                        a1,
                                        v5,
                                        48,
                                        0,
                                        *a5,
                                        *((_BYTE *)a5 + 4),
                                        *((_QWORD *)a5 + 1),
                                        (__int64)(a5 + 4));
    }
  }
  else
  {
    DeviceInterfaceMappedProperty = CmValidateDeviceInterfaceName(a1, v5);
  }
  return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedProperty);
}
