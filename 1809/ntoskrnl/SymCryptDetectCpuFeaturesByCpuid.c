/*
 * XREFs of SymCryptDetectCpuFeaturesByCpuid @ 0x1401B25B4
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401AF348 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptDetectCpuFeaturesByCpuid(char a1)
{
  int v1; // edi
  unsigned __int8 *v2; // r9
  int v5; // r8d
  int v10; // esi
  unsigned int v11; // r11d
  int v12; // r10d
  int v18; // eax
  unsigned int v34; // edx
  __int64 result; // rax
  int v40; // [rsp+0h] [rbp-20h]
  int v41; // [rsp+4h] [rbp-1Ch]
  int v42; // [rsp+8h] [rbp-18h]
  int v43; // [rsp+Ch] [rbp-14h]

  v1 = 0;
  v2 = (unsigned __int8 *)&unk_14035B542;
  _RAX = 0LL;
  v5 = -2016;
  __asm { cpuid }
  v10 = _RAX;
  v40 = _RAX;
  v41 = _RBX;
  v11 = 0;
  v42 = _RCX;
  v43 = _RDX;
  do
  {
    v12 = *(v2 - 2);
    if ( v12 != v1 )
    {
      _RAX = *(v2 - 2);
      __asm { cpuid }
      v40 = _RAX;
      v1 = v12;
      v41 = _RBX;
      v42 = _RCX;
      v43 = _RDX;
    }
    if ( v12 > v10 || (v18 = *(&v40 + *(v2 - 1)), !_bittest(&v18, *v2)) )
      v5 |= *(_DWORD *)(v2 + 2);
    ++v11;
    v2 += 8;
  }
  while ( v11 < 0xD );
  if ( (a1 & 1) != 0 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x8000000) == 0 )
      goto LABEL_11;
    __asm { xgetbv }
    if ( (_RAX & 6) != 6 )
LABEL_11:
      v5 |= 0x10u;
  }
  if ( (v5 & 4) == 0 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RCX == 1145913699 && (_DWORD)_RDX == 1769238117 )
    {
      _RAX = 1LL;
      __asm { cpuid }
      v34 = ((int)_RAX >> 8) & 0xF;
      if ( v34 == 15 )
        v34 = (unsigned __int8)((int)_RAX >> 20) + 15;
      if ( v34 < 0x15 )
        v5 |= 4u;
    }
  }
  _RAX = 1LL;
  g_SymCryptCpuFeaturesNotPresent = v5;
  __asm { cpuid }
  g_SymCryptCpuid1 = result;
  dword_140406894 = _RBX;
  dword_140406898 = _RCX;
  dword_14040689C = _RDX;
  return result;
}
