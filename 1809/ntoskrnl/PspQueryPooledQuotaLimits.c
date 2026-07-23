/*
 * XREFs of PspQueryPooledQuotaLimits @ 0x140889DA8
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PspQueryPooledQuotaLimits(ULONG_PTR a1, __int64 a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r9
  PVOID Object[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-58h]
  __int128 v20; // [rsp+60h] [rbp-48h]
  __int128 v21; // [rsp+70h] [rbp-38h]
  __int128 v22; // [rsp+80h] [rbp-28h]
  unsigned __int64 v23; // [rsp+90h] [rbp-18h]

  if ( a3 != 72 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 4096, (__int64)PsProcessType, a5, 0x79517350u, Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = (unsigned __int64 *)*((_QWORD *)Object[0] + 130);
    v9 = v8[24];
    v10 = v8[16];
    *((_QWORD *)&v19 + 1) = v10;
    v11 = v8[17];
    v12 = v8[8];
    v13 = *v8;
    *(_QWORD *)&v21 = *v8;
    v14 = v8[1];
    v15 = v8[40];
    v16 = v8[32];
    *((_QWORD *)&v22 + 1) = v16;
    v17 = v8[33];
    if ( v9 <= v10 )
      v9 = v10;
    *(_QWORD *)&v20 = v9;
    if ( v12 <= v13 )
      v12 = v13;
    *((_QWORD *)&v21 + 1) = v12;
    if ( v15 <= v16 )
      v15 = v16;
    v23 = v15;
    if ( v11 <= v10 )
      v11 = v10;
    *(_QWORD *)&v19 = v11;
    if ( v14 <= v13 )
      v14 = v13;
    *((_QWORD *)&v20 + 1) = v14;
    if ( v17 <= v16 )
      v17 = v16;
    *(_QWORD *)&v22 = v17;
    ObfDereferenceObjectWithTag(Object[0], 0x79517350u);
    *(_OWORD *)a2 = v19;
    *(_OWORD *)(a2 + 16) = v20;
    *(_OWORD *)(a2 + 32) = v21;
    *(_OWORD *)(a2 + 48) = v22;
    *(_QWORD *)(a2 + 64) = v23;
    if ( a4 )
      *a4 = 72;
    return 0LL;
  }
  return result;
}
