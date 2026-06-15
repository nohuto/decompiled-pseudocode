/*
 * XREFs of ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x18000AA38
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000A5F0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

void __fastcall SystemEffectDescriptor::MarkAsNeedsResolution(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // edi
  __int64 v6; // rbp

  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v5 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v6 = 0LL;
      do
      {
        if ( v5 < 0 || v5 >= *(_DWORD *)(a1 + 40) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180084EF3LL);
        }
        if ( (a2 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + v6) + 16LL)) != 0 )
          *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                  a1 + 32,
                                  (unsigned int)v5)
                   + 20LL) = 1;
        ++v5;
        v6 += 16LL;
      }
      while ( v5 < *(_DWORD *)(a1 + 40) );
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
}
