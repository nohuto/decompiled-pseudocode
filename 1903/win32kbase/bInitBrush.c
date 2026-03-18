/*
 * XREFs of bInitBrush @ 0x1C0268C50
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C0268CF8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0053568 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00535A0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0083350 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00836BC (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, struct HOBJ__ ***a4, int a5)
{
  struct HOBJ__ **v7; // rbx
  unsigned int v8; // edi
  struct HOBJ__ **v10[2]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v10, a2, a3, 0, 0);
  v7 = v10[0];
  if ( v10[0] )
  {
    v8 = 1;
    v11 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v10);
    if ( a5 )
      *((_DWORD *)v7 + 10) |= 4u;
    if ( a4 )
      *a4 = v7;
    bSetStockObject((unsigned __int64)*v7, a1, 0);
    if ( !a1 )
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*v7;
  }
  else
  {
    v8 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v10);
  return v8;
}
