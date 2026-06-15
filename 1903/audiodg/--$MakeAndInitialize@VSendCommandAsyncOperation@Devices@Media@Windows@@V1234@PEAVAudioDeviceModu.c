/*
 * XREFs of ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140044A5C
 * Callers:
 *     ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004BC90 (-SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ @ 0x14004559C (--0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140049B10 (-InternalRelease@-$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAA.c)
 *     ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14004B8E0 (-RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceMod.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
        Windows::Media::Devices::SendCommandAsyncOperation **a1,
        struct Windows::Media::Devices::AudioDeviceModule **a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  Windows::Media::Devices::SendCommandAsyncOperation *v6; // rax
  int v7; // edi
  Windows::Media::Devices::SendCommandAsyncOperation *v8; // rax
  struct Windows::Storage::Streams::IBuffer *v9; // r8
  struct Windows::Media::Devices::AudioDeviceModule *v10; // rdx
  Windows::Media::Devices::SendCommandAsyncOperation *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  Windows::Media::Devices::SendCommandAsyncOperation *v15; // [rsp+40h] [rbp+8h] BYREF
  Windows::Media::Devices::SendCommandAsyncOperation *v16; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (Windows::Media::Devices::SendCommandAsyncOperation *)operator new(
                                                               0xC8uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  v16 = v6;
  if ( v6 )
  {
    v8 = (Windows::Media::Devices::SendCommandAsyncOperation *)Windows::Media::Devices::SendCommandAsyncOperation::SendCommandAsyncOperation(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v15 = v8;
    v7 = Windows::Media::Devices::SendCommandAsyncOperation::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 20);
        while ( v12 >= 0 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 20, v12 + 1, v12);
          if ( v13 == v12 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
      }
LABEL_10:
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
