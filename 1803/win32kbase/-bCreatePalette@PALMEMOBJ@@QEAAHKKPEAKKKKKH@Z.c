/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C0076070
 * Callers:
 *     EngCreatePalette @ 0x1C00C3450 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00CB78C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00D8190 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00DAE9C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C01F3AA0 (bInitPALOBJ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C003E650 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0044C10 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C005AE08 (-ParseBits@@YAXKPEAK00K@Z.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C0075FCC (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        struct _SLIST_ENTRY **this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v9; // r15d
  unsigned int v12; // esi
  unsigned __int8 *v13; // rax
  PSLIST_ENTRY v14; // rdi
  struct _SLIST_ENTRY *v15; // rax
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  struct _SLIST_ENTRY *Next; // rcx
  unsigned int *v20; // r8
  unsigned int i; // edx
  int v22; // esi
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-40h]
  struct _SLIST_ENTRY *v26; // [rsp+50h] [rbp-38h]
  PSLIST_ENTRY v27[6]; // [rsp+58h] [rbp-30h] BYREF
  unsigned int Size; // [rsp+98h] [rbp+10h]
  int Sizea; // [rsp+98h] [rbp+10h]

  v9 = a3;
  Size = 4;
  switch ( a2 )
  {
    case 1:
      Size = 4 * a3 + 4;
      v12 = a8 & 0x3102F00;
      if ( !a3 )
        return 0LL;
      break;
    case 2:
      v12 = a8 & 0x3100300;
      v9 = 0;
      if ( !a5 || !a7 || !a6 )
        return 0LL;
      goto LABEL_14;
    case 4:
    case 8:
    case 16:
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
        Size = 52;
      }
      break;
    default:
      return 0LL;
  }
  v13 = gpTypeIsolation[1];
  v25 = v13;
  if ( v13 )
  {
    ++*((_DWORD *)v13 + 13);
    v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v13 + 2);
    if ( !v14 )
    {
      ++v25[14];
      v14 = (PSLIST_ENTRY)_guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v14 = 0LL;
  }
  v25 = v14;
  *this = v14;
  if ( !v14 )
    return 0LL;
  v15 = (struct _SLIST_ENTRY *)PALLOCMEM2(Size, 0x6C706147u, 1);
  v14[8].Next = v15;
  if ( !v15 )
    goto LABEL_53;
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
LABEL_46:
    v22 = a9;
    goto LABEL_47;
  }
  Next = (*this)[7].Next;
  v26 = Next;
  v20 = a4;
  if ( !a4 )
  {
    if ( v9 )
      memset(Next, 0, 4LL * v9);
    goto LABEL_46;
  }
  for ( i = 0; i < v9; ++i )
  {
    Sizea = *v20++;
    LODWORD(Next->Next) = Sizea;
    Next = (struct _SLIST_ENTRY *)((char *)Next + 4);
    v26 = Next;
  }
  v22 = a9;
LABEL_47:
  v27[0] = v14;
  XEPALOBJ::vComputeCallTables((XEPALOBJ *)v27);
  v24 = 0LL;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v24, (struct OBJECT *)v14, 1u, v22 != 0, 8) )
  {
    if ( v24 )
      _InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
LABEL_53:
    XEPALOBJ::FreePaletteMemory(this);
    return 0LL;
  }
  if ( v24 )
    _InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
  return 1LL;
}
