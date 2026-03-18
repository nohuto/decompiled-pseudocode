/*
 * XREFs of ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180099E64
 * Callers:
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x180099D88 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 * Callees:
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x18006C544 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 */

void __fastcall CResourceTable::CountResource(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // r8d

  AddToResourceCount((_DWORD *)(*(_QWORD *)(a1 + 56) + 44LL), a2, 1);
  anonymous_namespace_::AddToResourceCount(v2, v3);
}
