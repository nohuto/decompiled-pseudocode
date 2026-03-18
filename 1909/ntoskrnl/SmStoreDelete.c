/*
 * XREFs of SmStoreDelete @ 0x1408E837C
 * Callers:
 *     SmcCacheCleanup @ 0x1408EB2AC (SmcCacheCleanup.c)
 *     SmcStoreDelete @ 0x1408EBC90 (SmcStoreDelete.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401C40D0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1408E8400 (SmStorePhysicalRequestIssue.c)
 */

int __fastcall SmStoreDelete(int a1, int a2)
{
  int *v2; // rax
  _DWORD SystemInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  int *v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+74h] [rbp+1Ch]
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  v2 = &v8;
  SystemInformation[0] = 1;
  SystemInformation[1] = 4;
  v8 = 1;
  v5 = &v8;
  v6 = 8;
  v9 = a2;
  if ( a1 )
  {
    if ( a1 == 1 )
      LODWORD(v2) = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18uLL);
  }
  else
  {
    LODWORD(v2) = SmStorePhysicalRequestIssue(DeviceObject, 0, (__int64)&v10);
  }
  return (int)v2;
}
