/*
 * XREFs of ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027C480
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     OffDrawStream @ 0x1C02C13C4 (OffDrawStream.c)
 */

__int64 __fastcall SpDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  int v10; // edi
  unsigned int v11; // ebx
  HDEV hdev; // rax
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v15; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v16; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v17; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h]
  __int64 *v19[114]; // [rsp+90h] [rbp-70h] BYREF

  v17 = 0LL;
  v10 = (int)a2;
  v11 = 1;
  v18 = (__int64)a9;
  hdev = a2->hdev;
  v16 = a1;
  v15 = a3;
  if ( hdev && *((struct _SURFOBJ **)hdev + 15) == a2 )
  {
    DbgPrint("SpDrawStream: source is the screen, this should never happen\n");
  }
  else
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v19, a1, a3, a5);
    while ( (unsigned int)ENUMUNDERLAYS::bEnum(v19, &v16, &v17, &v15) )
    {
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v14, v16);
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v14, &v15) )
        v11 &= OffDrawStream(
                 (int)EngDrawStream,
                 (int)&v17,
                 (int)v16,
                 v10,
                 v15,
                 (__int64)a4,
                 (__int64)a5,
                 (__int64)a6,
                 a7,
                 (__int64)a8,
                 v18);
      if ( v14 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
        v14 = 0LL;
      }
    }
  }
  return v11;
}
