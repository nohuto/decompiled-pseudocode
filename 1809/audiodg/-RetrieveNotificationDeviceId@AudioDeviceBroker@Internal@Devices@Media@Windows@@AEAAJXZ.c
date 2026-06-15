/*
 * XREFs of ?RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x1400032E0
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400025B4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140003344 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 */

int __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::RetrieveNotificationDeviceId(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  int result; // eax
  struct KSIDENTIFIER v2; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  *(&v2.Alignment + 2) = 0x100000003LL;
  v2.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  result = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
             this,
             &v2,
             0x18u,
             (char *)this + 112,
             0x10u,
             &v3);
  if ( result >= 0 && v3 < 0x10 )
    return -2147467259;
  return result;
}
