/*
 * XREFs of RealInternalRemoveProp @ 0x1C0011370
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C000F498 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     UserGlobalAtomTableCallout @ 0x1C000F4C4 (UserGlobalAtomTableCallout.c)
 *     _FindProp @ 0x1C001140C (_FindProp.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C0087F80 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall RealInternalRemoveProp(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  __int16 v6; // r10d^2
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  result = FindProp(a1, a2, a3);
  v7 = result;
  if ( result )
  {
    v8 = *(_QWORD *)result;
    if ( !v5 && ((*(_BYTE *)(result + 10) & 2) != 0 || v6 == 1) )
    {
      CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v11);
      v10 = UserGlobalAtomTableCallout();
      if ( v10 )
        UserDeleteAtomFromAtomTable(v10, *(unsigned __int16 *)(v7 + 8));
    }
    v9 = 2LL * (unsigned int)--*(_DWORD *)(a1 + 4);
    *(_OWORD *)v7 = *(_OWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 4) + 8);
    *(_QWORD *)(a1 + 8 * v9 + 8) = 0LL;
    *(_QWORD *)(a1 + 8 * v9 + 16) = 0LL;
    return v8;
  }
  return result;
}
