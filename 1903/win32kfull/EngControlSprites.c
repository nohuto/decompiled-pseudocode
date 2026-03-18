/*
 * XREFs of EngControlSprites @ 0x1C02823C0
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278F08 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0280164 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 */

BOOL __stdcall EngControlSprites(WNDOBJ *pwo, FLONG fl)
{
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // rbx
  HDEV v8; // [rsp+50h] [rbp+18h] BYREF
  char v9; // [rsp+58h] [rbp+20h] BYREF

  if ( fl - 1 > 1 )
    return 0;
  v8 = *(HDEV *)(*(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL) + 48LL);
  v5 = *((_QWORD *)v8 + 3);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v9, (struct PDEVOBJ *)&v8);
  v7 = 0LL;
  if ( *(_DWORD *)(v5 + 148) )
  {
    do
    {
      vSpDeviceControlSprites(*(HDEV *)(*(_QWORD *)(v5 + 152) + 8 * v7), (struct EWNDOBJ *)pwo, fl, v6);
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(v5 + 148) );
  }
  else
  {
    vSpDeviceControlSprites(v8, (struct EWNDOBJ *)pwo, fl, v6);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v9);
  return 1;
}
