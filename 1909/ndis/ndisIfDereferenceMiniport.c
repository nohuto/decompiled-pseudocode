/*
 * XREFs of ndisIfDereferenceMiniport @ 0x1C0002A30
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C002A168 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00638AC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00645BC (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0064A80 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064D70 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C2D8 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CE10 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00BCCE4 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F9F90 (-ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA7E0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C00FAED0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C79C8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7B48 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KIRQL v5; // al
  ULONG_PTR v6; // r8
  KIRQL v7; // si
  __int64 v8; // r10
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // al
  _BYTE *v11; // rdx
  char v13; // cl
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rbx
  unsigned int v16; // edx
  int v17; // ecx
  __int64 v18; // rax
  struct _KEVENT *v19; // rcx

  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v6 = *(_QWORD *)(a1 + 1440);
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
      if ( *(_BYTE *)(v6 + 1) )
      {
        if ( *(_BYTE *)(v6 + 1) == 1 )
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
        v8 = *(_QWORD *)(v6 + 8);
        if ( v8 && (v9 = *(_BYTE *)(v6 + 3), v10 = 0, v9) )
        {
          while ( 1 )
          {
            v11 = (_BYTE *)(v8 + 2LL * v10);
            if ( *v11 == a3 )
            {
              v13 = v11[1];
              if ( v13 )
                break;
            }
            if ( ++v10 >= v9 )
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
  if ( (*(_DWORD *)(a1 + 1396))-- == 1 )
  {
    v18 = *(_QWORD *)(a1 + 1408);
    if ( v18 )
    {
      v19 = *(struct _KEVENT **)(v18 + 4048);
      if ( v19 )
        KeSetEvent(v19, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v7);
}
