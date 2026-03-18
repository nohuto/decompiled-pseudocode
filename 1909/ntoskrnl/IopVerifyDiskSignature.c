/*
 * XREFs of IopVerifyDiskSignature @ 0x14078C65C
 * Callers:
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     IopGetBootDiskInformation @ 0x140A39DBC (IopGetBootDiskInformation.c)
 * Callees:
 *     <none>
 */

char __fastcall IopVerifyDiskSignature(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  __int64 v6; // rdx

  if ( *(_BYTE *)(a2 + 36) )
  {
    if ( *(_DWORD *)a1 )
    {
      if ( *(_DWORD *)a1 == 1 && *(_BYTE *)(a2 + 38) )
      {
        v6 = *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 8);
        if ( !v6 )
          v6 = *(_QWORD *)(a2 + 48) - *(_QWORD *)(a1 + 16);
        if ( !v6 )
        {
          if ( a3 )
            *a3 = 0;
          return 1;
        }
      }
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 8);
      if ( *(_DWORD *)(a2 + 16) == v4 )
      {
        if ( a3 )
          *a3 = v4;
        return 1;
      }
    }
  }
  return 0;
}
