/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_9831007705b0f4d267106dea29ac4646___ @ 0x18021F1DC
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18021F52C (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x18021F4D0 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_9831007705b0f4d267106dea29ac4646___(__int64 a1, _QWORD *a2)
{
  int i; // ebx
  unsigned int TemporaryConfigurationAxis; // eax
  _BYTE *v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // r10
  __int64 v8; // r11
  __int64 result; // rax

  for ( i = 0; i < 3; ++i )
  {
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)i,
                                   a2,
                                   **(_QWORD **)(*a2 + 40LL),
                                   a2[1]);
    LOBYTE(v5) = *v5;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, _DWORD))(v6 + 200))(
               v8,
               TemporaryConfigurationAxis,
               0LL,
               v5,
               *v7);
  }
  return result;
}
