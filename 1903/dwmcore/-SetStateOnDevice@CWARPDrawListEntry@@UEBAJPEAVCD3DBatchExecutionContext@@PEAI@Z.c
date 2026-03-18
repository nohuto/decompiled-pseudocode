/*
 * XREFs of ?SetStateOnDevice@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801BB3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWARPDrawListEntry::SetStateOnDevice(
        CWARPDrawListEntry *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 7) )
  {
    v9[0] = (*(__int64 (__fastcall **)(_QWORD, struct CD3DBatchExecutionContext *, unsigned int *))(**((_QWORD **)this + 8)
                                                                                                  + 32LL))(
              *((_QWORD *)this + 8),
              a2,
              a3);
    v3 = 1;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DBatchExecutionContext *, unsigned int *))(**((_QWORD **)this + 18)
                                                                                               + 32LL))(
           *((_QWORD *)this + 18),
           a2,
           a3);
    v7 = v3++;
    v9[v7] = v6;
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(**((_QWORD **)a2 + 2) + 64LL))(
      *((_QWORD *)a2 + 2),
      0LL,
      v3,
      v9);
  return 0LL;
}
