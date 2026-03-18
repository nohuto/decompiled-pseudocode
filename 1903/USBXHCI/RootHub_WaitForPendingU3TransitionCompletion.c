/*
 * XREFs of RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0026E6C
 * Callers:
 *     RootHub_D0Exit @ 0x1C0021074 (RootHub_D0Exit.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0022B40 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C00259C0 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00279EC (WPP_RECORDER_SF_dDD.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_WaitForPendingU3TransitionCompletion(_QWORD *a1, int a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v6; // r13d
  __int64 v7; // rbx
  unsigned int *v8; // r12
  __int64 v9; // r15
  int v10; // edi
  __int64 v11; // r15
  int Ulong; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // ebx
  int v17; // r8d
  int v18; // eax
  int v19; // ebx
  __int64 v20; // r15
  char v21; // cl
  unsigned __int16 v22; // r9
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  int v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+80h] [rbp+8h]
  char v31; // [rsp+90h] [rbp+18h]
  __int64 v32; // [rsp+98h] [rbp+20h]

  v31 = a3;
  v3 = 0;
  v6 = -1073741823;
  v7 = *(_QWORD *)(a1[1] + 88LL);
  v8 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v9 = (unsigned int)(a2 - 1);
  v10 = -1;
  v30 = v7;
  v32 = v9;
  while ( 1 )
  {
    if ( a3 && v3 && v3 == 3 * (v3 / 3) )
    {
      v11 = 88 * v9;
      DynamicLock_Acquire(*(_QWORD *)(v11 + a1[6] + 24));
      Ulong = XilRegister_ReadUlong(v7, v8);
      v16 = Ulong & 0xE00C200 | 0x10060;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDD(*(_QWORD *)(a1[1] + 72LL), v13, v14, v15, v27, a2, Ulong, 96);
      v17 = v16;
      v7 = v30;
      XilRegister_WriteUlong(v30, v8, v17);
      DynamicLock_Release(*(_QWORD *)(v11 + a1[6] + 24));
      v9 = v32;
    }
    v18 = XilRegister_ReadUlong(v7, v8);
    v19 = v18;
    if ( v18 == v10 )
      goto LABEL_29;
    v20 = 88 * v9;
    v10 = v18;
    v21 = *(_BYTE *)(v20 + a1[6] + 13);
    if ( v21 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v22 = 235;
      goto LABEL_15;
    }
    if ( v21 != 3 )
      break;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v22 = 236;
LABEL_15:
    LODWORD(v29) = v18;
    LODWORD(v28) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      v22,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v28,
      v29);
LABEL_16:
    v23 = v19 & 0x1E0;
    if ( v23 == 96
      || (v19 & 0x203) != 0x203
      || (v19 & 0x20000) != 0
      || v23 == 128
      || v23 == 480
      || v23 == 192
      || v23 == 320
      || v23 == 288
      || v23 == 352
      || (v19 & 0x10) != 0
      || *(_BYTE *)(v20 + a1[6] + 18) )
    {
      v6 = 0;
      goto LABEL_32;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xEEu,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids);
LABEL_29:
    KeStallExecutionProcessor(0xAu);
    if ( ++v3 >= 0x1900 )
      goto LABEL_32;
    v7 = v30;
    v9 = v32;
    a3 = v31;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v18;
    LODWORD(v28) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      0xBu,
      0xEDu,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v28,
      v29);
  }
  v6 = 0;
LABEL_32:
  if ( v3 == 6400 )
  {
    v24 = a1[1];
    ++*(_DWORD *)(v24 + 492);
    *(_BYTE *)(v24 + 472) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = v19;
      LODWORD(v28) = a2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        2u,
        0xBu,
        0xEFu,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v28,
        v29);
    }
  }
  else if ( v3 )
  {
    if ( v3 > 0x960 )
    {
      v25 = a1[1];
      ++*(_DWORD *)(v25 + 496);
      *(_BYTE *)(v25 + 472) = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v29) = a2;
      LODWORD(v28) = v3;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xF0u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v28,
        v29);
    }
  }
  return v6;
}
