/*
 * XREFs of NtUserMNDragOver @ 0x1C0231480
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxMNDragOver @ 0x1C0246D1C (xxxMNDragOver.c)
 */

__int64 __fastcall NtUserMNDragOver(__int64 *a1, _OWORD *a2)
{
  ULONG64 v4; // rcx
  int v5; // ebx
  _OWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  memset(v7, 0, sizeof(v7));
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v8 = *a1;
  v5 = xxxMNDragOver(&v8, v7);
  if ( v5 )
  {
    DWORD1(v7[0]) = 0;
    DWORD1(v7[1]) = 0;
    v4 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v7[0];
    a2[1] = v7[1];
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
