/*
 * XREFs of ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x180072BD0
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BC560 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImageLegacyMilBrush::ReducesToFillImage(CImageLegacyMilBrush *this)
{
  __int64 v2; // rcx
  bool result; // al
  float v4[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 31);
  if ( !v2 )
    return 0;
  if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, float *))(*(_QWORD *)(v2 + 8) + 120LL))(v2 + 8, 0LL, 0LL, v4) < 0 )
    return 0;
  if ( v4[0] != 0.0 )
    return 0;
  if ( v4[1] != 0.0 )
    return 0;
  if ( *((double *)this + 15) != 1.0 )
    return 0;
  if ( *((_DWORD *)this + 39) )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 38) != 1
    || *((float *)this + 40) != 0.0
    || *((float *)this + 41) != 0.0
    || *((float *)this + 42) != 1.0
    || *((float *)this + 43) != 1.0
    || *((_DWORD *)this + 52) != 1
    || *((_QWORD *)this + 16)
    || *((_QWORD *)this + 18)
    || *((_QWORD *)this + 17)
    || *((_QWORD *)this + 25)
    || *((_QWORD *)this + 22) )
  {
    return 0;
  }
  return result;
}
