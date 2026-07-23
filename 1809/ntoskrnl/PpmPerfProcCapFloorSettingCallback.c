/*
 * XREFs of PpmPerfProcCapFloorSettingCallback @ 0x140876C80
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmPerfProcCapFloorSettingCallback(
        LPCGUID SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  ULONG v4; // r14d
  unsigned int v6; // ebx
  __int64 v8; // r8
  BOOL v9; // esi
  unsigned int v10; // edi
  __int64 Prcb; // rax
  __int64 v12; // rax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  GUID v15; // [rsp+28h] [rbp-30h]

  v4 = SettingGuid->Data4[7];
  v6 = 0;
  v15 = GUID_PROC_CAP_BASE;
  LOWORD(v14) = 0;
  v15.Data4[7] = v4;
  v8 = *(_QWORD *)&GUID_PROC_CAP_BASE.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( !v8 )
    v8 = *(_QWORD *)v15.Data4 - *(_QWORD *)SettingGuid->Data4;
  v9 = v8 == 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( ValueLength != 4 || !Value )
    goto LABEL_12;
  v10 = *Value;
  if ( v10 > 0x64 )
    v10 = 100;
  Prcb = KeGetPrcb(v4);
  if ( Prcb )
  {
    v12 = *(_QWORD *)(Prcb + 24184);
    if ( v12 )
    {
      if ( v9 )
        *(_DWORD *)(v12 + 48) = v10;
      else
        *(_DWORD *)(v12 + 52) = v10;
    }
  }
  else
  {
LABEL_12:
    v6 = -1073741811;
  }
  v14 |= 0xEu;
  PpmReapplyPerfPolicy(&v14);
  return v6;
}
