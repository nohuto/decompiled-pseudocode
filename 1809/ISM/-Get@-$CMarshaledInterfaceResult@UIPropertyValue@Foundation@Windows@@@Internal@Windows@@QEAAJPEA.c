/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x1800E79C8
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x1800E66D0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundati.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E8E4C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  _DWORD *Ptr; // rbx
  _DWORD *v5; // rsi
  RTL_SRWLOCK *v6; // r12
  _DWORD *v7; // r14
  _DWORD *v8; // rdi
  _DWORD *v9; // rcx
  PVOID v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rax
  _DWORD *v13; // rcx
  _DWORD *v14; // rdi
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v16; // rcx
  _DWORD *v18; // [rsp+70h] [rbp+40h] BYREF
  _DWORD *v19; // [rsp+78h] [rbp+48h] BYREF
  _DWORD *v20; // [rsp+80h] [rbp+50h]
  _DWORD *v21; // [rsp+88h] [rbp+58h]

  Ptr = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v21 = 0LL;
  v6 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  v7 = 0LL;
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v20 = Ptr;
    v7 = Ptr;
  }
  v8 = a1[2].Ptr;
  if ( v8 )
  {
    v18 = 0LL;
    v19 = v8;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    (*(void (__fastcall **)(_DWORD *, GUID *, _DWORD **))(*(_QWORD *)v8 + 24LL))(
      v8,
      &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
      &v18);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v18;
    if ( v18 )
    {
      v19 = 0LL;
      if ( (int)RoGetAgileReference(0LL, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, v18, &v19) < 0 )
      {
        v10 = v19;
      }
      else
      {
        v5 = v19;
        v21 = v19;
        v10 = 0LL;
      }
      if ( v10 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v9 = v18;
    }
    if ( v9 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  ReleaseSRWLockShared(v6);
  *a2 = 0LL;
  if ( v5 )
  {
    v18 = v5;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    v11 = (*(__int64 (__fastcall **)(_DWORD *, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
            a2);
    v12 = *(_QWORD *)v5;
    v13 = v5;
LABEL_23:
    (*(void (__fastcall **)(_DWORD *))(v12 + 16))(v13);
    goto LABEL_25;
  }
  if ( Ptr )
  {
    *a2 = 0LL;
    v18 = 0LL;
    if ( Ptr[6] == 2 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v14 = v7;
      v18 = v7;
    }
    else
    {
      Ptr = 0LL;
      v20 = 0LL;
      v14 = v7;
      v18 = v7;
      v7 = 0LL;
    }
    *a2 = 0LL;
    if ( v14[6] == 2 )
    {
      InterfaceAndReleaseStream = AgileGitPtr::CopyLocal(
                                    (AgileGitPtr *)(v14 + 8),
                                    &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                                    a2);
    }
    else
    {
      v16 = (IStream *)*((_QWORD *)v14 + 2);
      *((_QWORD *)v14 + 2) = 0LL;
      InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(v16, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, a2);
    }
    v11 = InterfaceAndReleaseStream;
    v12 = *(_QWORD *)v14;
    v13 = v14;
    goto LABEL_23;
  }
  v11 = 0;
LABEL_25:
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v11;
}
