/*
 * XREFs of ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C024B880
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     OffDrawStream @ 0x1C0296B9C (OffDrawStream.c)
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
  int v10; // r14d
  unsigned int v11; // esi
  HDEV hdev; // rax
  __int64 v13; // rbx
  struct _SURFOBJ *v15; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 *v22[114]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = (int)a2;
  v21 = (__int64)a6;
  v11 = 1;
  v20 = (__int64)a8;
  v19 = (__int64)a9;
  hdev = a2->hdev;
  v15 = a1;
  v16 = a3;
  if ( hdev && *((struct _SURFOBJ **)hdev + 14) == a2 )
  {
    DbgPrint("SpDrawStream: source is the screen, this should never happen\n");
  }
  else
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v22, a1, a3, a5);
    while ( (unsigned int)ENUMUNDERLAYS::bEnum(v22, &v15, &v18, &v16) )
    {
      v13 = 0LL;
      v17 = 0LL;
      if ( v15
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x200) == 0 )
      {
        v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
        v17 = v13;
        GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v17, &v16) )
        v11 &= OffDrawStream(
                 (int)EngDrawStream,
                 (int)&v18,
                 (int)v15,
                 v10,
                 v16,
                 (__int64)a4,
                 (__int64)a5,
                 v21,
                 a7,
                 v20,
                 v19);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
  }
  return v11;
}
