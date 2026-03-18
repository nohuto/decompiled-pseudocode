/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x1C001FF90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rsi
  unsigned __int16 v7; // r9
  __int64 i; // r9
  __int64 v9; // r8
  unsigned __int16 v10; // r11
  __int64 v11; // r10
  int v12; // eax
  int v13; // ecx
  int v15; // [rsp+28h] [rbp-50h]
  _QWORD v16[5]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F220);
  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v16);
  v4 = v16[1];
  v5 = *(_DWORD *)v16[1];
  v6 = *(_QWORD *)(v16[1] + 8LL);
  if ( *(_DWORD *)v16[1] < 0x10u )
  {
    v7 = 197;
LABEL_3:
    v15 = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      v7,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v15);
    v9 = 3221225485LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v9,
             i);
  }
  LOWORD(v5) = *(_WORD *)(v16[1] + 4LL);
  if ( (_WORD)v5 != *(_WORD *)(v3 + 20) )
  {
    v5 = (unsigned __int16)v5;
    v7 = 198;
    goto LABEL_3;
  }
  LOWORD(v5) = *(_WORD *)(v16[1] + 6LL);
  if ( (unsigned __int16)v5 < 0x14u )
  {
    v5 = (unsigned __int16)v5;
    v7 = 199;
    goto LABEL_3;
  }
  v9 = 0LL;
  v10 = 0;
  for ( i = 0LL; (unsigned int)(unsigned __int16)i < *(_DWORD *)(v3 + 16); LOWORD(i) = i + 1 )
  {
    if ( v10 >= *(_WORD *)(v4 + 4) )
      break;
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * (unsigned __int16)i + 13) == 2 )
    {
      v11 = v10;
      **(_WORD **)(v6 + 8LL * v10) = i + 1;
      v12 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * (unsigned __int16)i + 17) != 1 )
        v12 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 4LL) = v12;
      v13 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * (unsigned __int16)i + 16) != 1 )
        v13 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 8LL) = v13;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 272LL) & 0x400000LL) == 0 )
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v10) + 16LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48)
                                                                  + 80LL * (unsigned __int16)i
                                                                  + 19);
      ++v10;
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v11) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * (unsigned __int16)i + 12);
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v11) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * (unsigned __int16)i + 14);
    }
  }
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v9,
           i);
}
