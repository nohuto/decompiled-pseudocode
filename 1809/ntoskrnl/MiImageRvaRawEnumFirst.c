/*
 * XREFs of MiImageRvaRawEnumFirst @ 0x1406B673C
 * Callers:
 *     RtlpCompressRvaList @ 0x1405F3F20 (RtlpCompressRvaList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiImageGetRawRvaState @ 0x1406B67E8 (MiImageGetRawRvaState.c)
 */

__int64 __fastcall MiImageRvaRawEnumFirst(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int i; // ebp
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  unsigned int v8; // eax
  __int64 result; // rax

  v2 = 0;
  v3 = a1 + 144;
  for ( i = 0; i < *(_DWORD *)(a1 + 140); v3 += 40LL )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v3 + 8);
    if ( v7 )
    {
      v8 = v7(a1, v3 + 24, v3 + 4);
      *(_DWORD *)v3 = v8;
      if ( v8 )
      {
        if ( v2 )
        {
          if ( v2 >= v8 )
            v2 = v8;
        }
        else
        {
          v2 = v8;
        }
      }
    }
    ++i;
  }
  if ( a2 && v2 )
    *a2 = MiImageGetRawRvaState(a1, v2);
  result = v2;
  *(_DWORD *)(a1 + 264) = v2;
  return result;
}
