/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00AA460
 * Callers:
 *     EngCreatePalette @ 0x1C005F490 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00FF2A0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C01060D0 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0108D5C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C021A8AC (bInitPALOBJ.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001EE44 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C001F078 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C005FBDC (-ParseBits@@YAXKPEAK00K@Z.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C006ABB0 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00AA37C (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00F5DF8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
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
  unsigned int v11; // r13d
  unsigned int v12; // esi
  unsigned __int8 *v13; // rax
  PSLIST_ENTRY v14; // rbx
  struct _SLIST_ENTRY *v15; // rax
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  struct _SLIST_ENTRY *Next; // r9
  const unsigned int *v20; // rdx
  unsigned int i; // ecx
  int v22; // eax
  int v23; // esi
  struct HOBJ__ *v24; // rbx
  unsigned __int8 *v26; // [rsp+38h] [rbp-70h]
  _QWORD v27[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v28[88]; // [rsp+50h] [rbp-58h] BYREF

  v9 = a3;
  v11 = 4;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v12 = a8 & 0x3100300;
      v9 = 0;
      if ( !a5 || !a7 || !a6 )
        return 0LL;
      goto LABEL_14;
    }
    if ( a2 != 4 && a2 != 8 && a2 != 16 )
      return 0LL;
    v12 = a8 & 0x3100100 | 0x200;
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
      v11 = 52;
    }
LABEL_16:
    v13 = gpTypeIsolation[1];
    v26 = v13;
    if ( v13 )
    {
      ++*((_DWORD *)v13 + 13);
      v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v13 + 2);
      if ( !v14 )
      {
        ++*((_DWORD *)v26 + 14);
        v14 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int8 *))v26 + 10))(
                              *((unsigned int *)v26 + 17),
                              *((unsigned int *)v26 + 19),
                              *((unsigned int *)v26 + 18),
                              v26 + 32);
      }
    }
    else
    {
      v14 = 0LL;
    }
    *this = v14;
    if ( !v14 )
      return 0LL;
    v15 = (struct _SLIST_ENTRY *)PALLOCMEM2(v11, 1819304263LL, 1);
    v14[8].Next = v15;
    if ( !v15 )
      goto LABEL_49;
    *((_DWORD *)&v14[1].Next + 2) = v12 | a2;
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
    }
    else
    {
      Next = (*this)[7].Next;
      v20 = a4;
      if ( a4 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v22 = *v20++;
          LODWORD(Next->Next) = v22;
          Next = (struct _SLIST_ENTRY *)((char *)Next + 4);
          v27[1] = Next;
        }
        v23 = a9;
LABEL_47:
        v27[0] = v14;
        XEPALOBJ::vComputeCallTables((XEPALOBJ *)v27);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v28);
        v24 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v28, (struct OBJECT *)v14, 1u, v23 != 0, 8u);
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v28);
        if ( v24 )
          return 1LL;
LABEL_49:
        XEPALOBJ::FreePaletteMemory(this);
        return 0LL;
      }
      if ( v9 )
        memset((*this)[7].Next, 0, 4LL * v9);
    }
    v23 = a9;
    goto LABEL_47;
  }
  v11 = 4 * a3 + 4;
  v12 = a8 & 0x3102F00;
  if ( a3 )
    goto LABEL_16;
  return 0LL;
}
