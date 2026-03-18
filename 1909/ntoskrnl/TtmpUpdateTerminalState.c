/*
 * XREFs of TtmpUpdateTerminalState @ 0x1408BC974
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408BBFE0 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     TtmpResetEvaluationTimer @ 0x1408BC664 (TtmpResetEvaluationTimer.c)
 *     TtmpTsmIterate @ 0x1408BC88C (TtmpTsmIterate.c)
 *     TtmiLogTerminalStateMachine @ 0x1408C3B74 (TtmiLogTerminalStateMachine.c)
 */

char __fastcall TtmpUpdateTerminalState(__int64 a1, __int64 a2, char *a3, char *a4)
{
  int v7; // eax
  int v8; // r8d
  unsigned int v9; // edx
  BOOL v10; // ecx
  char v11; // al
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  char v15; // dl
  _QWORD v17[4]; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  char v23; // [rsp+68h] [rbp-18h]
  bool v24; // [rsp+69h] [rbp-17h]
  __int16 v25; // [rsp+6Ah] [rbp-16h]
  int v26; // [rsp+6Ch] [rbp-14h]
  int v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+74h] [rbp-Ch]

  v18[1] = 0;
  v25 = 0;
  v28 = 0;
  memset(v17, 0, sizeof(v17));
  v18[0] = *(_DWORD *)(a2 + 40);
  v19 = *(_QWORD *)(a2 + 80);
  v20 = MEMORY[0xFFFFF78000000008];
  v21 = *(_QWORD *)(a2 + 64);
  v22 = *(_QWORD *)(a2 + 72);
  v7 = *(_DWORD *)(a2 + 36);
  if ( *(_DWORD *)(a2 + 32) || (v23 = 0, (v7 & 8) != 0) )
    v23 = 1;
  v24 = (v7 & 0x60) != 0;
  *(_DWORD *)(a2 + 36) = v7 & 0xFFFFFF9F;
  v26 = *(_DWORD *)(a2 + 52);
  v27 = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 52) = 0LL;
  TtmpTsmIterate((__int64)v18, (__int64)v17);
  TtmiLogTerminalStateMachine(*(unsigned int *)(a2 + 28), v18, v17);
  v8 = v17[0];
  *(_QWORD *)(a2 + 80) = v17[2];
  *(_DWORD *)(a2 + 40) = v8;
  if ( !BYTE4(v17[0])
    || (v9 = *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 44) = v17[1], v10 = v8 != 1, ((v9 >> 4) & 1) == v10) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    *(_DWORD *)(a2 + 36) = v9 & 0xFFFFFFEF | (16 * v10);
  }
  *a3 = v11;
  v12 = *(_DWORD *)(a2 + 44);
  if ( (*(_DWORD *)(a2 + 36) & 8) != 0 )
    v13 = 0;
  else
    v13 = *(_DWORD *)(a2 + 40);
  v14 = *(_DWORD *)(a2 + 276);
  if ( v14 == v13 )
  {
    v15 = 0;
  }
  else
  {
    if ( !v14 || !v13 )
      v12 = 22;
    *(_DWORD *)(a2 + 280) = v12;
    v14 = v13;
    *(_DWORD *)(a2 + 276) = v13;
    v15 = 1;
  }
  *a4 = v15;
  if ( v14 )
  {
    if ( v14 == 1 )
      *(_DWORD *)(a2 + 48) = 2;
    else
      *(_DWORD *)(a2 + 48) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 1;
  }
  return TtmpResetEvaluationTimer((char *)a2, v17[3]);
}
