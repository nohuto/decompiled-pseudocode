/*
 * XREFs of NtGdiGetWidthTable @ 0x1C009BC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C009C870 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C009D610 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
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
  int v14; // edx
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdi
  _BYTE *v18; // rdx
  _DWORD *v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v22; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v23; // [rsp+40h] [rbp-58h]
  _QWORD v24[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v25; // [rsp+58h] [rbp-40h] BYREF
  int v26; // [rsp+B8h] [rbp+20h]

  v7 = a4;
  WidthTable = -1;
  v26 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( !(_DWORD)v7 || !v24[0] )
    goto LABEL_41;
  v25 = 0uLL;
  v11 = 0LL;
  v22 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v11 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v22 = v11;
  }
  if ( v11 )
  {
    v13 = 2 * v7;
    v12 = &v11[v7];
    v23 = v12;
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
    v21 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v21, (struct XDCOBJ *)v24, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v21 + 504));
    if ( !v21 )
      goto LABEL_28;
    v26 = *(_DWORD *)(v21 + 716);
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
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v21, (struct _WIDTHDATA *)&v25, (struct XDCOBJ *)v24) )
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
      *(_OWORD *)a6 = v25;
    }
    v19 = (_DWORD *)a7;
    if ( a7 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = v26;
  }
  if ( v11 )
    FreeTmpBuffer(v11);
LABEL_41:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return WidthTable;
}
