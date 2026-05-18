/*
 * XREFs of __isa_available_init @ 0x180126B10
 * Callers:
 *     __scrt_dllmain_after_initialize_c @ 0x180125BDC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_initialize_crt @ 0x180125D0C (__scrt_initialize_crt.c)
 * Callees:
 *     <none>
 */

int __cdecl _isa_available_init()
{
  char v5; // r11
  int v6; // r14d
  int v7; // ebp
  int v8; // r9d
  int v9; // r8d
  int v11; // r10d
  int v16; // esi
  int v17; // edi
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  int v26; // eax

  dword_18025E278 = 2;
  _RAX = 0LL;
  dword_18025E274 = 1;
  __asm { cpuid }
  v5 = 0;
  v6 = _RAX;
  v7 = _RCX ^ 0x444D4163 | _RDX ^ 0x69746E65 | _RBX ^ 0x68747541;
  v8 = _RDX ^ 0x49656E69;
  v9 = _RBX ^ 0x756E6547;
  _RAX = 1LL;
  v11 = _RCX ^ 0x6C65746E;
  __asm { cpuid }
  v16 = _RCX;
  v17 = _RAX;
  if ( !(v11 | v8 | v9)
    && ((qword_18025E280 = -1LL, v18 = _RAX & 0xFFF3FF0, v18 == 67264)
     || v18 == 132704
     || v18 == 132720
     || (v19 = (unsigned int)(v18 - 198224), (unsigned int)v19 <= 0x20) && (v20 = 0x100010001LL, _bittest64(&v20, v19))) )
  {
    v21 = dword_18026B480 | 1;
    dword_18026B480 |= 1u;
  }
  else
  {
    v21 = dword_18026B480;
  }
  if ( !v7 && (v17 & 0xFF00F00u) >= 0x601100 )
  {
    v21 |= 4u;
    dword_18026B480 = v21;
  }
  _RAX = 7LL;
  if ( v6 >= 7 )
  {
    __asm { cpuid }
    v5 = _RBX;
    if ( (_RBX & 0x200) != 0 )
      dword_18026B480 = v21 | 2;
  }
  if ( (v16 & 0x100000) != 0 )
  {
    dword_18025E274 = 2;
    dword_18025E278 = 6;
    if ( (v16 & 0x8000000) != 0 && (v16 & 0x10000000) != 0 )
    {
      __asm { xgetbv }
      if ( (_RAX & 6) == 6 )
      {
        v26 = dword_18025E278 | 8;
        dword_18025E274 = 3;
        dword_18025E278 |= 8u;
        if ( (v5 & 0x20) != 0 )
        {
          dword_18025E274 = 5;
          dword_18025E278 = v26 | 0x20;
        }
      }
    }
  }
  return 0;
}
