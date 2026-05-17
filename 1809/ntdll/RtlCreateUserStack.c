/*
 * XREFs of RtlCreateUserStack @ 0x180077CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x180028AB0 (RtlImageNtHeader.c)
 *     RtlFreeUserStack @ 0x180081530 (RtlFreeUserStack.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1800A0660 (NtSetInformationProcess.c)
 */

__int64 __fastcall RtlCreateUserStack(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r12
  struct _PEB *v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  int v22; // esi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 MinimumStackCommit; // [rsp+40h] [rbp-68h]
  _DWORD v27[4]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  __int64 v30; // [rsp+68h] [rbp-40h]
  __int64 v33; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v34; // [rsp+C8h] [rbp+20h] BYREF

  v33 = a3;
  v6 = HIBYTE(a4);
  v7 = a4 & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(a4) > 0x40u )
    return 3221225485LL;
  if ( !v7 )
    return 3221225485LL;
  v8 = a5;
  if ( !a5 || a5 < v7 )
    return 3221225485LL;
  v9 = 3 * v7;
  v10 = NtCurrentPeb();
  v11 = a1;
  v12 = a2;
  if ( !a1 || !a2 )
  {
    v13 = RtlImageNtHeader((unsigned __int64)v10->ImageBaseAddress);
    if ( !v13 )
      return 3221225595LL;
    if ( !a1 )
      v11 = *(_QWORD *)(v13 + 104);
    if ( !a2 )
      v12 = *(_QWORD *)(v13 + 96);
    a3 = v33;
  }
  if ( !v11 )
    v11 = 0x4000LL;
  if ( v11 >= v12 )
    v12 = (v11 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v15 = ~(v7 - 1);
  v16 = v15 & (v7 + v11 - 1);
  v17 = ~(v8 - 1);
  v18 = v17 & (v8 + v12 - 1);
  MinimumStackCommit = v10->MinimumStackCommit;
  if ( MinimumStackCommit && v16 < MinimumStackCommit )
  {
    v16 = v15 & (v7 + MinimumStackCommit - 1);
    v18 = v17 & (((v16 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL) + v8 - 1);
  }
  v27[0] = v6;
  v27[1] = 0;
  v27[3] = 0;
  v27[2] = 0;
  v28 = v18;
  v29 = a3;
  result = NtSetInformationProcess(-1LL, 41LL, v27);
  if ( (int)result >= 0 )
  {
    v19 = a6;
    *a6 = 0LL;
    v19[1] = 0LL;
    v20 = v30;
    v19[4] = v30;
    v19[2] = v20 + v18;
    v34 = v18 + v20 - v16;
    v21 = v18 - v16;
    v24 = v16;
    v22 = ZwAllocateVirtualMemory(-1LL, &v34, 0LL, &v24, 4096, 4);
    if ( v22 < 0
      || (v23 = v34, v19[3] = v34, v21 >= v9)
      && (v34 = v23 - v9, v25 = v9, v22 = ZwAllocateVirtualMemory(-1LL, &v34, 0LL, &v25, 4096, 260), v22 < 0) )
    {
      RtlFreeUserStack(v19[4]);
      return (unsigned int)v22;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
