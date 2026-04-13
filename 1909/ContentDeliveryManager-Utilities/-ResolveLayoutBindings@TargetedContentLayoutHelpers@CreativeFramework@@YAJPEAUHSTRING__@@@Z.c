/*
 * XREFs of ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800A1944
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::Run @ 0x180037F00 (Windows--Internal--COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows--Inte.c)
 * Callees:
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800A0428 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z @ 0x1800A057C (--0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800A0644 (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A2280 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A466C (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 *     ??1?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAA@XZ @ 0x1800A4C40 (--1-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$allocat.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rbx
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  wil *v7; // rcx
  unsigned int v8; // r8d
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-328h] BYREF
  unsigned int v11; // [rsp+20h] [rbp-308h]
  HSTRING string[2]; // [rsp+30h] [rbp-2F8h] BYREF
  _OWORD v13[3]; // [rsp+40h] [rbp-2E8h] BYREF
  __int128 v14; // [rsp+70h] [rbp-2B8h]
  __int64 v15; // [rsp+80h] [rbp-2A8h]
  __int64 v16; // [rsp+90h] [rbp-298h]
  _BYTE v17[312]; // [rsp+98h] [rbp-290h] BYREF
  _QWORD v18[4]; // [rsp+1D0h] [rbp-158h] BYREF
  int v19; // [rsp+1F0h] [rbp-138h]
  int *v20; // [rsp+1F8h] [rbp-130h]
  int *v21; // [rsp+200h] [rbp-128h]
  int v22; // [rsp+208h] [rbp-120h] BYREF
  char v23; // [rsp+20Ch] [rbp-11Ch]
  int v24; // [rsp+230h] [rbp-F8h] BYREF
  const char *v25; // [rsp+238h] [rbp-F0h]
  __int64 v26; // [rsp+240h] [rbp-E8h]
  char v27; // [rsp+248h] [rbp-E0h]
  __int64 v28; // [rsp+250h] [rbp-D8h]
  _BYTE v29[144]; // [rsp+258h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+2E8h] [rbp-40h]
  __int64 v31; // [rsp+2F0h] [rbp-38h]
  __int64 v32; // [rsp+2F8h] [rbp-30h]
  __int64 v33; // [rsp+300h] [rbp-28h]

  v16 = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, 0LL);
  v18[1] = 0LL;
  v18[2] = v18;
  v18[3] = 0LL;
  v19 = 0;
  v20 = &v24;
  v21 = &v22;
  v22 = 0;
  v23 = 0;
  v27 = 0;
  v24 = 0;
  v25 = "LayoutResolver";
  v26 = 0LL;
  v28 = 1LL;
  v30 = 0LL;
  memset_0(v29, 0, sizeof(v29));
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v18[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
    (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v18,
    StringRawBuffer);
  *(_OWORD *)string = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v15 = 0LL;
  v4 = CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::LayoutResolver(
         (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v17,
         (const struct CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v18);
  try
  {
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings(string, this, v4);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v18);
    v5 = v14;
    if ( (_QWORD)v14 )
    {
      v6 = *((_QWORD *)&v14 + 1);
      if ( (_QWORD)v14 != *((_QWORD *)&v14 + 1) )
      {
        do
        {
          if ( *(_QWORD *)(v5 + 24) >= 8uLL )
            operator delete(*(void **)v5);
          *(_QWORD *)(v5 + 24) = 7LL;
          *(_QWORD *)(v5 + 16) = 0LL;
          *(_WORD *)v5 = 0;
          v5 += 56LL;
        }
        while ( v5 != v6 );
        v5 = v14;
      }
      operator delete((void *)v5);
      v14 = 0LL;
      v15 = 0LL;
    }
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((char *)&v13[1] + 8);
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v13);
    WindowsDeleteString(string[1]);
    string[1] = 0LL;
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v18);
    result = 0LL;
  }
  catch ( ... )
  {
    v11 = wil::ResultFromCaughtException(v7, &v10, v8);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v18);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v18);
    return v11;
  }
  return result;
}
