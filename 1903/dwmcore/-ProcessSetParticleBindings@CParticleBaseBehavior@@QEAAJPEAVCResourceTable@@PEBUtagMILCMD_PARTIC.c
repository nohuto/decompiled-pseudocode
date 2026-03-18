/*
 * XREFs of ?ProcessSetParticleBindings@CParticleBaseBehavior@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBASEBEHAVIOR_SETPARTICLEBINDINGS@@PEBXI@Z @ 0x1801FEDC8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleBaseBehavior::ProcessSetParticleBindings(
        CParticleBaseBehavior *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEBASEBEHAVIOR_SETPARTICLEBINDINGS *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v7; // r8
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  if ( (_DWORD)v5 == a5 && (v7 = 24 * (a5 / 0x18uLL), a5 == v7) )
  {
    v12[0] = v5 / 0x18;
    v12[1] = a4;
    if ( !a4 && v5 / 0x18 )
    {
      `gsl::details::get_terminate_handler'::`2'::handler(this);
      __debugbreak();
    }
    LOBYTE(v7) = *((_BYTE *)a3 + 8);
    v8 = (*(__int64 (__fastcall **)(CParticleBaseBehavior *, _QWORD *, unsigned __int64))(*(_QWORD *)this + 208LL))(
           this,
           v12,
           v7);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1Au, 0LL);
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, 0x14u, 0LL);
  }
  return v10;
}
