/*
 * XREFs of NtUserfnINOUTNCCALCSIZE @ 0x1C0102910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTNCCALCSIZE(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rdi
  _OWORD *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  _OWORD v14[7]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+B8h] [rbp-50h]

  memset((char *)&v14[3] + 8, 0, 0x38uLL);
  memset(v14, 0, 0x28uLL);
  v10 = 0LL;
  v15 = 0uLL;
  if ( a3 )
  {
    if ( a4 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = *(_OWORD *)a4;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 48) = *(_QWORD *)(a4 + 48);
    *(_OWORD *)((char *)&v14[3] + 8) = *(_OWORD *)a4;
    *(_OWORD *)((char *)&v14[4] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v14[5] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v14[6] + 1) = *(_QWORD *)(a4 + 48);
    v12 = *((_QWORD *)&v14[6] + 1);
    if ( *((_QWORD *)&v14[6] + 1) >= MmUserProbeAddress )
    {
      *(_DWORD *)MmUserProbeAddress = 0;
      v12 = *((_QWORD *)&v14[6] + 1);
    }
    *(_OWORD *)v12 = *(_OWORD *)v12;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(v12 + 16);
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(v12 + 32);
    v10 = *((_QWORD *)&v14[6] + 1);
    v14[0] = **((_OWORD **)&v14[6] + 1);
    v14[1] = *(_OWORD *)(*((_QWORD *)&v14[6] + 1) + 16LL);
    *(_QWORD *)&v14[2] = *(_QWORD *)(*((_QWORD *)&v14[6] + 1) + 32LL);
    *((_QWORD *)&v14[6] + 1) = v14;
  }
  else
  {
    v11 = (_OWORD *)a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v15 = *(_OWORD *)a4;
  }
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3);
  if ( a3 )
  {
    *(_OWORD *)a4 = *(_OWORD *)((char *)&v14[3] + 8);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)((char *)&v14[4] + 8);
    *(_OWORD *)(a4 + 32) = *(_OWORD *)((char *)&v14[5] + 8);
    *(_QWORD *)(a4 + 48) = v10;
    *(_OWORD *)v10 = v14[0];
    *(_OWORD *)(v10 + 16) = v14[1];
    *(_QWORD *)(v10 + 32) = *(_QWORD *)&v14[2];
  }
  else
  {
    *(_OWORD *)a4 = v15;
  }
  return result;
}
