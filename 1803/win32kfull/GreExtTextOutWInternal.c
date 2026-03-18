/*
 * XREFs of GreExtTextOutWInternal @ 0x1C007793C
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C000C8A4 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0012940 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0012C5C (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     NtGdiExtTextOutW @ 0x1C009CFE0 (NtGdiExtTextOutW.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C01054B4 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01D614C (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01FF2E4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C022C420 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
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
  __int64 v21; // [rsp+98h] [rbp-9h]
  int v22; // [rsp+A0h] [rbp-1h]
  int v23; // [rsp+A4h] [rbp+3h]
  __int64 v24; // [rsp+A8h] [rbp+7h]
  __int64 v25; // [rsp+B0h] [rbp+Fh]
  __int64 v26; // [rsp+B8h] [rbp+17h]

  v13 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v17, a1);
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
      v26 = 0LL;
      v25 = 0LL;
      v24 = 0LL;
      v18 = 0LL;
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
                *(unsigned __int8 *)(*(_QWORD *)(v17[0] + 80LL) + 73LL),
                a9,
                a10);
      else
        v15 = XDCOBJ::bFullScreen((XDCOBJ *)v17);
      v13 = v15;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v18);
      v14 = v17[0];
    }
    if ( v14 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  }
  return v13;
}
