/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x1800207B8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertModuleToIndex @ 0x1800836F0 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001F940 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  BOOLEAN v3; // bl
  unsigned int v4; // r10d
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  BOOLEAN result; // al

  v2 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 128) = v2;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  Root = (unsigned __int64)LdrpMappingInfoIndex.Root;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
  {
    if ( LdrpMappingInfoIndex.Root )
      Root = (unsigned __int64)&LdrpMappingInfoIndex ^ (unsigned __int64)LdrpMappingInfoIndex.Root;
    else
      Root = 0LL;
  }
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( v2 < *(_DWORD *)(Root - 96) || v2 <= *(_DWORD *)(Root - 96) && v4 < *(_DWORD *)(Root - 160) )
      {
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_19:
          v7 = 0;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_13;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_13:
          v7 = 1;
          break;
        }
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)(a1 + 224));
  v9 = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex.Root )
      v9 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
    else
      v9 = 0LL;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 48) < *(_QWORD *)(v9 - 152) )
      {
        v10 = *(_QWORD *)v9;
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_30;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_30:
          v3 = 1;
          break;
        }
      }
      v9 = v10;
    }
  }
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)v9, v3, (PRTL_BALANCED_NODE)(a1 + 200));
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
