/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180013E20
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000F950 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 127) )
  {
    if ( *((_DWORD *)this + 124) )
      v2 = *((_DWORD *)this + 125);
    else
      v2 = *((_DWORD *)this + 82);
    if ( v2 )
      return 1LL;
  }
  return result;
}
