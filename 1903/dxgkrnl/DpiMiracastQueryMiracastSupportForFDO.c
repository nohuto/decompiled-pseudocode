/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C0153598
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0153394 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001D820 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001D850 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C001D944 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DC2C (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001DC88 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(struct _IO_REMOVE_LOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v8; // rcx
  char v9; // bp
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // rcx
  char v12; // cl
  __int64 v14; // rax
  __int64 v15; // rax
  struct _IO_REMOVE_LOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  char v17; // [rsp+38h] [rbp-20h]
  _BYTE v18[24]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  v16 = a1;
  *(_DWORD *)a2 = 0;
  v17 = 0;
  AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v18, (struct _COMMON_PNP_CONTEXT *)a1);
  if ( AUTO_REMOVE_LOCK::Acquire(&v16) < 0 )
  {
    v2 = -1073741637;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)v18);
    Blink = a1[121].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( Blink )
    {
      v8 = Blink[159].Blink;
      if ( v8 )
      {
        v9 = BYTE2(v8[14].Blink);
        Flink = Blink[160].Flink;
        if ( Flink )
        {
          p_Blink = &Flink[26].Blink;
        }
        else
        {
          v15 = WdLogNewEntry5_WdError(0LL, v5, v6);
          *(_QWORD *)(v15 + 24) = 1193LL;
          WdLogEvent5_WdError(v15);
          Blink = a1[121].Common.RemoveEvent.Header.WaitListHead.Blink;
          p_Blink = 0LL;
        }
        if ( SHIDWORD(Blink[153].Flink) >= 2000 )
        {
          if ( v9 )
            *(_BYTE *)a2 = 1;
          if ( a1[94].Common.RemoveEvent.Header.LockNV >= 2u && p_Blink && *(_WORD *)p_Blink && v9 )
            *(_BYTE *)(a2 + 1) = 1;
        }
        if ( LODWORD(a1[100].Common.RemoveEvent.Header.WaitListHead.Blink) != -1
          && LOWORD(a1[153].Common.RemoveEvent.Header.WaitListHead.Blink) )
        {
          v12 = BYTE4(a1[100].Common.RemoveEvent.Header.WaitListHead.Flink) & 1;
          *(_BYTE *)(a2 + 2) = 1;
          *(_BYTE *)(a2 + 3) = v12;
        }
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(0LL, v5, v6);
        *(_QWORD *)(v14 + 24) = 1170LL;
        WdLogEvent5_WdError(v14);
        v2 = -1073741811;
      }
    }
  }
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v18);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v16);
  return v2;
}
