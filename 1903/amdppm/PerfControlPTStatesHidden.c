/*
 * XREFs of PerfControlPTStatesHidden @ 0x1C00095A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfControlPTStatesHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // r8
  int v7; // esi
  unsigned int v8; // esi
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 result; // rax

  if ( a4 && a3 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v5 + 72) )
    {
      v6 = (_QWORD *)(*(_QWORD *)(v5 + 56) + 32LL * *(unsigned int *)(v5 + 68));
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v5 + 16))(
        *(unsigned int *)(*(_QWORD *)a1 + 80LL),
        *(_QWORD *)(v5 + 48),
        *v6,
        v6[1],
        0);
    }
    v7 = *(_DWORD *)(v5 + 68);
    if ( v7 )
    {
      v8 = v7 - 1;
      v9 = (_QWORD *)(*(_QWORD *)(v5 + 56) + 32LL * v8);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v5 + 24))(
        *(unsigned int *)(*(_QWORD *)a1 + 80LL),
        *(_QWORD *)(v5 + 40),
        *v9,
        v9[1],
        0);
    }
    else
    {
      v8 = 0;
    }
    v10 = *(_QWORD *)(v5 + 56) + 32LL * v8;
    *(_DWORD *)(a1 + 16) = v8;
    *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v10 + 25);
    result = *(unsigned __int8 *)(v10 + 24);
    *(_DWORD *)(a1 + 12) = result;
  }
  return result;
}
