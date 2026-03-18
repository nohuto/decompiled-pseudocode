/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1C0115570
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C002D628 (HMValidateHandle.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C014A93C (RIMGetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // rax
  ULONG64 v10; // rdx
  NTSTATUS v11; // eax
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+40h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+70h] [rbp-18h]

  EnterCrit(0, 1);
  v13 = 0uLL;
  v14 = 0;
  v5 = 0;
  if ( !a2 )
    goto LABEL_2;
  v9 = HMValidateHandle(a1, 19);
  if ( !v9 )
  {
    v6 = 6LL;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v9 + 200) & 0x80u) == 0 )
  {
LABEL_2:
    v6 = 87LL;
LABEL_3:
    UserSetLastError(v6, v4);
    goto LABEL_15;
  }
  v10 = a2;
  if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v15 = *(_OWORD *)v10;
  v16 = *(_DWORD *)(v10 + 16);
  v13 = v15;
  v14 = v16;
  v11 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v9 + 480), &v13);
  if ( v11 < 0 )
  {
    v6 = RtlNtStatusToDosError(v11);
    goto LABEL_3;
  }
  v8 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = v13;
  *(_DWORD *)(a2 + 16) = v14;
  v5 = 1;
LABEL_15:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v5;
}
