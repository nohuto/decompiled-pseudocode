/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027B1E4
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027D108 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngNineGrid @ 0x1C00E9F30 (EngNineGrid.c)
 */

__int64 __fastcall EngNineGridHelper(
        struct XDCOBJ *a1,
        struct PALETTE *a2,
        struct PALETTE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7,
        struct _MARGINS *a8)
{
  unsigned int v8; // edi
  int v10; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+60h] [rbp-39h] BYREF
  __int64 v16; // [rsp+68h] [rbp-31h] BYREF
  _DWORD v17[6]; // [rsp+70h] [rbp-29h] BYREF
  int v18; // [rsp+88h] [rbp-11h] BYREF
  __int64 v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  __int64 v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+57h] BYREF

  v8 = 0;
  v10 = (int)a4;
  v18 = 33488896;
  v17[1] = *(_DWORD *)a8;
  v17[2] = *((_DWORD *)a8 + 1);
  v17[3] = *((_DWORD *)a8 + 2);
  v17[4] = *((_DWORD *)a8 + 3);
  v12 = *(_QWORD *)a1;
  v16 = 0LL;
  v15 = 0LL;
  v23 = 0LL;
  v13 = *(_QWORD *)(v12 + 976);
  v22 = 0LL;
  v17[0] = 5;
  v17[5] = 0;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       &v16,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       (__int64)a3,
                       *(_DWORD *)(v13 + 184),
                       *(_DWORD *)(v13 + 176),
                       0,
                       0) )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v15,
                         0LL,
                         0,
                         (__int64)a2,
                         (__int64)gppalRGB,
                         (__int64)a3,
                         (__int64)a3,
                         0,
                         0,
                         0,
                         0) )
    {
      v19 = v15;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v23,
                           0LL,
                           0,
                           (__int64)a2,
                           (__int64)gppalRGB,
                           (__int64)a3,
                           (__int64)a3,
                           0,
                           0,
                           0,
                           0) )
      {
        v20 = v23;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v22,
                             0LL,
                             0,
                             (__int64)gppalRGB,
                             (__int64)a2,
                             (__int64)a3,
                             (__int64)a3,
                             0,
                             0,
                             0,
                             0) )
        {
          v21 = v22;
          v8 = EngNineGrid(v10, (__int64)a5, 0, v16, (__int64)a6, (__int64)a7, (__int64)v17, (__int64)&v18);
        }
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v15);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v16);
  return v8;
}
