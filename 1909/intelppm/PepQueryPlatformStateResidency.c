/*
 * XREFs of PepQueryPlatformStateResidency @ 0x1C000F0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepQueryPlatformStateResidency(_QWORD *a1, int *a2)
{
  int v2; // eax
  _DWORD *v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // rdx
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v8; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v3 = a2 + 2;
  v7[1] = 0;
  v4 = 0;
  v7[0] = v2;
  v8 = a2 + 2;
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = v4++;
      v5 *= 2LL;
      *(_QWORD *)&v3[2 * v5] = -1LL;
      *(_QWORD *)&v8[2 * v5 + 2] = 0LL;
      if ( v4 >= v7[0] )
        break;
      v3 = v8;
    }
  }
  return PoFxProcessorNotification(*a1, 23LL, v7);
}
