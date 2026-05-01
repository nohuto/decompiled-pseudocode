/*
 * XREFs of ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18006CCE4
 * Callers:
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006C7A0 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActVerify(__int64 a1)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  char v7; // r10
  __int64 v8; // r8
  __int64 v9; // r10

  v2 = 1;
  if ( ((*(_QWORD *)(a1 + 40) >> 57) & 7) != 5 )
    return v2;
  v3 = *(_QWORD *)(a1 + 88);
  if ( !v3
    || (v4 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v4 + 544) & 1) != 0)
    || (*(_QWORD *)(v3 + 16) != -1LL) == (unsigned __int8)(*(_BYTE *)(v4 + 548) - 2) <= 1u )
  {
    v5 = *(_DWORD *)(a1 + 544);
    if ( (v5 & 3) == 2 )
      return 8LL;
    v7 = *(_BYTE *)(a1 + 548);
    if ( v7 )
    {
      if ( *(_BYTE *)(a1 + 548) != 1 )
      {
        switch ( *(_BYTE *)(a1 + 548) )
        {
          case 2:
            if ( (v5 & 1) == 0 && !*(_QWORD *)(a1 + 520) )
              return 10;
            break;
          case 3:
            if ( (v5 & 4) == 0 )
              return 6;
            break;
          case 4:
            if ( (v5 & 1) == 0 && (*(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 96)) )
              return 2;
            break;
          default:
            return 5;
        }
      }
    }
    else
    {
      v2 = 4;
      if ( (v5 & 4) != 0 )
        return v2;
    }
    if ( (v7 == 2) == (*(_BYTE *)(a1 + 549) != 5) )
    {
      if ( v7 == 2 || !*(_QWORD *)(a1 + 520) )
      {
        v8 = *(_QWORD *)(a1 + 536);
        v9 = *(_QWORD *)(a1 + 528);
        if ( (v9 == 0) != (v8 == 0) || (v5 & 0x20) != 0 && (v9 || v8) )
          return 12;
        else
          return 0;
      }
      else
      {
        return 11;
      }
    }
    else
    {
      return 7;
    }
  }
  return 3;
}
