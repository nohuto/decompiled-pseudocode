/*
 * XREFs of ??0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4B8C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSceneNodeMarshaler *__fastcall DirectComposition::CSceneNodeMarshaler::CSceneNodeMarshaler(
        DirectComposition::CSceneNodeMarshaler *this)
{
  DirectComposition::CSceneNodeMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CSceneNodeMarshaler::`vftable';
  result = this;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  return result;
}
