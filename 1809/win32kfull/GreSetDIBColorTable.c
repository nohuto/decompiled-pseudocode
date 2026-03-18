/*
 * XREFs of GreSetDIBColorTable @ 0x1C029B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0099C60 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C009B96C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v13; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-51h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v16[32]; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v17[80]; // [rsp+88h] [rbp+7h] BYREF

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v14);
    v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v14);
    if ( (unsigned int)SURFACE::bDIBSection(v8) && (unsigned int)(*(_DWORD *)(v10 + 96) - 1) <= 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v14[0] + 976LL) + 152LL) |= 0xFu;
      v13 = *(_QWORD *)(v9 + 128);
      v11 = *(_DWORD *)(v13 + 28);
      if ( a2 < v11 )
      {
        if ( a2 + a3 <= v11 )
          v11 = a2 + a3;
        v7 = v11 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v13, a4, a2, v11 - a2);
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
    DCOBJ::~DCOBJ((DCOBJ *)v17);
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v15);
  return v7;
}
