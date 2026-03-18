/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_d0631281dbe1e95b934945217ec19a3c___ @ 0x1801E7104
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1801E7364 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x1801E7308 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_d0631281dbe1e95b934945217ec19a3c___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 result; // rax

  v4 = 0;
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    LOBYTE(a4) = (*(_BYTE *)(v6 + *a2) & 2) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis((unsigned int)v4, a2, *a2, a4);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v9 + 200))(v10, TemporaryConfigurationAxis, 0LL);
    ++v4;
    v7 += 12LL;
    v6 += 12LL;
  }
  while ( v4 < 3 );
  return result;
}
