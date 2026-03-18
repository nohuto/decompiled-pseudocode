/*
 * XREFs of rimIssueReads @ 0x1C00FE140
 * Callers:
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C00E5EE0 (RimInputTypeToDeviceType.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C00FE20C (rimStartDeviceReadIfAllowed.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1)
{
  unsigned int IfAllowed; // ebp
  int v3; // esi
  int v4; // r15d
  __int64 i; // rdi
  unsigned __int8 v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // eax

  IfAllowed = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)(a1 + 76) & DeviceTypeToRimInputType(v3);
      if ( v4 )
        break;
LABEL_13:
      if ( (unsigned int)++v3 > 2 )
        return IfAllowed;
    }
    for ( i = *(_QWORD *)(a1 + 408); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_13;
      v6 = *(_BYTE *)(i + 48);
      if ( v6 != 3 )
      {
        if ( v3 == 2 )
        {
          if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2) & *(_DWORD *)(a1 + 76)) == 0 )
            continue;
        }
        else if ( v6 != (unsigned int)RimInputTypeToDeviceType(v4) )
        {
          continue;
        }
        IfAllowed = rimStartDeviceReadIfAllowed(a1, i);
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 408);
  while ( v7 )
  {
    v8 = rimStartDeviceReadIfAllowed(a1, v7);
    v7 = *(_QWORD *)(v7 + 40);
    IfAllowed = v8;
  }
  return IfAllowed;
}
