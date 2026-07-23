/*
 * XREFs of MmMapSecureViewOfSection @ 0x140619574
 * Callers:
 *     AlpcpCreateView @ 0x140618D0C (AlpcpCreateView.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405F1080 (MiMapParametersInitialize.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  _BYTE v15[24]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v16; // [rsp+58h] [rbp-70h]
  int v17; // [rsp+84h] [rbp-44h]
  __int64 v18; // [rsp+88h] [rbp-40h]

  result = MiMapParametersInitialize(v15, a1, a2, *a3, *a7, 0, 4, 0LL);
  if ( (int)result < 0
    || (v18 = a12, v17 = 2, result = MiMapViewOfSection(a1, (__int64)v15, (void **)a3, 0LL, a6, 2, 1), (int)result < 0) )
  {
    if ( *a3 )
      ++dword_14043B944;
    else
      ++dword_14043B940;
  }
  else
  {
    *a7 = v16;
    return (unsigned int)result;
  }
  return result;
}
