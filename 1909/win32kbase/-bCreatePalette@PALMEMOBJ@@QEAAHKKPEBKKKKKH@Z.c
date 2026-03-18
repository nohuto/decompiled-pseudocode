/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00BAC30
 * Callers:
 *     EngCreatePalette @ 0x1C0071BC0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C01264AC (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C012D720 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C013057C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C02657B0 (bInitPALOBJ.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C000EF58 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C0071FC0 (-ParseBits@@YAXKPEAK00K@Z.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C00779F0 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C007CA0C (--$AllocateIsolatedType@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00BABE0 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        struct _SLIST_ENTRY **this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v9; // r15d
  unsigned int v12; // r13d
  unsigned int v13; // esi
  PSLIST_ENTRY v14; // rdi
  struct _SLIST_ENTRY *v15; // rax
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  struct _SLIST_ENTRY *Next; // rcx
  const unsigned int *v20; // r8
  unsigned int i; // edx
  int v22; // esi
  int v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  struct _SLIST_ENTRY *v26; // [rsp+48h] [rbp-40h]
  PSLIST_ENTRY v27; // [rsp+50h] [rbp-38h]
  PSLIST_ENTRY v28[6]; // [rsp+58h] [rbp-30h] BYREF

  v9 = a3;
  v12 = 4;
  switch ( a2 )
  {
    case 1:
      v12 = 4 * a3 + 4;
      v13 = a8 & 0x3102F00;
      if ( !a3 )
        return 0LL;
      break;
    case 2:
      v13 = a8 & 0x3100300;
      v9 = 0;
      if ( !a5 || !a7 || !a6 )
        return 0LL;
      goto LABEL_14;
    case 4:
    case 8:
    case 16:
      v13 = a8 & 0x3100100 | 0x200;
      v9 = 0;
      if ( a2 != 16 )
      {
        if ( a2 == 4 )
        {
          a5 = 255;
          a7 = 16711680;
        }
        else
        {
          a5 = 16711680;
          a7 = 255;
        }
        a6 = 65280;
LABEL_14:
        v12 = 52;
      }
      break;
    default:
      return 0LL;
  }
  v14 = AllocateIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<36864,144>>();
  v27 = v14;
  *this = v14;
  if ( !v14 )
    return 0LL;
  v15 = (struct _SLIST_ENTRY *)PALLOCMEM2(v12, 0x6C706147u, 1);
  v14[8].Next = v15;
  if ( !v15 )
  {
LABEL_49:
    XEPALOBJ::FreePaletteMemory(this);
    return 0LL;
  }
  *((_DWORD *)&v14[1].Next + 2) = v13 | a2;
  *((_DWORD *)&v14[1].Next + 3) = v9;
  LODWORD(v14[2].Next) = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
  *((_QWORD *)&v14[2].Next + 1) = 0LL;
  v14[3].Next = 0LL;
  *((_DWORD *)&v14[3].Next + 3) = 0;
  *((_DWORD *)&v14[3].Next + 2) = 0;
  *((_QWORD *)&v14[4].Next + 1) = 0LL;
  v14[5].Next = 0LL;
  *((_QWORD *)&v14[5].Next + 1) = 0LL;
  HIDWORD(v14[2].Next) = 0;
  *((_QWORD *)&v14[6].Next + 1) = 0LL;
  *((_QWORD *)&v14[7].Next + 1) = v14;
  v14[7].Next = v14[8].Next;
  v16 = a2 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 || (v18 = v17 - 2) == 0 || v18 == 4 )
    {
      LODWORD((*this)[7].Next->Next) = a5;
      HIDWORD((*this)[7].Next->Next) = a6;
      *((_DWORD *)&(*this)[7].Next->Next + 2) = a7;
      if ( a5 == 255 && a6 == 65280 && a7 == 16711680 )
      {
        *((_DWORD *)&v14[1].Next + 2) |= 4u;
      }
      else if ( a5 == 63488 && a6 == 2016 && a7 == 31 )
      {
        *((_DWORD *)&v14[1].Next + 2) |= 0x400000u;
      }
      else if ( a5 == 31744 && a6 == 992 && a7 == 31 )
      {
        *((_DWORD *)&v14[1].Next + 2) |= 0x200000u;
      }
      ParseBits(
        a5,
        (unsigned int *)&(*this)[7].Next[1].Next + 2,
        (unsigned int *)&(*this)[7].Next->Next + 3,
        (unsigned int *)&(*this)[7].Next[2].Next + 1,
        0);
      ParseBits(
        a6,
        (unsigned int *)&(*this)[7].Next[1].Next + 3,
        (unsigned int *)&(*this)[7].Next[1],
        (unsigned int *)&(*this)[7].Next[2].Next + 2,
        8u);
      ParseBits(
        a7,
        (unsigned int *)&(*this)[7].Next[2],
        (unsigned int *)&(*this)[7].Next[1].Next + 1,
        (unsigned int *)&(*this)[7].Next[2].Next + 3,
        0x10u);
    }
LABEL_42:
    v22 = a9;
    goto LABEL_43;
  }
  Next = (*this)[7].Next;
  v26 = Next;
  v20 = a4;
  if ( !a4 )
  {
    if ( v9 )
      memset(Next, 0, 4LL * v9);
    goto LABEL_42;
  }
  for ( i = 0; i < v9; ++i )
  {
    v24 = *v20++;
    LODWORD(Next->Next) = v24;
    Next = (struct _SLIST_ENTRY *)((char *)Next + 4);
    v26 = Next;
  }
  v22 = a9;
LABEL_43:
  v28[0] = v14;
  XEPALOBJ::vComputeCallTables((XEPALOBJ *)v28);
  v25 = 0LL;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v25, (struct OBJECT *)v14, 1u, v22 != 0, 8u) )
  {
    if ( v25 )
      _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
    goto LABEL_49;
  }
  if ( v25 )
    _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
  return 1LL;
}
