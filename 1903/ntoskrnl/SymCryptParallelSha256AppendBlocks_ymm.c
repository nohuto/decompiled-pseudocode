/*
 * XREFs of SymCryptParallelSha256AppendBlocks_ymm @ 0x1401BC894
 * Callers:
 *     SymCryptParallelSha256Append @ 0x1401BBE00 (SymCryptParallelSha256Append.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall SymCryptParallelSha256AppendBlocks_ymm(__int64 *a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v53; // r14
  __int64 v55; // r8
  __int64 v109; // rcx
  __int64 result; // rax
  __m256 v360; // [rsp+48h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL;
  _RBX = a4;
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 96), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 64), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 32), 0, 0x20uLL);
  memset((void *)((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 128), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 160), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 192), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 224), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 256), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 288), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 320), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 352), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 384), 0, 0x20uLL);
  memset((void *)(((unsigned __int64)&v360 & 0xFFFFFFFFFFFFFFE0uLL) + 416), 0, 0x20uLL);
  _RAX = *a1;
  __asm { vmovdqu ymm7, ymmword ptr [rax] }
  _RAX = a1[1];
  __asm { vmovdqu ymm0, ymmword ptr [rax] }
  _RAX = a1[2];
  __asm
  {
    vpunpckldq ymm5, ymm7, ymm0
    vpunpckhdq ymm7, ymm7, ymm0
    vmovdqu ymm6, ymmword ptr [rax]
  }
  _RAX = a1[3];
  __asm { vmovdqu ymm3, ymmword ptr [rax] }
  _RAX = a1[4];
  __asm
  {
    vpunpckldq ymm0, ymm6, ymm3
    vpunpckhdq ymm3, ymm6, ymm3
    vmovdqu ymm8, ymmword ptr [rax]
  }
  _RAX = a1[5];
  __asm { vmovdqu ymm1, ymmword ptr [rax] }
  _RAX = a1[6];
  __asm { vmovdqu ymm4, ymmword ptr [rax] }
  _RAX = a1[7];
  __asm
  {
    vmovdqu ymm2, ymmword ptr [rax]
    vpunpckldq ymm6, ymm8, ymm1
    vpunpckhqdq ymm10, ymm5, ymm0
    vpunpckhdq ymm8, ymm8, ymm1
    vpunpcklqdq ymm9, ymm5, ymm0
    vpunpckldq ymm1, ymm4, ymm2
    vpunpcklqdq ymm5, ymm6, ymm1
    vpunpcklqdq ymm11, ymm7, ymm3
    vpunpckhdq ymm4, ymm4, ymm2
    vpunpckhqdq ymm7, ymm7, ymm3
    vpunpckhqdq ymm3, ymm6, ymm1
    vpunpcklqdq ymm6, ymm8, ymm4
    vperm2i128 ymm0, ymm9, ymm5, 20h ; ' '
    vmovdqu ymmword ptr [rbx+160h], ymm0
    vperm2i128 ymm0, ymm11, ymm6, 20h ; ' '
    vmovdqu ymmword ptr [rbx+120h], ymm0
    vperm2i128 ymm1, ymm10, ymm3, 20h ; ' '
    vmovdqu ymmword ptr [rbx+140h], ymm1
    vperm2i128 ymm0, ymm9, ymm5, 31h ; '1'
    vmovdqu ymmword ptr [rbx+0E0h], ymm0
    vperm2i128 ymm1, ymm10, ymm3, 31h ; '1'
    vmovdqu ymmword ptr [rbx+0C0h], ymm1
    vpunpckhqdq ymm4, ymm8, ymm4
    vperm2i128 ymm0, ymm11, ymm6, 31h ; '1'
    vmovdqu ymmword ptr [rbx+0A0h], ymm0
    vperm2i128 ymm2, ymm7, ymm4, 20h ; ' '
    vmovdqu ymmword ptr [rbx+100h], ymm2
    vperm2i128 ymm1, ymm7, ymm4, 31h ; '1'
    vmovdqu ymmword ptr [rbx+80h], ymm1
    vmovdqu ymmword ptr [rbx], ymm2
    vmovdqu ymm0, ymmword ptr [rbx+120h]
    vmovdqu ymmword ptr [rbx+20h], ymm0
    vmovdqu ymm1, ymmword ptr [rbx+140h]
    vmovdqu ymmword ptr [rbx+40h], ymm1
    vmovdqu ymm0, ymmword ptr [rbx+160h]
    vmovdqu ymmword ptr [rbx+60h], ymm0
  }
  __asm { vzeroupper }
  if ( a3 < 0x40 )
  {
    __asm
    {
      vmovdqu ymm6, ymmword ptr [rbx+0E0h]
      vmovdqu ymm8, ymmword ptr [rbx+0C0h]
      vmovdqu ymm9, ymmword ptr [rbx+0A0h]
      vmovdqu ymm10, ymmword ptr [rbx+80h]
    }
  }
  else
  {
    _RDX = _RBX + 224;
    v53 = a3 >> 6;
    do
    {
      _RCX = _RBX + 448;
      v55 = 2LL;
      do
      {
        _RAX = *a2;
        __asm
        {
          vmovdqu ymm3, cs:__ymm@0c0d0e0f08090a0b04050607000102030c0d0e0f08090a0b0405060700010203
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm9, ymm0, ymm3
        }
        *a2 += 32LL;
        _RAX = a2[1];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm6, ymm0, ymm3
        }
        a2[1] = _RAX + 32;
        _RAX = a2[2];
        __asm
        {
          vpunpckldq ymm4, ymm9, ymm6
          vpunpckhdq ymm6, ymm9, ymm6
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm5, ymm0, ymm3
        }
        a2[2] = _RAX + 32;
        _RAX = a2[3];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm2, ymm0, ymm3
        }
        a2[3] = _RAX + 32;
        _RAX = a2[4];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm7, ymm0, ymm3
        }
        a2[4] = _RAX + 32;
        _RAX = a2[5];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm1, ymm0, ymm3
        }
        a2[5] = _RAX + 32;
        _RAX = a2[6];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm8, ymm0, ymm3
        }
        a2[6] = _RAX + 32;
        _RAX = a2[7];
        __asm
        {
          vmovdqu ymm0, ymmword ptr [rax]
          vpshufb ymm3, ymm0, ymm3
          vpunpckldq ymm0, ymm5, ymm2
          vpunpckhqdq ymm9, ymm4, ymm0
          vpunpckhdq ymm2, ymm5, ymm2
          vpunpckldq ymm5, ymm7, ymm1
          vpunpckhdq ymm7, ymm7, ymm1
          vpunpckldq ymm1, ymm8, ymm3
          vpunpcklqdq ymm10, ymm6, ymm2
          vpunpckhdq ymm3, ymm8, ymm3
          vpunpcklqdq ymm8, ymm4, ymm0
          vpunpcklqdq ymm4, ymm5, ymm1
          vpunpckhqdq ymm6, ymm6, ymm2
          vpunpckhqdq ymm2, ymm5, ymm1
          vpunpcklqdq ymm5, ymm7, ymm3
        }
        a2[7] = _RAX + 32;
        __asm
        {
          vperm2i128 ymm0, ymm8, ymm4, 20h ; ' '
          vmovdqu ymmword ptr [rcx-40h], ymm0
          vperm2i128 ymm1, ymm9, ymm2, 20h ; ' '
          vmovdqu ymmword ptr [rcx-20h], ymm1
          vpunpckhqdq ymm3, ymm7, ymm3
          vperm2i128 ymm0, ymm10, ymm5, 20h ; ' '
          vmovdqu ymmword ptr [rcx], ymm0
        }
        _RCX += 256LL;
        __asm
        {
          vperm2i128 ymm1, ymm6, ymm3, 20h ; ' '
          vmovdqu ymmword ptr [rcx-0E0h], ymm1
          vperm2i128 ymm0, ymm8, ymm4, 31h ; '1'
          vperm2i128 ymm1, ymm9, ymm2, 31h ; '1'
          vmovdqu ymmword ptr [rcx-0C0h], ymm0
          vmovdqu ymmword ptr [rcx-0A0h], ymm1
          vperm2i128 ymm0, ymm10, ymm5, 31h ; '1'
          vperm2i128 ymm1, ymm6, ymm3, 31h ; '1'
          vmovdqu ymmword ptr [rcx-80h], ymm0
          vmovdqu ymmword ptr [rcx-60h], ymm1
        }
        --v55;
      }
      while ( v55 );
      __asm
      {
        vmovdqu ymm8, ymmword ptr [rbx+360h]
        vmovdqu ymm9, ymmword ptr [rbx+340h]
        vmovdqu ymm10, ymmword ptr [rbx+180h]
      }
      _RAX = _RBX + 672;
      v109 = (unsigned int)(unsigned __int8)v55 + 24;
      do
      {
        __asm
        {
          vmovdqu ymm7, ymmword ptr [rax-100h]
          vpsrld  ymm5, ymm9, 0Ah
          vpslld  ymm0, ymm7, 19h
          vpsrld  ymm4, ymm7, 3
          vpsrld  ymm1, ymm7, 7
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm0, ymm9, 11h
          vpslld  ymm2, ymm7, 0Eh
          vpxor   ymm2, ymm1, ymm2
          vpslld  ymm1, ymm9, 0Fh
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm3, ymm7, 12h
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm6, ymm3, ymm4
          vpsrld  ymm4, ymm9, 13h
          vpslld  ymm2, ymm9, 0Dh
          vpxor   ymm2, ymm1, ymm2
          vpxor   ymm3, ymm2, ymm4
          vpxor   ymm0, ymm3, ymm5
          vpaddd  ymm1, ymm0, ymm10
          vpaddd  ymm2, ymm1, ymmword ptr [rax]
          vmovdqu ymm10, ymmword ptr [rax-0E0h]
        }
        _RAX += 64LL;
        __asm
        {
          vpaddd  ymm9, ymm2, ymm6
          vpslld  ymm0, ymm10, 19h
          vpsrld  ymm4, ymm10, 3
          vpsrld  ymm5, ymm8, 0Ah
          vpsrld  ymm1, ymm10, 7
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm0, ymm8, 11h
          vpslld  ymm2, ymm10, 0Eh
          vpxor   ymm2, ymm1, ymm2
          vpslld  ymm1, ymm8, 0Fh
          vpxor   ymm1, ymm0, ymm1
          vpsrld  ymm3, ymm10, 12h
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm6, ymm3, ymm4
          vpslld  ymm2, ymm8, 0Dh
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm4, ymm8, 13h
          vpxor   ymm3, ymm2, ymm4
          vpxor   ymm0, ymm3, ymm5
          vpaddd  ymm1, ymm0, ymm7
          vpaddd  ymm2, ymm1, ymmword ptr [rax-20h]
          vpaddd  ymm8, ymm2, ymm6
          vmovdqu ymmword ptr [rax+0C0h], ymm8
          vmovdqu ymmword ptr [rax+0A0h], ymm9
        }
        --v109;
      }
      while ( v109 );
      __asm
      {
        vmovdqu ymm9, ymmword ptr [rdx]
        vmovdqu ymm12, ymmword ptr [rbx+160h]
        vmovdqu ymm13, ymmword ptr [rbx+140h]
        vmovdqu ymm14, ymmword ptr [rbx+120h]
        vmovdqu ymm15, ymmword ptr [rbx+100h]
        vmovdqu [rbp+270h+var_270], ymm9
      }
      _R8 = (char *)&SymCryptSha256K + 8;
      _RCX = _RBX + 224;
      do
      {
        __asm
        {
          vmovdqu ymm8, ymmword ptr [rcx-40h]
          vmovdqu ymm10, ymmword ptr [rcx-20h]
          vbroadcastss ymm7, dword ptr [r8-8]
          vpslld  ymm4, ymm9, 7
          vpsrld  ymm5, ymm9, 19h
          vpxor   ymm0, ymm10, ymm8
          vpand   ymm1, ymm0, ymm9
          vpxor   ymm6, ymm1, ymm8
          vpslld  ymm0, ymm9, 1Ah
          vpsrld  ymm1, ymm9, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm9, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm9, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [rcx+0A0h]
          vpaddd  ymm3, ymm2, ymmword ptr [rcx-60h]
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm11, ymm7, ymm15
          vpor    ymm0, ymm13, ymm12
          vpand   ymm1, ymm0, ymm14
          vpand   ymm2, ymm13, ymm12
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm12, 1Eh
          vpslld  ymm4, ymm12, 0Ah
          vpsrld  ymm5, ymm12, 16h
          vmovdqu ymmword ptr [rcx+20h], ymm11
          vpsrld  ymm1, ymm12, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm12, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm12, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymm7
          vbroadcastss ymm7, dword ptr [r8-4]
          vpaddd  ymm15, ymm2, ymm6
          vpxor   ymm0, ymm9, ymm10
          vpand   ymm1, ymm0, ymm11
          vpxor   ymm6, ymm1, ymm10
          vpslld  ymm0, ymm11, 1Ah
          vpslld  ymm4, ymm11, 7
          vpsrld  ymm5, ymm11, 19h
          vpsrld  ymm1, ymm11, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm11, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm11, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [rcx+0C0h]
          vpaddd  ymm3, ymm2, ymm8
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm9, ymm7, ymm14
          vpor    ymm0, ymm15, ymm12
          vpand   ymm1, ymm0, ymm13
          vpand   ymm2, ymm15, ymm12
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm15, 1Eh
          vpsrld  ymm1, ymm15, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm15, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm15, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpslld  ymm4, ymm15, 0Ah
          vpxor   ymm0, ymm3, ymm4
          vpsrld  ymm5, ymm15, 16h
          vpxor   ymm1, ymm0, ymm5
          vpxor   ymm0, ymm11, [rbp+270h+var_270]
          vpaddd  ymm2, ymm1, ymm7
          vmovdqu ymmword ptr [rcx+40h], ymm9
          vbroadcastss ymm7, dword ptr [r8]
          vpaddd  ymm14, ymm2, ymm6
          vpand   ymm1, ymm0, ymm9
          vpxor   ymm6, ymm1, [rbp+270h+var_270]
          vpslld  ymm0, ymm9, 1Ah
          vpslld  ymm4, ymm9, 7
          vpsrld  ymm5, ymm9, 19h
          vpsrld  ymm1, ymm9, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm9, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm9, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [rcx+0E0h]
          vpaddd  ymm3, ymm2, ymm10
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm8, ymm7, ymm13
          vpor    ymm0, ymm15, ymm14
          vpand   ymm1, ymm0, ymm12
          vpand   ymm2, ymm15, ymm14
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm14, 1Eh
          vpslld  ymm4, ymm14, 0Ah
          vpsrld  ymm5, ymm14, 16h
          vmovdqu ymmword ptr [rcx+60h], ymm8
          vpsrld  ymm1, ymm14, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm14, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm14, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymm7
          vbroadcastss ymm7, dword ptr [r8+4]
          vpaddd  ymm13, ymm2, ymm6
          vpxor   ymm0, ymm9, ymm11
          vpand   ymm1, ymm0, ymm8
          vpxor   ymm6, ymm1, ymm11
          vpslld  ymm0, ymm8, 1Ah
          vpslld  ymm4, ymm8, 7
          vpsrld  ymm5, ymm8, 19h
          vpsrld  ymm1, ymm8, 6
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm8, 15h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm8, 0Bh
          vpxor   ymm3, ymm2, ymm3
          vpxor   ymm0, ymm3, ymm4
          vpxor   ymm1, ymm0, ymm5
          vpaddd  ymm2, ymm1, ymmword ptr [rcx+100h]
          vpaddd  ymm3, ymm2, [rbp+270h+var_270]
          vpaddd  ymm0, ymm3, ymm6
          vpaddd  ymm7, ymm0, ymm7
          vpaddd  ymm9, ymm7, ymm12
          vpor    ymm0, ymm14, ymm13
          vpand   ymm1, ymm0, ymm15
          vpand   ymm2, ymm14, ymm13
          vpor    ymm6, ymm1, ymm2
          vpslld  ymm0, ymm13, 1Eh
          vpsrld  ymm1, ymm13, 2
          vpxor   ymm1, ymm0, ymm1
          vpslld  ymm2, ymm13, 13h
          vpxor   ymm2, ymm1, ymm2
          vpsrld  ymm3, ymm13, 0Dh
          vpxor   ymm3, ymm2, ymm3
          vpslld  ymm4, ymm13, 0Ah
          vpxor   ymm0, ymm3, ymm4
          vpsrld  ymm5, ymm13, 16h
          vpxor   ymm1, ymm0, ymm5
        }
        _R8 += 16;
        _RCX += 128LL;
        __asm
        {
          vpaddd  ymm2, ymm1, ymm7
          vpaddd  ymm12, ymm2, ymm6
          vmovdqu [rbp+270h+var_270], ymm9
          vmovdqu ymmword ptr [rcx], ymm9
        }
      }
      while ( (__int64)_R8 < (__int64)((char *)&_xmm + 8) );
      __asm
      {
        vpaddd  ymm0, ymm12, ymmword ptr [rbx+60h]
        vmovdqu ymmword ptr [rbx+160h], ymm0
        vpaddd  ymm1, ymm13, ymmword ptr [rbx+40h]
        vmovdqu ymmword ptr [rbx+60h], ymm0
        vmovdqu ymmword ptr [rbx+140h], ymm1
        vpaddd  ymm0, ymm14, ymmword ptr [rbx+20h]
        vmovdqu ymmword ptr [rbx+40h], ymm1
        vmovdqu ymmword ptr [rbx+120h], ymm0
        vpaddd  ymm1, ymm15, ymmword ptr [rbx]
        vmovdqu ymmword ptr [rbx+20h], ymm0
        vmovdqu ymmword ptr [rbx+100h], ymm1
        vmovdqu ymmword ptr [rbx], ymm1
        vmovdqu ymm0, ymmword ptr [rbx+8E0h]
        vpaddd  ymm0, ymm0, ymmword ptr [rbx+0E0h]
        vmovdqu [rbp+270h+var_270], ymm0
        vmovdqu ymmword ptr [rbx+0E0h], ymm0
        vmovdqu ymm0, ymmword ptr [rbx+0C0h]
        vpaddd  ymm0, ymm0, ymmword ptr [rbx+8C0h]
        vmovdqu [rbp+270h+var_250], ymm0
        vmovdqu ymmword ptr [rbx+0C0h], ymm0
        vmovdqu ymm0, ymmword ptr [rbx+0A0h]
        vpaddd  ymm0, ymm0, ymmword ptr [rbx+8A0h]
        vmovdqu [rbp+270h+var_230], ymm0
        vmovdqu ymmword ptr [rbx+0A0h], ymm0
        vmovdqu ymm0, ymmword ptr [rbx+80h]
        vpaddd  ymm0, ymm0, ymmword ptr [rbx+880h]
        vmovdqu [rbp+270h+var_210], ymm0
        vmovdqu ymmword ptr [rbx+80h], ymm0
      }
      --v53;
      __asm { vzeroupper }
    }
    while ( v53 );
    __asm
    {
      vmovdqu ymm6, [rbp+270h+var_270]
      vmovdqu ymm8, [rbp+270h+var_250]
      vmovdqu ymm9, [rbp+270h+var_230]
      vmovdqu ymm10, [rbp+270h+var_210]
    }
  }
  __asm
  {
    vmovdqu ymm1, ymmword ptr [rbx+160h]
    vmovdqu ymm0, ymmword ptr [rbx+140h]
    vmovdqu ymm2, ymmword ptr [rbx+120h]
  }
  _RAX = *a1;
  __asm
  {
    vpunpckldq ymm5, ymm1, ymm0
    vpunpckhdq ymm7, ymm1, ymm0
    vmovdqu ymm0, ymmword ptr [rbx+100h]
    vpunpckldq ymm1, ymm2, ymm0
    vpunpckhdq ymm3, ymm2, ymm0
    vpunpckldq ymm4, ymm6, ymm8
    vpunpckldq ymm0, ymm9, ymm10
    vpunpckhdq ymm2, ymm9, ymm10
    vpunpckhqdq ymm9, ymm5, ymm1
    vpunpcklqdq ymm10, ymm7, ymm3
    vpunpckhdq ymm6, ymm6, ymm8
    vpunpckhqdq ymm11, ymm7, ymm3
    vpunpckhqdq ymm3, ymm4, ymm0
    vpunpcklqdq ymm8, ymm5, ymm1
    vpunpcklqdq ymm1, ymm4, ymm0
    vpunpckhqdq ymm0, ymm6, ymm2
    vpunpcklqdq ymm4, ymm6, ymm2
    vperm2i128 ymm5, ymm8, ymm1, 20h ; ' '
    vmovdqu ymmword ptr [rax], ymm5
  }
  _RAX = a1[1];
  __asm
  {
    vperm2i128 ymm2, ymm9, ymm3, 20h ; ' '
    vperm2i128 ymm6, ymm10, ymm4, 20h ; ' '
    vperm2i128 ymm7, ymm11, ymm0, 20h ; ' '
    vmovdqu ymmword ptr [rax], ymm2
  }
  _RAX = a1[2];
  __asm
  {
    vperm2i128 ymm1, ymm8, ymm1, 31h ; '1'
    vperm2i128 ymm3, ymm9, ymm3, 31h ; '1'
    vperm2i128 ymm4, ymm10, ymm4, 31h ; '1'
    vmovdqu ymmword ptr [rax], ymm6
  }
  _RAX = a1[3];
  __asm
  {
    vperm2i128 ymm0, ymm11, ymm0, 31h ; '1'
    vmovdqu ymmword ptr [rax], ymm7
  }
  _RAX = a1[4];
  __asm { vmovdqu ymmword ptr [rax], ymm1 }
  _RAX = a1[5];
  __asm { vmovdqu ymmword ptr [rax], ymm3 }
  _RAX = a1[6];
  __asm { vmovdqu ymmword ptr [rax], ymm4 }
  result = a1[7];
  __asm
  {
    vmovdqu ymmword ptr [rax], ymm0
    vzeroupper
  }
  return result;
}
