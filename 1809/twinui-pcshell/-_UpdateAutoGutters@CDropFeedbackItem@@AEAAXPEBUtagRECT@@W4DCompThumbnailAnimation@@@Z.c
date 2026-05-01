/*
 * XREFs of ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x1803784A0
 * Callers:
 *     ?UpdateGutters@CDropFeedbackItem@@UEAAJXZ @ 0x180377CD0 (-UpdateGutters@CDropFeedbackItem@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x18037832C (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803AC76C (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_UpdateAutoGutters(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  __int64 result; // rax
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v9; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  *(_QWORD *)&v9.left = 0LL;
  *(_QWORD *)&v9.right = 0LL;
  v6 = ImmersiveApplicationLayout::ComputeGutterWidth(
         (ImmersiveApplicationLayout *)(a1 + 200),
         (const struct LAYOUT_ENVIRONMENT_DETAILS *)a2);
  SetRect(&rc, *(_DWORD *)a2 - v6, *(_DWORD *)(a2 + 4), *(_DWORD *)a2, *(_DWORD *)(a2 + 12));
  SetRect(&v9, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8) + v6, *(_DWORD *)(a2 + 12));
  CDropFeedbackItem::_UpdateAutoGutter(a1, 0x2000, &rc, a3);
  CDropFeedbackItem::_UpdateAutoGutter(a1, 0x4000, &v9, a3);
  result = *(unsigned int *)(a1 + 72);
  *(_DWORD *)(a1 + 160) = result;
  *(_BYTE *)(a1 + 157) = 0;
  return result;
}
