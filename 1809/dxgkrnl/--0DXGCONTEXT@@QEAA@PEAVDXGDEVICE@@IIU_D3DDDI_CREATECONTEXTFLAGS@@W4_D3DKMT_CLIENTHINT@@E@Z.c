/*
 * XREFs of ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6DA0
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6218 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

DXGCONTEXT *__fastcall DXGCONTEXT::DXGCONTEXT(
        DXGCONTEXT *this,
        struct DXGDEVICE *a2,
        int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        enum _D3DKMT_CLIENTHINT a6,
        char a7)
{
  int v7; // edi
  unsigned int v9; // esi
  DXGCONTEXT *result; // rax

  v7 = 0;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v9 = a4;
  *((_DWORD *)this + 36) = a6;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_BYTE *)this + 296) = 0;
  *((_DWORD *)this + 80) = -1;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((struct _D3DDDI_CREATECONTEXTFLAGS *)this + 99) = a5;
  *((_DWORD *)this + 96) = a3;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 97) = a4;
  *((_QWORD *)this + 51) = (char *)this + 400;
  *((_QWORD *)this + 50) = (char *)this + 400;
  *((_BYTE *)this + 430) = a7;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *((_WORD *)this + 214) = 0;
  *(_DWORD *)((char *)this + 431) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 114) = 59;
  *((_QWORD *)this + 58) = 0LL;
  memset((char *)this + 200, 0, 0x20uLL);
  *((_QWORD *)this + 42) = (char *)this + 328;
  *((_QWORD *)this + 41) = (char *)this + 328;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  while ( 1 )
  {
    v9 >>= 1;
    if ( !v9 )
      break;
    ++v7;
  }
  result = this;
  *((_DWORD *)this + 98) = v7;
  return result;
}
