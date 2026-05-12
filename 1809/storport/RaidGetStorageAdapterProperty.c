/*
 * XREFs of RaidGetStorageAdapterProperty @ 0x1C006A19C
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C006A084 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorageAdapterProperty(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r10
  int v5; // eax
  unsigned int v6; // r9d
  bool v7; // cf

  v3 = *a3;
  if ( (unsigned __int64)*a3 < 8 )
  {
    *a3 = 32LL;
    return 3221225507LL;
  }
  else
  {
    v4 = 30LL;
    if ( v3 < 0x1E )
    {
      *(_DWORD *)a2 = 32;
      *(_DWORD *)(a2 + 4) = 32;
      *a3 = 8LL;
    }
    else
    {
      v5 = v3 < 0x20 ? 30 : 32;
      *(_DWORD *)(a2 + 4) = v5;
      *(_DWORD *)a2 = v5;
      v6 = *(_DWORD *)(a1 + 348);
      if ( *(_BYTE *)(a1 + 4514) && v6 >= *(_DWORD *)(a1 + 732) )
        v6 = *(_DWORD *)(a1 + 732);
      *(_DWORD *)(a2 + 12) = v6;
      v7 = (unsigned __int64)*a3 < 0x20;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 344);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 368);
      *(_BYTE *)(a2 + 20) = *(_BYTE *)(a1 + 409);
      *(_BYTE *)(a2 + 21) = *(_BYTE *)(a1 + 404);
      *(_BYTE *)(a2 + 22) = *(_BYTE *)(a1 + 411);
      *(_BYTE *)(a2 + 23) = 1;
      *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 4420);
      *(_DWORD *)(a2 + 26) = 2;
      if ( !v7 )
      {
        v4 = 32LL;
        *(_BYTE *)(a2 + 30) = *(_BYTE *)(a1 + 418);
        *(_BYTE *)(a2 + 31) = *(_BYTE *)(a1 + 419);
      }
      *a3 = v4;
    }
    return 0LL;
  }
}
