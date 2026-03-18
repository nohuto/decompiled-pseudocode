/*
 * XREFs of ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C024C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02474C8 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C02497D8 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0249950 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C024B7A8 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall SpSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, __int64 a3, struct _RECTL *a4)
{
  HDEV hdev; // r13
  __int64 v5; // rbx
  struct _SURFOBJ *v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 (__fastcall *v11)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *); // rax
  TRACKOBJ *v12; // rsi
  int v13; // r14d
  __int64 i; // rdi
  struct _RECTL v15; // xmm0
  HDEV v16; // rcx
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h]
  _BYTE v21[16]; // [rsp+48h] [rbp-31h] BYREF
  int v22; // [rsp+58h] [rbp-21h] BYREF
  HDEV v23; // [rsp+60h] [rbp-19h]
  struct _RECTL v24; // [rsp+68h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-1h]

  hdev = a1->hdev;
  v5 = 0LL;
  v6 = a1;
  v25 = 0LL;
  v22 = 0;
  v8 = a3;
  v9 = *((_QWORD *)hdev + 14);
  v20 = a3;
  SURFOBJ_TO_SURFACE_NOT_NULL(v9);
  v11 = (__int64 (__fastcall *)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))*((_QWORD *)hdev + 172);
  if ( v11 && gpto )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v19 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v12 = gpto;
    v13 = 0;
    if ( gpto )
    {
      do
      {
        if ( v13 )
          break;
        for ( i = *((_QWORD *)v12 + 3); i; i = *(_QWORD *)(i + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD(
            (UNDODESKTOPCOORD *)v21,
            (struct EWNDOBJ *)i,
            (struct _SPRITESTATE *)(hdev + 20));
          if ( (*(_DWORD *)(i + 184) & 0x1000000) != 0
            && (unsigned int)bIntersect(i + 4, a4)
            && RGNOBJ::bInside((RGNOBJ *)(i + 56), a4) == 2 )
          {
            v13 = 1;
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v21);
            break;
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v21);
        }
        v12 = (TRACKOBJ *)*((_QWORD *)v12 + 1);
      }
      while ( v12 );
      v6 = a1;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    if ( v13 )
    {
      v8 = v20;
LABEL_18:
      v15 = *a4;
      v16 = v6->hdev;
      v25 = 0LL;
      v24 = v15;
      v23 = v16;
      v22 = GreTearDownSprites(v16, a4);
      v11 = (__int64 (__fastcall *)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))*((_QWORD *)hdev + 172);
LABEL_19:
      v5 = v11(v6, a2, v8, a4);
    }
  }
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v22);
  return v5;
}
