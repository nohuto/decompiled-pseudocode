/*
 * XREFs of MiApplyDynamicRelocations @ 0x1409EFFD8
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1409EFDA4 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrApplyDynamicRelocations @ 0x1401878F0 (LdrApplyDynamicRelocations.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x140642BE0 (MiCaptureDynamicRelocationTableRva.c)
 *     VslApplyDynamicRelocations @ 0x140A39718 (VslApplyDynamicRelocations.c)
 */

__int64 __fastcall MiApplyDynamicRelocations(char *BaseAddress, __int64 Size, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  NTSTATUS v8; // eax
  unsigned int *v9; // rcx
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-38h]
  int NtHeader; // [rsp+40h] [rbp-18h] BYREF
  unsigned int *v15; // [rsp+48h] [rbp-10h] BYREF

  v5 = a3;
  v6 = Size;
  if ( (MiFlags & 0x8000) != 0 )
    return VslApplyDynamicRelocations(BaseAddress, a3, a4);
  LOWORD(a3) = 10;
  LOBYTE(Size) = 1;
  v8 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, Size, a3, (__int64)&NtHeader, &v15);
  v9 = v15;
  if ( v8 < 0 )
    v9 = 0LL;
  if ( !v9 || NtHeader != *v9 )
    return 0LL;
  result = MiCaptureDynamicRelocationTableRva(BaseAddress, v6, 0LL, 523, (__int64)v9, *v9, (PIMAGE_NT_HEADERS)&NtHeader);
  if ( (int)result >= 0 )
    return LdrApplyDynamicRelocations((__int64)BaseAddress, &BaseAddress[NtHeader], v11, v12, v13, v5, a4);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  return result;
}
