/*
 * XREFs of MiLoadImportDll @ 0x14071C8F8
 * Callers:
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiFreeDriverInitialization @ 0x1406C8A2C (MiFreeDriverInitialization.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 */

__int64 __fastcall MiLoadImportDll(__int64 a1, const UNICODE_STRING *a2, int a3, ULONG_PTR *a4, _QWORD *a5)
{
  char v6; // si
  int v7; // edi
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  char *v12; // [rsp+38h] [rbp-10h] BYREF

  v6 = a3;
  v7 = MmLoadSystemImageEx(a1, a2, 0LL, a3 | 8u, &BugCheckParameter2, &v12);
  if ( v7 >= 0 )
  {
    v8 = BugCheckParameter2;
    v9 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 104) |= 0x4000000u;
    v7 = MmCallDllInitialize(v9, &PsLoadedModuleList);
    if ( v7 < 0 )
    {
      MmUnloadSystemImage(v8);
    }
    else
    {
      if ( (v6 & 1) == 0 )
        MiFreeDriverInitialization(v8);
      *a4 = BugCheckParameter2;
      *a5 = v12;
    }
  }
  return (unsigned int)v7;
}
