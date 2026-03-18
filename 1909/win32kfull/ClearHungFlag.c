/*
 * XREFs of ClearHungFlag @ 0x1C003ABAC
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxHungAppDemon @ 0x1C004F540 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C0070FE4 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall ClearHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  int v4; // ebp
  int v5; // r15d
  int v6; // edi
  int v7; // r14d
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int *v11; // rax
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 result; // rax
  void *v15; // rax

  v2 = *((_QWORD *)a1 + 5);
  v4 = *(_DWORD *)(v2 + 28);
  v5 = *(_BYTE *)(v2 + 19) & 0x18;
  v6 = *(_DWORD *)(v2 + 24);
  v7 = *(_DWORD *)(v2 + 232);
  *(_BYTE *)(((unsigned __int64)a2 >> 8) + v2 + 16) &= ~(_BYTE)a2;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v11 = (unsigned int *)*((_QWORD *)a1 + 5);
    v10 = v11[7];
    v12 = v11[6];
    v13 = v11[58];
    if ( v4 != v10 )
      goto LABEL_12;
    if ( v6 == (_DWORD)v12 && v7 == v13 )
      goto LABEL_5;
    if ( v4 == v10 )
    {
      if ( v6 == (_DWORD)v12 )
      {
        if ( ((v7 ^ v13) & 0x2E00300) == 0 )
          goto LABEL_5;
        v8 = 1LL;
      }
      else
      {
        v8 = ((v6 ^ (unsigned int)v12) & 0x4E27A9) != 0;
        v9 = -((v6 ^ (unsigned int)v12) & 0x4E27A9);
      }
    }
    else
    {
LABEL_12:
      v8 = ((v4 ^ v10) & 0xB1CF0000) != 0;
      v9 = -((v4 ^ v10) & 0xB1CF0000);
    }
    if ( (_DWORD)v8 )
    {
      v15 = (void *)ReferenceDwmApiPort(v9, v8, v12);
      DwmAsyncChildStyleChange(v15);
    }
  }
LABEL_5:
  result = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(result + 19) & 0x18) == 0 )
  {
    if ( v5 )
      return VWPLRemoveBase(gpvwplHungRedraw, v8, a1, v10, 0LL);
  }
  return result;
}
