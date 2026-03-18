/*
 * XREFs of ?CheckPresentDurationSupport@CDWMSwapChain@@UEAAJIPEAI@Z @ 0x1801628A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckPresentDurationSupport(CDWMSwapChain *this, __int64 a2, unsigned int *a3)
{
  int v4; // edi
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  v4 = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, unsigned int *))(**((_QWORD **)this + 53) + 192LL))(
         *((_QWORD *)this + 53),
         a2,
         &v10,
         &v11);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4DEu, 0LL);
  }
  else
  {
    v8 = v11;
    if ( (int)abs32(v4 - v10) < (int)abs32(v4 - v11) )
      v8 = v10;
    *a3 = v8;
  }
  return v7;
}
