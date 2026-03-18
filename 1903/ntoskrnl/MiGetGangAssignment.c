/*
 * XREFs of MiGetGangAssignment @ 0x1402E8760
 * Callers:
 *     MiDpcGangTarget @ 0x1402E85C0 (MiDpcGangTarget.c)
 *     MiStartDpcGang @ 0x1402E897C (MiStartDpcGang.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetGangAssignment(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  int v3; // r11d
  __int64 v4; // r10
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r9
  _QWORD *v9; // rcx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 100)) - 1LL;
  if ( v2 < *(unsigned int *)(a1 + 112) )
  {
    v3 = *(_DWORD *)(a1 + 108);
    if ( (v3 & 1) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      v5 = 0;
      v6 = *(_QWORD *)a1 + v2 * v4;
      if ( (v3 & 0x38) != 0 )
        v7 = *(_QWORD *)(a1 + 88) + ((v2 * v4) << 12);
      else
        v7 = 0LL;
      if ( !v2 && *(_QWORD *)(a1 + 24) )
      {
        if ( v4 )
        {
          v5 = 1;
        }
        else
        {
          v4 = *(_QWORD *)(a1 + 24);
          v6 = *(_QWORD *)a1;
        }
      }
      *(_QWORD *)(a2 + 16) = v7;
      *(_QWORD *)(a2 + 8) = v4;
      *(_QWORD *)a2 = v6;
      *(_DWORD *)(a2 + 24) = v5;
      return 1LL;
    }
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v2);
    if ( *v9 )
    {
      *(_QWORD *)a2 = v9;
      return 1LL;
    }
  }
  return 0LL;
}
