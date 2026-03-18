/*
 * XREFs of GreGetNearestColor @ 0x1C00508E0
 * Callers:
 *     SetSysColor @ 0x1C0050768 (SetSysColor.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0017A44 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001B230 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C8A0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C968 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ulIndexToRGB @ 0x1C0067DB0 (ulIndexToRGB.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0130700 (ulGetNearestIndexFromColorref.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  __int64 v3; // r14
  SURFACE *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rax
  unsigned int NearestIndexFromColorref; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  char v14; // [rsp+60h] [rbp-20h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v3 = v11[0];
  if ( v11[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v11);
    v4 = *(SURFACE **)(v3 + 496);
    v5 = *(_QWORD *)(v3 + 88);
    if ( !v4 )
      v4 = SURFACE::pdibDefault;
    if ( (*(_DWORD *)(v3 + 32) & 0xFFFFFFFD) != 0 )
      v6 = *((_QWORD *)v4 + 16);
    else
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 1808LL);
    v7 = *(_DWORD *)(v3 + 120);
    if ( (v7 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v3 + 976) + 248LL) || (v7 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v6 || *(_DWORD *)(v6 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v6, *(_QWORD *)(v3 + 88), a2);
        a2 = ulIndexToRGB(v6, v5, NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
    v8 = v13;
    if ( v13 )
    {
      if ( v14 )
      {
        *(_DWORD *)(v13 + 40) &= ~2u;
        v8 = v13;
        v14 = 0;
      }
      if ( v8 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v13);
    }
  }
  else
  {
    a2 = -1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return a2;
}
