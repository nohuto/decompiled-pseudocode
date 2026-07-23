/*
 * XREFs of VslAccessPciDevice @ 0x14027AD30
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall VslAccessPciDevice(char a1, int a2, int a3, int a4, int a5, int a6, size_t Size, char *Src)
{
  NTSTATUS v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  _BYTE v14[12]; // [rsp+20h] [rbp-69h] BYREF
  int v15; // [rsp+2Ch] [rbp-5Dh]
  int v16; // [rsp+30h] [rbp-59h]
  int v17; // [rsp+34h] [rbp-55h]
  int v18; // [rsp+38h] [rbp-51h]
  int v19; // [rsp+3Ch] [rbp-4Dh]
  size_t v20; // [rsp+40h] [rbp-49h]
  _BYTE v21[72]; // [rsp+48h] [rbp-41h] BYREF

  v10 = 0;
  v11 = Size;
  v18 = a5;
  v19 = a6;
  v14[8] = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  while ( v11 && v10 >= 0 )
  {
    v12 = 64;
    if ( v11 < 0x40 )
      v12 = v11;
    LODWORD(v20) = v12;
    if ( a1 )
      memmove(v21, Src, v12);
    v10 = VslpEnterIumSecureMode(2u, 245LL, 0, (__int64)v14);
    if ( v10 >= 0 )
    {
      if ( !a1 )
        memmove(Src, v21, (unsigned int)v20);
      Src += (unsigned int)v20;
      v11 -= v20;
      v19 += v20;
    }
  }
  return (unsigned int)v10;
}
