/*
 * XREFs of ethAddOneOpenMulticastAddress @ 0x1C00D2534
 * Callers:
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00D21F0 (ndisSetOpenEthAddDeleteMulticast.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 */

__int64 __fastcall ethAddOneOpenMulticastAddress(__int64 a1, char *a2, _BYTE *a3)
{
  __int64 v6; // r9
  unsigned int v7; // edi
  unsigned int v8; // r8d
  int v9; // ecx
  unsigned int v10; // r14d
  int v11; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned __int16 v17; // ax

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0xDu, &WPP_dea268cb493f372f092bdd50109326f3_Traceguids, a1);
  v6 = *(unsigned int *)(a1 + 456);
  v7 = 0;
  v8 = 0;
  *a3 = 1;
  if ( (_DWORD)v6 )
  {
    v13 = *(_QWORD *)(a1 + 448);
    while ( *(_DWORD *)(v13 + 12LL * v8 + 6) != *(_DWORD *)(a2 + 2) || *(_WORD *)(v13 + 12LL * v8 + 4) != *(_WORD *)a2 )
    {
      if ( ++v8 >= (unsigned int)v6 )
        goto LABEL_4;
    }
    ++*(_DWORD *)(v13 + 12LL * v8);
  }
  else
  {
LABEL_4:
    if ( (unsigned int)(v6 + 1) > *(_DWORD *)(a1 + 440) )
    {
      v7 = -1073676279;
    }
    else
    {
      memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12 * v6);
      v9 = *(_DWORD *)(a1 + 456);
      v10 = 0;
      *(_DWORD *)(a1 + 472) = v9;
      v11 = 1;
      *(_DWORD *)(a1 + 456) = v9 + 1;
      if ( v9 )
      {
        v14 = *(_QWORD *)(a1 + 464);
        v15 = *(_DWORD *)(a2 + 2);
        while ( 1 )
        {
          v16 = *(_DWORD *)(v14 + 12LL * v10 + 6);
          if ( v16 > v15 )
            break;
          if ( v16 >= v15 )
          {
            v17 = *(_WORD *)(v14 + 12LL * v10 + 4);
            if ( v17 > *(_WORD *)a2 )
              break;
            v11 = -(v17 < *(_WORD *)a2);
          }
          else
          {
            v11 = -1;
          }
          if ( ++v10 >= *(_DWORD *)(a1 + 472) )
            goto LABEL_6;
        }
        v11 = 1;
      }
LABEL_6:
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), 12LL * v10);
      memmove((void *)(*(_QWORD *)(a1 + 448) + 4LL + 12LL * v10), a2, 6uLL);
      *(_DWORD *)(*(_QWORD *)(a1 + 448) + 12LL * v10) = 1;
      if ( v11 > 0 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 448) + 12LL * (v10 + 1)),
          (const void *)(*(_QWORD *)(a1 + 464) + 12LL * v10),
          12LL * (*(_DWORD *)(a1 + 472) - v10));
      *a3 = 0;
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_dd(0xEu, &WPP_dea268cb493f372f092bdd50109326f3_Traceguids, (unsigned __int8)*a3, v7);
  return v7;
}
