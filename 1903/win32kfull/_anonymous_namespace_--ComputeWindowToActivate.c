/*
 * XREFs of _anonymous_namespace_::ComputeWindowToActivate @ 0x1C0100B3C
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C010146C (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall anonymous_namespace_::ComputeWindowToActivate(const struct tagWND *a1, char a2, int a3, _OWORD *a4)
{
  int v4; // eax
  int *v9; // rbx
  bool result; // al
  __int128 v11; // [rsp+20h] [rbp-18h]

  v4 = dword_1C032C7EC;
  if ( (dword_1C032C7EC & 1) == 0 )
  {
    v4 = dword_1C032C7EC | 1;
    dword_1C032C7EC |= 1u;
  }
  if ( (v4 & 2) == 0 )
  {
    v4 |= 2u;
    dword_1C032C7EC = v4;
  }
  if ( (v4 & 4) == 0 )
  {
    v4 |= 4u;
    dword_1C032C7EC = v4;
  }
  if ( (v4 & 8) == 0 )
  {
    v4 |= 8u;
    dword_1C032C7EC = v4;
  }
  if ( (v4 & 0x10) == 0 )
  {
    v4 |= 0x10u;
    dword_1C032C7EC = v4;
  }
  if ( (v4 & 0x20) == 0 )
  {
    v4 |= 0x20u;
    dword_1C032C7EC = v4;
  }
  if ( (v4 & 0x40) == 0 )
  {
    dword_1C0322340 = 2;
    dword_1C032C7EC = v4 | 0x40;
    qword_1C0322338 = (__int64)lambda_c05599733d5c8a0f722e580d8ee161cb_::_lambda_invoker_cdecl_;
    qword_1C0322348 = (__int64)lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_;
    qword_1C0322358 = (__int64)lambda_75e919a46692d6b7e31e9e50a1c7a298_::_lambda_invoker_cdecl_;
    qword_1C0322368 = (__int64)lambda_f484f19fb3695b9a73a4913a548469c5_::_lambda_invoker_cdecl_;
    qword_1C0322378 = (__int64)lambda_16c3916dd104b3e87032ad92d6a38c73_::_lambda_invoker_cdecl_;
    qword_1C0322388 = (__int64)lambda_7d69e9e2d209dda7a4a46854671474a0_::_lambda_invoker_cdecl_;
    dword_1C0322350 = 4;
    dword_1C0322360 = 8;
    dword_1C0322370 = 16;
    dword_1C0322380 = 32;
  }
  v11 = 0uLL;
  *a4 = 0uLL;
  if ( (a2 & 1) != 0 && IsWindowActivateable(a1) )
  {
    *(_QWORD *)&v11 = a1;
    result = 1;
    DWORD2(v11) = 1;
    *a4 = v11;
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v9 = (int *)&unk_1C0322330;
      do
      {
        if ( (a3 & *v9) != 0 && (*((unsigned __int8 (__fastcall **)(const struct tagWND *, _OWORD *))v9 + 1))(a1, a4) )
          break;
        v9 += 4;
      }
      while ( v9 != &g_cTimerId );
    }
    return *(_QWORD *)a4 != 0LL;
  }
  return result;
}
