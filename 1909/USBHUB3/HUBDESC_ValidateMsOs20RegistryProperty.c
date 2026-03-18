/*
 * XREFs of HUBDESC_ValidateMsOs20RegistryProperty @ 0x1C0039FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20RegistryProperty(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int16 v10; // cx

  v4 = *a3;
  LOWORD(a4) = 1;
  if ( *a3 >= 0xDu )
  {
    v8 = a3[3];
    if ( v4 >= (unsigned __int64)(v8 + 11) )
    {
      if ( !(_WORD)v8 || (v8 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x14Eu,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            (unsigned __int16)v8);
        v7 = 171LL;
      }
      else
      {
        v9 = *(unsigned __int16 *)((char *)a3 + v8 + 8);
        if ( v4 >= (unsigned __int64)(v9 + v8 + 10) )
        {
          if ( (_WORD)v9 )
          {
            v10 = a3[2];
            if ( (unsigned __int16)(v10 - 1) <= 6u )
            {
              *(_DWORD *)a2 |= 0x40u;
              return a4;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x151u,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                v10);
            v7 = 174LL;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x150u,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                0);
            v7 = 173LL;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              0x14Fu,
              (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
              (unsigned __int16)v9);
          v7 = 172LL;
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x14Du,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          (unsigned __int16)v8);
      v7 = 170LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x14Cu,
        (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
        v4);
    v7 = 169LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64, unsigned __int16 *, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7, a3, a4);
  LOBYTE(a4) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x152u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    LOBYTE(a4) = 0;
  }
  return a4;
}
