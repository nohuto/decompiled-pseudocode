/*
 * XREFs of PopReadyChildWake @ 0x14056DCC8
 * Callers:
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopReadyChildWake(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  char v3; // r10
  __int64 *v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rax
  __int64 **v8; // rcx

  v3 = 0;
  if ( ++*((_DWORD *)a1 + 25) >= *((_DWORD *)a1 + 24) )
  {
    v5 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1
      || (v6 = (__int64 **)a1[1], *v6 != a1)
      || (*v6 = v5,
          v5[1] = (__int64)v6,
          v7 = a2 + 8 * (*((unsigned __int8 *)a1 + 56) + 8LL * *((unsigned __int8 *)a1 + 56) + 7),
          v8 = *(__int64 ***)(v7 + 8),
          *v8 != (__int64 *)v7) )
    {
      __fastfail(3u);
    }
    *a1 = v7;
    a1[1] = (__int64)v8;
    *v8 = a1;
    *(_QWORD *)(v7 + 8) = a1;
    return *((_BYTE *)a1 + 56) == a3;
  }
  return v3;
}
