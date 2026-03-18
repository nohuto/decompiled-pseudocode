/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C010C570
 * Callers:
 *     vCleanupPrivateFonts @ 0x1C00CB5D0 (vCleanupPrivateFonts.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C010C4C0 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  struct PFF *result; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  struct PFF **v9; // rbx
  struct PFF *i; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct PFF *v13; // rdx
  _QWORD v14[30]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v15[16]; // [rsp+118h] [rbp+10h] BYREF
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF

  result = (struct PFF *)&retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v7 = 0;
    v8 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v8 = 20LL;
    v7 = 128;
  }
  memset(v15, 0, 0x38uLL);
  memset(v14, 0, 0xE8uLL);
  HIDWORD(v14[6]) = 0x10000;
  v15[3] = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  result = (struct PFF *)v15;
  v14[18] = v15;
  if ( a3 )
    *a3 = 0;
  v9 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  if ( (_DWORD)v8 )
  {
    do
    {
      for ( i = *v9; ; i = (struct PFF *)*((_QWORD *)v13 + 1) )
      {
        result = SkipInvalidPff(i);
        v13 = result;
        if ( !result )
          break;
        if ( a2 != 1 )
          goto LABEL_13;
        v11 = *((_DWORD *)result + 13);
        if ( (v11 & 0x400) == 0 )
          continue;
        if ( (v11 & 0x800) != 0 )
        {
          *((_DWORD *)v13 + 13) = v11 & 0xFFFFF7FF;
        }
        else
        {
LABEL_13:
          v14[2] = v13;
          v14[1] = *((_QWORD *)v13 + 1);
          *((_QWORD *)v13 + 1) = v14;
          if ( v14[1] )
            *(_QWORD *)(v14[1] + 16LL) = v14;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse(a1, v13, v9, v7) )
          {
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
            if ( a3 )
              ++*a3;
          }
          GreAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
          if ( *v9 == (struct PFF *)v14 )
            *v9 = (struct PFF *)v14[1];
          v12 = v14[2];
          if ( v14[2] )
          {
            *(_QWORD *)(v14[2] + 8LL) = v14[1];
            v12 = v14[2];
          }
          if ( v14[1] )
            *(_QWORD *)(v14[1] + 16LL) = v12;
          v13 = (struct PFF *)v14;
        }
      }
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
