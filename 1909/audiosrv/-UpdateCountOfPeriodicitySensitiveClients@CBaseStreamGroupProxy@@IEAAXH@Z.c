/*
 * XREFs of ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F0CD4
 * Callers:
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EE580 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800EE800 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnProcessSubmixSensitivityToPeriodicityChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800F0090 (-OnProcessSubmixSensitivityToPeriodicityChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixPr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(CBaseStreamGroupProxy *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // edx
  int v6; // eax
  __int64 v7; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + a2;
  *((_DWORD *)this + 34) = v5 + a2;
  v7 = *((_QWORD *)this + 11);
  if ( v7 && v5 != v6 && (!v5 || !v6) )
    (*(void (__fastcall **)(__int64, CBaseStreamGroupProxy *))(*(_QWORD *)v7 + 112LL))(v7, this);
  if ( v4 )
    LeaveCriticalSection(v4);
}
