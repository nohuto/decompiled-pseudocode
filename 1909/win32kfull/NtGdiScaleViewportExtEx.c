/*
 * XREFs of NtGdiScaleViewportExtEx @ 0x1C02AF990
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C01126CC (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiScaleViewportExtEx(HDC a1, int a2, int a3, int a4, int a5, ULONG64 a6)
{
  unsigned int v9; // ebx
  DC *v10; // rcx
  _BYTE *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // r8d
  int v15; // r10d
  int v16; // eax
  int v17; // r8d
  DC *v19[6]; // [rsp+28h] [rbp-30h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  v10 = v19[0];
  if ( v19[0] )
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
      v10 = v19[0];
      *(_QWORD *)a6 = *(_QWORD *)(*((_QWORD *)v19[0] + 122) + 332LL);
    }
    v12 = (_DWORD *)*((_QWORD *)v10 + 122);
    if ( v12[26] <= 6u )
      goto LABEL_18;
    v13 = a2 * v12[83];
    v14 = a4 * v12[84];
    if ( a3 && a5 && (v13 != 0x80000000 || a3 != -1) && (v14 != 0x80000000 || a5 != -1) )
    {
      v15 = v13 / a3;
      v16 = v14 / a5;
      v17 = v14 / a5;
      if ( v15 )
      {
        if ( v16 )
        {
          v12[83] = v15;
          *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 336LL) = v17;
          DC::MirrorWindowOrg(v19[0]);
          *(_DWORD *)(*((_QWORD *)v19[0] + 122) + 340LL) |= 0x4090u;
LABEL_18:
          v9 = 1;
        }
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return v9;
}
