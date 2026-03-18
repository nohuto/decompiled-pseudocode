/*
 * XREFs of PnpNotifyUserModeDeviceRemoval @ 0x140730D6C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140861BE8 (PnpCancelRemoveOnHungDevices.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14087B28C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140154604 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PiUEventNotifyUserMode @ 0x1406989F0 (PiUEventNotifyUserMode.c)
 */

NTSTATUS __fastcall PnpNotifyUserModeDeviceRemoval(
        __int64 a1,
        _WORD *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  void *v10; // r12
  __int128 v11; // xmm6
  __int64 v12; // r13
  NTSTATUS result; // eax
  int v14; // ebx
  __int128 v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-1F8h]
  wchar_t pszDest[200]; // [rsp+30h] [rbp-1E8h] BYREF

  if ( a6 )
    *a6 = 0;
  v10 = (void *)(a1 + 160);
  v11 = *(_OWORD *)(a1 + 112);
  v12 = *(_QWORD *)(a1 + 48);
  v19 = *(_QWORD *)(a1 + 56);
  result = RtlStringCchCopyW(pszDest, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a1 + 160));
  v14 = result;
  if ( !result )
  {
    v15 = *a3;
    *(_QWORD *)(a1 + 48) = a4;
    v16 = -1LL;
    *(_OWORD *)(a1 + 112) = v15;
    *(_QWORD *)(a1 + 56) = a5;
    while ( *a2 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a2[v17] );
      memmove(v10, a2, 2 * v17 + 2);
      v14 = PiUEventNotifyUserMode(a1);
      if ( v14 < 0 )
      {
        if ( v14 == -1073741536 )
          v14 = -2147483608;
        break;
      }
      if ( a6 )
        ++*a6;
      v18 = -1LL;
      do
        ++v18;
      while ( a2[v18] );
      a2 += v18 + 1;
    }
    *(_QWORD *)(a1 + 56) = v19;
    *(_OWORD *)(a1 + 112) = v11;
    *(_QWORD *)(a1 + 48) = v12;
    do
      ++v16;
    while ( pszDest[v16] );
    memmove(v10, pszDest, 2 * v16 + 2);
    return v14;
  }
  return result;
}
