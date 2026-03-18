/*
 * XREFs of rimIssueReads @ 0x1C0050690
 * Callers:
 *     RIMReadInput @ 0x1C004FC10 (RIMReadInput.c)
 * Callees:
 *     rimStartDeviceReadIfAllowed @ 0x1C00047E8 (rimStartDeviceReadIfAllowed.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C0093E40 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1)
{
  unsigned int IfAllowed; // ebp
  unsigned int v3; // esi
  unsigned int v4; // r15d
  __int64 i; // rdi
  unsigned __int8 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // eax

  IfAllowed = 0;
  if ( *(_DWORD *)(a1 + 84) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)(a1 + 84) & DeviceTypeToRimInputType(v3);
      if ( v4 )
        break;
LABEL_4:
      if ( ++v3 > 2 )
        return IfAllowed;
    }
    for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      v7 = *(_BYTE *)(i + 48);
      if ( v7 != 3 )
      {
        if ( v3 != 2 )
        {
          if ( v7 != (unsigned int)RimInputTypeToDeviceType(v4) )
            continue;
LABEL_11:
          IfAllowed = rimStartDeviceReadIfAllowed(a1, i);
          continue;
        }
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2LL) & *(_DWORD *)(a1 + 84)) != 0 )
          goto LABEL_11;
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 424);
  while ( v8 )
  {
    v9 = rimStartDeviceReadIfAllowed(a1, v8);
    v8 = *(_QWORD *)(v8 + 40);
    IfAllowed = v9;
  }
  return IfAllowed;
}
