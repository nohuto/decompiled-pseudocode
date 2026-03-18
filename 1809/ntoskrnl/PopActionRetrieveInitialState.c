/*
 * XREFs of PopActionRetrieveInitialState @ 0x1401595E4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopFastS4Check @ 0x1406E1F08 (PopFastS4Check.c)
 *     PopVerifySystemPowerState @ 0x14071B348 (PopVerifySystemPowerState.c)
 */

__int64 __fastcall PopActionRetrieveInitialState(_DWORD *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  _DWORD *v4; // rbx
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 result; // rax

  v4 = a1;
  if ( (unsigned int)(qword_140417704 - 4) <= 2 )
  {
    *a1 = 6;
    *a2 = 6;
  }
  else if ( (_DWORD)qword_140417704 == 7 )
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
  if ( *v4 == 6 || dword_14041770C < 0 && (unsigned int)(dword_140417714 - 1) <= 1 )
    *a4 = 0;
  if ( (unsigned __int8)PopFastS4Check() )
  {
    *v4 = *a2;
    dword_14041770C &= ~0x10000000u;
  }
  if ( (dword_14041770C & 0x10000000) == 0 )
    v4 = a2;
  result = (unsigned int)*v4;
  *a3 = result;
  return result;
}
