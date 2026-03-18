/*
 * XREFs of sfac_CopyFontAndPrePrograms @ 0x1C02BF548
 * Callers:
 *     fs__NewTransformation @ 0x1C02B27B0 (fs__NewTransformation.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     InvokeReleaseSfntFrag @ 0x1C02BED34 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_CopyFontAndPrePrograms(_DWORD *a1, void *a2, void *a3)
{
  __int64 result; // rax
  unsigned int v7; // eax
  void *Src; // [rsp+58h] [rbp+20h] BYREF

  result = sfac_GetDataPtr((_DWORD)a1, 0, -1, 9, 0, (__int64)&Src);
  if ( !(_DWORD)result )
  {
    if ( a1[25] )
    {
      if ( !Src )
        return 5120LL;
      memmove(a2, Src, (unsigned int)a1[25]);
      InvokeReleaseSfntFrag(a1[3]);
    }
    result = sfac_GetDataPtr((_DWORD)a1, 0, -1, 5, 0, (__int64)&Src);
    if ( !(_DWORD)result )
    {
      v7 = a1[17];
      if ( v7 )
      {
        if ( !Src )
          return 5120LL;
        memmove(a3, Src, v7);
        InvokeReleaseSfntFrag(a1[3]);
      }
      return 0LL;
    }
  }
  return result;
}
