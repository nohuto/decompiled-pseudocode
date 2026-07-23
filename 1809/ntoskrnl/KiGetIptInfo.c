/*
 * XREFs of KiGetIptInfo @ 0x140294728
 * Callers:
 *     KiInitializeXSave @ 0x1405742C0 (KiInitializeXSave.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x1405706EC (KiGetCpuVendor.c)
 */

signed __int32 *__fastcall KiGetIptInfo(_DWORD *a1, _DWORD *a2)
{
  signed __int32 *result; // rax
  char v20; // r8
  int v21; // r8d
  signed __int32 v22[3]; // [rsp+24h] [rbp-24h] BYREF

  *a1 = 0;
  *a2 = 0;
  result = (signed __int32 *)KiGetCpuVendor();
  if ( (_DWORD)result == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    result = v22;
    v22[0] = _RBX;
    v22[1] = _RCX;
    v22[2] = _RDX;
    if ( _bittest(v22, 0x19u) )
    {
      *a1 = 16;
      *a2 |= 9u;
      _RAX = 20LL;
      __asm { cpuid }
      if ( (_RCX & 1) != 0 || (_RCX & 4) != 0 )
      {
        *a1 += 16;
        *a2 |= 6u;
      }
      if ( (_RBX & 1) != 0 )
      {
        *a1 += 8;
        *a2 |= 0x10u;
      }
      if ( (_RBX & 4) != 0 && (_DWORD)_RAX )
      {
        _RAX = 20LL;
        __asm { cpuid }
        v20 = _RAX;
        if ( ((unsigned __int8)_RAX & 7u) > 4 )
          v20 = -4;
        v21 = v20 & 7;
        *a1 += 16 * v21;
        *a2 |= (32 << v21) - 32;
      }
      result = (signed __int32 *)((*a1 + 63) & 0xFFFFFFC0);
      *a1 = (_DWORD)result;
    }
  }
  return result;
}
