/*
 * XREFs of ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800CB7E0
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18002F81C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x1800CB560 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800CB710 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompiledEffectTemplate::SignalCompileCompletedEvent(CCompiledEffectTemplate *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    SetEvent(v2);
    v3 = (void *)*((_QWORD *)this + 8);
    if ( v3 )
    {
      CloseHandle(v3);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
