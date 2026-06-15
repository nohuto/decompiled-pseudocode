/*
 * XREFs of ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800E5A24
 * Callers:
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800E34A0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800E3720 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnProcessSubmixSensitivityToFormatChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800E4FB0 (-OnProcessSubmixSensitivityToFormatChanged@CBaseStreamGroupProxy@@UEAAXPEAUIProcessSubmixProxy@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(CBaseStreamGroupProxy *this, int a2)
{
  int v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax

  v3 = *((_DWORD *)this + 35);
  *((_DWORD *)this + 35) = v3 + a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 35);
    if ( v3 != v6 && (!v3 || !v6) )
      (*(void (__fastcall **)(__int64, CBaseStreamGroupProxy *))(*(_QWORD *)v5 + 144LL))(v5, this);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
