/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x1C00201B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     RootHub_Read30PortSpeeds @ 0x1C001E814 (RootHub_Read30PortSpeeds.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r15
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  unsigned __int16 v9; // si
  unsigned __int16 v10; // di
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _QWORD v15[5]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F220);
  memset(v15, 0, sizeof(v15));
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    a2,
    v15);
  v4 = v15[1];
  v5 = *(_DWORD *)v15[1];
  v6 = *(_QWORD *)(v15[1] + 8LL);
  if ( *(_DWORD *)v15[1] < 0x10u )
  {
    v7 = 200;
LABEL_3:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      v7,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v5);
    v8 = 3221225485LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             a2,
             v8);
  }
  LOWORD(v5) = *(_WORD *)(v15[1] + 4LL);
  if ( (_WORD)v5 != *(_WORD *)(v3 + 22) )
  {
    v5 = (unsigned __int16)v5;
    v7 = 201;
    goto LABEL_3;
  }
  LOWORD(v5) = *(_WORD *)(v15[1] + 6LL);
  if ( (unsigned __int16)v5 < 0xCu )
  {
    v5 = (unsigned __int16)v5;
    v7 = 202;
    goto LABEL_3;
  }
  v9 = 0;
  v10 = 0;
  if ( *(_DWORD *)(v3 + 16) )
  {
    while ( v9 < *(_WORD *)(v4 + 4) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * v10 + 13) == 3 )
      {
        **(_WORD **)(v6 + 8LL * v9) = v10 + 1;
        v11 = 116;
        if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * v10 + 17) != 1 )
          v11 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v9) + 4LL) = v11;
        v12 = 116;
        if ( *(_BYTE *)(v3 + 56) != 1 )
          v12 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v9) + 8LL) = v12;
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v9) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * v10 + 12);
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v9) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * v10 + 14);
        if ( *(_WORD *)(v4 + 6) >= 0x18u )
        {
          v13 = RootHub_Read30PortSpeeds(
                  v3,
                  *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v9) + 16LL),
                  (unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v9) + 14LL),
                  *(_WORD *)(*(_QWORD *)(v6 + 8LL * v9) + 12LL),
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + 80LL * v10 + 48),
                  *(_WORD *)(*(_QWORD *)(v3 + 48) + 80LL * v10 + 46),
                  *(_BYTE *)(*(_QWORD *)(v3 + 48) + 80LL * v10 + 12));
          v8 = v13;
          if ( v13 )
            return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a2,
                     v8);
        }
        ++v9;
      }
      if ( (unsigned int)++v10 >= *(_DWORD *)(v3 + 16) )
        break;
    }
  }
  v8 = 0LL;
  return (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           a2,
           v8);
}
