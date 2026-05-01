/*
 * XREFs of RmpClientSubscriptionDeliverPayload @ 0x180006730
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RmpClientSubscriptionDeliverPayload(__int64 a1, __int64 a2, int *a3)
{
  int *v5; // rdx
  int v6; // eax
  __int64 (__fastcall *v7)(int *); // rax
  int v8; // ecx
  __int64 (__fastcall *v9)(int *); // rax
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]

  if ( a3 )
  {
    v5 = a3;
  }
  else
  {
    memset_0(&v11, 0, 0x38uLL);
    v8 = *(_DWORD *)(a2 + 56);
    v11 = v8;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        memset_0(&v12, 0, 0x30uLL);
        v12 = *(_QWORD *)(a2 + 64);
        v13 = *(_QWORD *)(a2 + 48);
        v14 = *(_QWORD *)(a2 + 80);
        v15 = 0;
      }
    }
    else
    {
      v14 = 0LL;
      v12 = *(_QWORD *)(a2 + 48);
      v13 = *(_QWORD *)(a2 + 80);
    }
    v5 = &v11;
  }
  v6 = *v5;
  if ( *v5 )
  {
    if ( v6 == 1 )
    {
      v7 = *(__int64 (__fastcall **)(int *))(a2 + 72);
      *((_QWORD *)v5 + 3) = *(_QWORD *)(a2 + 80);
      LOBYTE(v6) = v7(v5 + 2);
    }
  }
  else
  {
    v9 = *(__int64 (__fastcall **)(int *))(a2 + 72);
    *((_QWORD *)v5 + 2) = *(_QWORD *)(a2 + 80);
    LOBYTE(v6) = v9(v5 + 2);
  }
  if ( !a3 )
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a2);
  return v6;
}
