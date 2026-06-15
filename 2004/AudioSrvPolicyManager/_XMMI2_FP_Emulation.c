/*
 * XREFs of _XMMI2_FP_Emulation @ 0x180037AE0
 * Callers:
 *     sub_180037338 @ 0x180037338 (sub_180037338.c)
 * Callees:
 *     sub_180037780 @ 0x180037780 (sub_180037780.c)
 *     sub_18003785C @ 0x18003785C (sub_18003785C.c)
 *     sub_180037938 @ 0x180037938 (sub_180037938.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall XMMI2_FP_Emulation(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  char v4; // r14
  void *v5; // rbx
  void *v6; // rsi
  _QWORD *v7; // r15
  unsigned __int8 (__fastcall ***v8)(_QWORD, __int64); // r12
  HANDLE ProcessHeap; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  HANDLE v12; // rax
  HANDLE v13; // rax
  HANDLE v14; // rax
  HANDLE v15; // rax
  HANDLE v16; // rax
  LPVOID lpMem; // [rsp+20h] [rbp-40h] BYREF
  LPVOID v19; // [rsp+28h] [rbp-38h] BYREF
  LPVOID v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  _QWORD v22[3]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h] BYREF

  v21 = a2;
  sub_180037780(&v20);
  sub_18003785C(&v19);
  sub_180037938(&lpMem);
  v3 = v20;
  v4 = 0;
  v5 = v19;
  if ( v20 && v19 )
  {
    v6 = lpMem;
    if ( lpMem )
    {
      v22[0] = v20;
      v7 = v22;
      v22[1] = v19;
      v22[2] = lpMem;
      while ( 1 )
      {
        v8 = (unsigned __int8 (__fastcall ***)(_QWORD, __int64))*v7;
        if ( *(_DWORD *)(a1 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7) )
        {
          if ( (**v8)(v8, v21) )
            break;
        }
        if ( ++v7 == &v23 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v6);
          v10 = GetProcessHeap();
          HeapFree(v10, 0, v5);
          goto LABEL_15;
        }
      }
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v6);
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v5);
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v3);
      return 1;
    }
  }
  else if ( lpMem )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, lpMem);
  }
  if ( v5 )
  {
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v5);
  }
  if ( v3 )
  {
LABEL_15:
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v3);
  }
  return v4;
}
