/*
 * XREFs of ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140003344
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140002700 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ?RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x1400032E0 (-RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14004E0A0 (-SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
        RTL_SRWLOCK *this,
        struct KSIDENTIFIER *a2,
        DWORD a3,
        void *a4,
        DWORD nOutBufferSize,
        unsigned int *lpBytesReturned)
{
  unsigned int v7; // ebx
  PVOID Ptr; // rcx
  signed int LastError; // eax

  v7 = 0;
  Ptr = this[10].Ptr;
  if ( Ptr )
  {
    return (*(unsigned int (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 24LL))(Ptr);
  }
  else
  {
    AcquireSRWLockExclusive(this + 19);
    if ( LOBYTE(this[20].Ptr) )
    {
      v7 = -2147023279;
    }
    else if ( !DeviceIoControl(this[12].Ptr, 0x2F0003u, a2, a3, a4, nOutBufferSize, lpBytesReturned, 0LL) )
    {
      if ( GetLastError() )
      {
        LastError = GetLastError();
        v7 = LastError;
        if ( LastError > 0 )
          v7 = (unsigned __int16)LastError | 0x80070000;
      }
    }
    if ( this != (RTL_SRWLOCK *)-152LL )
      ReleaseSRWLockExclusive(this + 19);
  }
  return v7;
}
