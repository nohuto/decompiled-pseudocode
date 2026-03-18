/*
 * XREFs of ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x18008C7C8
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860 (-AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV-$span@$$CBG$0-0@gsl@@IPEAPEAX@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18005F350 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x18008C794 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceManager::GetAdapterHwProtectedEntityCount(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v6; // rcx

  v2 = *((_DWORD *)this + 26);
  v3 = 0;
  v4 = 0;
  if ( v2 )
  {
    v6 = *((_QWORD *)this + 10);
    while ( *(_QWORD *)(v6 + 12LL * v4) != a2 )
    {
      if ( ++v4 >= v2 )
        return v3;
    }
    return *(unsigned int *)(v6 + 12LL * v4 + 8);
  }
  return v3;
}
