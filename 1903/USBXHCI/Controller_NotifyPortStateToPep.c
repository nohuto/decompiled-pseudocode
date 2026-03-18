/*
 * XREFs of Controller_NotifyPortStateToPep @ 0x1C000F594
 * Callers:
 *     RootHub_D0Exit @ 0x1C0021074 (RootHub_D0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

_UNKNOWN **__fastcall Controller_NotifyPortStateToPep(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  result = &retaddr;
  v7 = a2;
  v4 = *(_QWORD *)(a1 + 520);
  if ( v4 )
  {
    result = (_UNKNOWN **)PoFxPowerControl(v4, &GUID_HC_SUB_DX_STATE, &v7, 4LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = (_DWORD)result;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 4u, 4u, 0x21u, (__int64)&Context.Logger + 4, v5);
    }
  }
  return result;
}
