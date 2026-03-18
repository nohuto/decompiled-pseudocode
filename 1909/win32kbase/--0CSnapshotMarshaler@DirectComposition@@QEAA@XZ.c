/*
 * XREFs of ??0CSnapshotMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A29E0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSnapshotMarshaler *__fastcall DirectComposition::CSnapshotMarshaler::CSnapshotMarshaler(
        DirectComposition::CSnapshotMarshaler *this)
{
  DirectComposition::CSnapshotMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSnapshotMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
