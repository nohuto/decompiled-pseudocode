/*
 * XREFs of ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18001021C
 * Callers:
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAY0CL@$$CBG$$QEAPEAVViewHierarchy@@@Z @ 0x18000F320 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0CL@$$CBGPEAVViewHierarchy.c)
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x1800D33BC (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@@012@AEBU_GUID@@AEBQEBG$$QEAPEAVCursorManager@@@Z @ 0x1800D9FD8 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVCursorManager@@@Det.c)
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18000FF3C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18001070C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18001093C (-StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::RuntimeClassInitialize(
        MessageProxyReconnectAdapter *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct IMessageProxyReconnectAdapterOwner *a4)
{
  int v7; // ecx
  HRESULT String; // ebx
  ULONG_PTR v9; // r8
  HSTRING *v10; // r14
  unsigned __int64 v11; // rax
  UINT32 v12; // r15d
  ULONG_PTR v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v22 = 0LL;
  if ( !a3 )
  {
    v7 = -2147024809;
    String = -2147024809;
    v9 = 64LL;
LABEL_35:
    FailFastWithHR(v7, retaddr, v9);
    goto LABEL_36;
  }
  if ( !a4 )
  {
    v7 = -2147024809;
    String = -2147024809;
    v9 = 65LL;
    goto LABEL_35;
  }
  *(struct _GUID *)((char *)this + 24) = *a2;
  v10 = (HSTRING *)((char *)this + 88);
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v12 = v11;
  String = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v11 <= 0xFFFFFFFF )
  {
    WindowsDeleteString(*v10);
    *v10 = 0LL;
    String = WindowsCreateString(a3, v12, v10);
  }
  if ( String < 0 )
  {
    v13 = 68LL;
LABEL_32:
    if ( String == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v13);
    v9 = v13;
    v7 = String;
    goto LABEL_35;
  }
  *((_QWORD *)this + 6) = a4;
  v14 = (__int64 *)((char *)this + 72);
  v15 = *((_QWORD *)this + 9);
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  String = CoreUICreate((char *)this + 72);
  if ( String < 0 )
  {
    v13 = 71LL;
    goto LABEL_32;
  }
  v16 = *v14;
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  String = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 40LL))(v16, &v22);
  if ( String < 0 )
  {
    v13 = 76LL;
    goto LABEL_32;
  }
  String = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 88LL))(v22);
  if ( String < 0 )
  {
    v13 = 77LL;
    goto LABEL_32;
  }
  v18 = *((_QWORD *)this + 7);
  if ( v18 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  String = CoreUIFactoryCreate((char *)this + 56);
  if ( String < 0 )
  {
    v13 = 79LL;
    goto LABEL_32;
  }
  String = MessageProxyReconnectAdapter::AttemptPullProxy(this);
  if ( String < 0 )
  {
    v13 = 81LL;
    goto LABEL_32;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    String = MessageProxyReconnectAdapter::StartConnectionRetryTimer(this);
    if ( String < 0 )
    {
      v13 = 85LL;
      goto LABEL_32;
    }
  }
LABEL_36:
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)String;
}
