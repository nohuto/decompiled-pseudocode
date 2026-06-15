/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800C1354
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800C3354 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180008B44 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x1800C014C (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v5; // esi
  int v6; // edx
  __int64 v7; // r14
  int v8; // edi
  int v9; // r8d
  int v10; // eax
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  const void *v13; // rsi
  __int64 v14; // rax

  v5 = 0;
  v6 = 0;
  if ( a3 >= 0 )
    v5 = a3;
  if ( a4 >= 0 )
    v6 = a4;
  if ( 0x7FFFFFFF - v5 < v6 )
    ATL::AtlThrowImpl(-2147024809);
  v7 = *a1;
  v8 = 0;
  v9 = *(_DWORD *)(*a1 - 16);
  v10 = v9 - v5;
  if ( v6 + v5 <= v9 )
    v10 = v6;
  if ( v5 <= v9 )
    v8 = v10;
  if ( v5 || v8 != v9 )
  {
    Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
    v13 = (const void *)(v7 + 2LL * v5);
    if ( !Manager )
      ATL::AtlThrowImpl(-2147467259);
    if ( !v13 && v8 )
      ATL::AtlThrowImpl(-2147024809);
    v14 = (**Manager)(Manager, (unsigned int)v8, 2LL);
    if ( !v14 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *a2 = v14 + 24;
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a2, v8);
    memcpy_s((void *const)*a2, 2LL * v8, v13, 2LL * v8);
  }
  else
  {
    *a2 = (__int64)(ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(v7 - 24)) + 6);
  }
  return a2;
}
