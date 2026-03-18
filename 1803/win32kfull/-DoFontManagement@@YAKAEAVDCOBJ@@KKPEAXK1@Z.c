/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02475B8
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F2E58 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DoFontManagement(struct DCOBJ *a1, int a2, unsigned int a3, unsigned __int16 *a4)
{
  size_t v5; // rsi
  _DWORD *v8; // rdi
  unsigned __int64 v10; // r12
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rbx
  __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 v15; // [rsp+48h] [rbp-90h] BYREF
  int v16; // [rsp+50h] [rbp-88h]
  _QWORD v17[10]; // [rsp+60h] [rbp-78h] BYREF

  v5 = a3;
  v8 = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 3056LL) )
    return 0LL;
  if ( a2 == 8 )
    return _guard_dispatch_icall_fptr();
  v16 = 0;
  v15 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v15, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v15 + 496));
  if ( !v15 )
  {
LABEL_8:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
    return 0LL;
  }
  if ( a2 == 514 )
  {
    v10 = (unsigned __int64)(int)v5 >> 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8000) != 0 )
    {
      if ( (unsigned int)v5 > 0x2710000 )
        goto LABEL_8;
      v11 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v5, 1886221383LL, 0);
      v12 = v11;
      if ( !v11 )
        goto LABEL_8;
      memmove(v11, a4, v5);
    }
    else
    {
      v12 = a4;
    }
    if ( (unsigned int)v10 > 0x9C4000 )
      v8 = 0LL;
    else
      v8 = PALLOCMEM2((unsigned int)(4 * v10), 1835426887LL, 1);
    if ( !v8 )
    {
      if ( v12 != a4 )
        Win32FreePool(v12);
      goto LABEL_8;
    }
    if ( (int)v10 > 1 )
      RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v15, v12 + 1, v10 - 1, v8 + 1, 0, 0);
    *v8 = *v12;
    if ( v12 != a4 )
      Win32FreePool(v12);
  }
  v13 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)(*(_QWORD *)a1 + 504LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 504LL) != 0LL)) == 0 )
  {
    memset(v17, 0, sizeof(v17));
    v17[2] = *(_QWORD *)(v13 + 24);
    v17[3] = *(_QWORD *)(v13 + 48);
    WORD2(v17[9]) = 1;
  }
  v14 = _guard_dispatch_icall_fptr();
  if ( v8 )
    Win32FreePool(v8);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  return v14;
}
