/*
 * XREFs of ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x1800363C8
 * Callers:
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180034500 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800346C0 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180035A74 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall ControllerProcessor::AdjustPointToBounds(struct tagPOINT a1, struct tagRECT *a2)
{
  struct tagPOINT result; // rax
  LONG left; // r8d
  int v5; // edx
  LONG x; // ecx
  int v7; // edx
  unsigned __int64 v8; // rax
  LONG v9; // ecx
  __int64 v10; // [rsp+18h] [rbp+18h]

  result = a1;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
  {
    left = a2->left;
    v5 = a2->right - 1;
    x = v5;
    if ( result.x < v5 )
      x = result.x;
    if ( left <= x )
    {
      if ( result.x < v5 )
        v5 = result.x;
      LODWORD(v10) = v5;
    }
    else
    {
      LODWORD(v10) = left;
    }
    v7 = a2->bottom - 1;
    v8 = HIDWORD(*(unsigned __int64 *)&result);
    v9 = v7;
    if ( (int)v8 < v7 )
      v9 = v8;
    if ( a2->top <= v9 )
    {
      if ( (int)v8 < v7 )
        v7 = v8;
      HIDWORD(v10) = v7;
    }
    else
    {
      HIDWORD(v10) = a2->top;
    }
    return (struct tagPOINT)v10;
  }
  return result;
}
