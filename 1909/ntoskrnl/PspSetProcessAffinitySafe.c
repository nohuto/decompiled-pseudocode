/*
 * XREFs of PspSetProcessAffinitySafe @ 0x1408C6858
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140687CF4 (PspApplyJobLimitsToProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1408C6A60 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeIsSubsetAffinityEx @ 0x1402A4C00 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall PspSetProcessAffinitySafe(__int64 a1, char a2, unsigned __int16 *a3, __int64 *a4, int *a5)
{
  int v9; // ebp
  int v10; // edi
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  char v13; // si
  __int64 v14; // rbx
  int v15; // eax
  _QWORD v17[22]; // [rsp+20h] [rbp-F8h] BYREF

  memset(v17, 0, 0xA8uLL);
  v9 = 0;
  v10 = 1;
  if ( a4 )
  {
    LODWORD(v17[0]) = 1310721;
    memset((char *)v17 + 4, 0, 0xA4uLL);
    v11 = *((_WORD *)a4 + 4);
    v12 = *a4;
    if ( v11 )
      LOWORD(v17[0]) = v11 + 1;
    a3 = (unsigned __int16 *)v17;
    v13 = 1;
    v17[v11 + 1] |= v12;
  }
  else
  {
    v13 = 0;
    if ( (a2 & 2) != 0 )
      v13 = 2;
  }
  if ( (a2 & 1) != 0 || (*(_DWORD *)(a1 + 1788) & 0x1000) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 952);
    if ( v14 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v14 + 56), 1u);
      v15 = *(_DWORD *)(v14 + 848);
      if ( (v15 & 0x10) != 0
        && ((v15 & 0x4000) == 0 || !(unsigned int)KeIsSubsetAffinityEx(a3, (unsigned __int16 *)(v14 + 616))) )
      {
        v10 = 0;
        goto LABEL_16;
      }
    }
  }
  v9 = KeSetAffinityProcess(a1, v13, a3);
LABEL_16:
  if ( v14 )
    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
  if ( v9 >= 0 )
    *a5 = v10;
  return (unsigned int)v9;
}
