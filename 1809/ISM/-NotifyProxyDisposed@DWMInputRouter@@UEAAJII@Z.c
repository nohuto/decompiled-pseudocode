/*
 * XREFs of ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x1800890A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18008AA44 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

__int64 __fastcall DWMInputRouter::NotifyProxyDisposed(DWMInputRouter *this, int a2, int a3)
{
  char *v3; // rbx
  __int64 *v5; // rcx
  __int64 v7; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this - 40;
  v5 = (__int64 *)*((_QWORD *)this + 7);
  v7 = *v5;
  if ( (__int64 *)*v5 != v5 )
  {
    do
    {
      if ( *(_DWORD *)(v7 + 16) == a2 && *(_DWORD *)(v7 + 20) == a3 )
        v7 = DWMInputRouter::RemoveTarget(v3, &v9, v7);
      v7 = *(_QWORD *)v7;
    }
    while ( v7 != *((_QWORD *)v3 + 12) );
  }
  return 0LL;
}
