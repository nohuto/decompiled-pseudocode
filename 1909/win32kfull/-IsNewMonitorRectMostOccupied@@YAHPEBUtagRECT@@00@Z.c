/*
 * XREFs of ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E5864
 * Callers:
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E6780 (DetectNewMonitor.c)
 * Callees:
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 */

_BOOL8 __fastcall IsNewMonitorRectMostOccupied(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  IntersectRect(&v6, &a1->left, &a2->left);
  IntersectRect(&v8, &a1->left, &a3->left);
  return ((int)v7 - (int)v6) * (HIDWORD(v7) - HIDWORD(v6)) > ((int)v9 - (int)v8) * (HIDWORD(v9) - HIDWORD(v8));
}
