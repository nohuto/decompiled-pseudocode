/*
 * XREFs of ViKeWaitSanityChecks @ 0x14093C3CC
 * Callers:
 *     ViKeWaitForMultipleObjectsCommon @ 0x14093C230 (ViKeWaitForMultipleObjectsCommon.c)
 *     ViKeWaitForSingleObjectCommon @ 0x14093C318 (ViKeWaitForSingleObjectCommon.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400CAC00 (RtlpGetStackLimits.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140927400 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViKeWaitSanityChecks(
        unsigned int a1,
        ULONG_PTR *a2,
        char a3,
        _QWORD *a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned __int8 result; // al
  __int64 v8; // r12
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rbp
  ULONG_PTR v13; // r14
  int v14; // esi
  __int64 v15; // rdi
  ULONG_PTR v16; // rbx
  ULONG_PTR v17; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v18[4]; // [rsp+38h] [rbp-20h] BYREF

  result = MmVerifierData;
  v8 = a1;
  if ( (MmVerifierData & 0x400000) != 0 && (MmVerifierData & 2) == 0 && (MmVerifierData & 0x800) == 0 )
    return result;
  if ( a6 > 2u )
  {
    v11 = 288LL;
    goto LABEL_11;
  }
  if ( a6 == 2 )
  {
    if ( !a4 )
    {
      v11 = 289LL;
      goto LABEL_11;
    }
    if ( *a4 )
    {
      v11 = 290LL;
LABEL_11:
      if ( (MmVerifierData & 2) != 0 )
        result = VerifierBugCheckIfAppropriate(0xC4u, v11, a6, *a2, (__int64)a4);
    }
  }
  if ( a3 == 1 && (!a4 || *a4) && a5 )
  {
    result = RtlpGetStackLimits((__int64)v18, (__int64)&v17);
    v12 = v17;
    v13 = v18[0];
    v14 = result;
  }
  else
  {
    v14 = 0;
    v13 = 0LL;
    v12 = 0LL;
  }
  if ( (_DWORD)v8 )
  {
    v15 = v8;
    do
    {
      v16 = *a2;
      result = VfUtilSynchronizationObjectSanityChecks((PVOID)*a2, 1uLL);
      if ( (MmVerifierData & 0x800) != 0 && v14 && v16 >= v13 && v16 < v12 )
        result = VerifierBugCheckIfAppropriate(0xC4u, 0x123uLL, v16, 0LL, 0LL);
      ++a2;
      --v15;
    }
    while ( v15 );
  }
  return result;
}
