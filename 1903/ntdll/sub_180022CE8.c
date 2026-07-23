/*
 * XREFs of sub_180022CE8 @ 0x180022CE8
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_180024FBC @ 0x180024FBC (sub_180024FBC.c)
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 *     sub_18006EA94 @ 0x18006EA94 (sub_18006EA94.c)
 *     sub_180073E1C @ 0x180073E1C (sub_180073E1C.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 __fastcall sub_180022CE8(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // r10
  PPEB ProcessEnvironmentBlock; // rsi
  __int64 v5; // r10
  __int64 result; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 i; // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+38h] [rbp-A0h]
  _BYTE v19[56]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+80h] [rbp-58h] BYREF
  int v21; // [rsp+88h] [rbp-50h]
  _BYTE v22[56]; // [rsp+90h] [rbp-48h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+E8h] [rbp+10h] BYREF

  v3 = NtCurrentTeb();
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( byte_180165368 && (v3->SameTebFlags & 0x400) != 0 )
  {
    a3 = MEMORY[0x7FFE0330];
    a2 = __ROR8__(qword_180165438, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ MEMORY[0x7FFE0330];
  }
  sub_18006EA94(v3, a2, a3, a1);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0
    || (result = (__int64)NtCurrentTeb(), (*(_BYTE *)(result + 6126) & 0x20) != 0) )
  {
    result = 0x2000LL;
    if ( (*(_WORD *)(v5 + 6126) & 0x2000) == 0 )
    {
      while ( 1 )
      {
        v7 = sub_180055D84();
        v8 = v7;
        if ( v7 != -1073741801 )
          break;
        DelayInterval.QuadPart = -3000000LL;
        ZwDelayExecution(0, &DelayInterval);
      }
      if ( v7 < 0 )
      {
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
        RtlRaiseStatus(v8);
      }
      sub_18002E73C(0LL);
      sub_18002D7BC();
      for ( i = qword_1801653D0; (__int64 *)i != &qword_1801653D0; i = *(_QWORD *)i )
      {
        if ( *(int *)(*(_QWORD *)(i + 152) + 56LL) >= 9
          && ProcessEnvironmentBlock->ImageBaseAddress != *(PVOID *)(i + 48) )
        {
          v11 = *(_DWORD *)(i + 104);
          if ( (v11 & 0x40000) == 0 )
          {
            v12 = *(_QWORD *)(i + 56);
            if ( v12 )
            {
              if ( (v11 & 0x80004) == 0x80004 )
              {
                if ( byte_180165408 )
                  goto LABEL_22;
                v17 = 72LL;
                v18 = 1;
                memset(v19, 0, sizeof(v19));
                RtlActivateActivationContextUnsafeFast(&v17, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  sub_18002507C(2LL, i);
                sub_180024FBC(v12, *(_QWORD *)(i + 48), 2LL);
                RtlDeactivateActivationContextUnsafeFast(&v17);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(qword_180164FC8 + 110) && !byte_180165408 )
      {
        v20 = 72LL;
        v21 = 1;
        memset(v22, 0, sizeof(v22));
        RtlActivateActivationContextUnsafeFast(&v20, *(_QWORD *)(qword_180164FC8 + 136));
        sub_18002507C(2LL, qword_180164FC8);
        RtlDeactivateActivationContextUnsafeFast(&v20);
      }
LABEL_22:
      sub_18002D75C(v9, 21LL);
      return sub_180073E1C(v14, v13, v15, v16);
    }
  }
  return result;
}
