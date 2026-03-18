/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801FF460
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF67C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  __int64 v3; // rcx
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
    goto LABEL_7;
  v5 = operator new(0x60uLL);
  v3 = (__int64)v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    *v5 = &CRegionShape::`vftable';
    v5[2] = v5 + 3;
    *((_DWORD *)v5 + 6) = 0;
    v5[11] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 19) = v3;
  if ( v3 )
  {
LABEL_7:
    v7 = CShape::Combine(v3, (__int64)a2, (__int64)a2, 0LL, 0, &v11);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xF4u, 0LL);
      if ( v11 )
        (**v11)(v11, 1LL);
    }
    else
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
      if ( v9 )
        (**v9)(v9, 1LL);
      *((_QWORD *)this + 19) = v11;
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0xEEu, 0LL);
  }
  return v6;
}
