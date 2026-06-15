/*
 * XREFs of ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14004B970
 * Callers:
 *     <none>
 * Callees:
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140001EC8 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x140043B8C (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140043D74 (--$ActivateInstance@V-$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1400445E4 (--$GetActivationFactory@V-$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140047304 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  void *v7; // rsi
  int v8; // ebx
  DWORD v10; // r12d
  struct KSIDENTIFIER *v11; // rdi
  __int64 v12; // rax
  const unsigned __int16 *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rbx
  const OLECHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v17; // r14
  int v18; // eax
  void *v19; // rax
  SIZE_T cb; // [rsp+30h] [rbp-49h] BYREF
  HSTRING string; // [rsp+38h] [rbp-41h] BYREF
  ULONG v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-31h] BYREF
  __int64 v24; // [rsp+50h] [rbp-29h] BYREF
  __int64 v25; // [rsp+58h] [rbp-21h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBroker *v26; // [rsp+60h] [rbp-19h]
  HSTRING_HEADER v27; // [rsp+68h] [rbp-11h] BYREF
  __int64 v28; // [rsp+80h] [rbp+7h]

  v26 = this;
  cb = 0LL;
  v22 = 0;
  v25 = 0LL;
  v7 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  string = 0LL;
  if ( !a2 || !a3 || !a4 )
  {
    v8 = -2147467261;
    goto LABEL_3;
  }
  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IBuffer *, char *))(*(_QWORD *)a3 + 56LL))(
         a3,
         (char *)&cb + 4);
  if ( v8 < 0 )
    goto LABEL_3;
  v10 = HIDWORD(cb) + 48;
  v11 = (struct KSIDENTIFIER *)CoTaskMemAlloc((unsigned int)(HIDWORD(cb) + 48));
  if ( !v11 )
  {
    v8 = -2147024882;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, ULONG *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v22);
  if ( v8 >= 0 )
  {
    WindowsDeleteString(string);
    v12 = *(_QWORD *)a2;
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *))(v12 + 48))(
           a2,
           &string);
    if ( v8 >= 0 )
    {
      v14 = (__int64 *)Windows::Internal::StringReference::StringReference(
                         (HSTRING *)&v27,
                         (const unsigned __int16 (*)[35])v13);
      v8 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataReaderStatics>>(
             *v14,
             &v25);
      if ( v8 >= 0 )
      {
        v15 = v25;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
        v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *))(*(_QWORD *)v15 + 48LL))(
               v15,
               a3,
               &v23);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct KSIDENTIFIER *))(*(_QWORD *)v23 + 112LL))(
                 v23,
                 HIDWORD(cb),
                 v11 + 2);
          if ( v8 >= 0 )
          {
            v11->Id = 2;
            v11->Flags = 1;
            v11->Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v8 = CLSIDFromString(StringRawBuffer, &v11[1].Set);
            if ( v8 >= 0 )
            {
              v17 = (RTL_SRWLOCK *)v26;
              v11[1].Id = v22;
              v18 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
                      v17,
                      v11,
                      v10,
                      0LL,
                      0,
                      (unsigned int *)&cb);
              v8 = v18;
              if ( v18 && v18 != -2147024662 )
                goto LABEL_28;
              if ( (_DWORD)cb )
              {
                v19 = CoTaskMemAlloc((unsigned int)cb);
                v7 = v19;
                if ( !v19 )
                {
                  v8 = -2147024882;
                  goto LABEL_29;
                }
                v8 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
                       v17,
                       v11,
                       v10,
                       v19,
                       cb,
                       (unsigned int *)&cb);
              }
              if ( v8 != -2147024662 )
              {
LABEL_28:
                if ( v8 >= 0 )
                {
                  v28 = 0LL;
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &v27,
                    L"Windows.Storage.Streams.DataWriter",
                    0x23u,
                    0x22u);
                  v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataWriter>>(
                         v28,
                         &v24);
                  if ( v8 >= 0 )
                  {
                    if ( !v7
                      || (v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v24 + 96LL))(
                                 v24,
                                 (unsigned int)cb,
                                 v7),
                          v8 >= 0) )
                    {
                      v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v24 + 248LL))(
                             v24,
                             a4);
                      if ( v8 >= 0 )
                        v8 = 0;
                    }
                  }
                }
                goto LABEL_29;
              }
              v8 = -2147418113;
            }
          }
        }
      }
    }
  }
LABEL_29:
  CoTaskMemFree(v11);
  if ( v7 )
    CoTaskMemFree(v7);
LABEL_3:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  return (unsigned int)v8;
}
