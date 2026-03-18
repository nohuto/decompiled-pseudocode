/*
 * XREFs of ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02949DC
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C029576C (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C02B2424 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 */

int __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  int result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  PVOID v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // edi

  if ( !a2 )
    return -1073741811;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 902LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = operator new[](0x2000uLL, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
  {
    result = DmmCollectBlackScreenDiagInfo(a2, v9, v8);
    v14 = result;
    if ( result >= 0 )
    {
      *((_BYTE *)this + 32) = 1;
    }
    else
    {
      operator delete[](*((void **)this + 3));
      *((_QWORD *)this + 3) = 0LL;
      result = v14;
      *((_BYTE *)this + 32) = 0;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 0x2000LL;
    WdLogEvent5_WdLowResource(v13);
    return -1073741801;
  }
  return result;
}
