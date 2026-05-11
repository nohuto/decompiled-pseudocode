/*
 * XREFs of USBParseGetUnitString @ 0x1C002C9F4
 * Callers:
 *     USBParseTerminalUnit @ 0x1C002CBC0 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C002CD10 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C002CFA0 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C002D0D0 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C002D320 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C002D550 (USBParseExtensionUnit.c)
 *     USBParseMIDIInJack @ 0x1C002D7C0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C002D8B0 (USBParseMIDIOutJack.c)
 *     USBParseMIDIElement @ 0x1C002DA30 (USBParseMIDIElement.c)
 * Callees:
 *     memmove @ 0x1C0012500 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C0029C8C (USBHwAllocateAndBag.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C002B6B8 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  bool v4; // zf
  int StringDescriptor; // edi
  unsigned __int8 *v7; // rcx
  __int64 v8; // rax
  unsigned __int8 *v9; // rcx
  UCHAR v10; // bl
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v12; // rsi
  void *v13; // rbx
  PVOID v14; // r14
  size_t v15; // rbx
  int v17; // [rsp+20h] [rbp-38h]
  PVOID v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2[2] == 7;
  StringDescriptor = 0;
  *a3 = 0LL;
  if ( v4 && (unsigned __int16)(*((_WORD *)a2 + 2) - 1) <= 1u )
  {
    v7 = &a2[a2[6]];
    v8 = v7[11];
    v9 = v7 + 12;
  }
  else
  {
    v8 = *a2;
    v9 = a2 - 1;
  }
  v10 = v9[v8];
  if ( v10 )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xFFuLL, 0x41627845u);
    LODWORD(v18) = 0;
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v10, 0x409u, PoolWithTag, v17, &v18);
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          StringDescriptor = 0;
      }
      else
      {
        v13 = *(void **)(a1 + 8);
        v18 = ExAllocatePoolWithTag(PagedPool, *v12 + 2LL, 0x41627845u);
        v14 = v18;
        if ( v18 )
          StringDescriptor = USBHwAllocateAndBag(&v18, v13);
        else
          StringDescriptor = -1073741670;
        if ( StringDescriptor >= 0 )
        {
          v15 = (unsigned int)*v12 - 2;
          memmove(v14, v12 + 2, v15);
          *a3 = v14;
          *((_WORD *)v14 + (v15 >> 1)) = 0;
        }
      }
      ExFreePool(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
