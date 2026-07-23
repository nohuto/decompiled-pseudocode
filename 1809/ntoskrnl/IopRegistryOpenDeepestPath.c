/*
 * XREFs of IopRegistryOpenDeepestPath @ 0x14074CAA0
 * Callers:
 *     IopRegistryInitializeCallbacks @ 0x14074C898 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x14074C9B0 (IopRegistryCallback.c)
 * Callees:
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 */

__int64 __fastcall IopRegistryOpenDeepestPath(UNICODE_STRING *a1, _QWORD *a2, bool *a3)
{
  UNICODE_STRING v3; // xmm0
  unsigned int v7; // r8d
  unsigned __int16 Length; // dx
  bool v9; // zf
  ULONG v11; // [rsp+20h] [rbp-38h]
  UNICODE_STRING v12; // [rsp+30h] [rbp-28h] BYREF
  HANDLE v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v13 = 0LL;
  v12 = v3;
  while ( 1 )
  {
    LOBYTE(v11) = 0;
    v7 = IopOpenRegistryKey(&v13, 0LL, &v12, 0x10u, v11);
    if ( (v7 & 0x80000000) == 0 )
      break;
    Length = v12.Length;
    if ( v12.Length )
    {
      while ( v12.Buffer[((unsigned __int64)Length >> 1) - 1] != 92 )
      {
        v9 = Length == 2;
        Length -= 2;
        v12.Length = Length;
        if ( v9 )
          return v7;
      }
      v12.Length = Length - 2;
      if ( Length != 2 )
        continue;
    }
    return v7;
  }
  *a2 = v13;
  *a3 = v12.Length == a1->Length;
  return v7;
}
