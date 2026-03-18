/*
 * XREFs of NtGdiHfontCreate @ 0x1C00F3540
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x1C007E170 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

struct HOBJ__ *__fastcall NtGdiHfontCreate(char *Src, size_t Size, int a3, int a4, __int64 a5)
{
  __int64 v7; // rsi
  _DWORD Srca[108]; // [rsp+30h] [rbp-1E8h] BYREF

  v7 = (unsigned int)Size;
  if ( !Src || (unsigned int)(Size - 1) > 0x1A3 )
    return 0LL;
  memset(Srca, 0, 0x1A4uLL);
  if ( &Src[v7] < Src || (unsigned __int64)&Src[v7] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Srca, Src, (unsigned int)v7);
  Srca[88] = 0;
  return hfontCreate(Srca, a3, a4, a5, 0);
}
