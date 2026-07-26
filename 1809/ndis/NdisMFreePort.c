/*
 * XREFs of NdisMFreePort @ 0x1C003D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ndisFindPortByPortNumber @ 0x1C003DA68 (ndisFindPortByPortNumber.c)
 */

NDIS_STATUS __stdcall NdisMFreePort(NDIS_HANDLE NdisMiniportHandle, NDIS_PORT_NUMBER PortNumber)
{
  NDIS_STATUS v4; // edi
  KIRQL v5; // r14
  __int64 PortByPortNumber; // rax
  unsigned int v7; // edx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  NDIS_PORT_NUMBER v12; // r9d
  __int64 v13; // rdx
  _QWORD *v14; // rax

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_qD(0xCu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)NdisMiniportHandle, PortNumber);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)NdisMiniportHandle + 466) = 2359598;
  PortByPortNumber = ndisFindPortByPortNumber(NdisMiniportHandle, PortNumber);
  v8 = (_QWORD *)PortByPortNumber;
  if ( PortByPortNumber )
  {
    if ( *(_DWORD *)(PortByPortNumber + 16) == 2 )
    {
      v9 = *((_QWORD *)NdisMiniportHandle + 344);
      v10 = v7 >> 3;
      if ( v9
        && *((_DWORD *)NdisMiniportHandle + 690) >= (unsigned int)(v10 + 1)
        && (v11 = *(unsigned __int8 *)(v10 + v9), v12 = PortNumber & 7, _bittest(&v11, v12)) )
      {
        *(_BYTE *)(v10 + v9) = v11 & ~(1 << v12);
        v13 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v14 = (_QWORD *)v8[1], (_QWORD *)*v14 != v8) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        --*((_DWORD *)NdisMiniportHandle + 691);
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        v4 = -1073741811;
      }
    }
    else
    {
      v4 = -1071448018;
    }
  }
  else
  {
    v4 = -1071448019;
  }
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  *((_DWORD *)NdisMiniportHandle + 466) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v5);
  if ( !v4 )
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x64u);
  if ( (unsigned __int8)byte_1C00A0266 >= 4u )
    WPP_SF_qdD(0xDu, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, (__int64)NdisMiniportHandle, PortNumber, v4);
  return v4;
}
