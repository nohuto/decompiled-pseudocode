/*
 * XREFs of SepCreateAccessStateFromSubjectContext @ 0x14003AE60
 * Callers:
 *     SeCreateAccessStateFromSubjectContext @ 0x1405B1E60 (SeCreateAccessStateFromSubjectContext.c)
 *     NtOpenProcessTokenEx @ 0x1405CFA00 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 *     SeCreateAccessStateEx @ 0x140672F30 (SeCreateAccessStateEx.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlMapGenericMask @ 0x140601F00 (RtlMapGenericMask.c)
 */

__int64 __fastcall SepCreateAccessStateFromSubjectContext(
        _OWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        ACCESS_MASK a4,
        PGENERIC_MAPPING GenericMapping)
{
  PGENERIC_MAPPING v5; // rbp
  ACCESS_MASK v6; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  ACCESS_MASK AccessMask; // [rsp+58h] [rbp+20h] BYREF

  v5 = GenericMapping;
  v6 = a4;
  AccessMask = a4;
  if ( (a4 & 0xF0000000) != 0 && GenericMapping )
  {
    RtlMapGenericMask(&AccessMask, GenericMapping);
    v6 = AccessMask;
  }
  memset(a2, 0, 0xA0uLL);
  memset(a3, 0, 0xE0uLL);
  a2[9] = a3;
  *((_OWORD *)a2 + 2) = *a1;
  *((_OWORD *)a2 + 3) = a1[1];
  v10 = a2[4];
  if ( v10 )
    v11 = a2[4];
  else
    v11 = a2[6];
  if ( (*(_DWORD *)(v11 + 64) & *(_DWORD *)(v11 + 72) & 0x800000) != 0 )
    *((_DWORD *)a2 + 3) = 1;
  if ( !v10 )
    v10 = a2[6];
  *((_DWORD *)a2 + 3) |= *(_DWORD *)(v10 + 200) & 0x810;
  *((_DWORD *)a2 + 4) = v6;
  *((_DWORD *)a2 + 6) = v6;
  *a3 = a2 + 10;
  *a2 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = 0LL;
  if ( v5 )
    *(GENERIC_MAPPING *)(a3 + 1) = *v5;
  return result;
}
