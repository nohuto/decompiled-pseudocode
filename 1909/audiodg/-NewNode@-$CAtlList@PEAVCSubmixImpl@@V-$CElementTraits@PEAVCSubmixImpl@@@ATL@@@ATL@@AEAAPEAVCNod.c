/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSubmixImpl@@PEAV312@1@Z @ 0x14000D5B4
 * Callers:
 *     ?AddHead@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCSubmixImpl@@@Z @ 0x14000D578 (-AddHead@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140009AB0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  struct ATL::CAtlPlex *v7; // r8
  int v8; // edx
  __int64 *i; // rcx
  __int64 v10; // rdx

  result = (__int64 *)qword_140085700;
  if ( !qword_140085700 )
  {
    v7 = ATL::CAtlPlex::Create(&qword_1400856F8, (unsigned int)dword_140085708, 0x18uLL);
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = dword_140085708;
    result = (__int64 *)qword_140085700;
    for ( i = (__int64 *)((char *)v7
                        + 16 * (unsigned int)(dword_140085708 - 1)
                        + 8 * (unsigned int)(dword_140085708 - 1)
                        + 8); --v8 >= 0; i -= 3 )
    {
      *i = (__int64)result;
      result = i;
      qword_140085700 = (__int64)i;
    }
  }
  v10 = *result;
  result[2] = *a2;
  qword_140085700 = v10;
  result[1] = 0LL;
  *result = a4;
  ++qword_1400856F0;
  return result;
}
