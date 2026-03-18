/*
 * XREFs of ulGetFontData @ 0x1C0083318
 * Callers:
 *     NtGdiGetFontData @ 0x1C0083210 (NtGdiGetFontData.c)
 * Callees:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00833CC (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+3Ch] [rbp-2Ch]
  _BYTE v14[32]; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v14);
  XDCOBJ::vLock((XDCOBJ *)&v11, a1);
  if ( v11 )
  {
    FontData2 = ulGetFontData2((struct DCOBJ *)&v11, a2, a3, a4, a5);
  }
  else
  {
    EngSetLastError(6u);
    FontData2 = -1;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v11);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return FontData2;
}
