/*
 * XREFs of IopGetNetworkOpenInformation @ 0x14085C1AC
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 */

__int64 __fastcall IopGetNetworkOpenInformation(struct _FILE_OBJECT *Object, __int64 a2)
{
  int v4; // edx
  __int64 v6; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+48h] [rbp+Fh] BYREF
  __int64 v8; // [rsp+50h] [rbp+17h]
  __int64 v9; // [rsp+58h] [rbp+1Fh]
  __int64 v10[5]; // [rsp+60h] [rbp+27h] BYREF

  memset(v10, 0, sizeof(v10));
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = IopQueryXxxInformation(Object, 4, 0x28u, 0, (struct _IRP *)v10, &v6, 1);
  if ( v4 >= 0 )
  {
    v4 = IopQueryXxxInformation(Object, 5, 0x18u, 0, (struct _IRP *)&v7, &v6, 1);
    if ( v4 >= 0 )
    {
      **(_QWORD **)(a2 + 104) = v10[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8LL) = v10[1];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL) = v10[2];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 24LL) = v10[3];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 32LL) = v7;
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 40LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 48LL) = v10[4];
    }
  }
  return (unsigned int)v4;
}
