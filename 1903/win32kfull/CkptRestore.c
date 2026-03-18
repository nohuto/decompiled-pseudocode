/*
 * XREFs of CkptRestore @ 0x1C0090C80
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     UpdateCheckpoint @ 0x1C0090C28 (UpdateCheckpoint.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C0151A5C (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D3B88 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FA254 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FF16C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E820 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0022E10 (DesktopAlloc.c)
 *     InternalSetProp @ 0x1C008C438 (InternalSetProp.c)
 *     CkptUpdate @ 0x1C0090D58 (CkptUpdate.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

_DWORD *__fastcall CkptRestore(__int64 a1, _OWORD *a2)
{
  _DWORD *Prop; // rbx
  _DWORD *v6; // rax

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    Prop = (_DWORD *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    if ( Prop )
    {
LABEL_3:
      CkptUpdate(a1, a2, Prop);
      return Prop;
    }
    v6 = DesktopAlloc(*(_QWORD *)(a1 + 24), 0x34u);
    Prop = v6;
    if ( v6 )
    {
      if ( (unsigned int)InternalSetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), (__int64)v6, 9u) )
      {
        Prop[12] &= 0xFFFFFF80;
        Prop[8] = -1;
        Prop[9] = -1;
        Prop[10] = -1;
        Prop[11] = -1;
        *(_OWORD *)Prop = *a2;
        *((_OWORD *)Prop + 1) = *a2;
        goto LABEL_3;
      }
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, Prop);
    }
  }
  return 0LL;
}
