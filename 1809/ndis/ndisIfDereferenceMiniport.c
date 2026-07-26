/*
 * XREFs of ndisIfDereferenceMiniport @ 0x1C000A8E0
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0022BD0 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003F7A4 (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FBE0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003FE90 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C0042598 (ndisIfDeregisterInterfaceEx.c)
 *     ndisInvokeDeviceReset @ 0x1C00500CC (ndisInvokeDeviceReset.c)
 *     ndisQueryDeviceReset @ 0x1C0050914 (ndisQueryDeviceReset.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0078C34 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00B61D0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B6E90 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7E90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00E262C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KIRQL v5; // al
  ULONG_PTR v6; // r8
  KIRQL v7; // si
  int v8; // ecx
  __int64 v9; // rdx
  unsigned __int8 v10; // r10
  _BYTE *v11; // r9
  char v13; // al
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rbx
  unsigned int v16; // edx
  int v17; // ecx
  __int64 v18; // rax
  struct _KEVENT *v19; // rcx

  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v6 = *(_QWORD *)(a1 + 1448);
  v7 = v5;
  if ( v6 - 2 > 1 )
  {
    if ( v6 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v6, 0LL);
    if ( a3 == 0xFF )
    {
      if ( (*(_BYTE *)v6 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, v6, 0xFFuLL);
      *(_BYTE *)v6 &= ~2u;
    }
    else
    {
      if ( a3 >= *(_BYTE *)(v6 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v6, a3);
      v8 = *(unsigned __int8 *)(v6 + 1);
      if ( *(_BYTE *)(v6 + 1) )
      {
        if ( v8 == 1 )
        {
          v14 = a3;
          v15 = v6 + ((unsigned __int64)a3 << 6);
          v16 = *(_DWORD *)(v15 + 64);
          v17 = (unsigned __int16)v16 >> 1;
          if ( v16 >> 17 < 0x3FFE && v17 == (v16 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 8));
            *(_DWORD *)(v15 + 64) &= 0x10001u;
          }
          else
          {
            if ( v17 == 0 && (v16 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v6, v14);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 8), 0);
          }
        }
      }
      else
      {
        v9 = *(_QWORD *)(v6 + 8);
        if ( v9 && (v10 = *(_BYTE *)(v6 + 3)) != 0 )
        {
          while ( 1 )
          {
            v11 = (_BYTE *)(v9 + 2LL * (unsigned __int8)v8);
            if ( *v11 == a3 )
            {
              v13 = v11[1];
              if ( v13 )
                break;
            }
            LOBYTE(v8) = v8 + 1;
            if ( (unsigned __int8)v8 >= v10 )
              goto LABEL_10;
          }
          v11[1] = v13 - 1;
        }
        else
        {
LABEL_10:
          if ( !_bittestandreset((signed __int32 *)(v6 + 16), a3) )
            ndisBugCheckEx(0x1EuLL, 0LL, v6, a3);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 1404))-- == 1 )
  {
    v18 = *(_QWORD *)(a1 + 1416);
    if ( v18 )
    {
      v19 = *(struct _KEVENT **)(v18 + 4080);
      if ( v19 )
        KeSetEvent(v19, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v7);
}
