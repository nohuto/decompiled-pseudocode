/*
 * XREFs of _HampConnectionDeliverPayload@12 @ 0x10006C20
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

BOOLEAN __stdcall HampConnectionDeliverPayload(int a1, int *P, int a3)
{
  __int64 v3; // rax
  int v4; // ecx
  BOOLEAN result; // al
  struct _PEB *v6; // eax
  _DWORD v7[16]; // [esp+8h] [ebp-40h] BYREF

  v3 = P[8];
  v4 = P[8];
  if ( a3 )
  {
    LODWORD(v3) = a3;
    *(_DWORD *)(a3 + 8) = v4;
    *(_DWORD *)(a3 + 12) = HIDWORD(v3);
  }
  else
  {
    v7[0] = P[6];
    v7[1] = P[7];
    LODWORD(v3) = v7;
    memset(&v7[5], 0, 44);
    v7[2] = v4;
    v7[3] = HIDWORD(v3);
    v7[4] = 3;
  }
  result = (*(int (__thiscall **)(_DWORD, _DWORD))(a1 + 44))(*(_DWORD *)(a1 + 44), v3);
  if ( !a3 )
  {
    v6 = NtCurrentPeb();
    P[6] = -1;
    P[7] = -1;
    return RtlFreeHeap(v6->ProcessHeap, 0, P);
  }
  return result;
}
