/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x1C0009670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbp
  int v9; // edx
  _QWORD *v10; // r8
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  __int64 v15; // [rsp+50h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 32LL * (unsigned int)*a2;
  v15 = *a2;
  v8 = *(_QWORD *)(v6 + 56);
  v9 = *(unsigned __int8 *)(v7 + v8 + 25);
  if ( *(_DWORD *)(a1 + 8) != v9 )
  {
    v10 = 0LL;
    if ( v9 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 72) )
        goto LABEL_10;
      v12 = *(unsigned int *)(v6 + 68);
    }
    else
    {
      v11 = *(_DWORD *)(v6 + 68);
      if ( !v11 )
        goto LABEL_10;
      v12 = (unsigned int)(v11 - 1);
    }
    v10 = (_QWORD *)(v8 + 32 * v12);
LABEL_10:
    if ( v10 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)a1 + 80LL);
      if ( *((_BYTE *)v10 + 25) == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 24))(
          v13,
          *(_QWORD *)(v6 + 40),
          *v10,
          v10[1],
          HIDWORD(v5));
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 16))(
          v13,
          *(_QWORD *)(v6 + 48),
          *v10,
          v10[1],
          HIDWORD(v5));
      LOBYTE(v9) = *(_BYTE *)(v7 + v8 + 25);
    }
  }
  v14 = *(_DWORD *)(*(_QWORD *)a1 + 80LL);
  if ( (_BYTE)v9 == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 24))(
      v14,
      *(_QWORD *)(v6 + 40),
      *(_QWORD *)(v7 + v8),
      *(_QWORD *)(v7 + v8 + 8),
      HIDWORD(v15));
  else
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 16))(
      v14,
      *(_QWORD *)(v6 + 48),
      *(_QWORD *)(v7 + v8),
      *(_QWORD *)(v7 + v8 + 8),
      HIDWORD(v15));
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v7 + v8 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v7 + v8 + 24);
}
