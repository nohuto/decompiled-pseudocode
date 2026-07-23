/*
 * XREFs of _PnpCtxOpenMachine @ 0x14073C8BC
 * Callers:
 *     PiPnpRtlInit @ 0x14073B710 (PiPnpRtlInit.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082E524 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpCtxCreateNode @ 0x14073CB0C (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x1408F6E7C (_PnpCtxDestroyNode.c)
 */

__int64 __fastcall PnpCtxOpenMachine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  char *PoolWithTag; // rax
  char *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  NTSTATUS Node; // edi
  void **v12; // rax
  void **v13; // rdx
  struct _ERESOURCE *v14; // rax
  struct _ERESOURCE *v15; // rbp

  *a7 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x210uLL, 0x52504E50u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x210uLL);
    *(_DWORD *)v8 = 167772160;
    v8[4] = 0;
    v9 = v8 + 24;
    *((_QWORD *)v8 + 2) = v8 + 8;
    v10 = 4LL;
    *((_QWORD *)v8 + 1) = v8 + 8;
    do
    {
      v9[1] = v9;
      *v9 = v9;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    Node = PnpCtxCreateNode(v8, L"SYSTEM", 1LL);
    if ( Node >= 0 )
    {
      v12 = (void **)*((_QWORD *)v8 + 2);
      if ( *v12 != v8 + 8
        || (MEMORY[8] = *((_QWORD *)v8 + 2),
            MEMORY[0] = v8 + 8,
            *v12 = 0LL,
            *((_QWORD *)v8 + 2) = 0LL,
            v13 = (void **)*((_QWORD *)v8 + 6),
            *v13 != v8 + 40) )
      {
        __fastfail(3u);
      }
      MEMORY[0x18] = *((_QWORD *)v8 + 6);
      MEMORY[0x10] = v8 + 40;
      *v13 = (void *)16;
      *((_QWORD *)v8 + 6) = 16LL;
      *((_QWORD *)v8 + 11) = 0LL;
      *((_QWORD *)v8 + 28) = MEMORY[0x38];
      v14 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x52504E50u);
      v15 = v14;
      if ( v14 )
      {
        Node = ExInitializeResourceLite(v14);
        if ( Node >= 0 )
        {
          *((_QWORD *)v8 + 30) = v15;
          v15 = 0LL;
        }
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        if ( Node >= 0 )
        {
          *((_QWORD *)v8 + 29) = 0LL;
          memset(v8 + 248, 0, 0x90uLL);
          *((_QWORD *)v8 + 38) = PnpDispatchDevice;
          *((_QWORD *)v8 + 39) = PnpDispatchInstallerClass;
          *((_QWORD *)v8 + 40) = PnpDispatchDeviceInterface;
          *((_QWORD *)v8 + 41) = PnpDispatchInterfaceClass;
          *((_QWORD *)v8 + 42) = PnpDispatchDeviceContainer;
          *((_QWORD *)v8 + 43) = PnpDispatchDevicePanel;
          memset(v8 + 392, 0, 0x60uLL);
          *((_QWORD *)v8 + 61) = 0LL;
          *((_QWORD *)v8 + 62) = 0LL;
          *((_QWORD *)v8 + 63) = 0LL;
          *((_QWORD *)v8 + 64) = 0LL;
          *((_QWORD *)v8 + 65) = 0LL;
          *a7 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        Node = -1073741801;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Node;
}
