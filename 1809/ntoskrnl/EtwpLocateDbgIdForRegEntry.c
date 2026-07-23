/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x1406BB350
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x14012F740 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x14027B3DC (VslGetEtwDebugId.c)
 *     EtwpFindDebugId @ 0x1406BB490 (EtwpFindDebugId.c)
 *     MmGetImageBase @ 0x1406BB644 (MmGetImageBase.c)
 *     EtwpGetImageSize @ 0x1407107D0 (EtwpGetImageSize.c)
 */

NTSTATUS __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, void **a3, unsigned int *a4)
{
  void *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS result; // eax
  ULONGLONG v10; // rdx
  NTSTATUS v11; // [rsp+20h] [rbp-28h]
  PVOID BaseOfImage; // [rsp+28h] [rbp-20h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+30h] [rbp-18h] BYREF
  ULONGLONG Size; // [rsp+58h] [rbp+10h] BYREF

  BaseOfImage = 0LL;
  Size = 0LL;
  v7 = *(void **)(a2 + 88);
  if ( !v7 )
    return -1073741503;
  if ( !a1 )
  {
    RtlPcToFileHeader(v7, &BaseOfImage);
    if ( !BaseOfImage )
      return -1073741275;
LABEL_5:
    result = RtlImageNtHeaderEx(1u, (PVOID)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL), Size, &NtHeader);
    v11 = result;
    if ( result >= 0 )
    {
      v10 = Size;
      if ( !Size )
      {
        result = EtwpGetImageSize(NtHeader, &Size);
        v11 = result;
        v10 = Size;
      }
      if ( result >= 0 )
      {
        if ( a1 == 1
          && v10
          && ((unsigned __int64)BaseOfImage + v10 > 0x7FFFFFFF0000LL || (char *)BaseOfImage + v10 < BaseOfImage) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v10 = Size;
        }
        return EtwpFindDebugId(BaseOfImage, v10, a3, a4, v11);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), a3, a4);
  result = MmGetImageBase(v7, &BaseOfImage, &Size);
  if ( result >= 0 )
    goto LABEL_5;
  return result;
}
