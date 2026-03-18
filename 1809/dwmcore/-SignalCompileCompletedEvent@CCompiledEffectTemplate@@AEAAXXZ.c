/*
 * XREFs of ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x180054DA0
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180054C28 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x1800550A8 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18009D5B8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
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
