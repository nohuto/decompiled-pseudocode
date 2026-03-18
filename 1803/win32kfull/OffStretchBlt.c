/*
 * XREFs of OffStretchBlt @ 0x1C012F3DC
 * Callers:
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C012F120 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0273E60 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C009F688 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffStretchBlt(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int),
        LONG *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        __int64 a13,
        int a14)
{
  LONG v14; // r13d
  LONG v15; // r12d
  _DWORD *v16; // r15
  LONG x; // edi
  LONG y; // esi
  unsigned int v19; // ebx
  _DWORD v21[2]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v22; // [rsp+68h] [rbp-61h]
  __int64 v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  struct _CLIPOBJ *v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  __int64 v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  __int64 (__fastcall *v29)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int); // [rsp+A0h] [rbp-29h]
  _DWORD v30[4]; // [rsp+A8h] [rbp-21h] BYREF
  _DWORD v31[4]; // [rsp+B8h] [rbp-11h] BYREF

  v14 = a2[1];
  v15 = *a2;
  v16 = a10;
  x = gptlZero.x;
  y = gptlZero.y;
  v29 = a1;
  v24 = a8;
  v27 = a5;
  v23 = a9;
  v26 = a6;
  v22 = a13;
  v28 = a3;
  v25 = a7;
  CLIPOBJ_vOffset(a7, v15, v14);
  v31[0] = v15 + *a11;
  v31[2] = v15 + a11[2];
  v31[1] = v14 + a11[1];
  v31[3] = v14 + a11[3];
  v30[0] = x + *a12;
  v30[2] = x + a12[2];
  v30[1] = y + a12[1];
  v30[3] = y + a12[3];
  if ( a10 )
  {
    v21[0] = v15 + *a10;
    v16 = v21;
    v21[1] = v14 + a10[1];
  }
  v19 = v29(v28, v27, v26, v25, v24, v23, v16, v31, v30, v22, a14);
  CLIPOBJ_vOffset(v25, -v15, -v14);
  return v19;
}
