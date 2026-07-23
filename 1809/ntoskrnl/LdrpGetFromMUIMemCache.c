/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1400F4300
 * Callers:
 *     LdrpGetRcConfig @ 0x1400F3FB0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F40EC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x14071C424 (LdrResGetRCConfig.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     LdrpInitMuiCrits @ 0x1400F44B8 (LdrpInitMuiCrits.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // di
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r13
  int i; // r8d
  __int64 v11; // rcx
  ULONG v12; // edx
  char v14; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v14 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v9 = RtlImageNtHeader((PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v9 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    v11 = (__int64)i << 6;
    if ( *(_QWORD *)((char *)AlternateResourceModules + v11 + 8) == DllHandle )
    {
      if ( *(_DWORD *)((char *)AlternateResourceModules + v11 + 24) != v9->OptionalHeader.CheckSum )
      {
        v14 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)((char *)AlternateResourceModules + v11 + 16) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 8 * (__int64)i + 2);
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v14 = 1;
            v8 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)((char *)AlternateResourceModules + v11) == a2 )
      {
        v8 = *(_DWORD **)((char *)AlternateResourceModules + v11 + 32);
        if ( a3 )
          *a3 = *(_QWORD *)((char *)AlternateResourceModules + v11 + 48);
        break;
      }
    }
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  if ( v14 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, v12);
  return v8;
}
