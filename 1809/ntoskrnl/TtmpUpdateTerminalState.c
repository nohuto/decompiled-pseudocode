/*
 * XREFs of TtmpUpdateTerminalState @ 0x140880790
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x14087FE4C (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x140880484 (TtmpResetEvaluationTimer.c)
 *     TtmpTsmIterate @ 0x1408806AC (TtmpTsmIterate.c)
 *     TtmiLogTerminalStateMachine @ 0x140887600 (TtmiLogTerminalStateMachine.c)
 */

char __fastcall TtmpUpdateTerminalState(__int64 a1, __int64 a2, char *a3, char *a4)
{
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // edx
  BOOL v13; // ecx
  char v14; // al
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  char v18; // dl
  int v20; // [rsp+20h] [rbp-60h] BYREF
  char v21; // [rsp+24h] [rbp-5Ch]
  int v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-48h]
  int v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  char v30; // [rsp+68h] [rbp-18h]
  bool v31; // [rsp+69h] [rbp-17h]
  int v32; // [rsp+6Ch] [rbp-14h]
  int v33; // [rsp+70h] [rbp-10h]

  v25 = *(_DWORD *)(a2 + 40);
  v26 = *(_QWORD *)(a2 + 80);
  v7 = *(_DWORD *)(a2 + 32) == 0;
  v27 = MEMORY[0xFFFFF78000000008];
  v28 = *(_QWORD *)(a2 + 64);
  v29 = *(_QWORD *)(a2 + 72);
  v8 = *(_DWORD *)(a2 + 36);
  if ( !v7 || (v30 = 0, (v8 & 8) != 0) )
    v30 = 1;
  v31 = (v8 & 0x60) != 0;
  *(_DWORD *)(a2 + 36) = v8 & 0xFFFFFF9F;
  v9 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a2 + 52) = 0;
  v32 = v9;
  v10 = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = 0;
  v33 = v10;
  TtmpTsmIterate((__int64)&v25, (__int64)&v20);
  TtmiLogTerminalStateMachine(*(unsigned int *)(a2 + 28), &v25, &v20);
  v7 = v21 == 0;
  v11 = v20;
  *(_QWORD *)(a2 + 80) = v23;
  *(_DWORD *)(a2 + 40) = v11;
  if ( v7 || (v12 = *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 44) = v22, v13 = v11 != 1, ((v12 >> 4) & 1) == v13) )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    *(_DWORD *)(a2 + 36) = v12 & 0xFFFFFFEF | (16 * v13);
  }
  *a3 = v14;
  v15 = *(_DWORD *)(a2 + 44);
  if ( (*(_DWORD *)(a2 + 36) & 8) != 0 )
    v16 = 0;
  else
    v16 = *(_DWORD *)(a2 + 40);
  v17 = *(_DWORD *)(a2 + 276);
  if ( v17 == v16 )
  {
    v18 = 0;
  }
  else
  {
    if ( !v17 || !v16 )
      v15 = 22;
    *(_DWORD *)(a2 + 280) = v15;
    v17 = v16;
    *(_DWORD *)(a2 + 276) = v16;
    v18 = 1;
  }
  *a4 = v18;
  if ( v17 )
  {
    if ( v17 == 1 )
      *(_DWORD *)(a2 + 48) = 2;
    else
      *(_DWORD *)(a2 + 48) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 1;
  }
  return TtmpResetEvaluationTimer((char *)a2, v24);
}
