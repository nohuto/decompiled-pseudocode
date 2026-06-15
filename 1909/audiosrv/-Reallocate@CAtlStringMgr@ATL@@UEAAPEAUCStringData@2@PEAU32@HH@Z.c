/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x180043860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  struct ATL::CStringData *result; // rax

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v5 = (a3 + 8) & 0xFFFFFFF8;
  if ( a3 >= (int)v5 )
    return 0LL;
  v6 = a4 * (unsigned __int64)v5;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  if ( (unsigned int)v6 > 0xFFFFFFE7 )
    return 0LL;
  result = (struct ATL::CStringData *)(*(__int64 (__fastcall **)(_QWORD, struct ATL::CStringData *, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
                                        *((_QWORD *)this + 1),
                                        a2,
                                        (unsigned int)(v6 + 24));
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v5 - 1;
  return result;
}
