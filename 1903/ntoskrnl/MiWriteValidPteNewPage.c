/*
 * XREFs of MiWriteValidPteNewPage @ 0x1400F6568
 * Callers:
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MiCopyKstack @ 0x1402C4108 (MiCopyKstack.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiTradeBootImagePage @ 0x1409EF93C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x1409FC488 (MxSwapPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // r11d
  __int64 v4; // r9
  __int64 *v5; // r10
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // r10
  bool v13; // zf

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a3 )
    v6 = *a1;
  else
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  result = (v4 ^ v6) & 0x7F00000000000000LL;
  v8 = result ^ v4;
  if ( v3 )
  {
    *v5 = v8;
    return result;
  }
  result = MiPteInShadowRange((unsigned __int64)v5);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v10);
    if ( (_DWORD)result )
    {
      v9 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_5;
      v13 = (v11 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1788LL) & 0x1000) == 0 )
        goto LABEL_5;
      v13 = (v11 & 1) == 0;
    }
    if ( !v13 )
    {
      result = 0x8000000000000000uLL;
      v11 |= 0x8000000000000000uLL;
    }
  }
LABEL_5:
  *v12 = v11;
  if ( v9 )
    return MiWritePteShadow(v12, v11);
  return result;
}
