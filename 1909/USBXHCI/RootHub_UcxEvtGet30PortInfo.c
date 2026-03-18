/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x1C0024150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     RootHub_Read30PortSpeeds @ 0x1C002230C (RootHub_Read30PortSpeeds.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r8
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // si
  unsigned __int16 v11; // di
  __int64 v12; // r9
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  _QWORD v17[5]; // [rsp+40h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056248);
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v17);
  v5 = v17[1];
  v6 = *(_QWORD *)(v17[1] + 8LL);
  if ( *(_DWORD *)v17[1] < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        2u,
        0xBu,
        0xC8u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        *(_DWORD *)v17[1]);
    goto LABEL_4;
  }
  v8 = *(_WORD *)(v17[1] + 4LL);
  if ( v8 != *(_WORD *)(v4 + 22) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_4:
      v7 = 3221225485LL;
      return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               a2,
               v7);
    }
    v9 = 201;
LABEL_8:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      2u,
      0xBu,
      v9,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v8);
    goto LABEL_4;
  }
  v8 = *(_WORD *)(v17[1] + 6LL);
  if ( v8 < 0xCu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_4;
    v9 = 202;
    goto LABEL_8;
  }
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(v4 + 16) )
  {
    while ( v10 < *(_WORD *)(v5 + 4) )
    {
      v12 = 88LL * v11;
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 13) == 3 )
      {
        **(_WORD **)(v6 + 8LL * v10) = v11 + 1;
        v13 = 116;
        if ( *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 17) != 1 )
          v13 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 4LL) = v13;
        v14 = 116;
        if ( *(_BYTE *)(v4 + 56) != 1 )
          v14 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 8LL) = v14;
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v10) + 2LL) = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 12);
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v10) + 3LL) = *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 14);
        if ( *(_WORD *)(v5 + 6) >= 0x18u )
        {
          v15 = RootHub_Read30PortSpeeds(
                  v4,
                  *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v10) + 16LL),
                  (unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v10) + 14LL),
                  *(_WORD *)(*(_QWORD *)(v6 + 8LL * v10) + 12LL),
                  *(_QWORD *)(*(_QWORD *)(v4 + 48) + v12 + 48),
                  *(_WORD *)(*(_QWORD *)(v4 + 48) + v12 + 46),
                  *(_BYTE *)(*(_QWORD *)(v4 + 48) + v12 + 12));
          v7 = v15;
          if ( v15 )
            return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a2,
                     v7);
        }
        ++v10;
      }
      if ( (unsigned int)++v11 >= *(_DWORD *)(v4 + 16) )
        break;
    }
  }
  v7 = 0LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v7);
}
