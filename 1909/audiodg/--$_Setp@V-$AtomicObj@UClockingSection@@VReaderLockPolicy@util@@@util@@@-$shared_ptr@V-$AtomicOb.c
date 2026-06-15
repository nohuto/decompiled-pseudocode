/*
 * XREFs of ??$_Setp@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@AEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@U?$integral_constant@_N$0A@@1@@Z @ 0x14005AF10
 * Callers:
 *     ??$reset@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@Z @ 0x14005B060 (--$reset@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@-$shared_ptr@V-$AtomicOb.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::_Setp<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
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
      *(_QWORD *)result = &std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::`vftable';
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
