/*
 * XREFs of NdisMFreePort @ 0x1C0061C60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EF7C (WPP_RECORDER_SF_qdD_ea_1C005EF7C.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005F0B4 (WPP_RECORDER_SF_ql_ea_1C005F0B4.c)
 *     ndisFindPortByPortNumber @ 0x1C0062034 (ndisFindPortByPortNumber.c)
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
  int v15; // edx

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0xCu,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)NdisMiniportHandle,
      PortNumber);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisMiniportHandle + 12);
  *((_QWORD *)NdisMiniportHandle + 65) = KeGetCurrentThread();
  PortByPortNumber = ndisFindPortByPortNumber(NdisMiniportHandle, PortNumber);
  v8 = (_QWORD *)PortByPortNumber;
  if ( PortByPortNumber )
  {
    if ( *(_DWORD *)(PortByPortNumber + 16) == 2 )
    {
      v9 = *((_QWORD *)NdisMiniportHandle + 342);
      v10 = v7 >> 3;
      if ( v9
        && *((_DWORD *)NdisMiniportHandle + 686) >= (unsigned int)(v10 + 1)
        && (v11 = *(unsigned __int8 *)(v10 + v9), v12 = PortNumber & 7, _bittest(&v11, v12)) )
      {
        *(_BYTE *)(v10 + v9) = v11 & ~(1 << v12);
        v13 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v14 = (_QWORD *)v8[1], (_QWORD *)*v14 != v8) )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        --*((_DWORD *)NdisMiniportHandle + 687);
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
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v5);
  if ( !v4 )
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x64u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      0x17u,
      0xDu,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)NdisMiniportHandle,
      PortNumber,
      v4);
  return v4;
}
