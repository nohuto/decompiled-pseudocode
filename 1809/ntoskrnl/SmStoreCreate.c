/*
 * XREFs of SmStoreCreate @ 0x1408ACAF4
 * Callers:
 *     SmcStoreCreate @ 0x1408B0350 (SmcStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwSetSystemInformation @ 0x1401BB750 (ZwSetSystemInformation.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmStorePhysicalRequestIssue @ 0x1408ACC8C (SmStorePhysicalRequestIssue.c)
 */

NTSTATUS __fastcall SmStoreCreate(int a1, __int128 *a2, _DWORD *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  NTSTATUS result; // eax
  int v9; // ecx
  _QWORD SystemInformation[3]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v11; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v12[12]; // [rsp+50h] [rbp-29h] BYREF

  SystemInformation[0] = 0x300000001LL;
  SystemInformation[1] = v12;
  SystemInformation[2] = 88LL;
  memset(v12, 0, 0x58uLL);
  v6 = *a2;
  v7 = a2[1];
  LODWORD(v12[0]) = 6;
  *(_OWORD *)&v12[1] = v6;
  *(_OWORD *)&v12[5] = a2[2];
  v12[9] = *((_QWORD *)a2 + 8);
  *(_OWORD *)&v12[3] = v7;
  *(_OWORD *)&v12[7] = a2[3];
  if ( a1 )
  {
    if ( a1 != 1 )
      return -1073741811;
    result = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18uLL);
    v9 = v12[10];
  }
  else
  {
    result = SmStorePhysicalRequestIssue(DeviceObject, 0, (__int64)&v11);
    v9 = v11;
  }
  if ( result >= 0 )
  {
    *a3 = v9;
    return 0;
  }
  return result;
}
