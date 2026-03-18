/*
 * XREFs of GreIsDisconnectDeviceAttached @ 0x1C004FFF4
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004DDB0 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0050058 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005009C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

__int64 GreIsDisconnectDeviceAttached()
{
  unsigned int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v2, (HSEMAPHORE)ghsemDynamicModeChange);
  v0 = 1;
  if ( (!gpLocalDiscGraphicsDevice || (*((_DWORD *)gpLocalDiscGraphicsDevice + 40) & 1) == 0)
    && (!gpRemoteDiscGraphicsDevice || (*((_DWORD *)gpRemoteDiscGraphicsDevice + 40) & 1) == 0) )
  {
    v0 = 0;
  }
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)&v2);
  return v0;
}
