/*
 * XREFs of ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z @ 0x180158880
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180157B50 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158B24 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801592B4 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetBuffers(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_CAPTURERENDERTARGET_SETBUFFERS *a3,
        HANDLE *a4,
        unsigned int a5)
{
  __int64 v7; // rsi
  HANDLE v8; // rax
  _QWORD *v9; // rdx
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  hObject = a2;
  if ( !*((_DWORD *)a3 + 2) )
  {
    std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 536);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
  }
  if ( a5 >> 3 )
  {
    v7 = a5 >> 3;
    do
    {
      v8 = *a4;
      if ( *a4 != (HANDLE)-1LL )
      {
        hObject = *a4;
        v9 = (_QWORD *)*((_QWORD *)this + 68);
        if ( *((_QWORD **)this + 69) == v9 )
        {
          std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
            (_QWORD *)this + 67,
            v9,
            &hObject);
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
        }
        else
        {
          *v9 = v8;
          *((_QWORD *)this + 68) += 8LL;
        }
      }
      ++a4;
      --v7;
    }
    while ( v7 );
  }
  return 0LL;
}
