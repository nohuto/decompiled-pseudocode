/*
 * XREFs of _PnpDispatchDeviceContainer @ 0x1406F0EF0
 * Callers:
 *     <none>
 * Callees:
 *     _CmGetDeviceContainerMappedProperty @ 0x1406F1050 (_CmGetDeviceContainerMappedProperty.c)
 *     _CmOpenDeviceContainerRegKey @ 0x1406F1120 (_CmOpenDeviceContainerRegKey.c)
 *     _CmValidateDeviceContainerName @ 0x1406F14F4 (_CmValidateDeviceContainerName.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x1406F76EC (_CmSetDeviceContainerMappedProperty.c)
 *     _CmGetMatchingDeviceContainerList @ 0x140767B28 (_CmGetMatchingDeviceContainerList.c)
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x140936FAC (_CmGetDeviceContainerMappedPropertyKeys.c)
 *     _CmGetDeviceContainerMappedPropertyLocales @ 0x140937040 (_CmGetDeviceContainerMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDeviceContainer(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(); // r10
  __int64 *v6; // r8
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h]

  v5 = a2;
  LODWORD(a2) = 0;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v6) = 0;
  v7 = a4 - 1;
  if ( !v7 )
    return CmValidateDeviceContainerName(a1, v5, 0LL);
  v8 = v7 - 1;
  if ( !v8 )
    return CmOpenDeviceContainerRegKey(
             a1,
             (_DWORD)v5,
             0,
             0,
             *(_DWORD *)a5,
             *((_BYTE *)a5 + 4),
             a5[1],
             (__int64)(a5 + 2));
  v9 = v8 - 1;
  if ( !v9 )
    return 3221225474LL;
  v10 = v9 - 1;
  if ( !v10 )
    return 3221225474LL;
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
            return CmSetDeviceContainerMappedProperty(a1, 0, 0, a5[1], a5[2]);
          else
            return 3221225485LL;
        }
        else
        {
          return CmGetDeviceContainerMappedProperty(
                   a1,
                   (_DWORD)v5,
                   *a5,
                   a5[1],
                   a5[2],
                   a5[3],
                   a5[4],
                   *((_DWORD *)a5 + 10),
                   a5[6]);
        }
      }
      else
      {
        return CmGetDeviceContainerMappedPropertyLocales(a1, 0, 0, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4]);
      }
    }
    else
    {
      return CmGetDeviceContainerMappedPropertyKeys((_DWORD)a5, 0, 0, 0, a5[3], *((_DWORD *)a5 + 8), a5[5]);
    }
  }
  else
  {
    if ( *a5 )
    {
      v16 = *a5;
      a2 = PnpCmMatchCallbackRoutine;
      v6 = &v16;
      v17 = a5[1];
    }
    return CmGetMatchingDeviceContainerList(
             a1,
             (_DWORD)a2,
             (_DWORD)v6,
             a5[2],
             *((_DWORD *)a5 + 6),
             a5[4],
             (_DWORD)a5[5] & 0xFFFF0000);
  }
}
