/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C012C72C
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C012CE70 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0017A44 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C968 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009A2D0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C012C7FC (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(HDC a1, void *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-60h] BYREF
  int v11; // [rsp+28h] [rbp-58h]
  int v12; // [rsp+2Ch] [rbp-54h]
  _BYTE v13[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  char v15; // [rsp+60h] [rbp-20h]

  v4 = 0;
  v11 = 0;
  v12 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v10, a1);
  v6 = v10;
  if ( v10 )
  {
    if ( !*(_DWORD *)(v10 + 32) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13);
      DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v13, (struct XDCOBJ *)&v10, v7);
      v4 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v6 + 48), a2, a3);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
      v8 = v14;
      if ( v14 )
      {
        if ( v15 )
        {
          *(_DWORD *)(v14 + 40) &= ~2u;
          v8 = v14;
          v15 = 0;
        }
        if ( v8 )
          XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
  }
  return v4;
}
