/*
 * XREFs of TtmpTsmIterate @ 0x1408806AC
 * Callers:
 *     TtmpUpdateTerminalState @ 0x140880790 (TtmpUpdateTerminalState.c)
 * Callees:
 *     TtmpTsmEvaluateTimeouts @ 0x140880644 (TtmpTsmEvaluateTimeouts.c)
 */

bool __fastcall TtmpTsmIterate(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // r8
  bool v9; // zf
  bool result; // al
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 == 2 )
  {
    v5 = 1;
  }
  else
  {
    if ( v2 != 1 )
    {
      v5 = *(_DWORD *)a1;
      v6 = 0;
      goto LABEL_7;
    }
    v5 = 3;
  }
  v6 = *(_DWORD *)(a1 + 48);
LABEL_7:
  if ( *(_BYTE *)(a1 + 41) || v2 == 1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 16) - v7;
  }
  *(_QWORD *)(a2 + 16) = v7;
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    if ( *(_BYTE *)(a1 + 40) )
    {
      v5 = 3;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    else
    {
      TtmpTsmEvaluateTimeouts(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), v8, (__int64)&v11, (_QWORD *)(a2 + 24));
      v5 = v11;
      if ( (unsigned int)(v11 - 1) <= 1 )
        v6 = 12;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  v9 = *(_DWORD *)a1 == v5;
  *(_DWORD *)a2 = v5;
  result = !v9;
  *(_BYTE *)(a2 + 4) = !v9;
  *(_DWORD *)(a2 + 8) = v6;
  return result;
}
