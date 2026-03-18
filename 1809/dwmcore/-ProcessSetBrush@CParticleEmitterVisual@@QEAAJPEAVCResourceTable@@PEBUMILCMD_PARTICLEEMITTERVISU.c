/*
 * XREFs of ?ProcessSetBrush@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PARTICLEEMITTERVISUAL_SETBRUSH@@@Z @ 0x1801AA8F4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetBrush@CParticleEmitter@@QEAAJPEAVCResource@@@Z @ 0x1801C69E4 (-SetBrush@CParticleEmitter@@QEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetBrush(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_PARTICLEEMITTERVISUAL_SETBRUSH *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // rcx
  struct CResource *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = *((_QWORD *)this + 32);
  v6 = ResourceWithoutType;
  if ( v5 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 104LL) )
  {
    v7 = CParticleEmitter::SetBrush(*((CParticleEmitter **)this + 32), v6);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x25u);
  }
  else
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147467259, 0x29u);
  }
  return v9;
}
