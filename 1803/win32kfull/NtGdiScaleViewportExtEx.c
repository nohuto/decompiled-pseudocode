/*
 * XREFs of NtGdiScaleViewportExtEx @ 0x1C0287390
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C008ACA4 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiScaleViewportExtEx(HDC a1, int a2, int a3, int a4, int a5, ULONG64 a6)
{
  unsigned int v9; // ebx
  DC *v10; // r11
  _BYTE *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // r9d
  __int64 v15; // r11
  DC *v17[6]; // [rsp+28h] [rbp-30h] BYREF

  v9 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v17, a1);
  v10 = v17[0];
  if ( v17[0] )
  {
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (_BYTE *)a6;
      if ( a6 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[7] = v11[7];
      v10 = v17[0];
      *(_QWORD *)a6 = *(_QWORD *)(*((_QWORD *)v17[0] + 10) + 344LL);
    }
    v12 = (_DWORD *)*((_QWORD *)v10 + 10);
    if ( v12[77] <= 6u )
      goto LABEL_18;
    v13 = a2 * v12[86];
    v14 = a4 * v12[87];
    if ( a3 && a5 && (v13 != 0x80000000 || a3 != -1) && (v14 != 0x80000000 || a5 != -1) && v13 / a3 && v14 / a5 )
    {
      v12[86] = v13 / a3;
      *(_DWORD *)(*((_QWORD *)v10 + 10) + 348LL) = v14 / a5;
      DC::MirrorWindowOrg(v10);
      *(_DWORD *)(*(_QWORD *)(v15 + 80) + 352LL) |= 0x4090u;
LABEL_18:
      v9 = 1;
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v9;
}
