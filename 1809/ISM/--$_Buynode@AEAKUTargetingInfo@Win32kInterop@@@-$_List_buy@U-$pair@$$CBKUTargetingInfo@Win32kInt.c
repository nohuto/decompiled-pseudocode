/*
 * XREFs of ??$_Buynode@AEAKUTargetingInfo@Win32kInterop@@@?$_List_buy@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@1@PEAU21@0AEAK$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x180085E40
 * Callers:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800838E4 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@PEAU32@0@Z @ 0x180085BF4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::_Buynode<unsigned long &,Win32kInterop::TargetingInfo>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5)
{
  _QWORD *v6; // r10
  _QWORD *v7; // r9
  _QWORD *v8; // r8

  v6 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>::_Buynode0(
         a1,
         a2,
         a3);
  *((_DWORD *)v6 + 4) = *a4;
  v6[3] = 0LL;
  if ( v6 + 3 != (_QWORD *)a5 )
  {
    v6[3] = *(_QWORD *)a5;
    *(_QWORD *)a5 = 0LL;
  }
  v7 = (_QWORD *)(a5 + 8);
  v6[4] = 0LL;
  if ( v6 + 4 != (_QWORD *)(a5 + 8) )
  {
    v6[4] = *v7;
    *v7 = 0LL;
  }
  *(_OWORD *)(v6 + 5) = *(_OWORD *)(a5 + 16);
  *((_DWORD *)v6 + 14) = *(_DWORD *)(a5 + 32);
  v8 = (_QWORD *)(a5 + 40);
  v6[8] = 0LL;
  if ( v6 + 8 != (_QWORD *)(a5 + 40) )
  {
    v6[8] = *v8;
    *v8 = 0LL;
  }
  *((_BYTE *)v6 + 72) = *(_BYTE *)(a5 + 48);
  return v6;
}
