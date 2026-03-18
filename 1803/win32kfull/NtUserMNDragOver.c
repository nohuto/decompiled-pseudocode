/*
 * XREFs of NtUserMNDragOver @ 0x1C01F2070
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxMNDragOver @ 0x1C0205428 (xxxMNDragOver.c)
 */

__int64 __fastcall NtUserMNDragOver(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  memset(v10, 0, sizeof(v10));
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v11 = *a1;
  v6 = xxxMNDragOver(&v11, v10);
  if ( v6 )
  {
    DWORD1(v10[0]) = 0;
    DWORD1(v10[1]) = 0;
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v10[0];
    a2[1] = v10[1];
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v6;
}
