/*
 * XREFs of ?AddHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@@Z @ 0x1400090B0
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400091E0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140009AB0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
        struct ATL::CAtlPlex **a1,
        _QWORD *a2)
{
  struct ATL::CAtlPlex *v3; // rsi
  struct ATL::CAtlPlex *v5; // rdx
  struct ATL::CAtlPlex *v6; // rcx
  struct ATL::CAtlPlex *result; // rax
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  struct ATL::CAtlPlex *i; // rcx

  v3 = *a1;
  if ( !a1[4] )
  {
    v8 = ATL::CAtlPlex::Create(a1 + 3, *((unsigned int *)a1 + 10), 0x18uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *((_DWORD *)a1 + 10);
    for ( i = (struct ATL::CAtlPlex *)((char *)v8 + 16 * (v9 - 1) + 8 * (unsigned int)(v9 - 1) + 8);
          --v9 >= 0;
          i = (struct ATL::CAtlPlex *)((char *)i - 24) )
    {
      *(_QWORD *)i = a1[4];
      a1[4] = i;
    }
  }
  v5 = a1[4];
  v6 = *(struct ATL::CAtlPlex **)v5;
  *((_QWORD *)v5 + 2) = *a2;
  a1[4] = v6;
  *((_QWORD *)v5 + 1) = 0LL;
  *(_QWORD *)v5 = v3;
  a1[2] = (struct ATL::CAtlPlex *)((char *)a1[2] + 1);
  if ( *a1 )
    *((_QWORD *)*a1 + 1) = v5;
  else
    a1[1] = v5;
  result = v5;
  *a1 = v5;
  return result;
}
