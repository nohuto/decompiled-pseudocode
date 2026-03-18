/*
 * XREFs of PiDrvDbQuerySyncNodesUpdated @ 0x140878CFC
 * Callers:
 *     PpDevCfgInit @ 0x1409F780C (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     RtlGetPersistedStateLocation @ 0x1405C12F0 (RtlGetPersistedStateLocation.c)
 *     _RegRtlQueryValue @ 0x1405C37B4 (_RegRtlQueryValue.c)
 *     _PnpCtxRegCreateTree @ 0x1406F4160 (_PnpCtxRegCreateTree.c)
 *     _RegRtlSetValue @ 0x14071A884 (_RegRtlSetValue.c)
 */

__int64 __fastcall PiDrvDbQuerySyncNodesUpdated(char a1, char *a2)
{
  char v2; // r15
  SIZE_T i; // rsi
  int PersistedStateLocation; // ebx
  PVOID PoolWithTag; // rdi
  __int64 j; // rsi
  const WCHAR *v10; // rdx
  int v11; // [rsp+60h] [rbp-20h] BYREF
  int v12; // [rsp+64h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h]
  __int64 Source2; // [rsp+70h] [rbp-10h] BYREF
  __int64 Source1; // [rsp+78h] [rbp-8h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+40h] BYREF
  int v17; // [rsp+C8h] [rbp+48h] BYREF

  Handle = 0LL;
  v2 = 0;
  Source1 = 0LL;
  Source2 = 0LL;
  for ( i = 520LL; ; i = (unsigned int)v16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, i, 0x62647050u);
    if ( !PoolWithTag )
    {
      PersistedStateLocation = -1073741670;
      goto LABEL_7;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"DriverDatabaseUpdates",
                               0LL,
                               L"\\Registry\\Machine\\System\\DriverDatabase\\Updates",
                               0,
                               PoolWithTag,
                               i,
                               (unsigned int *)&v16);
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
    if ( (unsigned int)v16 <= (unsigned int)i )
    {
      PersistedStateLocation = -1073741595;
      break;
    }
  }
  if ( PersistedStateLocation >= 0 )
  {
    PersistedStateLocation = PnpCtxRegCreateTree(0LL, 0LL, (__int64)PoolWithTag, 0LL, 131103, 0LL);
    if ( PersistedStateLocation >= 0 )
    {
      for ( j = PiDrvDbNodeList; (__int64 *)j != &PiDrvDbNodeList; j = *(_QWORD *)j )
      {
        if ( (*(_DWORD *)(j + 64) & 4) == 0 || !PnpBootMode )
        {
          if ( (int)PnpGetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(j + 24),
                      7LL,
                      *(_QWORD *)(j + 72),
                      0LL,
                      (__int64)&DEVPKEY_DriverDatabase_LastUpdateDate,
                      (__int64)&v17,
                      (__int64)&Source1,
                      8,
                      (__int64)&v11,
                      0) >= 0
            && v17 == 16
            && v11 == 8 )
          {
            v10 = *(const WCHAR **)(j + 24);
            LODWORD(v16) = 8;
            PersistedStateLocation = RegRtlQueryValue(Handle, v10, &v12, &Source2, (unsigned int *)&v16);
            if ( PersistedStateLocation < 0 || v12 != 3 || (_DWORD)v16 != 8 )
            {
              PersistedStateLocation = 0;
              Source2 = 0LL;
            }
            if ( RtlCompareMemory(&Source1, &Source2, 8uLL) != 8 )
            {
              v2 = 1;
              if ( !a1 )
                break;
              PersistedStateLocation = RegRtlSetValue(Handle, *(const WCHAR **)(j + 24), 3u, &Source1, 8u);
              if ( PersistedStateLocation < 0 )
                goto LABEL_7;
            }
          }
          else
          {
            PersistedStateLocation = 0;
          }
        }
      }
      if ( a2 )
        *a2 = v2;
    }
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)PersistedStateLocation;
}
