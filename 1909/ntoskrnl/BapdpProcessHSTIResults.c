/*
 * XREFs of BapdpProcessHSTIResults @ 0x140A09D8C
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A09E1C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140A0A3E8 (BapdpQueryData.c)
 */

void __fastcall BapdpProcessHSTIResults(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  int v2; // eax
  __int64 v3; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v5[0] = -1059463388;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5[1] = 1314116061;
  v5[2] = -657724523;
  v5[3] = -2040154073;
  v2 = BapdpQueryData(a1, v5, 0LL, 0LL, &NumberOfBytes);
  if ( v2 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x49545348u);
    if ( !PoolWithTag )
      return;
    v2 = 0;
  }
  if ( v2 >= 0 && (int)BapdpQueryData(v3, v5, 0LL, PoolWithTag, &NumberOfBytes) >= 0 )
  {
    qword_1409BF1C8 = PoolWithTag;
    PoolWithTag = 0LL;
    LODWORD(dword_1409BF1C0) = NumberOfBytes;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
