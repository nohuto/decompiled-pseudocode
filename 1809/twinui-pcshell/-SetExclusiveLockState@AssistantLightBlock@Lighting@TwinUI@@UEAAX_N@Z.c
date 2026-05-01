/*
 * XREFs of ?SetExclusiveLockState@AssistantLightBlock@Lighting@TwinUI@@UEAAX_N@Z @ 0x18039D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18039CE4C (--$As@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@-$ComPtr@UILampArray@Lights@Devices@W.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightBlock::SetExclusiveLockState(
        TwinUI::Lighting::AssistantLightBlock *this,
        char a2)
{
  _QWORD *v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessId; // rdx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  v11 = 0LL;
  if ( a2 )
  {
    v3 = Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray>::As<Windows::Devices::Lights::Internal::ILampArrayPrivate>(
           v2,
           (__int64 *)&v11);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        60LL,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightblock.cpp",
        (const char *)(unsigned int)v3);
    v4 = (__int64)v11;
    v5 = *v11;
    CurrentProcessId = GetCurrentProcessId();
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 48))(v4, CurrentProcessId);
    if ( v7 < 0 )
    {
      v8 = 61LL;
LABEL_10:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        v8,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightblock.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  else
  {
    v9 = Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray>::As<Windows::Devices::Lights::Internal::ILampArrayPrivate>(
           v2,
           (__int64 *)&v11);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        66LL,
        (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightblock.cpp",
        (const char *)(unsigned int)v9);
    v7 = (*(__int64 (__fastcall **)(__int64 *))(*v11 + 56))(v11);
    if ( v7 < 0 )
    {
      v8 = 67LL;
      goto LABEL_10;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
}
