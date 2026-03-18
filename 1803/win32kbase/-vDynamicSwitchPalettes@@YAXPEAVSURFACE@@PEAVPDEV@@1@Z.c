/*
 * XREFs of ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00CB78C
 * Callers:
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C003E160 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C003E480 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C0076070 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     vMatchAPal @ 0x1C00C2030 (vMatchAPal.c)
 */

void __fastcall vDynamicSwitchPalettes(struct SURFACE *a1, struct PDEV *a2, struct PDEV *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  HPALETTE v7; // rdx
  int v8; // r14d
  struct OBJECT *v9; // rdi
  unsigned int *v10; // r9
  int v11; // eax
  struct _SLIST_ENTRY *v12; // rbx
  struct _SLIST_ENTRY *v13; // rdx
  int v14; // eax
  struct _SLIST_ENTRY *v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+58h] [rbp-8h]
  struct OBJECT *v17; // [rsp+90h] [rbp+30h] BYREF
  int v18; // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a1 + 16);
  v5 = *((_QWORD *)a2 + 225);
  if ( v3 )
  {
    if ( v3 == v5 )
    {
      v14 = *((_DWORD *)a1 + 28);
      if ( (v14 & 0x8000000) != 0 )
        *((_DWORD *)a1 + 28) = v14 & 0xF7FFFFFF;
    }
  }
  else
  {
    *((_DWORD *)a1 + 28) |= 0x20000000u;
    if ( (*((_DWORD *)a2 + 541) & 0x100) != 0 )
    {
      v7 = (HPALETTE)*((_QWORD *)a1 + 22);
      v8 = 0;
      if ( !v7 )
        goto LABEL_12;
      EPALOBJ::EPALOBJ((EPALOBJ *)&v17, v7);
      v9 = v17;
      if ( !v17 )
        goto LABEL_12;
      if ( (*((_DWORD *)v17 + 6) & 0x100) != 0 && v17 != ppalDefault && *((_QWORD *)v17 + 9) )
      {
        v10 = *(unsigned int **)(v5 + 112);
        v16 = 0;
        v15 = 0LL;
        if ( (unsigned int)PALMEMOBJ::bCreatePalette(&v15, 1, 0x100u, v10, 0, 0, 0, 0x400u, 1) )
        {
          v11 = *(_DWORD *)(v5 + 60);
          v12 = v15;
          v13 = v15;
          v8 = 1;
          *((_DWORD *)&v15[3].Next + 3) = v11;
          vMatchAPal(0LL, (__int64)v13, (__int64)v9, &v18, &v17);
          v15 = 0LL;
          v16 = 1;
          *((_QWORD *)a1 + 16) = v12;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v15);
      }
      HmgDecrementShareReferenceCountEx(v9, 0LL);
      if ( !v8 )
      {
LABEL_12:
        HmgIncrementShareReferenceCount(ppalDefaultSurface8bpp);
        *((_QWORD *)a1 + 16) = ppalDefaultSurface8bpp;
      }
    }
    else
    {
      HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v5);
      *((_QWORD *)a1 + 16) = v5;
    }
  }
  if ( (*((_DWORD *)a3 + 541) & 0x100) != 0 && (*((_DWORD *)a1 + 28) & 0x20000000) != 0 )
  {
    v17 = (struct OBJECT *)*((_QWORD *)a1 + 16);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v17);
    *((_DWORD *)a1 + 28) &= ~0x20000000u;
    *((_QWORD *)a1 + 16) = 0LL;
  }
}
