/*
 * XREFs of ??$_Setp@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@AEAAXPEAV?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@U?$integral_constant@_N$0A@@1@@Z @ 0x14005D1CC
 * Callers:
 *     ??$reset@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@Z @ 0x14005D25C (--$reset@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::_Setp<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    if ( result )
    {
      result[2] = 1;
      result[3] = 1;
      *(_QWORD *)result = &std::_Ref_count<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = result;
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
  return result;
}
