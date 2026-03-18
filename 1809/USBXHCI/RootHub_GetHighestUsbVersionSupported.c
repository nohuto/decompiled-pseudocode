/*
 * XREFs of RootHub_GetHighestUsbVersionSupported @ 0x1C001E424
 * Callers:
 *     Controller_SetDeviceDescription @ 0x1C005AD68 (Controller_SetDeviceDescription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RootHub_GetHighestUsbVersionSupported(__int64 a1)
{
  unsigned __int8 v1; // r8
  unsigned int v2; // r10d
  unsigned int v3; // edx
  unsigned __int8 v4; // r9
  __int64 v5; // r11
  unsigned __int8 v6; // al
  unsigned __int16 v8; // [rsp+8h] [rbp+8h]

  v8 = 0;
  v1 = 0;
  v2 = *(_DWORD *)(a1 + 16);
  v3 = 1;
  v4 = 0;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    do
    {
      if ( *(_BYTE *)(v5 + 80LL * (v3 - 1) + 13) > v1 )
      {
        v1 = *(_BYTE *)(v5 + 80LL * (v3 - 1) + 13);
        v6 = v4;
        if ( *(_BYTE *)(v5 + 80LL * (v3 - 1) + 12) > v4 )
          v6 = *(_BYTE *)(v5 + 80LL * (v3 - 1) + 12);
        v4 = v6;
      }
      ++v3;
    }
    while ( v3 <= v2 );
    LOBYTE(v8) = v1;
    HIBYTE(v8) = v4;
  }
  return v8;
}
