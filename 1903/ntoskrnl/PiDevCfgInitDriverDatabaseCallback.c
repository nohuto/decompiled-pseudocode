/*
 * XREFs of PiDevCfgInitDriverDatabaseCallback @ 0x140867B54
 * Callers:
 *     PiDrvDbEnumNodes @ 0x1408788C8 (PiDrvDbEnumNodes.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x14062572C (_PnpCtxRegOpenKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406DF6E4 (_CmGetMatchingFilteredDeviceList.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140715C44 (PiDevCfgCopyObjectProperties.c)
 *     _CmCreateDevice @ 0x1407195D0 (_CmCreateDevice.c)
 *     _PnpCtxOpenMachine @ 0x140755030 (_PnpCtxOpenMachine.c)
 *     _PnpCtxCloseMachine @ 0x1409337A8 (_PnpCtxCloseMachine.c)
 *     _CmDeleteDevice @ 0x140934384 (_CmDeleteDevice.c)
 */

char __fastcall PiDevCfgInitDriverDatabaseCallback(__int64 a1)
{
  PVOID PoolWithTag; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // eax
  int MatchingFilteredDeviceList; // eax
  _WORD *i; // rbx
  __int64 v8; // rcx
  int v9; // r14d
  void *v10; // r15
  __int64 v11; // rax
  int NumberOfBytes; // [rsp+28h] [rbp-29h]
  SIZE_T NumberOfBytesa; // [rsp+28h] [rbp-29h]
  int v15; // [rsp+30h] [rbp-21h]
  int v16; // [rsp+68h] [rbp+17h] BYREF
  PVOID P; // [rsp+70h] [rbp+1Fh] BYREF
  int v18[2]; // [rsp+78h] [rbp+27h] BYREF
  void *v19; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+88h] [rbp+37h] BYREF
  SIZE_T v21; // [rsp+D0h] [rbp+7Fh] BYREF

  v19 = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  LODWORD(v2) = 0;
  v16 = 0;
  *(_QWORD *)v18 = 0LL;
  v20 = 0LL;
  LOBYTE(v21) = 0;
  if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, 2147483650LL, a1, 0, 0x2000000u, (__int64)&v19) >= 0 )
  {
    if ( (int)PnpCtxOpenMachine(v3, (__int64)v19, v4, 0LL, NumberOfBytes, v15, &P) >= 0 )
    {
      v5 = 2048;
      v16 = 2048;
      while ( v5 > (unsigned int)v2 )
      {
        v2 = v5;
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v2, 0x63647050u);
        if ( !PoolWithTag )
        {
          MatchingFilteredDeviceList = -1073741670;
LABEL_11:
          if ( MatchingFilteredDeviceList >= 0 )
          {
            if ( (_DWORD)v2 )
            {
              for ( i = PoolWithTag; *i; i += v11 + 1 )
              {
                if ( (int)CmOpenDeviceRegKey((__int64)P, (__int64)i, 16, 0, 0x2000000, 0, (__int64)v18, 0LL) >= 0 )
                {
                  v9 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)i, 131103, (HANDLE *)&v20, &v21, 0);
                  if ( v9 >= 0 )
                  {
                    v10 = (void *)v20;
                    if ( (_BYTE)v21 )
                      v9 = PiDevCfgCopyObjectProperties(
                             (__int64)P,
                             (__int64)i,
                             1u,
                             *(__int64 *)v18,
                             NumberOfBytesa,
                             (__int64)i,
                             1u,
                             (void *)v20,
                             0LL,
                             0LL,
                             0x20000);
                    PnpCtxRegCloseKey(v8, v10);
                    if ( v9 < 0 )
                      CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, i, 0LL);
                  }
                  PnpCtxRegCloseKey(v8, *(void **)v18);
                }
                v11 = -1LL;
                do
                  ++v11;
                while ( i[v11] );
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
                                       v2,
                                       (__int64)&v16);
        if ( MatchingFilteredDeviceList != -1073741789 )
          goto LABEL_11;
        v5 = v16;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    if ( P )
      PnpCtxCloseMachine(P);
  }
  if ( v19 )
    PnpCtxRegCloseKey(v3, v19);
  return 1;
}
