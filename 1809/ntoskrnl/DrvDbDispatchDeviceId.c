/*
 * XREFs of DrvDbDispatchDeviceId @ 0x1406F62C0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetObjectContext @ 0x1406D3C58 (_PnpCtxGetObjectContext.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F639C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x14090200C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140902684 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x140903200 (DrvDbGetObjectList.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140903BA4 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbValidateDeviceIdName @ 0x140904C38 (DrvDbValidateDeviceIdName.c)
 */

__int64 __fastcall DrvDbDispatchDeviceId(__int64 a1, __int64 a2, int a3, __int64 a4, int *a5)
{
  int ObjectContext; // eax
  int v7; // r10d
  __int64 v8; // r8
  _QWORD *v9; // r11
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int DeviceIdMappedProperty; // eax
  int v20; // ecx
  _QWORD *v21[3]; // [rsp+40h] [rbp-18h] BYREF

  v21[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v21);
  v8 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v8;
  v9 = v21[0];
  v10 = *((unsigned int *)v21[0] + 3);
  if ( (v10 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v10 )
    {
      LODWORD(v8) = -1073740697;
      return (unsigned int)v8;
    }
    if ( v7 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_23:
        v10 = (unsigned int)v10 >> 30;
        LOBYTE(v10) = v10 & 1;
        goto LABEL_25;
      }
    }
    else
    {
      if ( v7 <= 2 )
      {
LABEL_21:
        LOBYTE(v10) = 1;
        goto LABEL_25;
      }
      if ( v7 <= 4 )
        goto LABEL_23;
      if ( v7 > 6 && v7 != 8 )
      {
        if ( v7 != 9 )
          goto LABEL_21;
        goto LABEL_23;
      }
    }
    v10 = (unsigned int)v10 >> 31;
LABEL_25:
    v8 = (_BYTE)v10 == 0 ? 0xC0000022 : 0;
    if ( !(_BYTE)v10 )
      return (unsigned int)v8;
  }
  v11 = v7 - 1;
  if ( !v11 )
  {
    DeviceIdMappedProperty = DrvDbValidateDeviceIdName(v10, a2, v8);
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DeviceIdMappedProperty = DrvDbOpenObjectRegKey(
                               v21[0],
                               0LL,
                               5u,
                               a2,
                               *a5,
                               *((_BYTE *)a5 + 4),
                               *((_QWORD *)a5 + 1),
                               a5 + 4);
LABEL_11:
    LODWORD(v8) = DeviceIdMappedProperty;
    return (unsigned int)v8;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 1 )
            {
              LODWORD(v8) = -1073741811;
              return (unsigned int)v8;
            }
            DeviceIdMappedProperty = DrvDbSetDeviceIdMappedProperty(
                                       v21[0],
                                       a2,
                                       *(_QWORD *)a5,
                                       *((_QWORD *)a5 + 2),
                                       a5[6],
                                       *((_QWORD *)a5 + 4),
                                       a5[10]);
          }
          else
          {
            DeviceIdMappedProperty = DrvDbGetDeviceIdMappedProperty(
                                       v21[0],
                                       a2,
                                       *(_QWORD *)a5,
                                       *((_QWORD *)a5 + 2),
                                       *((_QWORD *)a5 + 3),
                                       *((_QWORD *)a5 + 4),
                                       a5[10],
                                       *((_QWORD *)a5 + 6));
          }
        }
        else
        {
          DeviceIdMappedProperty = DrvDbGetDeviceIdMappedPropertyKeys(
                                     v21[0],
                                     a2,
                                     *(_QWORD *)a5,
                                     *((_QWORD *)a5 + 3),
                                     a5[8],
                                     *((_QWORD *)a5 + 5));
        }
      }
      else
      {
        DeviceIdMappedProperty = DrvDbGetObjectList(
                                   v21[0],
                                   5,
                                   *(_QWORD *)a5,
                                   *((_QWORD *)a5 + 1),
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_QWORD *)a5 + 4),
                                   2);
      }
    }
    else
    {
      DeviceIdMappedProperty = DrvDbDeleteObjectRegKey(v21[0], 5LL, a2);
    }
    goto LABEL_11;
  }
  v20 = *a5;
  LODWORD(v21[0]) = 0;
  LODWORD(v8) = DrvDbOpenObjectRegKey(v9, 0LL, 5u, a2, v20, 1, a5 + 2, v21);
  if ( (int)v8 >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v21[0]) == 1;
  return (unsigned int)v8;
}
