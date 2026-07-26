/*
 * XREFs of ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FD7C4
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  unsigned __int64 v4; // rbx
  BOOL v5; // esi
  __int64 v6; // r14
  _DWORD *v7; // rdi
  int v8; // r8d
  unsigned int v9; // edx
  __int64 v10; // r15
  unsigned __int64 i; // rbx
  __int64 v12; // r14
  _DWORD *v13; // rdi
  int v14; // r8d
  unsigned int v15; // edx
  int v16; // edx
  bool v17; // cf
  char v18[8]; // [rsp+30h] [rbp-E8h]
  char v19[160]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v4 = 0LL;
  v5 = *((_DWORD *)this + 17) == 0;
  while ( v4 != v2 )
  {
    if ( v4 >= *((unsigned int *)this + 5) )
LABEL_35:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * v4);
    if ( v7[13] )
    {
      v8 = v7[9];
      if ( v5 )
        v9 = v8 & 0xFFFFFFEF;
      else
        v9 = v8 | 0x10;
      v7[9] = v9;
      if ( (v8 != 0) != (v9 != 0) || !*(_QWORD *)v7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v9;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            v8,
            *(_QWORD *)v18);
        }
        *(_BYTE *)(*(_QWORD *)v7 + 5208LL) = 1;
        memset(v19, 0, sizeof(v19));
        if ( (unsigned __int8)byte_1C00E673B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
            (struct NDIS_PNPTRACE_LOCALS *)v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              0x1Cu,
              0x42u,
              (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              *(unsigned __int16 **)&v19[8],
              *(_QWORD *)v19);
        }
      }
      v5 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v4) + 36LL) == 0;
    }
    ++v4;
  }
  v10 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v10; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      goto LABEL_35;
    v12 = *((_QWORD *)this + 1);
    v13 = *(_DWORD **)(v12 + 8 * i);
    v14 = v13[9];
    if ( v5 )
      v15 = v14 & 0xFFFFFFEF;
    else
      v15 = v14 | 0x10;
    v13[9] = v15;
    if ( (v14 != 0) != (v15 != 0) || !*(_QWORD *)v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v18 = v15;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
          v14,
          *(_QWORD *)v18);
      }
      v17 = (unsigned __int8)byte_1C00E673B < 4u;
      *(_BYTE *)(*(_QWORD *)v13 + 5208LL) = 1;
      if ( !v17 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * i) + 80LL) + 24LL),
          0x1Cu,
          0x43u,
          (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * i) + 80LL) + 24LL),
          **(_QWORD **)(v12 + 8 * i));
    }
  }
}
