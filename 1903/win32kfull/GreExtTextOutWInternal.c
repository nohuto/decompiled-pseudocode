/*
 * XREFs of GreExtTextOutWInternal @ 0x1C007F108
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C0035300 (NtGdiExtTextOutW.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C008DBBC (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BCFC (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011C018 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0130778 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02119D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0249E08 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0252D68 (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C025B160 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0065250 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        void *a9,
        unsigned int a10)
{
  unsigned int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // eax
  _QWORD v17[2]; // [rsp+68h] [rbp-39h] BYREF
  __int128 v18; // [rsp+78h] [rbp-29h] BYREF
  __int64 v19; // [rsp+88h] [rbp-19h]
  int v20; // [rsp+90h] [rbp-11h]
  __int64 v21; // [rsp+98h] [rbp-9h] BYREF
  int v22; // [rsp+A0h] [rbp-1h]
  int v23; // [rsp+A4h] [rbp+3h]
  __int16 v24; // [rsp+A8h] [rbp+7h]
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  __int64 v26; // [rsp+B8h] [rbp+17h]
  __int64 v27; // [rsp+C0h] [rbp+1Fh]

  v13 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v14 = v17[0];
  if ( v17[0] )
  {
    if ( (*(_DWORD *)(v17[0] + 36LL) & 0x10000) == 0 )
    {
      v22 = 0;
      v23 = 0;
      v19 = 0LL;
      v20 = 0;
      v21 = 0LL;
      v27 = 0LL;
      v26 = 0LL;
      v25 = 0LL;
      v18 = 0LL;
      v24 = 256;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v18, (struct XDCOBJ *)v17, 0) )
        v15 = GreExtTextOutWLocked(
                (struct XDCOBJ *)v17,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(*(_QWORD *)(v17[0] + 976LL) + 213LL),
                a9,
                a10);
      else
        v15 = XDCOBJ::bFullScreen((XDCOBJ *)v17);
      v13 = v15;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v18);
      if ( v21 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v21);
      v14 = v17[0];
    }
    if ( v14 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  }
  return v13;
}
