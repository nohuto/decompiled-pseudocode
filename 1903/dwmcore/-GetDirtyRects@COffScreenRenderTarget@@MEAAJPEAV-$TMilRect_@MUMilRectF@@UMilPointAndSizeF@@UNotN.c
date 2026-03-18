/*
 * XREFs of ?GetDirtyRects@COffScreenRenderTarget@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAI@Z @ 0x18019AD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetDirtyRects(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm1_4
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
    return 2147942487LL;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a1 + 328LL))(a1, &v11, v10);
  v7 = v11;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v8 = (float)v7;
  v9 = (float)v10[0];
  result = 0LL;
  *(float *)(a2 + 8) = v8;
  *(float *)(a2 + 12) = v9;
  *a4 = 1;
  return result;
}
