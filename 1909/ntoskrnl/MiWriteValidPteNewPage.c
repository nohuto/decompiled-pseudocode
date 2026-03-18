/*
 * XREFs of MiWriteValidPteNewPage @ 0x1400FA008
 * Callers:
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1400F9DC4 (MiTradeActivePage.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiMapMdlCommon @ 0x140198F04 (MiMapMdlCommon.c)
 *     MiUnmapMdlCommon @ 0x1402C09C4 (MiUnmapMdlCommon.c)
 *     MiCopyKstack @ 0x1402C3E68 (MiCopyKstack.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiTradeBootImagePage @ 0x1409EF854 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x1409FC9A4 (MxSwapPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

char __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // r11d
  __int64 v4; // r9
  __int64 *v5; // r10
  __int64 v6; // rax
  __int64 CurrentThread; // rax
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // r9
  _QWORD *v11; // r10
  bool v12; // zf

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a3 )
    v6 = *a1;
  else
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  CurrentThread = (v4 ^ v6) & 0x7F00000000000000LL;
  v8 = CurrentThread ^ v4;
  if ( v3 )
  {
    *v5 = v8;
    return CurrentThread;
  }
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v5);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v9 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_5;
      v12 = (v10 & 1) == 0;
    }
    else
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 1788LL) & 0x1000) == 0 )
        goto LABEL_5;
      v12 = (v10 & 1) == 0;
    }
    if ( !v12 )
    {
      LOBYTE(CurrentThread) = 0;
      v10 |= 0x8000000000000000uLL;
    }
  }
LABEL_5:
  *v11 = v10;
  if ( v9 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v11);
  return CurrentThread;
}
