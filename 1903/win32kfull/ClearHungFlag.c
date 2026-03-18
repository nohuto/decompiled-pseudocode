/*
 * XREFs of ClearHungFlag @ 0x1C0099DDC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxHungAppDemon @ 0x1C00AE720 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C00C5A38 (InternalInvalidate3.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00CF914 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
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
  int v13; // ebx
  __int64 result; // rax
  int v15; // ecx
  int v16; // edi
  void *v17; // rax

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
        v16 = -268435456;
      }
      else
      {
        v15 = (v6 ^ v12) & 0x4E27A9;
        v8 = v15 != 0;
        v16 = v15 != 0 ? 0xFFFFFFEC : 0;
        v9 = (unsigned int)-v15;
        v13 = (_DWORD)v9 != 0 ? v12 : 0;
      }
    }
    else
    {
LABEL_12:
      v8 = ((v4 ^ v10) & 0xB1CF0000) != 0;
      v16 = ((v4 ^ v10) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
      v9 = -((v4 ^ v10) & 0xB1CF0000);
      v13 = ((v4 ^ v10) & 0xB1CF0000) != 0 ? v10 : 0;
    }
    if ( (_DWORD)v8 )
    {
      v17 = (void *)ReferenceDwmApiPort(v9, v8, v12);
      DwmAsyncChildStyleChange(v17, *(_QWORD *)a1, v16, v13);
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
