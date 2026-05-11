/*
 * XREFs of USBMidiOutChangePowerState @ 0x1C0030160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBMidiOutChangePowerState(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r8

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 152);
  if ( a2 == 1 )
  {
    v4 = *(_QWORD *)(v2 + 144);
    v5 = 0;
    v6 = *(_QWORD *)(v4 + 200);
    v7 = *(_DWORD *)(v6 + 32);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v6 + 40);
      while ( *(_BYTE *)(*(_QWORD *)(v4 + 168) + 2LL) != *(_BYTE *)(168LL * v5 + v8 + 2) )
      {
        if ( ++v5 >= v7 )
          return 0LL;
      }
      *(_QWORD *)(v3 + 56) = *(_QWORD *)(168LL * v5 + v8 + 8);
    }
  }
  return 0LL;
}
