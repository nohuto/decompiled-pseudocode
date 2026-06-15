/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800CFAF4
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800D1B78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18003BF84 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180040CD8 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memcpy_s @ 0x180048684 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C1A88 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x1800CE96C (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v4; // esi
  int v6; // edx
  __int64 v7; // r14
  int v8; // r8d
  int v9; // eax
  int v10; // edi
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  const void *v13; // rsi
  __int64 v14; // rax

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v6 = 0;
  if ( a4 >= 0 )
    v6 = a4;
  if ( 0x7FFFFFFF - v4 < v6 )
    goto LABEL_21;
  v7 = *a1;
  v8 = *(_DWORD *)(*a1 - 16);
  v9 = v8 - v4;
  if ( v6 + v4 <= v8 )
    v9 = v6;
  v10 = 0;
  if ( v4 <= v8 )
    v10 = v9;
  if ( !v4 && v10 == v8 )
  {
    *a2 = (__int64)(ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(v7 - 24)) + 6);
    return a2;
  }
  Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
  v13 = (const void *)(v7 + 2LL * v4);
  if ( !Manager )
    ATL::AtlThrowImpl(-2147467259);
  if ( !v13 && v10 )
LABEL_21:
    ATL::AtlThrowImpl(-2147024809);
  v14 = (**Manager)(Manager, (unsigned int)v10, 2LL);
  if ( !v14 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  *a2 = v14 + 24;
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a2, v10);
  memcpy_s((void *const)*a2, 2LL * v10, v13, 2LL * v10);
  return a2;
}
