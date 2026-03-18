/*
 * XREFs of NtGdiGetWidthTable @ 0x1C00827A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008350C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00848F4 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        volatile void *Address,
        ULONG64 a6,
        ULONG64 a7)
{
  __int64 v7; // rsi
  unsigned int WidthTable; // r14d
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // rdi
  size_t v13; // r8
  int v14; // eax
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdi
  _BYTE *v18; // rdx
  _DWORD *v19; // rdx
  __int64 v21; // [rsp+40h] [rbp-78h] BYREF
  int v22; // [rsp+48h] [rbp-70h]
  __int128 v23; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[6]; // [rsp+60h] [rbp-58h] BYREF
  int v25; // [rsp+D8h] [rbp+20h]

  v7 = a4;
  WidthTable = -1;
  v25 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( !(_DWORD)v7 || !v24[0] )
    goto LABEL_41;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
    v11 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
  if ( v11 )
  {
    v13 = 2 * v7;
    v12 = &v11[v7];
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)a3 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v13] > MmUserProbeAddress || &a3[v13] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v11[v7], a3, v13);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    v22 = 0;
    v21 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v21, (struct XDCOBJ *)v24, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v21 + 504));
    if ( !v21 )
      goto LABEL_28;
    v25 = *(_DWORD *)(v21 + 716);
    if ( *(_DWORD *)(v21 + 344) >= 0xFFFu )
      goto LABEL_28;
    v14 = *(_DWORD *)(v21 + 312);
    if ( v14 )
    {
      v15 = 16 * v14;
      v16 = (unsigned int)v7;
      v17 = v11;
      while ( v16 )
      {
        *v17++ = v15;
        --v16;
      }
      WidthTable = 1;
    }
    else
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v21, (struct XDCOBJ *)v24, a2, v12, v7, v11);
      if ( WidthTable == -1 )
      {
LABEL_28:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        goto LABEL_29;
      }
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v21, (struct _WIDTHDATA *)&v23, (struct XDCOBJ *)v24) )
      WidthTable = -1;
    goto LABEL_28;
  }
LABEL_29:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v11, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (_BYTE *)a6;
      if ( a6 >= MmUserProbeAddress )
        v18 = (_BYTE *)MmUserProbeAddress;
      *v18 = *v18;
      v18[15] = v18[15];
      *(_OWORD *)a6 = v23;
    }
    v19 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = v25;
  }
  if ( v11 )
    FreeTmpBuffer(v11);
LABEL_41:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return WidthTable;
}
