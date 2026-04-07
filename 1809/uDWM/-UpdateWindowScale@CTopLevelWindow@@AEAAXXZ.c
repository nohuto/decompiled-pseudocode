/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180014FB8
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x18003B53C (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18004A468 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     fmodf_0 @ 0x18004E272 (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  double *v2; // rcx
  __int64 v3; // rdi
  double v4; // xmm3_8
  _DWORD *v5; // rcx
  int v6; // eax
  CVisual *v7; // rcx
  double v8; // rax

  *((_DWORD *)this + 170) = -1;
  v2 = (double *)*((_QWORD *)this + 67);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 90);
    v4 = *(float *)(v3 + 176);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v2[21] - *(float *)(v3 + 172))) & _xmm) > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v2[22] - *(float *)(v3 + 176))) & _xmm) > 0.0000011920929 )
    {
      v8 = *v2;
      v2[21] = *(float *)(v3 + 172);
      v2[22] = v4;
      (*(void (__fastcall **)(double *, __int64))(*(_QWORD *)&v8 + 24LL))(v2, 16LL);
      v3 = *((_QWORD *)this + 90);
    }
    if ( fmodf_0(*(float *)(v3 + 172), 1.0) == 0.0 && fmodf_0(*(float *)(v3 + 176), 1.0) == 0.0 )
    {
      v5 = (_DWORD *)*((_QWORD *)this + 67);
      v6 = v5[49];
      if ( (v6 & 2) == 0 || v5[50] )
      {
        v5[50] = 0;
        v5[49] = v6 | 2;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 64LL);
      }
    }
    else if ( *(float *)(v3 + 172) < 1.0 || *(float *)(v3 + 176) < 1.0 )
    {
      CVisual::SetInterpolationMode(*((_QWORD *)this + 67), 6LL);
    }
    else
    {
      CVisual::ClearInterpolationMode(*((CVisual **)this + 67));
    }
  }
  v7 = (CVisual *)*((_QWORD *)this + 36);
  if ( v7 )
    CVisual::SetScale(v7, *(float *)(*((_QWORD *)this + 90) + 172LL), *(float *)(*((_QWORD *)this + 90) + 176LL));
}
