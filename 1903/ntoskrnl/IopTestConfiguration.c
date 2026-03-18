/*
 * XREFs of IopTestConfiguration @ 0x1407520E4
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x140751FD0 (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpLogDeviceConflictingResource @ 0x140751698 (PnpLogDeviceConflictingResource.c)
 *     PnpLookupArbitersNewResources @ 0x1407521DC (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopTestConfiguration(int a1, int a2, __int64 **a3)
{
  int v6; // r9d
  __int64 *v7; // rdi
  int v8; // esi
  __int64 v9; // rbp
  char v10; // cl
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  v7 = *a3;
  v8 = 0;
  while ( v7 != (__int64 *)a3 )
  {
    if ( *((_BYTE *)v7 + 17) )
    {
      v9 = *(v7 - 8);
      LODWORD(v12[1]) = 0;
      v12[2] = 0LL;
      v12[0] = v7 - 6;
      LOBYTE(v6) = *((_BYTE *)v7 - 72);
      PnpLookupArbitersNewResources(a1, a2, *(v7 - 7), v6, (__int64)&v12[2], (__int64)&v12[1]);
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(v9 + 32))(*(_QWORD *)(v9 + 8), 0LL, v12);
      if ( v8 < 0 )
      {
        PnpLogDeviceConflictingResource((__int64)(v7 - 11), *(_QWORD *)(v9 + 8));
        *((_BYTE *)v7 + 16) |= 2u;
        return (unsigned int)v8;
      }
      v10 = v7[2] & 0xFD;
      *((_BYTE *)v7 + 17) = 0;
      *((_BYTE *)v7 + 16) = v10 | 1;
    }
    else if ( (v7[2] & 2) != 0 )
    {
      return (unsigned int)-1073741823;
    }
    v7 = (__int64 *)*v7;
  }
  return (unsigned int)v8;
}
