/*
 * XREFs of GetKnownRIMDeviceKind @ 0x1C012E388
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0122A38 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C012395C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0133338 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKnownRIMDeviceKind(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  int v3; // ecx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( *(_BYTE *)(a1 + 48) == 1 )
    {
      return 2;
    }
    else if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v2 = *(_QWORD *)(a1 + 32);
      if ( (*(_DWORD *)(v2 + 280) & 0x80u) != 0 )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(v2 + 560) + 24LL);
        if ( v3 > 0 )
        {
          if ( v3 <= 4 )
          {
            return 3;
          }
          else if ( v3 <= 6 )
          {
            return 5;
          }
          else if ( v3 == 7 )
          {
            return 4;
          }
        }
      }
    }
  }
  else
  {
    return 1;
  }
  return v1;
}
