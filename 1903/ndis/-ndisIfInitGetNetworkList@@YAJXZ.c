/*
 * XREFs of ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00361F8
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002528C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00364BC (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368CC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 ndisIfInitGetNetworkList(void)
{
  char *v0; // rdi
  int v1; // edx
  unsigned int v2; // edx
  int v3; // ebx
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned int v7; // r14d
  KIRQL v8; // r12
  struct _NDIS_IF_NETWORK_BLOCK *v9; // rdi
  char *v10; // rsi
  __int64 v11; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r13
  struct _GUID *v13; // r15
  _QWORD v15[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v16[20]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v17; // [rsp+130h] [rbp+67h]
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // [rsp+138h] [rbp+6Fh] BYREF
  char *PoolWithTag; // [rsp+140h] [rbp+77h]

  v0 = 0LL;
  memset(v15, 0, 0x48uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      24,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids);
  }
  memset(v16, 0, 0x70uLL);
  LODWORD(v16[3]) = 6;
  v16[2] = &NPI_MS_NDIS_MODULEID;
  v16[4] = 0x100000000LL;
  v16[5] = 0LL;
  LODWORD(v16[6]) = 16;
  v16[7] = 0LL;
  LODWORD(v16[8]) = 528;
  LODWORD(v16[13]) = 0;
  v3 = NsiEnumerateObjectsAllParametersEx(v16);
  if ( v3 >= 0 )
  {
    v4 = v16[13];
    if ( LODWORD(v16[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v4 = v16[13];
          v0 = 0LL;
        }
        v2 = 16 * v4;
        if ( 16 * (unsigned __int64)v4 > 0xFFFFFFFF || 544 * v4 < 16 * v4 )
        {
          v3 = -1073741670;
          goto LABEL_24;
        }
        v5 = v2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v2 + 528LL * v4, 0x6669444Eu);
        v0 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, 528LL * LODWORD(v16[13]));
        v16[5] = v0;
        v16[7] = &v0[v5];
        LODWORD(v16[6]) = 16;
        LODWORD(v16[8]) = 528;
        v3 = NsiEnumerateObjectsAllParametersEx(v16);
        if ( v3 != 261 )
          goto LABEL_11;
        v4 = v16[13];
      }
      v3 = -1073741670;
LABEL_11:
      if ( v3 >= 0 )
      {
        v6 = v16[5];
        v17 = v16[5];
        NetworkBlock = (struct _NDIS_IF_NETWORK_BLOCK *)v16[7];
        v7 = 0;
        v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        if ( LODWORD(v16[13]) )
        {
          v9 = NetworkBlock;
          do
          {
            v10 = (char *)v9 + 528 * v7;
            if ( *v10 == -84 && v10[1] && *((_WORD *)v10 + 1) >= 0x210u )
            {
              CompartmentBlock = ndisIfFindCompartmentBlock(*((_DWORD *)v10 + 1));
              v13 = (struct _GUID *)(16 * v11 + v6);
              if ( CompartmentBlock )
              {
                NetworkBlock = ndisIfFindNetworkBlock(v13);
                if ( !NetworkBlock )
                  v3 = ndisIfCreateNetworkBlock(
                         CompartmentBlock,
                         v13,
                         (struct _NDIS_NSI_NETWORK_RW *)v9 + v7,
                         &NetworkBlock);
              }
              else
              {
                KeReleaseSpinLock(&ndisIfListLock, v8);
                v15[3] = 6LL;
                v15[1] = 0LL;
                v15[2] = &NPI_MS_NDIS_MODULEID;
                v15[6] = 16LL;
                v15[8] = 528LL;
                v15[0] = 0LL;
                v15[4] = 0x300000000LL;
                v15[5] = v13;
                v15[7] = (char *)v9 + 528 * v7;
                NsiSetAllParametersEx(v15);
                v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              }
              v6 = v17;
            }
            ++v7;
          }
          while ( v7 < LODWORD(v16[13]) );
          v0 = PoolWithTag;
        }
        KeReleaseSpinLock(&ndisIfListLock, v8);
      }
LABEL_24:
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      22,
      25,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
