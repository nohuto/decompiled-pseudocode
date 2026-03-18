/*
 * XREFs of ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0263850
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C025F33C (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C026197C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0261AF4 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0262D28 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  struct _RECTL v17; // xmm0
  HDEV v18; // rcx
  __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  __int64 v22; // [rsp+40h] [rbp-39h]
  _BYTE v23[16]; // [rsp+48h] [rbp-31h] BYREF
  int v24; // [rsp+58h] [rbp-21h] BYREF
  HDEV v25; // [rsp+60h] [rbp-19h]
  struct _RECTL v26; // [rsp+68h] [rbp-11h]
  __int64 v27; // [rsp+78h] [rbp-1h]

  hdev = a1->hdev;
  v5 = 0LL;
  v6 = a1;
  v27 = 0LL;
  v24 = 0;
  v8 = a3;
  v9 = *((_QWORD *)hdev + 15);
  v22 = a3;
  SURFOBJ_TO_SURFACE_NOT_NULL(v9);
  v11 = (__int64 (__fastcall *)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))*((_QWORD *)hdev + 173);
  if ( v11 && gpto )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v21 = ghsemWndobj;
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
            (UNDODESKTOPCOORD *)v23,
            (struct EWNDOBJ *)i,
            (struct _SPRITESTATE *)(hdev + 22));
          if ( (*(_DWORD *)(i + 184) & 0x1000000) != 0
            && (unsigned int)bIntersect(i + 4, a4, v15, v16)
            && RGNOBJ::bInside((RGNOBJ *)(i + 56), a4) == 2 )
          {
            v13 = 1;
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v23);
            break;
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v23);
        }
        v12 = (TRACKOBJ *)*((_QWORD *)v12 + 1);
      }
      while ( v12 );
      v6 = a1;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    if ( v13 )
    {
      v8 = v22;
LABEL_18:
      v17 = *a4;
      v18 = v6->hdev;
      v27 = 0LL;
      v26 = v17;
      v25 = v18;
      v24 = GreTearDownSprites(v18, a4);
      v11 = (__int64 (__fastcall *)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))*((_QWORD *)hdev + 173);
LABEL_19:
      v5 = v11(v6, a2, v8, a4);
    }
  }
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v24);
  return v5;
}
