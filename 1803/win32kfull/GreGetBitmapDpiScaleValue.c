/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x1C026E3C8
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8 (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x1C027EB10 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  v3 = v2;
  if ( !v2 || (*(_DWORD *)(v2 + 116) & 0x800) == 0 || (v4 = bFToL(*(float *)(v2 + 660), (int *)&v7, 6), v5 = v7, !v4) )
    v5 = 1;
  if ( v3 )
    DEC_SHARE_REF_CNT(v3);
  return v5;
}
