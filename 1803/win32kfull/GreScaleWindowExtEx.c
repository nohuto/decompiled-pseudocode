/*
 * XREFs of GreScaleWindowExtEx @ 0x1C0135920
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C01358E0 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C008ACA4 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r11
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v14; // eax
  int v15; // r9d
  __int64 v16; // r11
  DC *v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v17, a1);
  v10 = v17[0];
  if ( v17[0] )
  {
    if ( a6 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)v17[0] + 10) + 328LL);
      *a6 = v11;
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 10) + 312LL) & 1) != 0 )
        *(_DWORD *)a6 = -(int)v11;
    }
    v12 = (_DWORD *)*((_QWORD *)v10 + 10);
    if ( v12[77] > 6u )
    {
      v14 = a2 * v12[82];
      v15 = a4 * v12[83];
      if ( !a3 || !a5 || v14 == 0x80000000 && a3 == -1 || v15 == 0x80000000 && a5 == -1 || !(v14 / a3) || !(v15 / a5) )
        goto LABEL_7;
      v12[82] = v14 / a3;
      *(_DWORD *)(*((_QWORD *)v10 + 10) + 332LL) = v15 / a5;
      DC::MirrorWindowOrg(v10);
      *(_DWORD *)(*(_QWORD *)(v16 + 80) + 352LL) |= 0x4090u;
    }
    v9 = 1;
LABEL_7:
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  }
  return v9;
}
