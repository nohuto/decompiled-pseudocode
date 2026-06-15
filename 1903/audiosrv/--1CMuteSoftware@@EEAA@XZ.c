/*
 * XREFs of ??1CMuteSoftware@@EEAA@XZ @ 0x1800C8DE4
 * Callers:
 *     ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x1800C90C0 (--_ECMuteSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMuteSoftware::~CMuteSoftware(CMuteSoftware *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CMuteSoftware::`vftable';
  if ( *((_QWORD *)this + 12) )
  {
    if ( ThreadPool )
      (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool);
    *((_QWORD *)this + 12) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CMuteControlBase::~CMuteControlBase(this);
}
