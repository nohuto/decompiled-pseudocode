/*
 * XREFs of PopSetupSleepNotifies @ 0x140567C48
 * Callers:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 * Callees:
 *     PopMoveList @ 0x140567D2C (PopMoveList.c)
 */

__int64 __fastcall PopSetupSleepNotifies(__int64 a1)
{
  int v2; // r11d
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 result; // rax

  v2 = 4;
  do
  {
    v3 = v2;
    v4 = a1 + 72 + 72LL * v2;
    PopMoveList(v4, a1 + 88 + 72LL * v2);
    PopMoveList(v4, a1 + 120 + 8 * v5);
    PopMoveList(v4, a1 + 104 + 8 * v6);
    v9 = *(_QWORD **)(v7 - 16);
    while ( v9 != (_QWORD *)v4 )
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      *((_DWORD *)v10 + 25) = *((_DWORD *)v10 + 24);
      v11 = *((_DWORD *)v10 + 22);
      *((_DWORD *)v10 + 23) = v11;
      if ( !v11 )
      {
        if ( (_QWORD *)v9[1] != v10
          || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10)
          || (*v12 = v9, v9[1] = v12, v13 = *(_QWORD **)(v7 + 8), *v13 != v7) )
        {
          __fastfail(3u);
        }
        *v10 = v7;
        v10[1] = v13;
        *v13 = v10;
        *(_QWORD *)(v7 + 8) = v10;
      }
    }
    result = *(unsigned int *)(v7 - 24);
    v2 = v8 - 1;
    *(_DWORD *)(v7 - 20) = result;
  }
  while ( v3 > 0 );
  return result;
}
