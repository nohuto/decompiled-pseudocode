/*
 * XREFs of ??1AnimationDataProvider@@QEAA@XZ @ 0x18009BA08
 * Callers:
 *     ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x180022F68 (--_EDragNDropProcessor@@EEAAPEAXI@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VAnimationDataProvider@@@std@@EEAAXXZ @ 0x180093420 (-_Destroy@-$_Ref_count_obj@VAnimationDataProvider@@@std@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AnimationDataProvider::~AnimationDataProvider(AnimationDataProvider *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rax

  *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    (**v5)(v5);
  }
}
