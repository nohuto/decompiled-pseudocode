/*
 * XREFs of ?IsHyperVGuestOS@@YA_NXZ @ 0x18008BFA4
 * Callers:
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x18008BD48 (--0MPCCursorManager@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 */

char IsHyperVGuestOS(void)
{
  char v0; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v18; // [rsp+4h] [rbp-24h]

  v0 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
    v18 = __PAIR64__(_RCX, _RBX);
    v11 = __PAIR64__(_RCX, _RBX) - *(_QWORD *)"Microsoft Hv";
    if ( v18 == *(_QWORD *)"Microsoft Hv" )
      v11 = (unsigned int)_RDX - (unsigned __int64)*(unsigned int *)"t Hv";
    if ( !v11 && (int)_RAX >= 1073741827 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      return (_RBX & 0x1000) == 0;
    }
  }
  return v0;
}
