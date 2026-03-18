/*
 * XREFs of sfac_ComputeMapping @ 0x1C02BF258
 * Callers:
 *     fs_NewSfnt @ 0x1C02B1E24 (fs_NewSfnt.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_ComputeBinarySearchParams @ 0x1C02BEEC0 (sfac_ComputeBinarySearchParams.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_ComputeMapping(__int64 a1, __int16 a2, __int16 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v8; // rbp
  unsigned int v9; // edi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // r10
  __int64 v15; // rcx
  _WORD *v16; // r8
  unsigned __int64 v17; // r11
  __int16 v18; // ax
  _WORD *v19; // rax
  int v20; // ecx
  unsigned __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 == -1 )
  {
    *(_DWORD *)(a1 + 212) = 1;
    return 0LL;
  }
  v8 = *(unsigned int *)(a1 + 92);
  result = sfac_GetDataPtr(a1, 0, *(_DWORD *)(a1 + 92), 8, 0, (__int64)&v21);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v21;
    if ( !v21 )
    {
      *(_DWORD *)(a1 + 212) = 1;
      return 0LL;
    }
    if ( (unsigned int)v8 < 4
      || ((v11 = v21 + 4, v12 = 8 * (unsigned __int16)__ROR2__(*(_WORD *)(v21 + 2), 8), v12 > 0xFFFF)
        ? (v13 = -1)
        : (v13 = v12),
          v12 > 0xFFFF) )
    {
      *(_DWORD *)(a1 + 20) = 0;
    }
    else
    {
      if ( v11 + v13 >= v11 )
      {
        v14 = v11 + v13;
        while ( v11 < v14 )
        {
          if ( v3 )
            goto LABEL_24;
          if ( v11 > v10 + (unsigned int)(v8 - 8) )
            goto LABEL_39;
          if ( __ROR2__(*(_WORD *)v11, 8) == a2 && __ROR2__(*(_WORD *)(v11 + 2), 8) == a3 )
          {
            v3 = 1;
            *(_DWORD *)(a1 + 20) = _byteswap_ulong(*(_DWORD *)(v11 + 4));
          }
          v11 += 8LL;
        }
        if ( v3 )
        {
LABEL_24:
          v15 = *(unsigned int *)(a1 + 20);
          v16 = (_WORD *)(v15 + v10);
          if ( v15 + v10 >= v10 && (int)v15 + 6 >= (unsigned int)v15 )
          {
            *(_DWORD *)(a1 + 20) = v15 + 6;
            v17 = v8 + v10 - 2;
            if ( (unsigned __int64)v16 <= v17 )
            {
              v18 = __ROR2__(*v16, 8);
              *(_WORD *)(a1 + 208) = v18;
              if ( v18 )
              {
                switch ( v18 )
                {
                  case 2:
                    *(_DWORD *)(a1 + 212) = 3;
                    break;
                  case 4:
                    v19 = (_WORD *)(v10 + (unsigned int)(v15 + 6));
                    *(_DWORD *)(a1 + 212) = 4;
                    if ( (unsigned __int64)v19 <= v17 )
                    {
                      sfac_ComputeBinarySearchParams(
                        __ROR2__(*v19, 8) >> 1,
                        (_WORD *)(a1 + 218),
                        (_WORD *)(a1 + 220),
                        (_WORD *)(a1 + 222));
                    }
                    else
                    {
                      *(_DWORD *)(a1 + 20) = 0;
                      v9 = 5126;
                      *(_DWORD *)(a1 + 212) = 1;
                    }
                    break;
                  case 6:
                    *(_DWORD *)(a1 + 212) = 5;
                    break;
                  default:
                    *(_DWORD *)(a1 + 212) = 1;
                    v9 = 5130;
                    break;
                }
              }
              else
              {
                *(_DWORD *)(a1 + 212) = 2;
              }
              InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
              return v9;
            }
          }
        }
LABEL_39:
        *(_DWORD *)(a1 + 20) = 0;
        goto LABEL_40;
      }
      *(_DWORD *)(a1 + 20) = 0;
    }
LABEL_40:
    v20 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 212) = 1;
    InvokeReleaseSfntFrag(v20);
    return 5126LL;
  }
  return result;
}
