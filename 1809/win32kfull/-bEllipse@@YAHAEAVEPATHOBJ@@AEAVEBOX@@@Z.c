/*
 * XREFs of ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C0294030
 * Callers:
 *     NtGdiEllipse @ 0x1C0250DD0 (NtGdiEllipse.c)
 *     NtGdiCreateEllipticRgn @ 0x1C0282940 (NtGdiCreateEllipticRgn.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall bEllipse(struct EPATHOBJ *a1, struct EBOX *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  struct _POINTL v21; // [rsp+20h] [rbp-49h] BYREF
  struct _POINTL v22; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+38h] [rbp-31h]
  int v24; // [rsp+3Ch] [rbp-2Dh]
  int v25; // [rsp+40h] [rbp-29h]
  int v26; // [rsp+44h] [rbp-25h]
  int v27; // [rsp+48h] [rbp-21h]
  int v28; // [rsp+4Ch] [rbp-1Dh]
  int v29; // [rsp+50h] [rbp-19h]
  int v30; // [rsp+54h] [rbp-15h]
  int v31; // [rsp+58h] [rbp-11h]
  int v32; // [rsp+5Ch] [rbp-Dh]
  int v33; // [rsp+60h] [rbp-9h]
  int v34; // [rsp+64h] [rbp-5h]
  int v35; // [rsp+68h] [rbp-1h]
  int v36; // [rsp+6Ch] [rbp+3h]
  int v37; // [rsp+70h] [rbp+7h]
  int v38; // [rsp+74h] [rbp+Bh]
  int v39; // [rsp+78h] [rbp+Fh]
  int v40; // [rsp+7Ch] [rbp+13h]
  int v41; // [rsp+80h] [rbp+17h]
  int v42; // [rsp+84h] [rbp+1Bh]
  int v43; // [rsp+88h] [rbp+1Fh]
  int v44; // [rsp+8Ch] [rbp+23h]

  v4 = *((int *)a2 + 14);
  v5 = 1922922357 * v4;
  v6 = 1922922357LL * *((int *)a2 + 12);
  LODWORD(v4) = *((_DWORD *)a2 + 8) + v4;
  v7 = *((int *)a2 + 13);
  v8 = *((int *)a2 + 15);
  v21.x = v4;
  v6 >>= 32;
  v21.y = v8 + *((_DWORD *)a2 + 9);
  v9 = (1922922357 * v8) >> 32;
  v5 >>= 32;
  v10 = (1922922357 * v7) >> 32;
  EPATHOBJ::bMoveTo(a1, 0LL, &v21);
  v11 = *((_QWORD *)a2 + 1);
  v12 = *((_DWORD *)a2 + 12);
  v13 = *((_DWORD *)a2 + 14);
  v14 = *((_DWORD *)a2 + 15);
  v22.y = HIDWORD(v11) - v9;
  v22.x = v11 - v5;
  v24 = HIDWORD(v11) - v10;
  v23 = v11 - v6;
  v26 = HIDWORD(v11) - *((_DWORD *)a2 + 13);
  v25 = v11 - v12;
  v15 = *((_QWORD *)a2 + 2);
  v28 = v10 + HIDWORD(v15);
  v30 = HIDWORD(v15) - v9;
  v27 = v6 + v15;
  v32 = HIDWORD(v15) - v14;
  v29 = v15 - v5;
  v31 = v15 - v13;
  v16 = *((_QWORD *)a2 + 3);
  v34 = v9 + HIDWORD(v16);
  v36 = v10 + HIDWORD(v16);
  v33 = v5 + v16;
  v35 = v6 + v16;
  v17 = v12 + v16;
  v18 = *((_QWORD *)a2 + 4);
  v38 = HIDWORD(v16);
  v37 = v17;
  v38 = *((_DWORD *)a2 + 13) + HIDWORD(v16);
  v40 = HIDWORD(v18) - v10;
  v42 = v9 + HIDWORD(v18);
  v39 = v18 - v6;
  v41 = v5 + v18;
  v44 = v14 + HIDWORD(v18);
  v43 = v13 + v18;
  v19 = 0;
  if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v22, 0xCu) )
    return EPATHOBJ::bCloseFigure(a1) != 0;
  return v19;
}
