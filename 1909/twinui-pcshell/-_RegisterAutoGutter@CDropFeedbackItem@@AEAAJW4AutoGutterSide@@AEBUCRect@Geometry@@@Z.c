/*
 * XREFs of ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x1803FD1E8
 * Callers:
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x1803FD71C (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1803FD1A4 (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_RegisterAutoGutter(__int64 a1, int a2, _DWORD *a3)
{
  int v4; // eax
  __int64 v6; // rbx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h]

  v4 = a3[2] - *a3;
  v6 = *(_QWORD *)(a1 + 48);
  v12 = 0LL;
  LODWORD(v13) = v4;
  HIDWORD(v13) = a3[3] - a3[1];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, GUID *, __int64 **))(*(_QWORD *)v6 + 80LL))(
         v6,
         *(_QWORD *)(a1 + 56),
         v13,
         0LL,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         &v12);
  if ( v8 >= 0 )
  {
    CDropFeedbackItem::_PaintAutoGutter(a1, v12, a2);
    (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(*v12 + 24))(v12, a3, 0LL, 0LL);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*v12 + 32))(v12, v9, 0LL, 0LL);
    v10 = (__int64 *)(a1 + 240);
    if ( a2 )
      v10 = (__int64 *)(a1 + 248);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    *v10 = (__int64)v12;
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v8;
}
