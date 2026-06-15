/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D680
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140002C14 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?GetMany@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x14004AD40 (-GetMany@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@S.c)
 *     ?IndexOf@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceModule@Devices@Media@5@PEAIPEAE@Z @ 0x14004BA90 (-IndexOf@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
