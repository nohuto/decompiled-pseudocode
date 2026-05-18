/*
 * XREFs of sub_180063640 @ 0x180063640
 * Callers:
 *     sub_180067224 @ 0x180067224 (sub_180067224.c)
 *     sub_18006728C @ 0x18006728C (sub_18006728C.c)
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     sub_18007493C @ 0x18007493C (sub_18007493C.c)
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     sub_18007A074 @ 0x18007A074 (sub_18007A074.c)
 *     sub_1800895AC @ 0x1800895AC (sub_1800895AC.c)
 *     sub_1800B38DC @ 0x1800B38DC (sub_1800B38DC.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180063640(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        v4 = *(volatile signed __int32 **)(v1 + 8);
        if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
        v1 += 16LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    v5 = (a1[2] - v1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v1 - 8);
      v7 = v5 + 39;
      if ( (unsigned __int64)(v1 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x1800636EALL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
