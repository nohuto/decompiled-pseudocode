/*
 * XREFs of ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1803F8350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0 @ 0x180068744 (McTemplateU0.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036F010 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036F094 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803FA084 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1803FA3A0 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::SetMode(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int128 v11; // xmm0
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-40h] BYREF
  GUID v14; // [rsp+48h] [rbp-30h] BYREF

  v4 = *(unsigned int *)(a1 + 124);
  if ( a2 != (_DWORD)v4 )
  {
    v6 = 4;
    if ( (_DWORD)v4 != 6 )
      v6 = 0;
    v14 = GUID_NULL;
    if ( (_DWORD)v4 == 4
      && (v7 = *(_QWORD *)(a1 + 88)) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7) )
    {
      v6 |= 8u;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 88);
      if ( v8 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(a1 + 124) == 1 || *(_DWORD *)(a1 + 124) == 4 )
    {
      *(_DWORD *)(a1 + 308) = MulDiv(
                                *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 200),
                                100,
                                *(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200));
      v14 = (GUID)xmmword_1805271C0;
    }
    v9 = *(unsigned int *)(a1 + 124);
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 254) = 0;
      if ( (unsigned int)(v9 - 5) <= 1 )
      {
        *(_DWORD *)(a1 + 308) = MulDiv(
                                  *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 216),
                                  100,
                                  *(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 216));
      }
      else if ( (_DWORD)v9 == 2 )
      {
        v6 |= 2u;
      }
      if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24, 0LL) )
        v6 |= 1u;
      goto LABEL_34;
    }
    if ( a2 == 6 )
    {
      v10 = v6 | 2;
      if ( (_DWORD)v9 != 2 )
        v10 = v6;
      v6 = v10;
      goto LABEL_34;
    }
    if ( (v9 & 0xFFFFFFF9) == 0 && (_DWORD)v9 != 2 && a2 - 2 <= 1 )
    {
      if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24, a2) )
        v6 |= 1u;
      if ( a2 == 2 )
      {
        v11 = xmmword_1805271A0;
        v6 |= 2u;
LABEL_33:
        v14 = (GUID)v11;
        goto LABEL_34;
      }
      if ( a2 == 3 )
      {
        v11 = xmmword_1805271B0;
        goto LABEL_33;
      }
    }
LABEL_34:
    *(_DWORD *)(a1 + 124) = a2;
    if ( v6 )
    {
      v12 = *(_QWORD *)(a1 + 48);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v13, &v12, (__int64)&v14, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      CDragVisual::_UpdateThumbnail(a1 - 24, 1LL, v6);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v13);
    }
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0(v9, &DragVisual_ModeChange_Info, a3);
    }
    return;
  }
  if ( *(_BYTE *)(a1 + 253) && (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24, v4) )
    CDragVisual::_UpdateThumbnail(a1 - 24, 4 - (unsigned int)(*(_DWORD *)(a1 + 124) != 6), 1LL);
}
