/*
 * XREFs of sub_18000C914 @ 0x18000C914
 * Callers:
 *     sub_18000C9C4 @ 0x18000C9C4 (sub_18000C9C4.c)
 * Callees:
 *     sub_18000AEC8 @ 0x18000AEC8 (sub_18000AEC8.c)
 *     sub_18000C478 @ 0x18000C478 (sub_18000C478.c)
 */

char __fastcall sub_18000C914(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v5; // eax
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rdx
  volatile signed __int32 *v9; // rax

  v2 = *(_DWORD *)(a1 + 16);
  LOBYTE(v5) = sub_18000AEC8(a1, v2 != 0);
  if ( (_BYTE)v5 )
  {
    if ( !v2 || (v6 = *(_DWORD **)(a1 + 24), v7 = &v6[20 * *(unsigned __int16 *)(a1 + 32)], v6 == v7) )
    {
LABEL_8:
      v9 = *(volatile signed __int32 **)(a1 + 8);
      *(_WORD *)(a1 + 34) = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
      LOBYTE(v5) = sub_18000C478(
                     *(_QWORD *)(a1 + 24) + 80LL * *(unsigned __int16 *)(a1 + 34),
                     a2,
                     _InterlockedIncrement(v9));
    }
    else
    {
      v8 = v6 + 2;
      while ( 1 )
      {
        if ( *(v8 - 1) > *(_DWORD *)(a1 + 16) )
        {
          v5 = *(_DWORD *)(a2 + 4);
          if ( *v8 == v5 )
            break;
        }
        v8 += 20;
        if ( v8 - 2 == v7 )
          goto LABEL_8;
      }
    }
  }
  return v5;
}
