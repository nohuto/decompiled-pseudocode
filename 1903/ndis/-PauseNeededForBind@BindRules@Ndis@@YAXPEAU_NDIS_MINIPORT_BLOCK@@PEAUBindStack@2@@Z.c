/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FD984
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned __int64 BaseMiniport_high; // r8
  unsigned __int16 *v4; // rbx
  unsigned __int64 i; // r14
  _QWORD *MiniportAdapterContext; // r12
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edx
  unsigned __int64 v12; // r9
  unsigned __int64 j; // rsi
  _NDIS_MINIPORT_BLOCK *NextMiniport; // r14
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // edx
  int SpinLock_high; // edx
  bool v22; // cf
  int v23; // edx
  unsigned __int16 v24; // r9
  unsigned __int16 *v25[20]; // [rsp+40h] [rbp-C8h] BYREF

  BaseMiniport_high = HIDWORD(a2->BaseMiniport);
  v4 = 0LL;
  for ( i = 0LL; i != BaseMiniport_high; ++i )
  {
    if ( i >= BaseMiniport_high )
LABEL_52:
      __fastfail(5u);
    MiniportAdapterContext = a2->MiniportAdapterContext;
    v9 = MiniportAdapterContext[i];
    v10 = *(_DWORD *)(v9 + 52);
    if ( v10 || *(_DWORD *)(v9 + 28) )
    {
      v11 = 0;
      if ( !*(_BYTE *)(v9 + 9) )
        LOBYTE(v11) = v10 == 0;
      if ( (*(_DWORD *)(MiniportAdapterContext[i] + 32LL) != 0) != v11 )
      {
        SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = SpinLock_high | 4;
        if ( !SpinLock_high || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_LL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
              SpinLock_high,
              SpinLock_high | 4);
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5208LL) = 1;
          memset(v25, 0, sizeof(v25));
          if ( (unsigned __int8)byte_1C00E673B >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)MiniportAdapterContext[i],
              (struct NDIS_PNPTRACE_LOCALS *)v25);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v23,
                0x1Cu,
                0x3Eu,
                (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
                v25[1],
                v25[0]);
          }
        }
        return;
      }
    }
  }
  v12 = *((unsigned int *)&a2->Header + 1);
  for ( j = 0LL; j != v12; ++j )
  {
    if ( j >= v12 )
      goto LABEL_52;
    NextMiniport = a2->NextMiniport;
    v15 = *((_QWORD *)&NextMiniport->Header.Type + j);
    v16 = *(_DWORD *)(v15 + 52);
    if ( v16 || *(_DWORD *)(v15 + 28) )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 80) + 40LL);
      if ( v17
        && *(_BYTE *)(v17 + 56) >= 6u
        && ((v18 = *(_DWORD *)(v15 + 32)) != 0 && (*(_BYTE *)(v15 + 9) || v16)
         || !*((_BYTE *)this + 1995) && !v18 && !*(_BYTE *)(v15 + 9) && !v16) )
      {
        if ( Ndis::BindState::SetPause((Ndis::BindState *)&a2->32, DatapathPaused, PauseReason_Pnp)
          && (unsigned __int8)byte_1C00E673B >= 4u
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + j) + 80LL) + 24LL),
            0x1Cu,
            0x3Fu,
            (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + j) + 80LL) + 24LL),
            **((_QWORD **)&NextMiniport->Header.Type + j));
        }
        return;
      }
    }
  }
  if ( LODWORD(a2->ShortRef.SpinLock) )
  {
    v20 = HIDWORD(a2->ShortRef.SpinLock);
    HIDWORD(a2->ShortRef.SpinLock) = v20 | 4;
    if ( !v20 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
          v20,
          v20 | 4);
      v22 = (unsigned __int8)byte_1C00E673B < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5208LL) = 1;
      if ( !v22 )
      {
        if ( this )
          v4 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = 64;
LABEL_65:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v20,
            0x1Cu,
            v24,
            (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            v4,
            this);
        }
      }
    }
  }
  else
  {
    v19 = HIDWORD(a2->ShortRef.SpinLock);
    v20 = v19 & 0xFFFFFFFB;
    HIDWORD(a2->ShortRef.SpinLock) = v19 & 0xFFFFFFFB;
    if ( (v19 != 0) != ((v19 & 0xFFFFFFFB) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
          v19,
          v20);
      v22 = (unsigned __int8)byte_1C00E673B < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5208LL) = 1;
      if ( !v22 )
      {
        if ( this )
          v4 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = 65;
          goto LABEL_65;
        }
      }
    }
  }
}
