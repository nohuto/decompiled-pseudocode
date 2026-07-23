/*
 * XREFs of PiDevCfgInitDriverDatabaseCallback @ 0x14082E524
 * Callers:
 *     PiDrvDbEnumNodes @ 0x14083E8D0 (PiDrvDbEnumNodes.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406BCB4C (_CmGetMatchingFilteredDeviceList.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FB6E4 (PiDevCfgCopyObjectProperties.c)
 *     _CmCreateDevice @ 0x1406FE62C (_CmCreateDevice.c)
 *     _PnpCtxOpenMachine @ 0x14073C8BC (_PnpCtxOpenMachine.c)
 *     _PnpCtxCloseMachine @ 0x1408F6DB8 (_PnpCtxCloseMachine.c)
 *     _CmDeleteDevice @ 0x1408F7968 (_CmDeleteDevice.c)
 */

char __fastcall PiDevCfgInitDriverDatabaseCallback(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  int MatchingFilteredDeviceList; // eax
  _WORD *i; // rdi
  int v10; // r15d
  HANDLE v11; // r14
  __int64 v12; // rax
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-29h]
  SIZE_T NumberOfBytesa; // [rsp+28h] [rbp-29h]
  __int64 v16; // [rsp+30h] [rbp-21h]
  int v17; // [rsp+68h] [rbp+17h] BYREF
  PVOID P; // [rsp+70h] [rbp+1Fh] BYREF
  HANDLE v19; // [rsp+78h] [rbp+27h] BYREF
  HANDLE v20; // [rsp+80h] [rbp+2Fh] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+37h] BYREF
  SIZE_T v22; // [rsp+D0h] [rbp+7Fh] BYREF

  v20 = 0LL;
  P = 0LL;
  PoolWithTag = 0LL;
  v17 = 0;
  LODWORD(v3) = 0;
  v19 = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  LOBYTE(v22) = 0;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  if ( (int)SysCtxRegOpenKey(v4, 2147483650LL, a1, 0, 0x2000000u, (__int64)&v20) >= 0 )
  {
    if ( (int)PnpCtxOpenMachine(v5, (__int64)v20, v6, 0LL, NumberOfBytes, v16, &P) >= 0 )
    {
      v7 = 2048;
      v17 = 2048;
      while ( v7 > (unsigned int)v3 )
      {
        v3 = v7;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v3, 0x63647050u);
        if ( !PoolWithTag )
        {
          MatchingFilteredDeviceList = -1073741670;
LABEL_13:
          if ( MatchingFilteredDeviceList >= 0 )
          {
            if ( (_DWORD)v3 )
            {
              for ( i = PoolWithTag; *i; i += v12 + 1 )
              {
                if ( (int)CmOpenDeviceRegKey((__int64)P, (__int64)i, 16, 0, 0x2000000, 0, (__int64)&v19, 0LL) >= 0 )
                {
                  v10 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)i, 131103, &Handle, &v22, 0);
                  if ( v10 >= 0 )
                  {
                    v11 = Handle;
                    if ( (_BYTE)v22 )
                      v10 = PiDevCfgCopyObjectProperties(
                              (__int64)P,
                              (__int64)i,
                              1u,
                              (__int64)v19,
                              NumberOfBytesa,
                              (__int64)i,
                              1u,
                              Handle,
                              0LL,
                              0LL,
                              0x20000);
                    ZwClose(v11);
                    if ( v10 < 0 )
                      CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, i, 0LL);
                  }
                  ZwClose(v19);
                }
                v12 = -1LL;
                do
                  ++v12;
                while ( i[v12] );
              }
            }
          }
          break;
        }
        MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                       (__int64)P,
                                       (__int64)L"Root",
                                       1,
                                       0LL,
                                       0LL,
                                       (__int64)PoolWithTag,
                                       v3,
                                       (__int64)&v17);
        if ( MatchingFilteredDeviceList != -1073741789 )
          goto LABEL_13;
        v7 = v17;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    if ( P )
      PnpCtxCloseMachine(P);
  }
  if ( v20 )
    ZwClose(v20);
  return 1;
}
