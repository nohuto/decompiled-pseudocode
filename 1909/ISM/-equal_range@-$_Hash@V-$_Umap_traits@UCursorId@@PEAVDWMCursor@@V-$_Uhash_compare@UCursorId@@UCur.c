/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEBA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@V12@@2@AEBUCursorId@@@Z @ 0x180011F98
 * Callers:
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180010958 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800128D8 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800BCDD4 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::equal_range(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // r9
  __int64 *i; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rdx
  int v15; // r11d
  __int64 *v16; // r8
  __int64 v17; // rdx

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - a3 != (a3 + 4 >= a3 ? 4 : 0) );
  }
  v8 = a1[3];
  v9 = (__int64 *)a1[1];
  v10 = 2 * (v5 & a1[6]);
  for ( i = *(__int64 **)(v8 + 16 * (v5 & a1[6])); ; i = (__int64 *)*i )
  {
    v12 = i;
    if ( *(__int64 **)(v8 + 8 * v10) == v9 )
      v13 = v9;
    else
      v13 = **(__int64 ***)(v8 + 8 * v10 + 8);
    if ( i == v13 )
      goto LABEL_7;
    v15 = *(_DWORD *)a3;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  v16 = i;
  while ( 1 )
  {
    v17 = *(__int64 **)(v8 + 8 * v10) == v9 ? (__int64)v9 : **(_QWORD **)(v8 + 8 * v10 + 8);
    if ( i == (__int64 *)v17 || v15 != *((_DWORD *)i + 4) )
      break;
    i = (__int64 *)*i;
  }
  if ( v12 == i )
  {
LABEL_7:
    *a2 = v9;
    a2[1] = v9;
    return a2;
  }
  *a2 = v16;
  a2[1] = i;
  return a2;
}
