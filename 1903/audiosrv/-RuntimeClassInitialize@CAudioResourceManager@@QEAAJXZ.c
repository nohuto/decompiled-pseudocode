/*
 * XREFs of ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x18006303C
 * Callers:
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x18005802C (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x18005E208 (-Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioResourceManager::RuntimeClassInitialize(CAudioResourceManager *this)
{
  unsigned __int64 v1; // rdx
  bool v2; // cf
  struct CConstraintModelResourceManager **v3; // rbx
  __int64 v4; // rcx
  struct IAudioResourceControl *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (unsigned __int64)this + 24;
  v2 = this != 0LL;
  v3 = (struct CConstraintModelResourceManager **)((char *)this + 48);
  v4 = *((_QWORD *)this + 6);
  v5 = (struct IAudioResourceControl *)(v1 & -(__int64)v2);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v6 = CConstraintModelResourceManager::Create(v5, v3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F7,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
