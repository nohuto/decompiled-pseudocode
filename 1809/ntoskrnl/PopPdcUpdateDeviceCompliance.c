/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x1408705EC
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140870270 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1402E02BC (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

__int64 PopPdcUpdateDeviceCompliance()
{
  _DWORD *v0; // r8
  unsigned int v1; // ebx
  int v2; // edi
  int v3; // ebp
  int v4; // ecx
  int v5; // edx
  bool v6; // zf
  int *v7; // rsi
  int v8; // edx

  v0 = PopPdcDeviceList;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  while ( v0 != (_DWORD *)&PopPdcDeviceList )
  {
    v4 = v0[6];
    v5 = v2;
    v3 |= 1 << v4;
    v2 |= 1 << v4;
    v6 = *((_BYTE *)v0 + 32) == 0;
    v0 = *(_DWORD **)v0;
    if ( v6 )
      v2 = v5;
  }
  PopAcquirePolicyLock();
  v7 = PopCsDeviceCompliance;
  do
  {
    if ( ((1 << v1) & v2) != 0 )
      v8 = 1;
    else
      v8 = -((v3 & (1 << v1)) != 0);
    if ( v8 != *v7 )
    {
      *v7 = v8;
      PopDiagTraceDeviceComplianceUpdate(v1, v8);
    }
    ++v1;
    ++v7;
  }
  while ( v1 < 5 );
  return PopReleasePolicyLock();
}
