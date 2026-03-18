/*
 * XREFs of ClearHungFlag @ 0x1C0037FF8
 * Callers:
 *     xxxHungAppDemon @ 0x1C001DAC0 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C002C088 (InternalInvalidate3.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E5A94 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall ClearHungFlag(struct tagWND *a1, __int16 a2)
{
  __int64 v2; // r9
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
  *(_BYTE *)(HIBYTE(a2) + v2 + 16) &= ~(_BYTE)a2;
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
      v8 = ((v4 ^ v10) & 0xB9CF0000) != 0;
      v9 = -((v4 ^ v10) & 0xB9CF0000);
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
