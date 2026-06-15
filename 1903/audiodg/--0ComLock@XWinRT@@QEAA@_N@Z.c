/*
 * XREFs of ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x14001317C
 * Callers:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x1400130E8 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x1400451CC (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 * Callees:
 *     <none>
 */

XWinRT::ComLock *__fastcall XWinRT::ComLock::ComLock(XWinRT::ComLock *this, char a2)
{
  HRESULT ApartmentType; // eax
  APTTYPE v4; // ecx
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(pAptType) = a2;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v4 = pAptType;
  if ( ApartmentType < 0 )
    v4 = APTTYPE_MTA;
  pAptType = v4;
  if ( v4 == APTTYPE_MAINSTA || v4 == APTTYPE_STA )
  {
    *(_DWORD *)this = 1;
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    *(_DWORD *)this = 0;
    InitializeSRWLock((PSRWLOCK)this + 1);
  }
  return this;
}
