/*
 * XREFs of ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x1801F6680
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180181AF8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x1801F606C (CreationThreadDispatcher--RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F6438 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImmersiveShellStressTool::HangAsync(
        ImmersiveShellStressTool *this,
        unsigned int a2,
        int a3,
        char *a4)
{
  __int64 v6; // rdi
  _DWORD *v8; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 result; // rax
  __int128 lpTargetHandle; // [rsp+48h] [rbp-60h] BYREF
  _DWORD *v14; // [rsp+58h] [rbp-50h] BYREF
  std::_Ref_count_base *v15; // [rsp+60h] [rbp-48h]
  __int128 v16; // [rsp+68h] [rbp-40h] BYREF
  int v17; // [rsp+78h] [rbp-30h] BYREF
  __int64 v18; // [rsp+80h] [rbp-28h]
  volatile signed __int32 *v19; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    v6 = a2;
    lpTargetHandle = 0LL;
    if ( a4 )
    {
      v16 = 0LL;
      std::shared_ptr<KBViewInfo>::operator=(&lpTargetHandle, (__int64 *)&v16);
      if ( *((_QWORD *)&v16 + 1) )
        std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v16 + 1));
      if ( !(_QWORD)lpTargetHandle )
      {
        v8 = operator new(0x18uLL);
        v8[2] = 1;
        v8[3] = 1;
        *(_QWORD *)v8 = &std::_Ref_count_obj<wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>>::`vftable';
        *((_QWORD *)v8 + 2) = 0LL;
        v14 = v8 + 4;
        v15 = (std::_Ref_count_base *)v8;
        std::shared_ptr<KBViewInfo>::operator=(&lpTargetHandle, (__int64 *)&v14);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
      }
      CurrentProcess = GetCurrentProcess();
      v10 = GetCurrentProcess();
      if ( !DuplicateHandle(v10, a4, CurrentProcess, (LPHANDLE)lpTargetHandle, 0, 1, 2u) )
        wil::details::in1diag3::_Throw_GetLastError(
          retaddr,
          (void *)0x24,
          (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
          a4);
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)&lpTargetHandle + 1);
    if ( (_DWORD)v6 )
    {
      do
      {
        v17 = a3;
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          v11 = (volatile signed __int32 *)*((_QWORD *)&lpTargetHandle + 1);
        }
        v18 = lpTargetHandle;
        v19 = v11;
        CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___(
          *((_QWORD *)this + 2),
          (__int64)&v17,
          *((_DWORD *)this + 6));
        --v6;
      }
      while ( v6 );
    }
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x35,
                           (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellstresstool.cpp",
                           a4);
  }
  return result;
}
