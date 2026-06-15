/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x140043060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x140042FA4 (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  int v5; // r10d
  signed int v6; // ebx
  __int64 v7; // r11
  struct ATL::CStringData *result; // rax
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 < 0 )
    return 0LL;
  v5 = 0x7FFFFFFF - a3;
  if ( 0x7FFFFFFF - a3 >= 1 )
    ++a3;
  if ( v5 < 1 )
    return 0LL;
  v6 = (a3 + 7) & 0xFFFFFFF8;
  if ( a3 > v6 )
    return 0LL;
  if ( (int)ATL::AtlMultiply<unsigned long>(&v9, v6, a4) < 0 )
    return 0LL;
  if ( v9 > 0xFFFFFFE7 )
    return 0LL;
  result = (struct ATL::CStringData *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
                                        *((_QWORD *)this + 1),
                                        v7,
                                        v9 + 24);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v6 - 1;
  return result;
}
