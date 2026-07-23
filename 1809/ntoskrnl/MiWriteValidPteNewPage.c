/*
 * XREFs of MiWriteValidPteNewPage @ 0x1400EEBAC
 * Callers:
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 *     MiCopyKstack @ 0x14015ED00 (MiCopyKstack.c)
 *     MiMapMdlCommon @ 0x14018EC34 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402A9614 (MiUnmapMdlCommon.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiTradeBootImagePage @ 0x1409B96AC (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // r11d
  __int64 v4; // r9
  __int64 *v5; // r10
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
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
    result = MiPteHasShadow(v10, v9);
    if ( (_DWORD)result )
    {
      LODWORD(v9) = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_5;
      v13 = (v11 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1740LL) & 0x1000) == 0 )
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
  if ( (_DWORD)v9 )
    return MiWritePteShadow(v12);
  return result;
}
