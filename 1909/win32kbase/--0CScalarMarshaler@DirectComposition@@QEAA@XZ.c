/*
 * XREFs of ??0CScalarMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2800
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CScalarMarshaler *__fastcall DirectComposition::CScalarMarshaler::CScalarMarshaler(
        DirectComposition::CScalarMarshaler *this)
{
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 9) = 1;
  *(_QWORD *)this = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  return this;
}
