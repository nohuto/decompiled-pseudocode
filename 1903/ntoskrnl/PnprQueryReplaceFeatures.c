/*
 * XREFs of PnprQueryReplaceFeatures @ 0x1402A0814
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprQueryReplaceFeatures(__int64 a1, PDEVICE_OBJECT *a2)
{
  int v4; // r8d
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 result; // rax
  _QWORD v8[8]; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+80h] [rbp+8h] BYREF

  memset(v8, 0, 0x38uLL);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = 0;
  if ( (v4 & 4) != 0 )
  {
    v6 = 8;
  }
  else
  {
    v6 = 0;
    if ( (v4 & 8) != 0 )
      v6 = 16;
  }
  result = v6 | 0x20;
  if ( (v4 & 0x10) == 0 )
    result = v6;
  if ( !(_DWORD)result )
  {
    if ( (int)PnpQueryInterface(*a2, 0LL, v8) >= 0 )
    {
      if ( ((int (__fastcall *)(_QWORD, int *))v8[5])(v8[1], &v9) >= 0 )
      {
        if ( (v9 & 1) != 0 )
        {
          v5 = 8;
        }
        else if ( (v9 & 2) != 0 )
        {
          v5 = 16;
        }
        if ( (v9 & 4) != 0 )
          v5 |= 0x20u;
      }
      ((void (__fastcall *)(_QWORD))v8[3])(v8[1]);
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
