/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJXZ @ 0x180162DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax
  __int64 v4; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 581) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 53) + 232LL))(
           *((_QWORD *)this + 53),
           0LL,
           *((unsigned int *)this + 136));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x3FDu, 0LL);
    else
      *((_BYTE *)this + 581) = 0;
  }
  return v1;
}
