/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C00195E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     TR_Create @ 0x1C0061390 (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // r13d
  __int64 i; // r12
  __int64 v14; // [rsp+28h] [rbp-61h]
  __int64 v15; // [rsp+30h] [rbp-59h]
  __int64 v16; // [rsp+38h] [rbp-51h]
  __int64 v17; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v18[3]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v19[14]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v20; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v21; // [rsp+108h] [rbp+7Fh]

  v20 = a3;
  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F180);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v5 + 80),
    4u,
    0xDu,
    0x61u,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144),
    v4);
  if ( !*(_BYTE *)(v5 + 37) )
  {
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x62u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v14,
      v15);
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v4 || (unsigned int)v4 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 88LL) + 112LL) )
  {
    LODWORD(v16) = v4;
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x63u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v14,
      v15,
      v16);
    return (unsigned int)-1073741811;
  }
  memset(v19, 0, 0x38uLL);
  v19[6] = off_1C004F310;
  v19[3] = 0x100000001LL;
  v19[1] = Endpoint_EvtStaticStreamsCleanupCallback;
  v6 = 1;
  LODWORD(v19[0]) = 56;
  v19[5] = 104 * v4 + 48;
  if ( *(_BYTE *)(v5 + 1336) )
    v6 = 2;
  LODWORD(v19[3]) = v6;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD *, __int64 *))qword_1C00506C0)(
         UcxDriverGlobals,
         a1,
         &v20,
         v19,
         &v17);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v17,
           off_1C004F310);
    v10 = v9;
    *(_QWORD *)v9 = v5;
    *(_DWORD *)(v9 + 8) = v4;
    if ( (unsigned int)v4 >= 4 )
    {
      if ( (unsigned int)v4 >= 8 )
      {
        if ( (unsigned int)v4 >= 0x10 )
        {
          if ( (unsigned int)v4 >= 0x20 )
          {
            if ( (unsigned int)v4 >= 0x40 )
              *(_DWORD *)(v9 + 12) = 7 - ((unsigned int)v4 < 0x80);
            else
              *(_DWORD *)(v9 + 12) = 5;
          }
          else
          {
            *(_DWORD *)(v9 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v9 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v9 + 12) = 1;
    }
    v11 = 0;
    for ( i = v9 + 48; ; i += 104LL )
    {
      v21 = v11 + 1;
      v8 = TR_Create(*(_QWORD *)v5, v5, v17, v11 + 1, 104LL * v11 + v10 + 48);
      if ( v8 < 0 )
        break;
      v11 = v21;
      v18[1] = *(_QWORD *)(*(_QWORD *)i + 72LL);
      v18[0] = 24LL;
      v18[2] = v21;
      ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C00506B8)(UcxDriverGlobals, v17, v18);
      if ( v11 >= (unsigned int)v4 )
      {
        LODWORD(v16) = v4;
        LODWORD(v15) = *(_DWORD *)(v5 + 144);
        LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v5 + 80),
          4u,
          0xDu,
          0x66u,
          (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
          v14,
          v15,
          v16);
        return 0;
      }
    }
    LODWORD(v16) = v11;
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x65u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v14,
      v15,
      v16,
      v8);
  }
  else
  {
    LODWORD(v16) = v7;
    LODWORD(v15) = *(_DWORD *)(v5 + 144);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x64u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      v14,
      v15,
      v16);
  }
  return (unsigned int)v8;
}
