/*
 * XREFs of MxReleaseFreeDescriptor @ 0x1409BB8A4
 * Callers:
 *     MiCreateFreePfns @ 0x1409BBBA8 (MiCreateFreePfns.c)
 * Callees:
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 */

__int64 __fastcall MxReleaseFreeDescriptor(unsigned __int64 *a1, int a2)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = 0;
  v4 = *a1;
  v10 = v4;
  v11 = a1[1];
  result = a1[3];
  v9 = a2;
  if ( result != -1 )
  {
    v11 = result - v4 + 512;
    result = MxCreateFreePfns(v8);
    v3 = 1;
  }
  v6 = a1[2];
  if ( v6 != -1LL )
  {
    v7 = *a1;
    if ( (v6 & 0xFFFFFFFFFFFFFE00uLL) <= *a1 )
      v3 = 1;
    else
      v7 = v6 & 0xFFFFFFFFFFFFFE00uLL;
    v10 = v7;
    v11 = v6 - v7 + 1;
    result = MxCreateFreePfns(v8);
    if ( !v3 )
    {
      result = *a1 & 0x1FF;
      if ( (*a1 & 0x1FF) != 0 )
      {
        v10 = *a1;
        v11 = 512 - result;
        return MxCreateFreePfns(v8);
      }
    }
  }
  return result;
}
