/*
 * XREFs of BapdpProcessResumeInformation @ 0x140A099E0
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A098F0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140A09EBC (BapdpQueryData.c)
 *     BapdpRegisterResumeInformation @ 0x140A0A0E4 (BapdpRegisterResumeInformation.c)
 */

void __fastcall BapdpProcessResumeInformation(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  int v2; // eax
  __int64 v3; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v5[0] = 1623809380;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5[1] = 1116188130;
  v5[2] = 871391376;
  v5[3] = 785389825;
  v2 = BapdpQueryData(a1, v5, 0LL, 0LL, &NumberOfBytes);
  if ( v2 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
    v2 = 0;
  }
  if ( v2 >= 0 && (int)BapdpQueryData(v3, v5, 0LL, PoolWithTag, &NumberOfBytes) >= 0 )
    BapdpRegisterResumeInformation(PoolWithTag, NumberOfBytes);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
