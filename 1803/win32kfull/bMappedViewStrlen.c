/*
 * XREFs of bMappedViewStrlen @ 0x1C02288FC
 * Callers:
 *     bBMFDIFIMETRICS @ 0x1C0225BDC (bBMFDIFIMETRICS.c)
 *     bGetFntResource @ 0x1C02285EC (bGetFntResource.c)
 *     bVerifyVTFD @ 0x1C0228D24 (bVerifyVTFD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMappedViewStrlen(unsigned __int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4)
{
  __int64 result; // rax
  _BYTE *v5; // rdx
  _BYTE *v6; // rcx
  char v7; // r10
  _BYTE *v8; // r11
  _BYTE *v9; // rcx

  result = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v5 = (_BYTE *)(a1 + a2);
  if ( (unsigned __int64)a3 >= a1 && a3 < v5 )
  {
    v6 = a3;
    do
    {
      v7 = *v6;
      v8 = v6;
      if ( !*v6 )
        break;
      ++v6;
    }
    while ( v6 != v5 );
    v9 = v8 + 1;
    if ( !v7 )
      v9 = v8;
    if ( v9 != v5 )
    {
      if ( a4 )
        *a4 = v9 - a3;
      return 1LL;
    }
  }
  return result;
}
