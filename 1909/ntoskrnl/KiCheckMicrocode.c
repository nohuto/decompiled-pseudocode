/*
 * XREFs of KiCheckMicrocode @ 0x14059E9CC
 * Callers:
 *     KiRestoreFeatureBits @ 0x14015FBB8 (KiRestoreFeatureBits.c)
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall KiCheckMicrocode(__int64 a1)
{
  unsigned int v8; // r10d
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  void *v11; // r11
  __int64 v12; // rdx
  char *i; // rcx
  ULONG_PTR v14; // rdx
  __int64 v15; // rcx

  LOBYTE(_RAX) = 0;
  if ( KiMicrocodeTrackerEnabled )
  {
    if ( !KiBootProcessorsStarted
      || (LOBYTE(_RAX) = KiBootProcessorCount, *(_DWORD *)(a1 + 36) < (unsigned int)KiBootProcessorCount) )
    {
      LOBYTE(_RAX) = *(_BYTE *)(a1 + 141);
      if ( (_BYTE)_RAX == 1 )
      {
        v11 = 0LL;
        v10 = __readmsr(0x8Bu);
        _RAX = 1LL;
        __asm { cpuid }
        v8 = (unsigned int)_RAX;
      }
      else
      {
        if ( (_BYTE)_RAX != 2 )
          return (char)_RAX;
        __writemsr(0x8Bu, 0LL);
        _RAX = 1LL;
        __asm { cpuid }
        v8 = _RAX;
        v9 = __readmsr(0x8Bu);
        v10 = HIDWORD(v9);
        _RAX = (void *)__readmsr(0x17u);
        v11 = _RAX;
      }
      v12 = 0LL;
      for ( i = (char *)&unk_140572B34; ; i += 24 )
      {
        if ( !*((_DWORD *)i - 1) )
        {
          v15 = 3 * v12;
          _RAX = &KiMicrocodeTracker;
          *((_DWORD *)&KiMicrocodeTracker + 2 * v15) = 1;
          *((_DWORD *)&KiMicrocodeTracker + 2 * v15 + 1) = v8;
          *((_QWORD *)&KiMicrocodeTracker + v15 + 1) = v11;
          *((_DWORD *)&KiMicrocodeTracker + 2 * v15 + 4) = v10;
          return (char)_RAX;
        }
        if ( *(_DWORD *)i == v8 && *(void **)(i + 4) == v11 )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= 4 )
          return (char)_RAX;
      }
      _RAX = &KiMicrocodeTracker;
      v14 = *((unsigned int *)&KiMicrocodeTracker + 6 * v12 + 4);
      if ( (_DWORD)v14 != v10 )
        KeBugCheckEx(0x17Eu, v8, v14, v10, *(unsigned int *)(a1 + 36));
    }
  }
  return (char)_RAX;
}
