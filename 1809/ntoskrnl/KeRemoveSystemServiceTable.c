/*
 * XREFs of KeRemoveSystemServiceTable @ 0x140844640
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1
    && ((_QWORD)xmmword_14055A8A0 || (_QWORD)xmmword_1405429A0 || (_QWORD)xmmword_1405429E0) )
  {
    if ( a1 == 1 )
    {
      *(_QWORD *)&xmmword_1405429A0 = 0LL;
      LODWORD(xmmword_1405429B0) = 0;
      *((_QWORD *)&xmmword_1405429B0 + 1) = 0LL;
    }
    else
    {
      v3 = 2LL * (unsigned int)(a1 - 1);
      *(_QWORD *)&KeServiceDescriptorTableFilter[v3] = 0LL;
      LODWORD(KeServiceDescriptorTableFilter[v3 + 1]) = 0;
      *((_QWORD *)&KeServiceDescriptorTableFilter[v3 + 1] + 1) = 0LL;
    }
    return 1;
  }
  return 0;
}
