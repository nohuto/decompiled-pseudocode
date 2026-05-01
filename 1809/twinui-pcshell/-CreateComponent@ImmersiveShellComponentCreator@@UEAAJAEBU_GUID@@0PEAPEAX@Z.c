/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800DEC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x18006A20C (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180079D44 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveShellComponentCreator::CreateComponent(
        ImmersiveShellComponentCreator *this,
        struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  int Class; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v13[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v14 = -2LL;
  *(_QWORD *)v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  v7 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  Class = Microsoft::WRL::Details::GetClassObject<1>(
            (Microsoft::WRL::Details *)v7,
            v8,
            a2,
            &GUID_00000001_0000_0000_c000_000000000046.Data1,
            v13);
  v10 = Class;
  if ( Class >= 0 )
  {
    Class = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**(_QWORD **)v13 + 24LL))(
              *(_QWORD *)v13,
              0LL,
              a3,
              a4);
    v10 = Class;
    if ( Class >= 0 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v11 = 19LL;
  }
  else
  {
    v11 = 18LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"internal\\onecoreuapshell\\private\\inc\\immersiveshellcomponentcreator.h",
    (const char *)(unsigned int)Class);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  return v10;
}
