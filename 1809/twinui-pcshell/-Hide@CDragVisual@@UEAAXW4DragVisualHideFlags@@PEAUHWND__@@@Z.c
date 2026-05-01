/*
 * XREFs of ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x180371F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0 @ 0x180068CD8 (McTemplateU0.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x1802684A4 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180371154 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&___ptr64_ @ 0x180371328 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-___ptr64_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0 @ 0x1803713C8 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x180371748 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x180374C04 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 */

void __fastcall CDragVisual::Hide(__int64 a1, char a2, __int64 a3)
{
  CDragVisual *v5; // rbx
  __int64 v6; // rcx
  HWND v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 pvAttribute; // [rsp+70h] [rbp+20h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v20 = a3;
  if ( *(_BYTE *)(a1 + 255) )
    return;
  v5 = (CDragVisual *)(a1 - 24);
  pvAttribute = a1 - 24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&pvAttribute);
  lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0(v17, &pvAttribute, &v20);
  if ( !*(_QWORD *)(a1 + 88) && (a2 & 2) != 0 )
    a2 = a2 & 0xF9 | 4;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(HWND *)(a1 + 128);
    LODWORD(pvAttribute) = 1;
    DwmSetWindowAttribute(v7, 0xDu, &pvAttribute, 4u);
    *(_DWORD *)(a1 + 124) = -1;
    *(_BYTE *)(a1 + 254) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 80);
      *(_BYTE *)(a1 + 255) = 1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 168LL))(v8);
      v9 = *(_QWORD *)(a1 + 88);
      v10 = lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(&v18, v17);
      v13 = DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
              v9,
              v11,
              v12,
              v10);
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        if ( IsWindowVisible(*(HWND *)(a1 + 128)) )
        {
          CDragVisual::_TrackMouseLeave(v5, 0);
          ShowWindow(*(HWND *)(a1 + 128), 0);
          v16 = *(_QWORD *)(a1 + 72);
          if ( v16 )
          {
            LOBYTE(v14) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, v14);
          }
          if ( *(_BYTE *)(a1 + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            McTemplateU0(v16, &DragVisual_Hide_Info, v15);
        }
        goto LABEL_19;
      }
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e______ptr64_(v6, v17);
    }
    if ( v13 < 0 )
      lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()(v17);
  }
LABEL_19:
  if ( v17[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  if ( v5 )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v5 + 16LL))(v5);
}
