/*
 * XREFs of ?UMPDDrvRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C02A5180
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C004FDF4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00501E4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02A280C (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02A6258 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  int v7; // r14d
  int v8; // r15d
  int v9; // r12d
  struct _SURFOBJ *v10; // rsi
  UMPDOBJ *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v17; // [rsp+90h] [rbp-80h] BYREF
  int v18; // [rsp+94h] [rbp-7Ch] BYREF
  int v19; // [rsp+98h] [rbp-78h] BYREF
  int v20; // [rsp+9Ch] [rbp-74h] BYREF
  int v21; // [rsp+A0h] [rbp-70h] BYREF
  int v22; // [rsp+A4h] [rbp-6Ch] BYREF
  int v23; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v24; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v25; // [rsp+B8h] [rbp-58h]
  void *v26; // [rsp+C0h] [rbp-50h] BYREF
  void *v27; // [rsp+C8h] [rbp-48h] BYREF
  void *v28; // [rsp+D0h] [rbp-40h] BYREF
  void *v29; // [rsp+D8h] [rbp-38h] BYREF
  void *v30; // [rsp+E0h] [rbp-30h] BYREF
  void *v31; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v32; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v33; // [rsp+F8h] [rbp-18h] BYREF
  struct _BRUSHOBJ *v34; // [rsp+100h] [rbp-10h]
  _QWORD v35[10]; // [rsp+110h] [rbp+0h] BYREF

  v6 = 0;
  v34 = a1;
  v7 = 0;
  v23 = 0;
  v22 = 0;
  v8 = 0;
  v21 = 0;
  v9 = 0;
  v18 = 0;
  v10 = a2;
  v19 = 0;
  v20 = 0;
  v24 = a4;
  v25 = a3;
  v32 = a2;
  v17 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v33);
  v31 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  memset(v35, 0, 0x48uLL);
  v11 = v33;
  if ( !v33 )
    goto LABEL_19;
  if ( !*((_DWORD *)v33 + 106) )
    goto LABEL_8;
  if ( a5 )
    v12 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 128;
  else
    v12 = 104;
  v17 = v12;
  v13 = UMPDOBJ::bThunkLargeBitmaps(
          v33,
          v10,
          v25,
          v24,
          &v31,
          &v30,
          &v29,
          &v28,
          &v27,
          &v26,
          &v23,
          &v18,
          &v22,
          &v19,
          &v21,
          &v20,
          &v17);
  v7 = v18;
  v14 = v13;
  v8 = v19;
  v9 = v20;
  v17 = v13;
  if ( v13 )
  {
    v10 = v32;
LABEL_8:
    v35[0] = 0xC00000048LL;
    v35[2] = *(_QWORD *)v11;
    v35[6] = v34;
    v35[4] = v25;
    v35[5] = v24;
    LODWORD(v35[8]) = a6;
    v35[3] = v10;
    v35[7] = a5;
    if ( !(unsigned int)UMPDOBJ::ThunkDDIOBJ(v11, (UMPDOBJ *)((char *)v11 + 144), (const void **)&v35[6], 0x18u, 0LL)
      || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 64), (struct _SURFOBJ **)&v35[3], v7)
      || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 80), (struct _SURFOBJ **)&v35[4], v8)
      || !(unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 96), (struct _SURFOBJ **)&v35[5], v9)
      || !(unsigned int)UMPDOBJ::pxlo(v11, (struct _XLATEOBJ **)&v35[7])
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v11, v35, 72LL, &v17, Size) == -1)
      || (v14 = 1, !v17) )
    {
      v14 = 0;
    }
  }
  if ( *((_DWORD *)v11 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v11,
      (unsigned __int64)v32,
      (unsigned __int64)v25,
      (unsigned __int64)v24,
      v31,
      v30,
      v29,
      v28,
      v27,
      v26,
      v23,
      v7,
      v22,
      v8,
      v21,
      v9);
  v6 = v14;
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ(&v33);
  return v6;
}
