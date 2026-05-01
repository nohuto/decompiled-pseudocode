/*
 * XREFs of ??1CAppTransitionTagger@@QEAA@XZ @ 0x180325EA8
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180327CA0 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppTransitionTagger::~CAppTransitionTagger(CAppTransitionTagger *this)
{
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
