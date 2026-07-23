/*
 * XREFs of BiIsValidObject @ 0x1408F2188
 * Callers:
 *     BiCreateObject @ 0x1408F1E60 (BiCreateObject.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsValidObject(_DWORD *a1, _QWORD *a2, char a3)
{
  unsigned int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 0;
  v3 = a1[1];
  if ( !(v3 >> 28) )
    return 0;
  if ( v3 >> 28 == 1 )
  {
    v5 = v3 & 0xFFFFF;
    if ( (v3 & 0xFFFFF) == 0 )
      return 0;
    v6 = (v3 >> 20) & 0xF;
    if ( !v6 )
      return 0;
    if ( v6 == 1 )
    {
      v7 = v5 - 1;
      if ( v7 )
      {
        if ( v7 == 1048574 && (a3 & 1) == 0 )
          return 0;
      }
      else
      {
        if ( !a2 )
          return 0;
        v8 = *a2 - *(_QWORD *)&GUID_FIRMWARE_BOOTMGR.Data1;
        if ( *a2 == *(_QWORD *)&GUID_FIRMWARE_BOOTMGR.Data1 )
          v8 = a2[1] - *(_QWORD *)GUID_FIRMWARE_BOOTMGR.Data4;
        if ( v8 )
          return 0;
      }
    }
  }
  else if ( v3 >> 28 == 2 && ((v3 & 0xF00000) == 0 || (v3 & 0xF00000) == 0x200000 && (v3 & 0xFFFFF) == 0) )
  {
    return 0;
  }
  return 1;
}
