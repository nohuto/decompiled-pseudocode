/*
 * XREFs of ClearHungFlag @ 0x1C001F610
 * Callers:
 *     xxxHungAppDemon @ 0x1C0016EE0 (xxxHungAppDemon.c)
 *     xxxBeginPaint @ 0x1C001DEFC (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C003B9D4 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00FE7BC (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
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
  _DWORD *v11; // rax
  int v12; // r8d
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
    v11 = (_DWORD *)*((_QWORD *)a1 + 5);
    v10 = v11[7];
    v12 = v11[6];
    v13 = v11[58];
    if ( v4 != v10 )
      goto LABEL_12;
    if ( v6 == v12 && v7 == v13 )
      goto LABEL_5;
    if ( v4 == v10 )
    {
      if ( v6 == v12 )
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
      v8 = ((v4 ^ v10) & 0xB9CF0000) != 0;
      v16 = ((v4 ^ v10) & 0xB9CF0000) != 0 ? 0xFFFFFFF0 : 0;
      v9 = -((v4 ^ v10) & 0xB9CF0000);
      v13 = ((v4 ^ v10) & 0xB9CF0000) != 0 ? v10 : 0;
    }
    if ( (_DWORD)v8 )
    {
      v17 = (void *)ReferenceDwmApiPort(v9, v8);
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
