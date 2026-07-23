/*
 * XREFs of PnprQueryReplaceFeatures @ 0x14028A694
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x1406FA418 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprQueryReplaceFeatures(__int64 a1, PDEVICE_OBJECT *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 result; // rax
  _BYTE v6[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h]
  void (__fastcall *v8)(__int64); // [rsp+48h] [rbp-30h]
  int (__fastcall *v9)(__int64, int *); // [rsp+58h] [rbp-20h]
  int v10; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( (v2 & 4) != 0 )
  {
    v4 = 8;
  }
  else
  {
    v4 = 0;
    if ( (v2 & 8) != 0 )
      v4 = 16;
  }
  result = v4 | 0x20;
  if ( (v2 & 0x10) == 0 )
    result = v4;
  if ( !(_DWORD)result )
  {
    if ( (int)PnpQueryInterface(*a2, 0LL, v6) >= 0 )
    {
      if ( v9(v7, &v10) >= 0 )
      {
        if ( (v10 & 1) != 0 )
        {
          v3 = 8;
        }
        else if ( (v10 & 2) != 0 )
        {
          v3 = 16;
        }
        if ( (v10 & 4) != 0 )
          v3 |= 0x20u;
      }
      v8(v7);
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
