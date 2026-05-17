/*
 * XREFs of LdrGetDllHandleByName @ 0x18007B6C0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180026B34 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFatalExceptionFilter @ 0x1800D78AC (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(_WORD *a1, unsigned __int16 *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rdx
  int LoadedDllByName; // ebx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (__int64)&v10, &v11);
  if ( LoadedDllByName >= 0 )
  {
    if ( v11 < 7 )
    {
      LoadedDllByName = -1073741515;
      v8 = v10;
    }
    else
    {
      v8 = v10;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v10, v4, v6, v7);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v8 + 48);
    }
    LdrpDereferenceModule(v8);
  }
  return (unsigned int)LoadedDllByName;
}
