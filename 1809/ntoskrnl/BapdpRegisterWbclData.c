/*
 * XREFs of BapdpRegisterWbclData @ 0x1409D24E8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1409D2004 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BapdRegisterSiData @ 0x14056FBD8 (BapdRegisterSiData.c)
 *     BapdpQueryData @ 0x1409D260C (BapdpQueryData.c)
 */

void __fastcall BapdpRegisterWbclData(__int64 a1)
{
  ULONG *PoolWithTag; // rbx
  __int128 v2; // xmm0
  int v3; // edi
  int v4; // eax
  __int64 v5; // rcx
  unsigned int NumberOfBytes[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h] BYREF

  PoolWithTag = 0LL;
  *(_QWORD *)&v8 = 0x471C6272B639D9DDLL;
  *((_QWORD *)&v8 + 1) = 0x2FE048103459B2B1LL;
  *(_QWORD *)&v7 = 0x45BE0A5DB8728CAELL;
  *((_QWORD *)&v7 + 1) = 0x252ED19A0171D495LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 != 1 )
      return;
    v2 = v7;
    v3 = 2;
  }
  else
  {
    v2 = v8;
    v3 = 0;
  }
  NumberOfBytes[0] = 0;
  v8 = v2;
  v4 = BapdpQueryData(a1, &v8, 0LL, 0LL, NumberOfBytes);
  if ( v4 == -1073741789 )
  {
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes[0], 0x64506142u);
    if ( !PoolWithTag )
      return;
    v4 = 0;
  }
  if ( v4 >= 0 && (int)BapdpQueryData(v5, &v8, 0LL, PoolWithTag, NumberOfBytes) >= 0 )
    BapdRegisterSiData(PoolWithTag, NumberOfBytes[0], v3);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
