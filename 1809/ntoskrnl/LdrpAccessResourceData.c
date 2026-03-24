/*
 * XREFs of LdrpAccessResourceData @ 0x14067BCE8
 * Callers:
 *     RtlFindMessage @ 0x14067BDD0 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x140756B30 (LdrAccessResource.c)
 *     RtlLoadString @ 0x140891B90 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2C40 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetImageSize @ 0x1400F37C4 (LdrpGetImageSize.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F449C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14067AC98 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(
        unsigned __int64 BaseAddress,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  PVOID v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned int *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  v7 = (PVOID)BaseAddress;
  if ( !BaseAddress || !a2 )
    return 3221225485LL;
  if ( BYTE2(PnpShutdownEvent.Limit) == 1 )
  {
    v8 = BaseAddress & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = (unsigned int *)RtlImageDirectoryEntryToData((PVOID)BaseAddress, 1u, 2u, &v15);
    if ( !v9 )
      return 3221225609LL;
    if ( a2 < v9 )
      goto LABEL_10;
    result = LdrpGetImageSize((__int64)v7, &v13);
    if ( (_DWORD)result == -1073741701 )
      return result;
    if ( v13 && ((unsigned __int64)a2 < v8 || (unsigned __int64)a2 >= v8 + v13) )
    {
LABEL_10:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx((__int64)v7, v10, (__int64)a2, v14);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        v7 = (PVOID)AlternateResourceModuleHandle;
    }
  }
  return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
}
