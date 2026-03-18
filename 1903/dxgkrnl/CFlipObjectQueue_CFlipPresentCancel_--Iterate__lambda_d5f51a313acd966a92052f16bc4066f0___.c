/*
 * XREFs of CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___ @ 0x1C00606B0
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060C5C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___(
        _QWORD **a1,
        __int64 a2)
{
  _QWORD *v2; // rdi
  char v5; // si
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v2 = *a1;
  v5 = 1;
  if ( *a1 != a1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD **)(a2 + 8);
      v7 = (__int64)(v2 + 2);
      if ( !v2 )
        v7 = 24LL;
      if ( *(_QWORD *)v7 > v6[8] )
      {
        v8 = (__int64)(v2 + 3);
        if ( !v2 )
          v8 = 32LL;
        v9 = *(_QWORD *)v8;
        if ( v9 <= (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6) )
          break;
      }
      v2 = (_QWORD *)*v2;
      if ( v2 == a1 )
        return v5;
    }
    v5 = 0;
    **(_DWORD **)a2 = 2;
  }
  return v5;
}
