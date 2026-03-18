/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00BDC30
 * Callers:
 *     EngCreatePalette @ 0x1C005BD40 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0128C5C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C012FED0 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0132BF8 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C0268990 (bInitPALOBJ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     ?FreePaletteMemory@@YAXPEAVPALETTE@@@Z @ 0x1C001664C (-FreePaletteMemory@@YAXPEAVPALETTE@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0053858 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C0078910 (-ParseBits@@YAXKPEAK00K@Z.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C007B680 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00804CC (--$AllocateIsolatedType@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        PALMEMOBJ *this,
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
  unsigned int v12; // r12d
  unsigned int v13; // esi
  PSLIST_ENTRY v14; // rdi
  struct _SLIST_ENTRY *v15; // rax
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  _DWORD *v19; // rcx
  const unsigned int *v20; // r8
  unsigned int i; // edx
  int v22; // esi
  int v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h] BYREF
  _DWORD *v26; // [rsp+48h] [rbp-40h]
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
  *(_QWORD *)this = v14;
  if ( !v14 )
    return 0LL;
  v15 = (struct _SLIST_ENTRY *)PALLOCMEM2(v12, 0x6C706147u, 1);
  v14[8].Next = v15;
  if ( !v15 )
  {
    FreePaletteMemory(v14);
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
      **(_DWORD **)(*(_QWORD *)this + 112LL) = a5;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL) = a6;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL) = a7;
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
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 24LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 12LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 36LL),
        0);
      ParseBits(
        a6,
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 28LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 16LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 40LL),
        8u);
      ParseBits(
        a7,
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 20LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 44LL),
        0x10u);
    }
LABEL_43:
    v22 = a9;
    goto LABEL_44;
  }
  v19 = *(_DWORD **)(*(_QWORD *)this + 112LL);
  v26 = v19;
  v20 = a4;
  if ( !a4 )
  {
    if ( v9 )
      memset(v19, 0, 4LL * v9);
    goto LABEL_43;
  }
  for ( i = 0; i < v9; ++i )
  {
    v24 = *v20++;
    *v19++ = v24;
    v26 = v19;
  }
  v22 = a9;
LABEL_44:
  v28[0] = v14;
  XEPALOBJ::vComputeCallTables((XEPALOBJ *)v28);
  v25 = 0LL;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v25, (struct OBJECT *)v14, 1u, v22 != 0, 8u) )
  {
    if ( v25 )
      _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
    FreePaletteMemory(v14);
    *(_QWORD *)this = 0LL;
    return 0LL;
  }
  if ( v25 )
    _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
  return 1LL;
}
