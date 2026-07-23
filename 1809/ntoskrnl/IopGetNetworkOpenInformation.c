/*
 * XREFs of IopGetNetworkOpenInformation @ 0x14081E714
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 */

__int64 __fastcall IopGetNetworkOpenInformation(struct _FILE_OBJECT *Object, __int64 a2)
{
  int v4; // edx
  __int64 v6; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-50h] BYREF
  int v8; // [rsp+68h] [rbp-30h]
  __int64 v9[3]; // [rsp+70h] [rbp-28h] BYREF

  v4 = IopQueryXxxInformation(Object, 4, 0x28u, 0, (struct _IRP *)v7, &v6, 1);
  if ( v4 >= 0 )
  {
    v4 = IopQueryXxxInformation(Object, 5, 0x18u, 0, (struct _IRP *)v9, &v6, 1);
    if ( v4 >= 0 )
    {
      **(_QWORD **)(a2 + 104) = v7[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8LL) = v7[1];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL) = v7[2];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 24LL) = v7[3];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 32LL) = v9[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 40LL) = v9[1];
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 48LL) = v8;
    }
  }
  return (unsigned int)v4;
}
