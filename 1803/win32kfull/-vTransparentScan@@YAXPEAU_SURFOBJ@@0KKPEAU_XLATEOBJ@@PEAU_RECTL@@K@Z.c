/*
 * XREFs of ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x1C0263BA8
 * Callers:
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0261E8C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?ReadScanLine@@YAKPEAEKKKK@Z @ 0x1C0262198 (-ReadScanLine@@YAKPEAEKKKK@Z.c)
 *     ?SkipScanLine@@YAKPEAEKKKK@Z @ 0x1C026228C (-SkipScanLine@@YAKPEAEKKKK@Z.c)
 */

void __fastcall vTransparentScan(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        unsigned int a3,
        int a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  unsigned int v7; // edi
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int8 *v12; // r12
  __int64 v13; // r13
  __int64 v14; // rbx
  unsigned int ScanLine; // eax
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  _DWORD v18[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _XLATEOBJ *v19; // [rsp+48h] [rbp-70h]
  struct _SURFOBJ *v20; // [rsp+50h] [rbp-68h]
  __int128 v21; // [rsp+58h] [rbp-60h] BYREF

  v7 = a3;
  v19 = a5;
  v9 = (__int128)*a6;
  v10 = a4 * a2->lDelta;
  v11 = a3 + a6->right - *(_OWORD *)a6;
  v20 = a1;
  v21 = v9;
  v18[0] = a3;
  v18[1] = a4;
  v12 = (unsigned __int8 *)a2->pvScan0 + v10;
  v13 = SURFOBJ_TO_SURFACE(a1);
  v14 = *(_QWORD *)(v13 + 48);
  if ( v7 < v11 )
  {
    do
    {
      ScanLine = ReadScanLine(v12, v7, v11, a2->iBitmapFormat, a7);
      v16 = ScanLine;
      if ( ScanLine - 1 > v7 )
      {
        DWORD2(v21) = ScanLine + v21 - v7;
        if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
          (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, _DWORD *))(v14 + 2832))(
            v20,
            a2,
            0LL,
            v19,
            &v21,
            v18);
        else
          ((void (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, _QWORD, struct _XLATEOBJ *, __int128 *, _DWORD *))EngCopyBits)(
            v20,
            a2,
            0LL,
            v19,
            &v21,
            v18);
      }
      v18[0] = SkipScanLine(v12, v16, v11, a2->iBitmapFormat, a7);
      v17 = v18[0] - v7;
      v7 = v18[0];
      LODWORD(v21) = v17 + v21;
    }
    while ( v18[0] < v11 );
  }
}
