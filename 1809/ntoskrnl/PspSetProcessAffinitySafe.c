/*
 * XREFs of PspSetProcessAffinitySafe @ 0x140889074
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140604550 (PspApplyJobLimitsToProcess.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x14088926C (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeAndAffinityEx @ 0x1400DC6E0 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14018A2D0 (KeIsEqualAffinityEx.c)
 *     KeSetAffinityProcess @ 0x140190494 (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall PspSetProcessAffinitySafe(__int64 a1, char a2, unsigned __int16 *a3, __int64 *a4, int *a5)
{
  int v5; // esi
  int v10; // edi
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  char v13; // bp
  __int64 v14; // rbx
  int v15; // eax
  _DWORD v17[44]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int16 v18[88]; // [rsp+D0h] [rbp-F8h] BYREF

  v5 = 0;
  v10 = 1;
  if ( a4 )
  {
    v17[0] = 1310721;
    memset(&v17[1], 0, 0xA4uLL);
    v11 = *((_WORD *)a4 + 4);
    v12 = *a4;
    if ( v11 )
      LOWORD(v17[0]) = v11 + 1;
    a3 = (unsigned __int16 *)v17;
    v13 = 1;
    *(_QWORD *)&v17[2 * v11 + 2] |= v12;
  }
  else
  {
    v13 = 0;
    if ( (a2 & 2) != 0 )
      v13 = 2;
  }
  if ( (a2 & 1) != 0 || (*(_DWORD *)(a1 + 1740) & 0x1000) != 0 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 944);
    if ( v14 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v14 + 56), 1u);
      v15 = *(_DWORD *)(v14 + 848);
      if ( (v15 & 0x10) != 0 )
      {
        if ( (v15 & 0x4000) == 0
          || (KeAndAffinityEx(a3, (unsigned __int16 *)(v14 + 616), v18), !(unsigned int)KeIsEqualAffinityEx(a3, v18)) )
        {
          v10 = 0;
          goto LABEL_16;
        }
      }
    }
  }
  v5 = KeSetAffinityProcess(a1, v13, a3);
LABEL_16:
  if ( v14 )
    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
  if ( v5 >= 0 )
    *a5 = v10;
  return (unsigned int)v5;
}
