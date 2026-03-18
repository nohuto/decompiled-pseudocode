/*
 * XREFs of Interrupter_FilterAllMSIResources @ 0x1C0065F9C
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C0066494 (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Interrupter_FilterAllMSIResources(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v4; // edi
  char v5; // r12
  unsigned int v6; // esi
  int v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v13; // [rsp+28h] [rbp-80h]
  __int64 v14; // [rsp+30h] [rbp-78h]
  _OWORD v16[2]; // [rsp+48h] [rbp-60h] BYREF

  v2 = a2;
  memset(v16, 0, sizeof(v16));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2320))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v2) )
  {
LABEL_18:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        9u,
        0x3Au,
        (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
    return (unsigned int)-1073741823;
  }
  do
  {
    v7 = 0;
    v8 = 0;
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2328))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v2,
           v6);
    if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2384))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v9) )
      goto LABEL_14;
    do
    {
      v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2392))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v9,
              v8);
      if ( *(_BYTE *)(v10 + 1) != 2 )
        goto LABEL_10;
      if ( (*(_BYTE *)(v10 + 4) & 3) != 3 )
      {
        v16[0] = *(_OWORD *)v10;
        v11 = *(_OWORD *)(v10 + 16);
        LOBYTE(v16[0]) = 0;
        v16[1] = v11;
        (*(void (__fastcall **)(unsigned __int64, __int64, _OWORD *, _QWORD))(WdfFunctions_01023 + 2376))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v9,
          v16,
          v8);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v14) = v8;
          LODWORD(v13) = v6;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            9u,
            0x38u,
            (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
            v13,
            v14);
        }
        v5 = 1;
        ++v7;
LABEL_10:
        ++v8;
        continue;
      }
      (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2400))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        v9,
        v8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v8;
        LODWORD(v13) = v6;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          9u,
          0x37u,
          (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
          v13,
          v14);
      }
    }
    while ( v8 < (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2384))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v9) );
    v2 = a2;
    if ( v7 )
    {
      ++v6;
      continue;
    }
LABEL_14:
    (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2336))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v2,
      v6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        9u,
        0x39u,
        (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
        v13);
    }
  }
  while ( v6 < (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 2320))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v2) );
  if ( !v5 )
    goto LABEL_18;
  return v4;
}
