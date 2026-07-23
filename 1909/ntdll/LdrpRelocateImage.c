/*
 * XREFs of LdrpRelocateImage @ 0x180082750
 * Callers:
 *     LdrpCompleteMapModule @ 0x18002A370 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpProtectAndRelocateImage @ 0x180082830 (LdrpProtectAndRelocateImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180082A08 (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpRelocateImage(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      353,
      (unsigned int)"LdrpRelocateImage",
      3,
      (__int64)"DLL name: %wZ\n",
      a4);
  v8 = 0;
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 )
    goto LABEL_11;
  v9 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 5u, &v15, v14);
  v10 = v14[0];
  if ( v9 < 0 )
    v10 = 0LL;
  if ( v10 && v15 )
  {
LABEL_11:
    v12 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 0xEu, &v15, v14);
    v13 = v14[0];
    if ( v12 < 0 )
      v13 = 0LL;
    if ( !v13 || v15 < 0x48 || (*(_BYTE *)(v13 + 16) & 1) == 0 )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
      v8 = LdrpProtectAndRelocateImage(BaseOfImage);
    }
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      393,
      (unsigned int)"LdrpRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n",
      v8);
  return v8;
}
