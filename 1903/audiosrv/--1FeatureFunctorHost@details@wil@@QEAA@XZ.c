/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180066C1C
 * Callers:
 *     _CAudioSrv::VAD_AudiosrvServiceStart_::_1_::dtor$5 @ 0x180071D94 (_CAudioSrv--VAD_AudiosrvServiceStart_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
