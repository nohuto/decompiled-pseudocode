/*
 * XREFs of ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x1C009244C
 * Callers:
 *     ndisCleanUpForProtocol @ 0x1C0093804 (ndisCleanUpForProtocol.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F2C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisMDoProtocolRequest(
        struct _NDIS_OPEN_BLOCK *a1,
        __int64 a2,
        int a3,
        void *a4,
        int a5,
        unsigned int a6)
{
  unsigned int v9; // edi
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int SetMiniport; // eax
  int v12; // edx
  char v14[4]; // [rsp+38h] [rbp-C8h]
  char v15[256]; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      57,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)a1,
      a3);
  MiniportHandle = a1->MiniportHandle;
  memset(v15, 0, 0xF8uLL);
  *(_DWORD *)&v15[88] |= 8u;
  *(_DWORD *)v15 = 16253334;
  *(_QWORD *)&v15[104] = a1;
  ndisMReferenceOpen((__int64)a1, 6u);
  *(_DWORD *)&v15[88] |= 0x220u;
  *(_DWORD *)&v15[4] = 1;
  *(_DWORD *)v15 = 16253334;
  *(_DWORD *)&v15[32] = a3;
  *(_QWORD *)&v15[40] = a4;
  *(_DWORD *)&v15[48] = a5;
  SetMiniport = ndisQuerySetMiniportEx((__int64)MiniportHandle, 0LL, (__int64)v15, 1, 0LL, 0LL);
  if ( SetMiniport )
  {
    v9 = a6;
    if ( SetMiniport != -1 )
      v9 = a6 + 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v9;
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      6u,
      0x3Au,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)a1,
      a3,
      *(_DWORD *)v14);
  }
  return v9;
}
