/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140157054
 * Callers:
 *     MiFindPagesForMdl @ 0x1400DCF54 (MiFindPagesForMdl.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiGetEnclavePage @ 0x1402D443C (MiGetEnclavePage.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  signed __int32 v10; // eax
  int v11; // r12d
  __int64 v12; // r11
  unsigned int v13; // edi
  unsigned int v14; // r15d
  __int64 v15; // r14
  char v16; // al
  int i; // ecx
  unsigned __int64 EnclavePage; // rax
  __int64 v19; // rcx
  BOOL v20; // eax
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edx
  __int64 result; // rax
  _QWORD *v27; // [rsp+20h] [rbp-58h]
  volatile signed __int32 *v28; // [rsp+28h] [rbp-50h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]

  v28 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  MiInitializePageColorBase(0LL, a7 + 1, (__int64)&v28);
  v10 = _InterlockedExchangeAdd(v28, 1u);
  v11 = 1;
  v13 = 8;
  v14 = HIDWORD(v29) | v10 & v29;
  LODWORD(v15) = -1;
  v28 = (volatile signed __int32 *)KiProcessorBlock[*(unsigned int *)(v12 + 588)];
  v16 = a3;
  v27 = (_QWORD *)(a2 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12));
  for ( i = a3 & 0x400; ; i = a3 & 0x400 )
  {
    if ( v11 == 1 )
    {
      v11 = 0;
      v13 = 2 * ((v16 & 1) == 0) + 8;
    }
    if ( i )
      EnclavePage = MiGetEnclavePage(a1, 0LL);
    else
      EnclavePage = MiGetPage(a1, v14, v13);
    if ( EnclavePage == -1LL )
    {
LABEL_21:
      result = 1LL;
      goto LABEL_22;
    }
    v19 = 48 * EnclavePage - 0x58000000000LL;
    if ( EnclavePage > a5 )
      break;
    v20 = MiPfnZeroingNeeded(v19, a4);
    v23 = v9 + 1;
    if ( !v20 )
      v23 = v9;
    v9 = v23;
    if ( (_DWORD)v15 == -1 )
      v15 = *(_QWORD *)(v21 + 40) >> 58;
    if ( *(_QWORD *)(v21 + 40) >> 58 == (_DWORD)v15 )
    {
      if ( (*(_DWORD *)(v21 + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) == 0 )
          v13 &= ~2u;
      }
      else
      {
        v24 = v13 | 2;
        if ( (a3 & 1) == 0 )
          v24 = v13;
        v13 = v24;
      }
    }
    else
    {
      v11 = 1;
    }
    LODWORD(v15) = *(_QWORD *)(v21 + 40) >> 58;
    ++v8;
    *v27++ = v22;
    v25 = dword_1404657B0 & v22 | (*(_QWORD *)(v21 + 40) >> 58 << byte_14046574D) | (((*(_QWORD *)(v21 + 40) >> 36) & 3) << byte_14046574E);
    v14 = v25 & ~dword_140465740 | dword_140465740 & (v25 + 1);
    if ( v8 >= a6 )
      goto LABEL_21;
    v16 = a3;
  }
  MiReleaseFreshPage(v19);
  result = 0LL;
LABEL_22:
  if ( v8 )
    *((_DWORD *)v28 + 5892) = v14;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v9 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return result;
}
