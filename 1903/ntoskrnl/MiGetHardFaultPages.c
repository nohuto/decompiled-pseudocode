/*
 * XREFs of MiGetHardFaultPages @ 0x1400DD9C4
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002DEF0 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiUseSlabAllocator @ 0x1400DAED0 (MiUseSlabAllocator.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400DAF6C (MiGetAvailablePagesBelowPriority.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     MiRetainSubsection @ 0x140133854 (MiRetainSubsection.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 */

unsigned __int64 __fastcall MiGetHardFaultPages(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v10; // r11
  __int64 v12; // r15
  __int64 v13; // r10
  unsigned int v14; // r14d
  unsigned __int64 result; // rax
  __int64 v16; // r11
  _QWORD *v17; // r13
  unsigned __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  ULONG_PTR v24; // rcx
  int v25; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v26; // [rsp+90h] [rbp+18h]
  unsigned __int64 v27; // [rsp+98h] [rbp+20h]

  v26 = a3;
  v8 = *a1;
  v10 = (__int64)a3;
  if ( *a1 )
  {
    v12 = (v8 + 0x58000000000LL) / 48;
    while ( 1 )
    {
      v21 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v21 == 0xFFFFFFFFFLL )
        break;
      v8 = 48 * v21 - 0x58000000000LL;
    }
  }
  else
  {
    v12 = 0xFFFFFFFFFLL;
  }
  v13 = *(_QWORD *)(a6 + 208);
  v14 = (*(unsigned __int16 *)(v13 + 32) >> 1) & 0x1F;
  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      result = MiGetAvailablePagesBelowPriority(a3, ((*(_DWORD *)(a4 + 80) >> 3) & 7u) + 1);
      if ( a2 > result )
      {
        if ( !result )
          return result;
        a2 = result;
      }
    }
  }
  result = MiUseSlabAllocator(v10, (_BYTE *)v13, a7, &v25);
  v17 = a5;
  if ( (_DWORD)result && a1[1] < a2 )
  {
    while ( 1 )
    {
      result = MiGetSlabPage(v16, v14, v25, (int)v17 + 120, 0);
      v27 = result;
      if ( result == -1LL )
        break;
      v22 = 48 * result - 0x58000000000LL;
      MiSetPfnBlink(v22, v12, 0);
      result = v22;
      v12 = v27;
      LODWORD(v16) = (_DWORD)v26;
      if ( *a1 )
        result = v8;
      ++a1[1];
      v8 = result;
      *a1 = v22;
      if ( a1[1] >= a2 )
        goto LABEL_27;
    }
    if ( v17[15] )
    {
      v23 = a6;
      v17[16] = a2 - a1[1];
      v24 = *(_QWORD *)(v23 + 208);
      v17[13] = v24;
      result = MiRetainSubsection(v24);
      a2 = a1[1];
    }
LABEL_27:
    v16 = (__int64)v26;
  }
  v18 = a1[1];
  if ( v18 < a2 )
  {
    v19 = a2 - v18;
    v20 = v17[7];
    a6 = v19;
    result = MiGetPageChain(
               v16,
               v20,
               (*(_DWORD *)(a8 + 12) >> byte_140465A4D) + 1,
               v14,
               0,
               -1LL,
               (unsigned __int64 *)&a6);
    if ( result )
    {
      if ( *a1 )
        MiSetPfnBlink(v8, (__int64)(result + 0x58000000000LL) / 48, 0);
      else
        *a1 = result;
      result = (unsigned int)a6;
      a1[1] += (unsigned int)a6;
    }
  }
  return result;
}
