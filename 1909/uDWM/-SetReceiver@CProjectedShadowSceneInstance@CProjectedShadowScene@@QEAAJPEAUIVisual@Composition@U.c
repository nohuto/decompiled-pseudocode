/*
 * XREFs of ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x1800B4EF0
 * Callers:
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B5028 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::SetReceiver(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this,
        struct Windows::UI::Composition::IVisual *a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 12);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 120LL))(v2, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (_QWORD *)((char *)this + 104);
    if ( *((_QWORD *)this + 13) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 64LL))(v12);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 254LL;
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 13);
    }
    if ( a2 )
    {
      v9 = *((_QWORD *)this + 11);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 13);
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 64LL))(v9, (char *)this + 104);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 260LL;
        goto LABEL_14;
      }
      v5 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::IVisual *))(*(_QWORD *)*v8 + 56LL))(
             *v8,
             a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 261LL;
        goto LABEL_14;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, *v8);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 262LL;
        goto LABEL_14;
      }
    }
    v6 = 0;
    goto LABEL_16;
  }
  v7 = 250LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)v5);
LABEL_16:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
  return v6;
}
