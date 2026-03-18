/*
 * XREFs of EngDrawStream @ 0x1C00DA1A0
 * Callers:
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0295C90 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029B920 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C00DA3F4 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EngDrawStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        unsigned int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  unsigned int v12; // edi
  __int64 v13; // r15
  __int64 v14; // rbx
  int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r11
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 (__fastcall *v24)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v25)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r8
  int v29; // [rsp+70h] [rbp-41h] BYREF
  __int64 v30; // [rsp+78h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-31h]
  __int64 v32; // [rsp+88h] [rbp-29h]
  int v33; // [rsp+90h] [rbp-21h] BYREF
  int v34; // [rsp+94h] [rbp-1Dh]
  int v35; // [rsp+98h] [rbp-19h]
  int v36; // [rsp+9Ch] [rbp-15h]

  v12 = 1;
  v13 = SURFOBJ_TO_SURFACE(a1);
  SURFOBJ_TO_SURFACE(a2);
  v14 = *(_QWORD *)(v13 + 48);
  while ( a7 >= 4 && *a8 == 9 && a7 >= 0x3C )
  {
    v33 = a8[1];
    v16 = v33;
    v17 = (int)a8[2];
    v34 = a8[2];
    v18 = *a6;
    v19 = (int)a8[3];
    v35 = a8[3];
    v20 = (int)a8[4];
    v36 = a8[4];
    if ( (unsigned __int64)(v18 + v33 + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(v18 + v19 + 0x80000000LL) > 0xFFFFFFFF
      || (v21 = a6[1], (unsigned __int64)(v21 + v17 + 0x80000000LL) > 0xFFFFFFFF)
      || (unsigned __int64)(v21 + v20 + 0x80000000LL) > 0xFFFFFFFF )
    {
LABEL_23:
      v12 = 0;
      goto LABEL_19;
    }
    v33 += v18;
    v35 = v18 + v19;
    v34 = v21 + v17;
    v36 = v21 + v20;
    if ( (int)v18 + v16 >= (int)v18 + (int)v19 )
    {
      if ( v16 - (int)v19 < 0 )
        goto LABEL_23;
      v22 = 0;
    }
    else
    {
      v22 = (unsigned int)(v19 - v16) >> 31;
    }
    if ( v22 )
      goto LABEL_23;
    v23 = *(_QWORD *)(v13 + 48);
    v24 = EngNineGrid;
    if ( *(_QWORD *)(v23 + 3416) )
      v24 = *(__int64 (__fastcall **)(int, __int64, int, int, __int64, __int64, __int64, __int64))(v23 + 3416);
    if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(v14 + 2128) & 0x400) == 0)
      && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v13)
      && (*(_BYTE *)(v13 + 112) & 0x10) == 0 )
    {
      v24 = v25;
    }
    v32 = a9[6];
    v31 = a9[5];
    v30 = a9[4];
    v29 = 33488896;
    v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int *, _DWORD *, _DWORD *, int *, _QWORD))v24)(
            a1,
            a2,
            a3,
            a4,
            &v33,
            a8 + 5,
            a8 + 9,
            &v29,
            0LL);
LABEL_19:
    a7 -= 60;
    a8 += 15;
  }
  return v12;
}
