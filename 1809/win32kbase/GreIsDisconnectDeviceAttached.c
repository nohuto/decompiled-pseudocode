/*
 * XREFs of GreIsDisconnectDeviceAttached @ 0x1C004A12C
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C004A070 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C004A190 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004A1D4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
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
