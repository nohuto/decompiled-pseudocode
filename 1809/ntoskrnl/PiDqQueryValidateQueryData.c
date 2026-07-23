/*
 * XREFs of PiDqQueryValidateQueryData @ 0x14059193C
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 * Callees:
 *     PiDqGetPnpObjectType @ 0x140596A78 (PiDqGetPnpObjectType.c)
 *     PnpValidateMultiSz @ 0x14068C658 (PnpValidateMultiSz.c)
 *     ValidFilter @ 0x1406A438C (ValidFilter.c)
 *     _PnpValidatePropertyData @ 0x1406A4464 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiDqQueryValidateQueryData(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // ecx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdi

  v2 = -1073741811;
  if ( a1 )
  {
    if ( (unsigned int)PiDqGetPnpObjectType(*(unsigned int *)(a1 + 16)) )
    {
      v3 = *(_DWORD *)(a1 + 40);
      if ( (v3 & 2) == 0 || !*(_DWORD *)(a1 + 64) )
      {
        if ( *(_DWORD *)(a1 + 20) == 1 )
        {
          if ( !*(_QWORD *)(a1 + 24) )
            return v2;
        }
        else if ( *(_DWORD *)(a1 + 20) == 2 )
        {
          if ( (int)PnpValidateMultiSz(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 24)) < 0 )
            return v2;
          v3 = *(_DWORD *)(a1 + 40);
        }
        if ( (v3 & 0xFFFFFFF8) != 0 )
          return v2;
        if ( (v3 & 4) != 0 )
        {
          if ( (int)PnpValidateMultiSz(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 48)) < 0 )
            return v2;
        }
        else if ( *(_QWORD *)(a1 + 56) || *(_DWORD *)(a1 + 48) )
        {
          return v2;
        }
        v4 = *(_QWORD *)(a1 + 72);
        if ( v4 || !*(_DWORD *)(a1 + 64) )
        {
          v5 = *(_DWORD *)(a1 + 64);
          if ( v5 || !v4 )
          {
            v6 = 0;
            if ( v5 )
            {
              while ( !*(_QWORD *)(32LL * v6 + v4 + 24) )
              {
                if ( ++v6 >= v5 )
                  goto LABEL_15;
              }
            }
            else
            {
LABEL_15:
              v7 = *(_QWORD *)(a1 + 88);
              if ( (v7 || !*(_DWORD *)(a1 + 80))
                && (*(_DWORD *)(a1 + 80) || !v7)
                && (!v7 || (unsigned int)ValidFilter()) )
              {
                v8 = *(_QWORD *)(a1 + 104);
                if ( v8 || !*(_DWORD *)(a1 + 96) )
                {
                  v9 = *(_DWORD *)(a1 + 96);
                  if ( v9 || !v8 )
                  {
                    v10 = 0LL;
                    if ( v9 )
                    {
                      while ( (int)PnpValidatePropertyData(
                                     *(PSECURITY_DESCRIPTOR *)(*(_QWORD *)(a1 + 104) + 40 * v10 + 32),
                                     *(_DWORD *)(*(_QWORD *)(a1 + 104) + 40 * v10 + 24)) >= 0 )
                      {
                        v10 = (unsigned int)(v10 + 1);
                        if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 96) )
                          return 0;
                      }
                    }
                    else
                    {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
