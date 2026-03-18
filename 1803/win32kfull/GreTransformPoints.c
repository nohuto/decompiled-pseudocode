/*
 * XREFs of GreTransformPoints @ 0x1C00E552C
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C002C73C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     zzzSetCaretPos @ 0x1C0063880 (zzzSetCaretPos.c)
 *     NtGdiTransformPoints @ 0x1C00E53E0 (NtGdiTransformPoints.c)
 *     xxxGetUpdateRect @ 0x1C00FC220 (xxxGetUpdateRect.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall GreTransformPoints(HDC a1, struct _POINTL *a2, struct _POINTL *a3, int a4, int a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned int v9; // edi
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  int v14; // [rsp+28h] [rbp-18h]
  int v15; // [rsp+2Ch] [rbp-14h]
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v5 = 0;
  v6 = a4;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v13, a1);
  if ( !v13 )
    return v5;
  if ( (int)v6 <= 0 )
  {
    v5 = 1;
  }
  else
  {
    v9 = a5 & 0x7FFFFFFF;
    v10 = ((a5 & 0x7FFFFFFF) != 0 ? 516 : 1026) | 0x80000000;
    if ( a5 < 0 )
      v10 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v16, (struct XDCOBJ *)&v13, v10);
    if ( !v16[0] )
      goto LABEL_9;
    if ( v9 <= 1 )
    {
      v11 = EXFORMOBJ::bXform((EXFORMOBJ *)v16, a2, a3, v6);
LABEL_8:
      v5 = v11;
      goto LABEL_9;
    }
    if ( v9 == 2 )
    {
      v11 = EXFORMOBJ::bXform((EXFORMOBJ *)v16, a2, (struct _POINTFIX *)a3, v6);
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( v13 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v13);
  return v5;
}
