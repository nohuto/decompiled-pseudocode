/*
 * XREFs of ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0290470
 * Callers:
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C028F7F0 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C028FE80 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0041650 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C028EE74 (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02911E8 (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0291874 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall PanSynchronize(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  __int64 v2; // r8
  struct _RECTL *v4; // rdx
  int v6; // eax
  struct REGION *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  HSEMAPHORE v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+54h] [rbp-ACh]
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h]
  struct _CLIPOBJ v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  int v21; // [rsp+F0h] [rbp-10h]
  __int64 v22; // [rsp+100h] [rbp+0h]
  __int128 v23; // [rsp+110h] [rbp+10h] BYREF
  struct DHPDEV__ *v24; // [rsp+120h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 8);
  v12 = 0LL;
  v4 = (struct _RECTL *)&v12;
  v15 = 0LL;
  v16 = 0LL;
  if ( a2 )
    v4 = a2;
  v13 = *(_DWORD *)(v2 + 32);
  v6 = *(_DWORD *)(v2 + 36);
  v24 = a1;
  v14 = v6;
  v23 = 0LL;
  PANSURFLOCK::vLockShadow((PANSURFLOCK *)&v23, v4, 0LL, 1);
  v12 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v12);
  if ( *((_DWORD *)a1 + 26) )
  {
    v7 = (struct REGION *)*((_QWORD *)a1 + 10);
    v19 = 0LL;
    v20 = 0;
    v22 = 0LL;
    v18 = 0LL;
    v21 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v17, v7, (struct ERECTL *)(a1 + 4), 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
    {
      CLIPOBJ_vOffset(&v17, -*((_DWORD *)a1 + 4), -*((_DWORD *)a1 + 5));
      *(_QWORD *)(*((_QWORD *)a1 + 9) + 16LL) = *((_QWORD *)a1 + 4);
      v8 = SURFOBJ_TO_SURFACE(*((_QWORD *)a1 + 9));
      v9 = *((_QWORD *)a1 + 8);
      v16 = *(_QWORD *)(v8 + 56);
      if ( v9 )
      {
        if ( (*(_DWORD *)(v8 + 112) & 0x400) != 0 )
          (*((void (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int64 *, struct DHPDEV__ *))a1 + 118))(
            v8 + 24,
            v9,
            &v17,
            0LL,
            &v15,
            a1 + 4);
        else
          ((void (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int64 *, struct DHPDEV__ *))EngCopyBits)(
            v8 + 24,
            v9,
            &v17,
            0LL,
            &v15,
            a1 + 4);
      }
    }
    v10 = *((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 26) = 0;
    v11 = v10;
    RGNOBJ::vSet((RGNOBJ *)&v11);
  }
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v12);
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)&v23);
}
