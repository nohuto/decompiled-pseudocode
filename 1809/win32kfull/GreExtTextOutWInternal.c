/*
 * XREFs of GreExtTextOutWInternal @ 0x1C009B694
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C009AD50 (NtGdiExtTextOutW.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C01106E0 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C01109FC (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0110B00 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C012585C (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C01516EC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FAD90 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02311D0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C023A0D8 (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C0242360 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
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
        ERECTL *a9,
        unsigned int a10)
{
  unsigned int v11; // edi
  unsigned int v15; // eax
  _QWORD v17[2]; // [rsp+68h] [rbp-89h] BYREF
  _BYTE v18[32]; // [rsp+78h] [rbp-79h] BYREF
  __int128 v19; // [rsp+98h] [rbp-59h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-49h]
  int v21; // [rsp+B0h] [rbp-41h]
  _QWORD v22[10]; // [rsp+B8h] [rbp-39h] BYREF

  v11 = 0;
  v17[0] = 0LL;
  v17[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v18);
  XDCOBJ::vLock((XDCOBJ *)v17, a1);
  if ( v17[0] && (*(_DWORD *)(v17[0] + 36LL) & 0x10000) == 0 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v22);
    v20 = 0LL;
    v19 = 0LL;
    v21 = 0;
    v22[0] = 0LL;
    memset(&v22[6], 0, 24);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v19, (struct XDCOBJ *)v17, 0) )
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
    v11 = v15;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v19);
    DCOBJ::~DCOBJ((DCOBJ *)v22);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v18);
  return v11;
}
