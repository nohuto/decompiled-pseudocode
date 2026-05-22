/*
 * XREFs of ??_GInputProviderManager@@QEAAPEAXI@Z @ 0x18004F0DC
 * Callers:
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x18004EAF0 (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

InputProviderManager *__fastcall InputProviderManager::`scalar deleting destructor'(InputProviderManager *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx

  v2 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v2 != v3 )
    {
      do
      {
        v4 = v2[2];
        if ( v4 )
        {
          v2[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v2 += 3;
      }
      while ( v2 != v3 );
      v2 = *(_QWORD **)this;
    }
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(24 * ((*((_QWORD *)this + 2) - (_QWORD)v2) / 24LL)));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  return this;
}
