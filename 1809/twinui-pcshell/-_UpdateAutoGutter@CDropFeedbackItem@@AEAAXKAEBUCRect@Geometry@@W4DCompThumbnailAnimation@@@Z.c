/*
 * XREFs of ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x18037832C
 * Callers:
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x1803784A0 (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x180377DB4 (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 *     ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x180377DF8 (-_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_UpdateAutoGutter(__int64 a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 *v9; // rbx
  int v10; // edx
  __int64 *v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  char v14; // r13
  __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+78h] [rbp+10h]

  v4 = 0;
  v16[0] = 0LL;
  if ( a2 == 0x2000 )
  {
    v9 = (__int64 *)(a1 + 240);
    if ( *(_QWORD *)(a1 + 240) )
      goto LABEL_7;
    v10 = 0;
  }
  else
  {
    v9 = (__int64 *)(a1 + 248);
    if ( *(_QWORD *)(a1 + 248) )
      goto LABEL_7;
    v10 = 1;
  }
  CDropFeedbackItem::_RegisterAutoGutter(a1, v10, a3);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(v16, v9);
  v11 = (__int64 *)v16[0];
  if ( v16[0] )
  {
    v12 = *(unsigned int *)(a1 + 160);
    v13 = 64;
    if ( a2 != 0x2000 )
      v13 = 128;
    v14 = (v13 & (unsigned int)v12) != 0;
    v17 = (v13 & *(_DWORD *)(a1 + 72)) != 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v16[0] + 32LL))(v16[0], v12, a4, 0LL);
    if ( v14 != v17 )
      CDropFeedbackItem::_PaintAutoGutter(a1, v11, 0);
    if ( *(_BYTE *)(a1 + 157) )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
        v4 = a4;
      (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(*v11 + 24))(v11, a3, v4, 0LL);
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
}
