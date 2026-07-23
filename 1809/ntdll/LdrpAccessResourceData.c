/*
 * XREFs of LdrpAccessResourceData @ 0x180014704
 * Callers:
 *     RtlFindMessage @ 0x18003A8D0 (RtlFindMessage.c)
 *     RtlLoadString @ 0x18003B5D0 (RtlLoadString.c)
 *     LdrAccessResource @ 0x180080A20 (LdrAccessResource.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18000A08C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetImageSize @ 0x18000A2D4 (LdrpGetImageSize.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E2828 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, ULONG *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int ImageSize; // ebp
  unsigned __int64 v13; // r15
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+8h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v8 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v17 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v17);
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((ULONG **)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    v13 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v14 = RtlpImageDirectoryEntryToDataEx(a1, 1, 2u, &v22, &v20);
    v16 = v20;
    if ( v14 < 0 )
      v16 = 0LL;
    if ( !v16 )
    {
      ImageSize = -1073741687;
      goto LABEL_11;
    }
    if ( (unsigned __int64)a2 < v16 )
      goto LABEL_30;
    ImageSize = LdrpGetImageSize(a1, &v19);
    if ( ImageSize == -1073741701 )
      goto LABEL_11;
    if ( v19 && ((unsigned __int64)a2 < v13 || (unsigned __int64)a2 >= v13 + v19) )
    {
LABEL_30:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v15, a2, &v21);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        a1 = AlternateResourceModuleHandle;
    }
  }
  ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, a3, a4);
LABEL_11:
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v10);
  }
  return ImageSize;
}
