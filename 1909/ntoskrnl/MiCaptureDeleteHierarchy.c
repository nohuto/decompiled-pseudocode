/*
 * XREFs of MiCaptureDeleteHierarchy @ 0x1400E7ECC
 * Callers:
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall MiCaptureDeleteHierarchy(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3, _DWORD *a4)
{
  _BYTE *v4; // rsi
  unsigned __int64 v5; // r9
  __int64 v8; // rbp
  int v9; // edx
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // r8
  unsigned int v12; // ebx
  unsigned __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r10
  char v17; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+40h] [rbp-38h] BYREF

  *a4 = 0;
  v4 = a4;
  v5 = 0xFFFFF68000000000uLL;
  v8 = 2LL;
  do
  {
    v9 = 3;
    v10 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v11 = (unsigned __int64 *)&v18;
    do
    {
      *v11 = v10;
      v10 = v5 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
      --v11;
      --v9;
    }
    while ( v9 );
    v12 = 0;
    v13 = (unsigned __int64 *)&v17;
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(*v13);
      if ( !v14 )
        break;
      if ( (v14 & 1) == 0 && v12 != 2 )
      {
        LOBYTE(v14) = MiMakeSystemAddressValid((__int64)((v15 << 25) - (v5 << 25)) >> 16, 0LL, 0, a3, 1);
        v5 = 0xFFFFF68000000000uLL;
      }
      ++v12;
      ++v13;
      if ( v12 >= 3 )
        goto LABEL_8;
    }
    LOBYTE(v14) = 1 << (2 - v12);
    *v4 = v14;
LABEL_8:
    ++v4;
    a1 = a2;
    --v8;
  }
  while ( v8 );
  return v14;
}
