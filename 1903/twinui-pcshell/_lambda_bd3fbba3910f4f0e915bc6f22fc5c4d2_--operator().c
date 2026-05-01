/*
 * XREFs of _lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator() @ 0x180269B44
 * Callers:
 *     _lambda_d8948fd6d7e0860ee61eefbc8dea15cc_::operator() @ 0x180269C38 (_lambda_d8948fd6d7e0860ee61eefbc8dea15cc_--operator().c)
 *     ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x180273488 (-_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOper.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___ @ 0x180267984 (Windows--Internal--ComTaskPool--QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___.c)
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18026C4DC (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator()(unsigned int **a1, _QWORD *a2)
{
  unsigned int *v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  unsigned int *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int *v12; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a2 + 928LL))(*a2, **a1, *(_QWORD *)a1[1]) == 1 )
  {
    v4 = a1[2];
    v15 = v4;
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 32);
      while ( v5 >= 0 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 32, v5 + 1, v5);
        if ( v6 == v5 )
          goto LABEL_8;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
    }
LABEL_8:
    *(_QWORD *)v11 = a1[2];
    v7 = v15;
    v15 = 0LL;
    v12 = v7;
    v13[0] = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___(v8, v11);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44D,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v15);
  }
  return 0LL;
}
