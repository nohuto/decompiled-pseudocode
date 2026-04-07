/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x180009770
 * Callers:
 *     <none>
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000A8D8 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::Initialize(CStoryboard *this)
{
  __int64 v2; // rdi
  _DWORD *i; // rsi

  CStoryboard::_LogStoryboardEvent(this);
  v2 = 0LL;
  *((_DWORD *)this + 18) = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_1800C4580;
          *i != *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
          i += 2 )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= 0x23 )
        return 0LL;
    }
    *((_DWORD *)this + 16) = dword_1800C4580[2 * v2 + 1];
  }
  return 0LL;
}
