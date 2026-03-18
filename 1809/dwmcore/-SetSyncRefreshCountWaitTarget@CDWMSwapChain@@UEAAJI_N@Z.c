/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI_N@Z @ 0x180063E60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetSyncRefreshCountWaitTarget(CDWMSwapChain *this, __int64 a2, char a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 56LL))(*((_QWORD *)this + 55));
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2CCu);
  if ( v7 < 0 )
  {
    v7 = -2003304307;
    a3 = 0;
  }
  *((_BYTE *)this + 569) = a3;
  return (unsigned int)v7;
}
