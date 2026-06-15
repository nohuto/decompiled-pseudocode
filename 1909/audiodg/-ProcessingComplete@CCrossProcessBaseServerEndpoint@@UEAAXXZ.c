/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140011D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002BE40 (WPP_SF_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400329C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x140032A48 (WPP_SF_q.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140036ED8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     WPP_SF_dq @ 0x14005386C (WPP_SF_dq.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(CCrossProcessBaseServerEndpoint *this)
{
  char v2; // al
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v9 = *((_QWORD *)this + 52);
    WPP_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
      *((unsigned int *)this + 42));
  }
  if ( (*((_DWORD *)this + 42) & 0x40000) != 0 )
  {
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 8) + 164LL), 0, 0);
    v3 = v2 & 1;
    if ( (v2 & 1) != 0 )
    {
      v4 = *((_QWORD *)this + 52);
      if ( v4 )
      {
        _InterlockedExchange64((volatile __int64 *)this + 51, v4);
        v5 = *((_QWORD *)this + 50);
        v11 = *((_QWORD *)this + 51);
        *((_QWORD *)this + 50) = 0LL;
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        v6 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(
               (char *)this + 400,
               &v11);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3B4,
            (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)(unsigned int)v6,
            v9);
        *((_QWORD *)this + 52) = 0LL;
      }
    }
    v7 = *((_QWORD *)this + 51);
    if ( v7 )
    {
      if ( (*((_BYTE *)this + 168) & 1) == 0 || v3 )
      {
        v8 = (void *)*((_QWORD *)this + 51);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids, v7);
          v8 = (void *)*((_QWORD *)this + 51);
        }
        SetEvent(v8);
      }
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids);
    }
  }
}
