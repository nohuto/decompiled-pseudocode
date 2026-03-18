/*
 * XREFs of RootHub_WaitForPendingU3TransitionCompletion @ 0x1C002299C
 * Callers:
 *     RootHub_D0Exit @ 0x1C001D69C (RootHub_D0Exit.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001EF80 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00217F0 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00233DC (WPP_RECORDER_SF_dDD.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_WaitForPendingU3TransitionCompletion(_QWORD *a1, int a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v6; // r13d
  __int64 v7; // rbx
  unsigned int *v8; // r12
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // rsi
  int Ulong; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r8d
  int v18; // eax
  int v19; // ebx
  __int64 v20; // r10
  __int64 v21; // rsi
  char v22; // cl
  unsigned __int16 v23; // ax
  int v24; // ecx
  int v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+80h] [rbp+8h]
  char v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v30 = a3;
  v3 = 0;
  v6 = -1073741823;
  v7 = *(_QWORD *)(a1[1] + 88LL);
  v8 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v9 = (unsigned int)(a2 - 1);
  v10 = -1;
  v31 = v7;
  v29 = v9;
  while ( 1 )
  {
    if ( a3 && v3 && v3 == 3 * (v3 / 3) )
    {
      v11 = 10 * v9;
      DynamicLock_Acquire(*(_QWORD *)(a1[6] + 8 * v11 + 24));
      Ulong = XilRegister_ReadUlong(v7, v8);
      v13 = Ulong & 0xE00C200 | 0x10060;
      WPP_RECORDER_SF_dDD(*(_QWORD *)(a1[1] + 72LL), v14, v15, v16, v26, a2, Ulong, 96);
      v17 = v13;
      v7 = v31;
      XilRegister_WriteUlong(v31, v8, v17);
      DynamicLock_Release(*(_QWORD *)(a1[6] + 8 * v11 + 24));
      v9 = v29;
    }
    v18 = XilRegister_ReadUlong(v7, v8);
    v19 = v18;
    if ( v18 == v10 )
      goto LABEL_23;
    v20 = a1[1];
    v21 = 10 * v9;
    v10 = v18;
    v22 = *(_BYTE *)(a1[6] + 8 * v21 + 13);
    if ( v22 == 2 )
    {
      v23 = 235;
      goto LABEL_11;
    }
    if ( v22 != 3 )
      break;
    v23 = 236;
LABEL_11:
    LODWORD(v28) = v19;
    LODWORD(v27) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v20 + 72),
      4u,
      0xBu,
      v23,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v27,
      v28);
    v24 = v19 & 0x1E0;
    if ( v24 == 96
      || (v19 & 0x203) != 0x203
      || (v19 & 0x20000) != 0
      || v24 == 128
      || v24 == 480
      || v24 == 192
      || v24 == 320
      || v24 == 288
      || v24 == 352
      || (v19 & 0x10) != 0
      || *(_BYTE *)(a1[6] + 8 * v21 + 18) )
    {
      v6 = 0;
      goto LABEL_26;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEEu,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids);
LABEL_23:
    KeStallExecutionProcessor(0xAu);
    if ( ++v3 >= 0xC80 )
      goto LABEL_26;
    v9 = v29;
    v7 = v31;
    a3 = v30;
  }
  LODWORD(v28) = v18;
  LODWORD(v27) = a2;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v20 + 72),
    2u,
    0xBu,
    0xEDu,
    (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
    v27,
    v28);
  v6 = 0;
LABEL_26:
  if ( v3 == 3200 )
  {
    ++*(_DWORD *)(a1[1] + 424LL);
    LODWORD(v28) = v19;
    LODWORD(v27) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      0xBu,
      0xEFu,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v27,
      v28);
  }
  else if ( v3 )
  {
    if ( v3 > 0x960 )
      ++*(_DWORD *)(a1[1] + 428LL);
    LODWORD(v28) = a2;
    LODWORD(v27) = v3;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xF0u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v27,
      v28);
  }
  return v6;
}
