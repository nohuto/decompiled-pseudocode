/*
 * XREFs of ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1803DDB94
 * Callers:
 *     ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x1803DDBD8 (-_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z.c)
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x1803DE10C (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedbackItem::_PaintAutoGutter(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v5 = *(_DWORD *)(a1 + 216);
  v3 = *a2;
  v6 = a1;
  v7 = a3;
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, int *))(v3 + 88))(
           a2,
           LambdaCustomPaintProc<_lambda_96edf2fb798d729d000c76ff579fff9f_,HDC__ *>,
           &v5);
}
