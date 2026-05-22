/*
 * XREFs of ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x1800C48A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1800C4DB0 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

__int64 __fastcall DWMInputRouter::NotifyProxyDisposed(DWMInputRouter *this, int a2, int a3)
{
  char *v3; // rbx
  __int64 v5; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this - 40;
  v5 = *((_QWORD *)this + 7);
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( v5 == *((_QWORD *)v3 + 12) )
      break;
    if ( *(_DWORD *)(v5 + 16) == a2 && *(_DWORD *)(v5 + 20) == a3 )
      v5 = DWMInputRouter::RemoveTarget(v3, &v8, v5);
  }
  return 0LL;
}
