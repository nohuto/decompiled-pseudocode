/*
 * XREFs of PopPrepChildWake @ 0x14056DBD0
 * Callers:
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPrepChildWake(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 *v4; // rax
  __int64 **v5; // rdx
  __int64 v6; // rdx
  __int64 **v7; // rax
  __int64 result; // rax

  v2 = *((_DWORD *)a1 + 25);
  if ( v2 == *((_DWORD *)a1 + 24) )
  {
    v4 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1
      || (v5 = (__int64 **)a1[1], *v5 != a1)
      || (*v5 = v4,
          v4[1] = (__int64)v5,
          v6 = a2 + 72 * (*((unsigned __int8 *)a1 + 56) + 1LL),
          v7 = *(__int64 ***)(v6 + 8),
          *v7 != (__int64 *)v6) )
    {
      __fastfail(3u);
    }
    *a1 = v6;
    a1[1] = (__int64)v7;
    *v7 = a1;
    *(_QWORD *)(v6 + 8) = a1;
    v2 = *((_DWORD *)a1 + 25);
  }
  result = (unsigned int)(v2 - 1);
  *((_DWORD *)a1 + 25) = result;
  return result;
}
