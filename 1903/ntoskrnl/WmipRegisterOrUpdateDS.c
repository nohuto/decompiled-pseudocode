/*
 * XREFs of WmipRegisterOrUpdateDS @ 0x14071145C
 * Callers:
 *     WmipRegistrationWorker @ 0x140718C70 (WmipRegistrationWorker.c)
 *     WmipRegisterDevice @ 0x140736804 (WmipRegisterDevice.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x140711938 (WmipSendWmiIrp.c)
 *     WmipProcessWmiRegInfo @ 0x140732B4C (WmipProcessWmiRegInfo.c)
 */

__int64 __fastcall WmipRegisterOrUpdateDS(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int *PoolWithTag; // rdi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v14 = 0LL;
  v5 = 0x2000;
  do
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x44696D57u);
    if ( PoolWithTag )
    {
      LOBYTE(v6) = 11;
      v9 = WmipSendWmiIrp(v6, *(unsigned int *)(a1 + 56), a2 != 0, v5, PoolWithTag, v13);
      v11 = v9;
      if ( v9 < 0 )
      {
        if ( v9 == -1073741789 )
          goto LABEL_14;
        LOBYTE(v10) = 8;
        v11 = WmipSendWmiIrp(v10, *(unsigned int *)(a1 + 56), a2 != 0, v5, PoolWithTag, v13);
      }
      if ( v11 != -1073741789 )
      {
        v2 = v14;
        if ( v14 != 4 )
          continue;
        goto LABEL_15;
      }
LABEL_14:
      v2 = v14;
LABEL_15:
      v5 = *PoolWithTag;
      ExFreePoolWithTag(PoolWithTag, 0);
      v11 = -1073741789;
      continue;
    }
    v11 = -1073741670;
  }
  while ( v11 == -1073741789 );
  if ( v11 >= 0 )
  {
    LOBYTE(v8) = a2;
    v11 = WmipProcessWmiRegInfo(a1, PoolWithTag, v2, v8);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v11;
}
