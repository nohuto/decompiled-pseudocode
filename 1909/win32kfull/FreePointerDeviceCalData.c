/*
 * XREFs of FreePointerDeviceCalData @ 0x1C01EF410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreePointerDeviceCalData(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *a1;
  if ( v2 )
  {
    result = Win32FreePool(v2);
    *a1 = 0LL;
  }
  v4 = a1[2];
  if ( v4 )
  {
    result = Win32FreePool(v4);
    a1[2] = 0LL;
  }
  v5 = a1[4];
  if ( v5 )
  {
    result = Win32FreePool(v5);
    a1[4] = 0LL;
  }
  v6 = a1[6];
  if ( v6 )
  {
    result = Win32FreePool(v6);
    a1[6] = 0LL;
  }
  v7 = a1[8];
  if ( v7 )
  {
    result = Win32FreePool(v7);
    a1[8] = 0LL;
  }
  return result;
}
