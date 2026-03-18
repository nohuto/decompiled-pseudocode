/*
 * XREFs of ??0CDataSourceReaderMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A449C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CDataSourceReaderMarshaler *__fastcall DirectComposition::CDataSourceReaderMarshaler::CDataSourceReaderMarshaler(
        DirectComposition::CDataSourceReaderMarshaler *this)
{
  DirectComposition::CDataSourceReaderMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CDataSourceReaderMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
