/*
 * XREFs of ?RecordContacts@TouchContactFilter@@QEAAXKPEBUTouchContactInfo@@@Z @ 0x1800D7F08
 * Callers:
 *     ?Add@GestureSession@@UEAAJKKKPEBUTouchContactInfo@@@Z @ 0x1800D58A0 (-Add@GestureSession@@UEAAJKKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void __fastcall TouchContactFilter::RecordContacts(
        TouchContactFilter *this,
        unsigned int a2,
        const struct TouchContactInfo *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // esi
  int v9; // r9d
  unsigned int v10; // r8d
  const struct TouchContactInfo *v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // xmm0_8
  int *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned int i; // r8d
  __int64 v20; // rcx
  _BYTE Src[8]; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE Src_8[392]; // [rsp+28h] [rbp-1B0h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  memset_0(Src, 0, 0x190uLL);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    v11 = a3;
    do
    {
      if ( v8 >= 0xA )
        break;
      if ( (*(_BYTE *)v11 & 7) != 0 )
      {
        v12 = v8++;
        v13 = *((_OWORD *)v11 + 1);
        v14 = 5 * v12;
        *(_OWORD *)&Src[8 * v14] = *(_OWORD *)v11;
        v15 = *((_QWORD *)v11 + 4);
        *(_OWORD *)&Src_8[8 * v14 + 8] = v13;
        *(_QWORD *)&Src_8[8 * v14 + 24] = v15;
      }
      ++v10;
      v11 = (const struct TouchContactInfo *)((char *)v11 + 40);
    }
    while ( v10 < a2 );
  }
  if ( *(_BYTE *)this )
  {
    v18 = 0;
    for ( i = 0; v18 < *((_DWORD *)this + 1); ++v18 )
    {
      if ( i >= v8 )
        break;
      v20 = 5LL * i;
      if ( *(_WORD *)&Src[40 * i + 2] == *((_WORD *)this + 20 * v18 + 5) )
      {
        ++i;
        v6 += *(_DWORD *)&Src[8 * v20 + 4] - *((_DWORD *)this + 10 * v18 + 3);
        v7 += *(_DWORD *)&Src_8[8 * v20] - *((_DWORD *)this + 10 * v18 + 4);
        ++v9;
      }
    }
  }
  else
  {
    *(_BYTE *)this = 1;
    if ( v8 )
    {
      v16 = (int *)Src_8;
      v17 = v8;
      do
      {
        v6 += *(v16 - 1);
        v7 += *v16;
        v16 += 10;
        --v17;
      }
      while ( v17 );
    }
    v9 = v8;
  }
  if ( v9 > 1 )
  {
    v6 /= v9;
    v7 /= v9;
  }
  *((_DWORD *)this + 103) += v6;
  *((_DWORD *)this + 104) += v7;
  *((_WORD *)this + 204) = *(_WORD *)a3;
  memcpy_0((char *)this + 8, Src, 40LL * v8);
  *((_DWORD *)this + 1) = v8;
}
