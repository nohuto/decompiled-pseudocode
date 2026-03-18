/*
 * XREFs of ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0061A2C
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001554C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4A18 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0061CB0 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall DrvAddAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // r10
  struct _LUID v2; // r8
  unsigned int v3; // r11d
  __int64 v4; // r9
  __int64 v5; // r9
  unsigned int v6; // r11d
  struct _LUID v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v1 = gpGdiSharedMemory;
  v2 = a1;
  v3 = *((_DWORD *)gpGdiSharedMemory + 393257);
  if ( v3 >= (unsigned int)gcMaximumAdapterCount )
    return 3221225612LL;
  v4 = 0LL;
  if ( v3 )
  {
    while ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))operator==)(&v8, &gpAdapterLuids[v4], v2) )
    {
      v4 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v4 >= v6 )
        goto LABEL_6;
    }
    ++gpDevicesPerLuid[v5];
  }
  else
  {
LABEL_6:
    gpAdapterLuids[v4] = v2;
    ++gpDevicesPerLuid[v4];
    ++v1[393257];
    ++v1[393256];
  }
  return 0LL;
}
