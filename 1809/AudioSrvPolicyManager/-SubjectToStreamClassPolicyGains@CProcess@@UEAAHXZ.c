/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180016F90
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180012B6C (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 126) )
  {
    if ( *((_DWORD *)this + 123) )
      v2 = *((_DWORD *)this + 124);
    else
      v2 = *((_DWORD *)this + 82);
    if ( v2 )
      return 1LL;
  }
  return result;
}
