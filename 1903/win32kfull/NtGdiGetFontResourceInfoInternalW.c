/*
 * XREFs of NtGdiGetFontResourceInfoInternalW @ 0x1C02A7FF0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C0114F98 (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GetFontResourceInfoInternalW @ 0x1C02D0918 (GetFontResourceInfoInternalW.c)
 */

__int64 __fastcall NtGdiGetFontResourceInfoInternalW(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        ULONG64 a5,
        void *a6,
        int a7)
{
  unsigned __int16 *v10; // rdi
  unsigned int FontResourceInfoInternalW; // esi
  unsigned int *v12; // rbx
  _DWORD *v13; // rcx
  ULONG64 v14; // rax
  __int64 v16; // [rsp+70h] [rbp-158h] BYREF
  unsigned __int16 *v17; // [rsp+78h] [rbp-150h]
  _BYTE v18[96]; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int16 v19[80]; // [rsp+E0h] [rbp-E8h] BYREF

  v17 = a1;
  v16 = (__int64)a6;
  v10 = 0LL;
  FontResourceInfoInternalW = 0;
  v12 = 0LL;
  memset(v18, 0, 0x5CuLL);
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = v19;
    }
    if ( v10 )
      FontResourceInfoInternalW = bCheckAndCapThePath(v10, v17, a2, a3);
  }
  if ( a4 <= 0x5C )
  {
    v12 = (unsigned int *)v18;
  }
  else if ( a4 > 0x2710000 || (v12 = (unsigned int *)PALLOCMEM2(a4, 1886221383LL, 1)) == 0LL )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(v10, a2, a3, a4, (__int64)&v16, v12, a7);
    if ( FontResourceInfoInternalW )
    {
      v13 = (_DWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = v16;
      if ( a4 )
      {
        v14 = (ULONG64)a6 + a4;
        if ( v14 > MmUserProbeAddress || v14 <= (unsigned __int64)a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v12, a4);
      }
    }
  }
  if ( v10 && v10 != v19 )
    FreeTmpBuffer(v10);
  if ( v12 && v12 != (unsigned int *)v18 )
    Win32FreePool(v12);
  return FontResourceInfoInternalW;
}
