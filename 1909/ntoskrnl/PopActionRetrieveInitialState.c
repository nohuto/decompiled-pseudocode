/*
 * XREFs of PopActionRetrieveInitialState @ 0x140169624
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopFastS4Check @ 0x14072A904 (PopFastS4Check.c)
 *     PopVerifySystemPowerState @ 0x1407453AC (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PopActionRetrieveInitialState(_DWORD *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v4; // rbx
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 result; // rax

  v4 = a1;
  if ( (unsigned int)(qword_140442FC4 - 4) <= 2 )
  {
    *a1 = 6;
    *a2 = 6;
  }
  else if ( (_DWORD)qword_140442FC4 == 7 )
  {
    *a2 = 5;
    PopVerifySystemPowerState(a2, 0LL);
  }
  else
  {
    v8 = PopPolicy;
    *a2 = *((_DWORD *)PopPolicy + 18);
    v9 = v8[17];
    if ( v9 > *v4 )
      *v4 = v9;
  }
  if ( *v4 > *a2 )
    *a2 = *v4;
  *a4 = 1;
  if ( *v4 == 6 || dword_140442FCC < 0 && (unsigned int)(dword_140442FD4 - 1) <= 1 )
    *a4 = 0;
  if ( (unsigned __int8)PopFastS4Check() )
  {
    *v4 = *a2;
    dword_140442FCC &= ~0x10000000u;
  }
  if ( (dword_140442FCC & 0x10000000) == 0 )
    v4 = a2;
  result = (unsigned int)*v4;
  *a3 = result;
  return result;
}
