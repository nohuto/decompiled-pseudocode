/*
 * XREFs of ndisOidPreLinkSpeedAndMediaState @ 0x1C00E3AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreLinkSpeedAndMediaState(__int64 *a1)
{
  __int64 v1; // r8
  char v2; // r9
  __int64 v3; // rdx
  _DWORD *v4; // rbx
  int v5; // r11d
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned __int64 v9; // rcx
  unsigned int v10; // r8d

  v1 = a1[4];
  v2 = 0;
  v3 = *a1;
  v4 = *(_DWORD **)(v1 + 40);
  v5 = *(_DWORD *)(v1 + 32);
  if ( *a1 )
  {
    v6 = 3 * *(_DWORD *)(v3 + 376);
    v7 = *(_DWORD *)(v1 + 12);
    if ( v7 < v6 )
    {
      *(_DWORD *)(v1 + 12) = v6;
      v7 = v6;
    }
    if ( *(_BYTE *)(v3 + 32) < 6u )
    {
      v10 = *(_DWORD *)(v3 + 376);
      if ( v10 )
        *(_WORD *)(*a1 + 1822) = v7 / v10;
    }
    else
    {
      if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      {
        *((_DWORD *)a1 + 10) = -1073741637;
        return 1;
      }
      if ( v5 == 65812 )
      {
        *((_DWORD *)a1 + 10) = 0;
        if ( *(_DWORD *)(v1 + 48) >= 4u )
        {
          *v4 = (*(_DWORD *)(v3 + 120) & 0x20000000) == 0;
        }
        else
        {
          *(_DWORD *)(v1 + 56) = 4;
          *((_DWORD *)a1 + 10) = -1073676268;
        }
        *(_DWORD *)(v1 + 52) = 4;
        v2 = 1;
      }
      if ( v5 == 65799 )
      {
        *((_DWORD *)a1 + 10) = 0;
        if ( *(_DWORD *)(v1 + 48) >= 4u )
        {
          if ( (*(_DWORD *)(v3 + 120) & 0x20000000) != 0 )
            v9 = *(_QWORD *)(v3 + 792);
          else
            v9 = *(_QWORD *)(v3 + 3040);
          *v4 = v9 / 0x64;
        }
        else
        {
          *(_DWORD *)(v1 + 56) = 4;
          *((_DWORD *)a1 + 10) = -1073676268;
        }
        *(_DWORD *)(v1 + 52) = 4;
        return 1;
      }
    }
  }
  return v2;
}
