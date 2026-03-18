/*
 * XREFs of _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00D8A6C
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall anonymous_namespace_::ComputeWindowToActivate(const struct tagWND *a1, char a2, int a3, _OWORD *a4)
{
  int v4; // eax
  __int64 *v9; // rbx
  bool result; // al
  __int128 v11; // [rsp+20h] [rbp-18h]

  v4 = dword_1C03177F4;
  if ( (dword_1C03177F4 & 1) == 0 )
  {
    v4 = dword_1C03177F4 | 1;
    dword_1C03177F4 |= 1u;
  }
  if ( (v4 & 2) == 0 )
  {
    v4 |= 2u;
    dword_1C03177F4 = v4;
  }
  if ( (v4 & 4) == 0 )
  {
    v4 |= 4u;
    dword_1C03177F4 = v4;
  }
  if ( (v4 & 8) == 0 )
  {
    v4 |= 8u;
    dword_1C03177F4 = v4;
  }
  if ( (v4 & 0x10) == 0 )
  {
    v4 |= 0x10u;
    dword_1C03177F4 = v4;
  }
  if ( (v4 & 0x20) == 0 )
  {
    v4 |= 0x20u;
    dword_1C03177F4 = v4;
  }
  if ( (v4 & 0x40) == 0 )
  {
    dword_1C030D430 = 2;
    dword_1C03177F4 = v4 | 0x40;
    qword_1C030D428 = (__int64)lambda_e431929e928b7742a1b6141ab1c3075d_::_lambda_invoker_cdecl_;
    qword_1C030D438 = (__int64)lambda_fb16448920153f6d07666723336f7afd_::_lambda_invoker_cdecl_;
    qword_1C030D448 = (__int64)lambda_0d160d279100fee8fb6f37f20079cc99_::_lambda_invoker_cdecl_;
    qword_1C030D458 = (__int64)lambda_68a2c304fdaadaf6683155c27661d8ec_::_lambda_invoker_cdecl_;
    qword_1C030D468 = (__int64)lambda_43087959960ad584e9ae12ed5f2c8018_::_lambda_invoker_cdecl_;
    qword_1C030D478 = (__int64)lambda_f932728a1b975e70479b80d5b5444ac1_::_lambda_invoker_cdecl_;
    dword_1C030D440 = 4;
    dword_1C030D450 = 8;
    dword_1C030D460 = 16;
    dword_1C030D470 = 32;
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
      v9 = (__int64 *)&unk_1C030D420;
      do
      {
        if ( (a3 & *(_DWORD *)v9) != 0
          && ((unsigned __int8 (__fastcall *)(const struct tagWND *, _OWORD *))v9[1])(a1, a4) )
        {
          break;
        }
        v9 += 2;
      }
      while ( v9 != &ghMouseDevice );
    }
    return *(_QWORD *)a4 != 0LL;
  }
  return result;
}
