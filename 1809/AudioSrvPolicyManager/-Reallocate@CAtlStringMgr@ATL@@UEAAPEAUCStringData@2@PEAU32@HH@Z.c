/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x18002D8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  int v5; // r10d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  int v8; // eax
  SIZE_T v9; // r9
  void *v10; // rcx
  struct ATL::CStringData *result; // rax

  if ( a3 < 0 )
    return 0LL;
  v5 = 0x7FFFFFFF - a3;
  if ( 0x7FFFFFFF - a3 >= 1 )
    ++a3;
  if ( v5 < 1 )
    return 0LL;
  v6 = (a3 + 7) & 0xFFFFFFF8;
  if ( a3 > (int)v6 )
    return 0LL;
  v7 = a4 * (unsigned __int64)v6;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = a4 * v6;
  if ( (unsigned int)v7 > 0xFFFFFFE7 )
    return 0LL;
  v9 = (unsigned int)(v7 + 24);
  v10 = *(void **)(*((_QWORD *)this + 1) + 8LL);
  if ( a2 )
  {
    if ( v8 == -24 )
    {
      HeapFree(v10, 0, a2);
      return 0LL;
    }
    result = (struct ATL::CStringData *)HeapReAlloc(v10, 0, a2, v9);
  }
  else
  {
    result = (struct ATL::CStringData *)HeapAlloc(v10, 0, (unsigned int)v9);
  }
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v6 - 1;
  return result;
}
