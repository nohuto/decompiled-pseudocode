/*
 * XREFs of PerfControlPTStates @ 0x1C00094A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStates(__int64 a1, __int64 *a2, char a3, char a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (__fastcall **v15)(__int64, _QWORD, _QWORD, _QWORD); // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+50h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *a2;
  v8 = *(_QWORD *)(v6 + 56);
  v9 = v8 + 32LL * (unsigned int)*a2;
  v17 = *a2;
  v10 = *(unsigned __int8 *)(v9 + 25);
  if ( *(_DWORD *)(a1 + 8) == v10 )
    goto LABEL_15;
  if ( v10 == 1 )
  {
    if ( !*(_DWORD *)(v6 + 72) )
      goto LABEL_15;
    v12 = *(_DWORD *)(v6 + 68);
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 68);
    if ( !v11 )
      goto LABEL_15;
    v12 = v11 - 1;
  }
  v13 = v8 + 32LL * v12;
  if ( !v13 )
  {
LABEL_15:
    if ( a3 )
    {
      if ( *(_BYTE *)(v9 + 25) == 1 )
      {
        v16 = *(_QWORD *)(v6 + 40);
      }
      else
      {
        v16 = *(_QWORD *)(v6 + 48);
        v6 += 8LL;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v6)(
        v16,
        *(_QWORD *)v9,
        *(_QWORD *)(v9 + 8),
        HIDWORD(v17));
    }
    goto LABEL_20;
  }
  if ( a3 )
  {
    if ( *(_BYTE *)(v13 + 25) == 1 )
    {
      v14 = *(_QWORD *)(v6 + 40);
      v15 = (void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))v6;
    }
    else
    {
      v14 = *(_QWORD *)(v6 + 48);
      v15 = (void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v6 + 8);
    }
    (*v15)(v14, *(_QWORD *)v13, *(_QWORD *)(v13 + 8), HIDWORD(v7));
    goto LABEL_15;
  }
LABEL_20:
  *(_DWORD *)(a1 + 16) = v7;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v9 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v9 + 24);
}
