/*
 * XREFs of GreGetDIBColorTable @ 0x1C009B840
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0098A18 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009B96C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ecx
  ULONG v11; // ecx
  _QWORD v13[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v16[80]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v17; // [rsp+F8h] [rbp+7Fh] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( !a4 )
  {
    v11 = 87;
    goto LABEL_14;
  }
  if ( !v13[0] )
  {
    v11 = 6;
LABEL_14:
    EngSetLastError(v11);
    goto LABEL_15;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v13);
  v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v13);
  if ( ((unsigned int)SURFACE::bDIBSection(v8) || *(_QWORD *)(v9 + 128))
    && (unsigned int)(*(_DWORD *)(v9 + 96) - 1) <= 2 )
  {
    v17 = *(_QWORD *)(v9 + 128);
    v10 = *(_DWORD *)(v17 + 28);
    if ( a2 < v10 )
    {
      if ( a2 + a3 <= v10 )
        v10 = a2 + a3;
      v7 = v10 - a2;
      XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v17, a4, a2, v10 - a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
  DCOBJ::~DCOBJ((DCOBJ *)v16);
LABEL_15:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return v7;
}
