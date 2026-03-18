/*
 * XREFs of GreGetNearestColor @ 0x1C0013600
 * Callers:
 *     SetSysColor @ 0x1C0042D4C (SetSysColor.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001C89C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002AA70 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002AB38 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ulIndexToRGB @ 0x1C0058120 (ulIndexToRGB.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0108EE0 (ulGetNearestIndexFromColorref.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  SURFACE *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // edx
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v9[6]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v11[80]; // [rsp+70h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v10, (struct XDCOBJ *)v9);
    v3 = *(SURFACE **)(v9[0] + 496LL);
    v4 = *(_QWORD *)(v9[0] + 88LL);
    if ( !v3 )
      v3 = SURFACE::pdibDefault;
    if ( (*(_DWORD *)(v9[0] + 32LL) & 0xFFFFFFFD) != 0 )
      v5 = *((_QWORD *)v3 + 16);
    else
      v5 = *(_QWORD *)(*(_QWORD *)(v9[0] + 48LL) + 1808LL);
    v6 = *(_DWORD *)(v9[0] + 120LL);
    if ( (v6 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v9[0] + 976LL) + 248LL) || (v6 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v5 || *(_DWORD *)(v5 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v5, *(_QWORD *)(v9[0] + 88LL), a2);
        a2 = ulIndexToRGB(v5, v4, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v10);
    DCOBJ::~DCOBJ((DCOBJ *)v11);
  }
  else
  {
    a2 = -1;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return a2;
}
