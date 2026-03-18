/*
 * XREFs of KiGetIptInfo @ 0x140195AF0
 * Callers:
 *     KiInitializeXSave @ 0x1405A2930 (KiInitializeXSave.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HviGetIptFeatures @ 0x140343944 (HviGetIptFeatures.c)
 *     KiGetCpuVendor @ 0x14059DB24 (KiGetCpuVendor.c)
 */

__int64 __fastcall KiGetIptInfo(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  char v24; // r8
  int v25; // r8d
  __int64 v26; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-28h]
  _QWORD v28[2]; // [rsp+30h] [rbp-20h] BYREF

  *a1 = 0;
  *a2 = 0;
  HIDWORD(v26) = 0;
  v27 = 0LL;
  v28[0] = 0LL;
  v28[1] = 0LL;
  result = KiGetCpuVendor(a1, a2);
  if ( (_DWORD)result == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    HIDWORD(v26) = _RBX;
    v27 = __PAIR64__(_RDX, _RCX);
    if ( (unsigned int)result >= 0x14 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      HIDWORD(v26) = _RBX;
      v27 = __PAIR64__(_RDX, _RCX);
      if ( _bittest((const signed __int32 *)&v26 + 1, 0x19u)
        || (result = HviGetIptFeatures(v28), (v28[0] & 0xFFFFF000) != 0) )
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
          v24 = _RAX;
          if ( ((unsigned __int8)_RAX & 7u) > 4 )
            v24 = -4;
          v25 = v24 & 7;
          *a1 += 16 * v25;
          *a2 |= (32 << v25) - 32;
        }
        result = (*a1 + 63) & 0xFFFFFFC0;
        *a1 = result;
      }
    }
  }
  return result;
}
