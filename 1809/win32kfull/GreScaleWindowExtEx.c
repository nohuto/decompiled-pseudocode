/*
 * XREFs of GreScaleWindowExtEx @ 0x1C0156F90
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1C0156F50 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C012C9A0 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreScaleWindowExtEx(HDC a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  DC *v10; // r10
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // r9d
  DC *v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v10 = v16[0];
  if ( v16[0] )
  {
    if ( a6 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)v16[0] + 122) + 316LL);
      *a6 = v11;
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 122) + 108LL) & 1) != 0 )
        *(_DWORD *)a6 = -(int)v11;
    }
    v12 = (_DWORD *)*((_QWORD *)v10 + 122);
    if ( v12[26] <= 6u )
      goto LABEL_15;
    v13 = a2 * v12[79];
    v14 = a4 * v12[80];
    if ( a3 && a5 && (v13 != 0x80000000 || a3 != -1) && (v14 != 0x80000000 || a5 != -1) && v13 / a3 && v14 / a5 )
    {
      v12[79] = v13 / a3;
      *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 320LL) = v14 / a5;
      DC::MirrorWindowOrg(v16[0]);
      *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 340LL) |= 0x4090u;
LABEL_15:
      v9 = 1;
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v16);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
  return v9;
}
