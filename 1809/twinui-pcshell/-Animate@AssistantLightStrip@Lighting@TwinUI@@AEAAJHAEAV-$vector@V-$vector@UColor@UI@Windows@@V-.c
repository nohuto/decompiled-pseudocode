/*
 * XREFs of ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x18039DA08
 * Callers:
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x18039DC80 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180083574 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18039D654 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightStrip::Animate(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  double v8; // xmm0_8
  double v9; // xmm5_8
  __int128 i; // xmm6
  int v11; // r9d
  unsigned int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // rsi
  double v16; // xmm7_8
  double v17; // xmm8_8
  double v18; // xmm9_8
  int v19; // r8d
  __int128 v20; // xmm4
  int v21; // edi
  unsigned __int8 *v22; // rcx
  double v23; // xmm3_8
  double v24; // xmm2_8
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v28[7]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v30; // [rsp+A8h] [rbp+10h]

  v4 = *a3;
  v5 = (__int64)((unsigned __int128)((a3[1] - *a3) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v28, v4 + 24 * (a2 % ((v5 >> 63) + v5)));
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (*(_QWORD *)(a1 + 48) - v6) >> 2;
  v8 = (double)(int)v7;
  if ( v7 < 0 )
    v8 = v8 + 1.844674407370955e19;
  v9 = 12.0 / v8;
  i = 0LL;
  v11 = 0;
  v12 = 0;
  if ( v7 )
  {
    v13 = 0LL;
    LOBYTE(v30) = -1;
    v14 = 0LL;
    v15 = v28[0];
    do
    {
      v16 = 0.0;
      v17 = 0.0;
      v18 = 0.0;
      v19 = (int)*(double *)&i;
      *((_QWORD *)&v20 + 1) = *((_QWORD *)&i + 1);
      *(double *)&v20 = *(double *)&i + v9;
      if ( *(double *)&i + v9 > (double)(int)*(double *)&i )
      {
        v21 = v19 + 1;
        v22 = (unsigned __int8 *)(v15 + 2 + 4LL * v19);
        do
        {
          v23 = (double)v21;
          v24 = (fmin(*(double *)&v20, (double)v21) - fmax((double)v19, *(double *)&i)) / v9;
          v16 = v16 + (double)*(v22 - 1) * v24;
          v17 = v17 + (double)*v22 * v24;
          v18 = v18 + (double)v22[1] * v24;
          ++v19;
          ++v21;
          v22 += 4;
        }
        while ( *(double *)&v20 > v23 );
        v6 = *(_QWORD *)(a1 + 40);
      }
      for ( i = v20; v11 <= *(_DWORD *)(v6 + 4 * v14); v6 = *(_QWORD *)(a1 + 40) )
      {
        BYTE2(v30) = (int)v17;
        HIBYTE(v30) = (int)v18;
        BYTE1(v30) = (int)v16;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * v13) = v30;
        ++v11;
        ++v13;
      }
      v14 = ++v12;
    }
    while ( v12 < (unsigned __int64)((*(_QWORD *)(a1 + 48) - v6) >> 2) );
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 208LL))(
          *(_QWORD *)(a1 + 8),
          (__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) >> 2,
          *(_QWORD *)(a1 + 64),
          (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 2,
          *(_QWORD *)(a1 + 16));
  v26 = v25;
  if ( v25 >= 0 )
    v26 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightstrip.cpp",
      (const char *)(unsigned int)v25);
  std::vector<Windows::UI::Color>::_Tidy((__int64)v28);
  return v26;
}
