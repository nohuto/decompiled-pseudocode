/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI_N@Z @ 0x1800BD750
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetSyncRefreshCountWaitTarget(CDWMSwapChain *this, __int64 a2, char a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 56LL))(*((_QWORD *)this + 55));
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2ECu, 0LL);
  if ( v7 < 0 )
  {
    v7 = -2003304307;
    a3 = 0;
  }
  *((_BYTE *)this + 577) = a3;
  return (unsigned int)v7;
}
