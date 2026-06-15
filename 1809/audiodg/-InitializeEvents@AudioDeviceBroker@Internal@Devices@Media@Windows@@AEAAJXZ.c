/*
 * XREFs of ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004BCF0
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400025B4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140013B0C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14002EE28 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x1400479C4 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1400490E4 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents(char *pv)
{
  char *FileW; // r14
  char *v3; // r12
  RTL_SRWLOCK *v4; // r15
  __int64 v5; // rcx
  void *v6; // rax
  bool v7; // dl
  __int64 v8; // rsi
  signed int Error; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  wil::details *v12; // rcx
  wil::details *Event; // rbx
  __int64 v14; // r8
  const char *v15; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int LastError; // eax
  LPCWSTR lpFileName; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v21[4]; // [rsp+68h] [rbp-A0h] BYREF
  char *v22; // [rsp+78h] [rbp-90h]

  v20[1] = -2LL;
  FileW = 0LL;
  v3 = (char *)*((_QWORD *)pv + 12);
  v20[0] = 0LL;
  lpFileName = 0LL;
  v4 = (RTL_SRWLOCK *)(pv + 152);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 19);
  v20[2] = (__int64)v4;
  v5 = *((_QWORD *)pv + 25);
  if ( v5 )
  {
    *((_QWORD *)pv + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)pv + 25) = 0LL;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v6 )
    v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>(
           (__int64)v6,
           v7);
  Error = v8 == 0 ? 0x8007000E : 0;
  v10 = v8;
  if ( v8 )
  {
    *((_QWORD *)pv + 25) = v8;
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v8 )
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)pv + 23,
        Event);
    }
    else
    {
      wil::details::GetLastErrorFailHr(v12, v11, v14, v15);
    }
    if ( !*((_QWORD *)pv + 23) )
    {
      Error = ATL::AtlHresultFromLastError();
      goto LABEL_28;
    }
    ThreadpoolWait = CreateThreadpoolWait(
                       Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback,
                       pv,
                       0LL);
    *((_QWORD *)pv + 22) = ThreadpoolWait;
    if ( !ThreadpoolWait )
    {
      Error = -2147467259;
      goto LABEL_28;
    }
    SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 23), 0LL);
    if ( v3 )
    {
LABEL_22:
      if ( v3 != (char *)-1LL )
      {
        memset_0(v21, 0, 0x1A0uLL);
        v21[0] = 416;
        v21[2] = 1;
        v22 = v3;
        Error = (unsigned int)CM_Register_Notification(
                                v21,
                                pv,
                                Windows::Media::Devices::Internal::AudioDeviceBroker::CMModulesNotificationCallback,
                                pv + 104) != 0
              ? 0x80004005
              : 0;
LABEL_26:
        if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(FileW);
        goto LABEL_28;
      }
LABEL_23:
      LastError = GetLastError();
      Error = LastError;
      if ( LastError > 0 )
        Error = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_26;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 11))(
      *((_QWORD *)pv + 11),
      &GUID_a52f8a19_4726_4fce_eade_f008d49b7938,
      v20);
    if ( !v20[0] )
    {
      Error = -2147418113;
      goto LABEL_28;
    }
    Error = (*(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v20[0] + 32LL))(v20[0], &lpFileName);
    if ( Error >= 0 )
    {
      FileW = (char *)CreateFileW(lpFileName, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
      v3 = FileW;
      if ( !FileW )
        goto LABEL_23;
      goto LABEL_22;
    }
  }
LABEL_28:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  CoTaskMemFree((LPVOID)lpFileName);
  lpFileName = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
  return (unsigned int)Error;
}
