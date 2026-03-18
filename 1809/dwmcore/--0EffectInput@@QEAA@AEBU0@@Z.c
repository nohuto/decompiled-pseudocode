/*
 * XREFs of ??0EffectInput@@QEAA@AEBU0@@Z @ 0x1801D49D8
 * Callers:
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1800C8544 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801D4838 (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x1800265D0 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 */

EffectInput *__fastcall EffectInput::EffectInput(EffectInput *this, const struct EffectInput *a2)
{
  char v4; // r8

  CDrawListBitmap::CDrawListBitmap(this, a2);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  v4 = *((_BYTE *)a2 + 44);
  *((_BYTE *)this + 44) = v4;
  *((_BYTE *)this + 45) = *((_BYTE *)a2 + 45);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  if ( v4 )
  {
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
    *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  }
  return this;
}
