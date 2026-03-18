/*
 * XREFs of bInitPALOBJ @ 0x1C01F3AA0
 * Callers:
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C001E630 (HmgSetOwner.c)
 *     GreCreateSemaphoreInternal @ 0x1C0034614 (GreCreateSemaphoreInternal.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C003E160 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C0076070 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00C8310 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 bInitPALOBJ()
{
  unsigned int v0; // edi
  int *v1; // rcx
  int v2; // edx
  int *v3; // r8
  __int64 v4; // rsi
  int v5; // eax
  struct _SLIST_ENTRY *Next; // rbx
  struct OBJECT *v8; // rbx
  struct _SLIST_ENTRY *v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // r10
  struct _SLIST_ENTRY *v14; // rax
  struct PALETTE *v15; // rax
  struct _SLIST_ENTRY *v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]
  struct _SLIST_ENTRY *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  struct OBJECT *v20; // [rsp+90h] [rbp+20h] BYREF

  v0 = 0;
  v1 = (int *)&unk_1C01A596C;
  pArrayOfSquares = (unsigned int *)&unk_1C01A596C;
  v2 = 0;
  v3 = (int *)&unk_1C01A596C;
  LODWORD(v4) = 256;
  do
  {
    v5 = v2 * v2;
    ++v2;
    *v3-- = v5;
    *v1++ = v5;
  }
  while ( v2 < 256 );
  ghsemPalette = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
  if ( !ghsemPalette )
    return 0LL;
  if ( logDefaultPal != 768 || !word_1C019F882 )
    goto LABEL_9;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette(
                        &v16,
                        1,
                        (unsigned __int16)word_1C019F882,
                        dword_1C019F884,
                        0,
                        0,
                        0,
                        0x500u,
                        0) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
LABEL_9:
    Next = 0LL;
    goto LABEL_10;
  }
  v17 = 1;
  Next = v16->Next;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
LABEL_10:
  if ( !(unsigned int)bSetStockObject((unsigned __int64)Next, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v20, (HPALETTE)gahStockObjects[15]);
  v8 = v20;
  HmgSetOwner(*(_QWORD *)v20, 0, 8);
  ppalDefault = v8;
  dclevelDefault = gahStockObjects[15];
  qword_1C019F318 = (__int64)v8;
  v17 = 0;
  v16 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette(&v16, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
    EPALOBJ::~EPALOBJ(&v20);
    return 0LL;
  }
  v9 = v16;
  ppalDefaultSurface8bpp = (struct _BASEOBJECT *)v16;
  v10 = *((_DWORD *)v8 + 7) >> 1;
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10;
    do
    {
      *(_DWORD *)((char *)&v9[7].Next->Next + v11) = *(_DWORD *)(v11 + *((_QWORD *)v8 + 14));
      v11 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( v10 )
  {
    v13 = v10;
    do
    {
      v4 = (unsigned int)(v4 - 1);
      *((_DWORD *)&v9[7].Next->Next + v4) = *(_DWORD *)(*((_QWORD *)v8 + 14) + 4LL * (unsigned int)(v4 - 236));
      --v13;
    }
    while ( v13 );
  }
  v16 = 0LL;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
  EPALOBJ::~EPALOBJ(&v20);
  v19 = 0;
  v18 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette(&v18, 1, 2u, &gaulMono, 0, 0, 0, 0x2200u, 1) )
  {
    v14 = v18->Next;
    ppalMono = (struct PALETTE *)v18;
    v19 = 1;
    hpalMono = (HPALETTE)v14;
    v17 = 0;
    v16 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette(&v16, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      v15 = (struct PALETTE *)v16;
      v16 = 0LL;
      v0 = 1;
      gppalRGB = v15;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v16);
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
  return v0;
}
