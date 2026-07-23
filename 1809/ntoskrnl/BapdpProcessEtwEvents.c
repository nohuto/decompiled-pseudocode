/*
 * XREFs of BapdpProcessEtwEvents @ 0x1401862E0
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1409D2004 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     BapdWriteEtwEvents @ 0x140178808 (BapdWriteEtwEvents.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x1409D260C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessEtwEvents(__int64 a1)
{
  unsigned int v1; // r14d
  PVOID PoolWithTag; // rbx
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v7[4]; // [rsp+38h] [rbp-18h] BYREF

  v1 = 0;
  v7[0] = -1667627438;
  PoolWithTag = 0LL;
  v7[1] = 1255566311;
  v3 = 0;
  v7[2] = -363808867;
  v7[3] = -1273101358;
  while ( 1 )
  {
    LODWORD(NumberOfBytes) = 0;
    v4 = BapdpQueryData(a1, v7, v3, 0LL, &NumberOfBytes);
    v5 = v4 + 0x80000000;
    if ( (v5 & 0x80000000) == 0 && v4 != -1073741789 )
      break;
    if ( (unsigned int)NumberOfBytes > v1 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
      if ( !PoolWithTag )
        return;
      v1 = NumberOfBytes;
    }
    if ( (int)BapdpQueryData(v5, v7, v3, PoolWithTag, &NumberOfBytes) < 0
      || (int)BapdWriteEtwEvents((unsigned __int64)PoolWithTag, (unsigned int)NumberOfBytes) < 0 )
    {
      break;
    }
    ++v3;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
