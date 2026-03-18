/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C01150F4
 * Callers:
 *     vCleanupPrivateFonts @ 0x1C00482E0 (vCleanupPrivateFonts.c)
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C0115044 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0049F60 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

int __fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  struct PFF **v9; // rbx
  struct PFF *i; // rcx
  __int64 v11; // rcx
  _QWORD v13[28]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v14[16]; // [rsp+108h] [rbp+0h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  v3 = &retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (int)v3;
    v7 = 0;
    v8 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v8 = 20LL;
    v7 = 128;
  }
  memset(v14, 0, 0x38uLL);
  memset(v13, 0, sizeof(v13));
  v14[3] = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v3 = v14;
  v13[18] = v14;
  if ( a3 )
    *a3 = 0;
  v9 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  if ( (_DWORD)v8 )
  {
    do
    {
      for ( i = *v9; i; i = (struct PFF *)*((_QWORD *)i + 1) )
      {
        if ( a2 != 1 )
          goto LABEL_17;
        LODWORD(v3) = *((_DWORD *)i + 13);
        if ( ((unsigned __int16)v3 & 0x400) == 0 )
          continue;
        if ( ((unsigned __int16)v3 & 0x800) != 0 )
        {
          LODWORD(v3) = (unsigned int)v3 & 0xFFFFF7FF;
          *((_DWORD *)i + 13) = (_DWORD)v3;
        }
        else
        {
LABEL_17:
          v13[2] = i;
          v13[1] = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v13;
          if ( v13[1] )
            *(_QWORD *)(v13[1] + 16LL) = v13;
          if ( (unsigned int)PFTOBJ::bUnloadWorkhorse(a1, i, v9, v7) )
          {
            GreQuerySystemTime(&PFTOBJ::FontChangeTime);
            if ( a3 )
              ++*a3;
          }
          GreAcquireSemaphore(ghsemPublicPFT);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
          if ( *v9 == (struct PFF *)v13 )
            *v9 = (struct PFF *)v13[1];
          v11 = v13[2];
          if ( v13[2] )
          {
            *(_QWORD *)(v13[2] + 8LL) = v13[1];
            v11 = v13[2];
          }
          LODWORD(v3) = v13[1];
          if ( v13[1] )
            *(_QWORD *)(v13[1] + 16LL) = v11;
          i = (struct PFF *)v13;
        }
      }
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  return (int)v3;
}
