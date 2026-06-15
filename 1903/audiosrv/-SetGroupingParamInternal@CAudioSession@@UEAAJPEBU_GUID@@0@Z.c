/*
 * XREFs of ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800439A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180025B10 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x1800CA330 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParamInternal(
        CAudioSession *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  void (__fastcall **v3)(_QWORD, __int64 *); // rsi
  __int64 v7; // rax
  void (__fastcall *v8)(CAudioSession *); // rax
  void (__fastcall **v10[5])(_QWORD, __int64 *); // [rsp+20h] [rbp-28h] BYREF

  v3 = (void (__fastcall **)(_QWORD, __int64 *))((char *)this + 284);
  v7 = *(_QWORD *)((char *)this + 284) - *(_QWORD *)&a2->Data1;
  if ( !v7 )
    v7 = *(_QWORD *)((char *)this + 292) - *(_QWORD *)a2->Data4;
  if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, a2);
    }
    v8 = *(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL);
    *(struct _GUID *)v3 = *a2;
    v8(this);
    v10[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
    v10[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionGroupingParamChanged::`vftable';
    v10[2] = v3;
    v10[3] = (void (__fastcall **)(_QWORD, __int64 *))a3;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v10);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  return 0LL;
}
