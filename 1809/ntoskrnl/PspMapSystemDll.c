/*
 * XREFs of PspMapSystemDll @ 0x1406779CC
 * Callers:
 *     PsMapSystemDlls @ 0x140677B90 (PsMapSystemDlls.c)
 *     PspLocateSystemDll @ 0x14075615C (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x1409DF584 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     RtlImageNtHeader @ 0x14009DAE0 (RtlImageNtHeader.c)
 *     MmMapViewOfSectionEx @ 0x1400F2918 (MmMapViewOfSectionEx.c)
 *     ZwSetInformationVirtualMemory @ 0x1401BB450 (ZwSetInformationVirtualMemory.c)
 *     PspReferenceSystemDll @ 0x140677B48 (PspReferenceSystemDll.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // edi
  PVOID v12; // rsi
  PIMAGE_NT_HEADERS v13; // rax
  unsigned __int64 ImageBase_high; // rcx
  __int64 v15; // [rsp+48h] [rbp-29h]
  PVOID BaseAddress; // [rsp+68h] [rbp-9h] BYREF
  __int64 v17; // [rsp+70h] [rbp-1h] BYREF
  __int64 v18; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v19[4]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v20[3]; // [rsp+A0h] [rbp+2Fh] BYREF

  v8 = PspReferenceSystemDll(a2);
  if ( !v8 )
    return 3221225473LL;
  BaseAddress = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v9 = 0LL;
  v19[1] = v20;
  v20[0] = 0LL;
  v20[2] = 0LL;
  v19[0] = 1LL;
  if ( (*(_BYTE *)(a2 + 16) & 8) == 0 )
    v9 = 0x7FFFFFFEFFFFLL;
  v20[1] = v9;
  v10 = MmMapViewOfSectionEx(
          v8,
          (int)a1,
          (int)&BaseAddress,
          (__int64)&v18,
          (__int64)&v17,
          a3 != 0 ? 0x20000000 : 0,
          4,
          v19,
          v15,
          0,
          0LL);
  ObFastDereferenceObject((signed __int64 *)a2, v8);
  if ( v10 != 1073741827 )
    goto LABEL_5;
  if ( a1 != PsInitialSystemProcess )
  {
    v10 = -1073741800;
LABEL_5:
    if ( (v10 & 0x80000000) != 0 )
      return v10;
  }
  if ( a4 )
  {
    v12 = BaseAddress;
    v10 = 0;
    v13 = RtlImageNtHeader(BaseAddress);
    if ( v13->OptionalHeader.Magic == 267 )
      ImageBase_high = HIDWORD(v13->OptionalHeader.ImageBase);
    else
      ImageBase_high = v13->OptionalHeader.ImageBase;
    *(_QWORD *)(a2 + 40) = ImageBase_high;
    *(_QWORD *)(a2 + 48) = v12;
    return v10;
  }
  if ( *(PVOID *)(a2 + 40) == BaseAddress )
  {
    v19[2] = BaseAddress;
    v19[3] = 4096LL;
    ZwSetInformationVirtualMemory(-1LL, 4LL, 1LL);
    return v10;
  }
  return 3221225473LL;
}
