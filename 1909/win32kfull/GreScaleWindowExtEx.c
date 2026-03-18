/*
 * XREFs of GreScaleWindowExtEx @ 0x1C015E5C4
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C015E580 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C01126CC (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r10
  _DWORD *v11; // rcx
  int v13; // eax
  int v14; // r9d
  DC *v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v10 = v15[0];
  if ( !v15[0] )
    return v9;
  if ( a6 )
  {
    *a6 = *(_QWORD *)(*((_QWORD *)v15[0] + 122) + 316LL);
    if ( (*(_DWORD *)(*((_QWORD *)v10 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a6 = -*(_DWORD *)a6;
  }
  v11 = (_DWORD *)*((_QWORD *)v10 + 122);
  if ( v11[26] > 6u )
  {
    v13 = a2 * v11[79];
    v14 = a4 * v11[80];
    if ( !a3 || !a5 || v13 == 0x80000000 && a3 == -1 || v14 == 0x80000000 && a5 == -1 || !(v13 / a3) || !(v14 / a5) )
      goto LABEL_7;
    v11[79] = v13 / a3;
    *(_DWORD *)(*((_QWORD *)v15[0] + 122) + 320LL) = v14 / a5;
    DC::MirrorWindowOrg(v15[0]);
    *(_DWORD *)(*((_QWORD *)v15[0] + 122) + 340LL) |= 0x4090u;
    v10 = v15[0];
  }
  v9 = 1;
LABEL_7:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return v9;
}
