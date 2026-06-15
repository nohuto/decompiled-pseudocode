/*
 * XREFs of ?ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z @ 0x180013E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ApplyStreamClassPolicyGains(CProcess *this, int a2, int *a3)
{
  int v3; // eax

  v3 = 0;
  if ( a3 )
  {
    LOBYTE(v3) = *((_DWORD *)this + 127) != a2;
    *a3 = v3;
  }
  *((_DWORD *)this + 127) = a2;
}
