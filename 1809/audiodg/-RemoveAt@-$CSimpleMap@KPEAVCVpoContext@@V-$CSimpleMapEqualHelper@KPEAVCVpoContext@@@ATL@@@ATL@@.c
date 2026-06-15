/*
 * XREFs of ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x14004116C
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140040854 (--1CVpoContext@@IEAA@XZ.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140035460 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x140035A94 (memmove_s.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v3; // edx
  errno_t v4; // eax
  errno_t v5; // eax
  void *v6; // rax
  void *v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = qword_140089060;
  if ( (int)v2 >= (int)qword_140089060 )
    return 0LL;
  if ( (_DWORD)v2 != (_DWORD)qword_140089060 - 1 )
  {
    v4 = memmove_s(
           (char *)CVpoContext::s_mapVpoContext + 4 * v2,
           4LL * ((int)qword_140089060 - (int)v2),
           (char *)CVpoContext::s_mapVpoContext + 4 * v2 + 4,
           4LL * ((int)qword_140089060 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v4);
    v5 = memmove_s(
           (char *)Block + 8 * v2,
           8LL * ((int)qword_140089060 - (int)v2),
           (char *)Block + 8 * v2 + 8,
           8LL * ((int)qword_140089060 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v5);
    v3 = qword_140089060;
  }
  v6 = (void *)_o__recalloc(CVpoContext::s_mapVpoContext, v3 - 1, 4LL);
  if ( v6 || (_DWORD)qword_140089060 == 1 )
    CVpoContext::s_mapVpoContext = v6;
  v7 = (void *)_o__recalloc(Block, (int)qword_140089060 - 1, 8LL);
  if ( v7 || (_DWORD)qword_140089060 == 1 )
    Block = v7;
  result = 1LL;
  LODWORD(qword_140089060) = qword_140089060 - 1;
  return result;
}
