/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C001C8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     TR_Create @ 0x1C0069444 (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int v12; // r13d
  __int64 i; // r12
  __int64 v15; // [rsp+28h] [rbp-61h]
  __int64 v16; // [rsp+30h] [rbp-59h]
  __int64 v17; // [rsp+38h] [rbp-51h]
  __int64 v18; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19; // [rsp+58h] [rbp-31h] BYREF
  __int64 v20; // [rsp+60h] [rbp-29h]
  __int64 v21; // [rsp+68h] [rbp-21h]
  _QWORD v22[14]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v23; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v24; // [rsp+108h] [rbp+7Fh]

  v23 = a3;
  v3 = a2;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v22, 0, 0x38uLL);
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C00561A8);
  v6 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      4u,
      0xDu,
      0x61u,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v3);
  if ( !*(_BYTE *)(v6 + 37) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = *(_DWORD *)(v6 + 144);
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x62u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        v15,
        v16);
    }
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v3 || (unsigned int)v3 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 88LL) + 112LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v3;
      LODWORD(v16) = *(_DWORD *)(v6 + 144);
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x63u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        v15,
        v16,
        v17);
    }
    return (unsigned int)-1073741811;
  }
  v22[6] = off_1C0056338;
  v22[0] = 56LL;
  v22[3] = 0x100000001LL;
  v22[1] = Endpoint_EvtStaticStreamsCleanupCallback;
  v7 = 1;
  v22[2] = 0LL;
  v22[4] = 0LL;
  v22[5] = 104 * v3 + 48;
  if ( *(_BYTE *)(v6 + 1336) )
    v7 = 2;
  LODWORD(v22[3]) = v7;
  v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0057700)(
         UcxDriverGlobals,
         a1,
         &v23,
         v22,
         &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v18,
            off_1C0056338);
    v11 = v10;
    *(_QWORD *)v10 = v6;
    *(_DWORD *)(v10 + 8) = v3;
    if ( (unsigned int)v3 >= 4 )
    {
      if ( (unsigned int)v3 >= 8 )
      {
        if ( (unsigned int)v3 >= 0x10 )
        {
          if ( (unsigned int)v3 >= 0x20 )
          {
            if ( (unsigned int)v3 >= 0x40 )
              *(_DWORD *)(v10 + 12) = 7 - ((unsigned int)v3 < 0x80);
            else
              *(_DWORD *)(v10 + 12) = 5;
          }
          else
          {
            *(_DWORD *)(v10 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v10 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v10 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v10 + 12) = 1;
    }
    v12 = 0;
    for ( i = v10 + 48; ; i += 104LL )
    {
      v24 = v12 + 1;
      v9 = TR_Create(*(_QWORD *)v6, v6, v18, v12 + 1, 104LL * v12 + v11 + 48);
      if ( v9 < 0 )
        break;
      v12 = v24;
      v20 = *(_QWORD *)(*(_QWORD *)i + 72LL);
      v19 = 24LL;
      v21 = v24;
      ((void (__fastcall *)(__int64, __int64, __int64 *))qword_1C00576F8)(UcxDriverGlobals, v18, &v19);
      if ( v12 >= (unsigned int)v3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = v3;
          LODWORD(v16) = *(_DWORD *)(v6 + 144);
          LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(v6 + 80),
            4u,
            0xDu,
            0x66u,
            (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
            v15,
            v16,
            v17);
        }
        return 0;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v12;
      LODWORD(v16) = *(_DWORD *)(v6 + 144);
      LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v6 + 80),
        2u,
        0xDu,
        0x65u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        v15,
        v16,
        v17,
        v9);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v8;
    LODWORD(v16) = *(_DWORD *)(v6 + 144);
    LODWORD(v15) = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      2u,
      0xDu,
      0x64u,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      v15,
      v16,
      v17);
  }
  return (unsigned int)v9;
}
