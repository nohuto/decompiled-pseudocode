/*
 * XREFs of ?OnDeviceStateChanged@AvoidEndpointPolicyRule@@UEAAJPEBGKPEAW4RuleAction@@@Z @ 0x180120800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AvoidEndpointPolicyRule::OnDeviceStateChanged(
        const wchar_t *this,
        const unsigned __int16 *a2,
        int a3,
        enum RuleAction *a4)
{
  int v4; // ebx

  v4 = 1;
  if ( a3 != 1 && !wcsncmp(this + 42, a2, 0x80uLL) )
    v4 = 2;
  *(_DWORD *)a4 = v4;
  return 0LL;
}
