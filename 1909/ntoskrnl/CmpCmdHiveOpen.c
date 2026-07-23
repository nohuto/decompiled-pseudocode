/*
 * XREFs of CmpCmdHiveOpen @ 0x14068367C
 * Callers:
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     CmLoadKey @ 0x14068BED4 (CmLoadKey.c)
 *     CmReplaceKey @ 0x140829094 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405DE460 (PsReferenceImpersonationTokenEx.c)
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 *     CmpInitHiveFromFile @ 0x140639858 (CmpInitHiveFromFile.c)
 *     RtlImpersonateSelfEx @ 0x1406DD81C (RtlImpersonateSelfEx.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        PCUNICODE_STRING Source,
        char a2,
        char *a3,
        ULONG_PTR *a4,
        unsigned int a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  BOOLEAN v13; // al
  int v14; // r10d
  BOOLEAN v15; // r14
  int v16; // ecx
  __int64 v17; // rbx
  int v18; // edx
  int v19; // ecx
  NTSTATUS inited; // eax
  NTSTATUS v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  void *v24; // rbx
  NTSTATUS v25; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v28; // [rsp+30h] [rbp-48h]
  int v29; // [rsp+30h] [rbp-48h]
  int v30; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+38h] [rbp-40h]
  int v32; // [rsp+50h] [rbp-28h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[3]; // [rsp+54h] [rbp-24h] BYREF

  v13 = IoSetThreadHardErrorMode(0);
  v14 = 0;
  v15 = v13;
  if ( (a6 & 1) != 0 )
  {
    v14 = 0x8000;
    if ( (a6 & 2) == 0 )
      v14 = 294912;
  }
  v16 = v14 | 0x80000;
  v17 = a7;
  if ( (a6 & 4) == 0 )
    v16 = v14;
  v18 = v16 | 0x108000;
  if ( (a6 & 8) == 0 )
    v18 = v16;
  v19 = v18 | 2;
  if ( (a5 & 0x20000000) == 0 )
    v19 = v18;
  v32 = v19;
  inited = CmpInitHiveFromFile(Source, v19, a4, a3, a5, a7, v28, v30, a8, a9);
  v21 = inited;
  if ( !v17 )
  {
    if ( inited == -1073741790
      || (v22 = inited + 1073741724, v22 <= 0xE) && (v23 = 17473, _bittest(&v23, v22))
      || v21 == -1073741421 )
    {
      if ( a2 && (a6 & 0x20) == 0 )
      {
        v24 = PsReferenceImpersonationTokenEx(
                (__int64)KeGetCurrentThread(),
                1,
                &a7,
                (bool *)&a6,
                (int *)ImpersonationLevel,
                0LL);
        v21 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
        if ( v21 >= 0 )
        {
          v25 = CmpInitHiveFromFile(Source, v32, a4, a3, a5, 0LL, v29, v31, a8, a9);
          CurrentThread = KeGetCurrentThread();
          v21 = v25;
          if ( v24 )
            PsImpersonateClient(CurrentThread, v24, a7, a6, ImpersonationLevel[0]);
          else
            PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        }
        if ( v24 )
          ObfDereferenceObject(v24);
      }
    }
  }
  IoSetThreadHardErrorMode(v15);
  return (unsigned int)v21;
}
