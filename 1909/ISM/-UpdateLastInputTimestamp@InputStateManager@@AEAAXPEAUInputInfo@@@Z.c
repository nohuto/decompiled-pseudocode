/*
 * XREFs of ?UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z @ 0x180092DD8
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180092B60 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InputStateManager::UpdateLastInputTimestamp(InputStateManager *this, struct InputInfo *a2)
{
  DWORD TickCount; // esi
  unsigned __int16 v5; // r11
  bool v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // r8d
  unsigned int v10; // eax
  int v11; // ecx

  TickCount = GetTickCount();
  v5 = 0;
  v6 = 1;
  if ( (*(_BYTE *)a2 & 0x40) != 0 )
    goto LABEL_2;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v7 = 1LL;
  }
  else if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v7 = 2LL;
  }
  else if ( (*(_BYTE *)a2 & 8) != 0 )
  {
    v7 = 10LL;
  }
  else if ( (*(_BYTE *)a2 & 0x10) != 0 )
  {
    v7 = 12LL;
  }
  else
  {
    if ( (*(_DWORD *)a2 & 0x100) != 0 )
    {
LABEL_2:
      v7 = 3LL;
      goto LABEL_13;
    }
    v7 = (*(unsigned __int8 *)a2 >> 1) & 0x10;
  }
LABEL_13:
  v8 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v5 = *((_WORD *)a2 + 102);
  }
  else if ( (*(_DWORD *)a2 & 0x1000) != 0 )
  {
    v5 = *((_WORD *)a2 + 50);
  }
  v9 = ((*(_DWORD *)a2 & *((_DWORD *)this + 44)) != 0 ? 3 : 1) | 4;
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 45)) == 0 )
    v9 = (*(_DWORD *)a2 & *((_DWORD *)this + 44)) != 0 ? 3 : 1;
  if ( *((_BYTE *)a2 + 49) )
  {
    v9 &= ~1u;
  }
  else
  {
    v8 = 0LL;
    if ( (*(_BYTE *)a2 & 0xC4) != 0 )
      v8 = *((unsigned int *)this + 47);
  }
  if ( *(_DWORD *)a2 != 2048 )
  {
    if ( *(_DWORD *)a2 == 64 )
    {
      v6 = *((_BYTE *)a2 + 129) == 0;
    }
    else if ( (*(_DWORD *)a2 & 0x662600) == 0
           || (v10 = *((_DWORD *)a2 + 16), v10 > 0xC)
           || (v11 = 4464, !_bittest(&v11, v10)) )
    {
LABEL_30:
      NtMITUpdateInputGlobals(TickCount, v7, v5, v8, v9);
      return;
    }
    if ( v6 )
      return;
    goto LABEL_30;
  }
}
