/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0278AFC
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C007E678 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0053880 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DoFontManagement(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6)
{
  unsigned int *v6; // r12
  size_t v7; // r14
  unsigned int v8; // ebx
  unsigned int *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned int *v16; // rax
  unsigned int *v17; // rbx
  __int64 v18; // rdx
  _QWORD *v19; // r10
  unsigned int v20; // ebx
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // [rsp+48h] [rbp-80h]
  _QWORD v22[10]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+D8h] [rbp+10h]

  v24 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v11 + 3064);
  v21 = v12;
  if ( !v12 )
    return 0LL;
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 )
      v14 = *(_QWORD *)(v11 + 1800);
    else
      v14 = 0LL;
    return v12(v14, 0LL, 8LL, a3, a4, 0, 0LL);
  }
  v23 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v23, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v23 + 504));
  if ( !v23 )
  {
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
    return 0LL;
  }
  if ( v8 == 514 )
  {
    v15 = (unsigned __int64)(int)v7 >> 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      if ( (unsigned int)v7 > 0x2710000 )
        goto LABEL_11;
      v16 = (unsigned int *)PALLOCMEM2((unsigned int)v7, 1886221383LL, 0);
      v17 = v16;
      if ( !v16 )
        goto LABEL_11;
      memmove(v16, v6, v7);
    }
    else
    {
      v17 = v6;
    }
    if ( (unsigned int)v15 > 0x9C4000 )
      v10 = 0LL;
    else
      v10 = (unsigned int *)PALLOCMEM2((unsigned int)(4 * v15), 1835426887LL, 1);
    if ( !v10 )
    {
      if ( v17 != v6 )
        Win32FreePool(v17);
      goto LABEL_11;
    }
    if ( (int)v15 > 1 )
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v23, (unsigned __int16 *)v17 + 1, v15 - 1, v10 + 1, 0, 0);
    *v10 = *(unsigned __int16 *)v17;
    if ( v17 != v6 )
      Win32FreePool(v17);
    v6 = v10;
    LODWORD(v7) = 4 * v15;
    v8 = v24;
    v12 = v21;
  }
  memset(v22, 0, sizeof(v22));
  v18 = *(_QWORD *)a1;
  v19 = (_QWORD *)((*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL));
  if ( !v19 )
  {
    v22[2] = *(_QWORD *)(v18 + 24);
    v22[3] = *(_QWORD *)(v18 + 48);
    WORD2(v22[9]) = 1;
    v19 = v22;
  }
  v20 = v12(v19, v23, v8, (unsigned int)v7, v6, a5, a6);
  if ( v10 )
    Win32FreePool(v10);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
  return v20;
}
