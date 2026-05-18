/*
 * XREFs of sub_180103DC0 @ 0x180103DC0
 * Callers:
 *     ?dtor$0@?0??_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_CancellationTokenRegistration@23@@Z@4HA @ 0x180133017 (-dtor$0@-0--_DeregisterCallback@_CancellationTokenState@details@Concurrency@@QEAAXPEAV_Cancellat.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180103DC0(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
  {
    v3 = (a1[3] - v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180103E1ELL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
  }
  return result;
}
