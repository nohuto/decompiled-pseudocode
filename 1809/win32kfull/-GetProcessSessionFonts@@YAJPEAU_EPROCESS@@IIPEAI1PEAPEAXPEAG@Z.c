/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00CC230
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C00C98B0 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C0256968 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        struct _EPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  void **v9; // r14
  unsigned int v10; // esi
  struct _FONTHASH **v11; // rdx
  unsigned __int64 v12; // r15
  int v13; // r9d
  unsigned int v14; // r8d
  struct PFF *v15; // rbx
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rax
  UINT32 cData; // r10d
  unsigned int v23; // ebx
  unsigned int v24; // edi
  int v26; // [rsp+30h] [rbp-A1h] BYREF
  int v27; // [rsp+34h] [rbp-9Dh]
  unsigned int v28; // [rsp+38h] [rbp-99h]
  void *v29; // [rsp+40h] [rbp-91h]
  __int64 v30; // [rsp+48h] [rbp-89h] BYREF
  struct _EPROCESS *CurrentProcess; // [rsp+50h] [rbp-81h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-41h] BYREF
  int *v34; // [rsp+B0h] [rbp-21h]
  int v35; // [rsp+B8h] [rbp-19h]
  int v36; // [rsp+BCh] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-11h] BYREF

  *a4 = 0;
  v26 = 0;
  v9 = a6;
  *a5 = 0;
  v28 = a3;
  v10 = a2;
  v29 = a7;
  if ( (_DWORD)a2 )
    memset(a6, 0, 8LL * (unsigned int)a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  KeStackAttachProcess(a1, &ApcState);
  v30 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v11 = gpPFTPublic;
  v12 = 0LL;
  v27 = 0;
  if ( *((_DWORD *)gpPFTPublic + 6) )
  {
    v13 = v26;
    v14 = 0x80000000;
    do
    {
      if ( ((v13 + v14) & v14) == 0 && v13 != -1073741789 )
        break;
      v15 = SkipInvalidPff(v11[v12 + 5]);
      if ( v15 )
      {
        v12 = (unsigned __int64)v29;
        do
        {
          if ( ((v13 + v14) & v14) == 0 && v13 != -1073741789 )
            break;
          v16 = *((_DWORD *)v15 + 13);
          if ( (v16 & 8) == 0 && (v16 & 0x200) == 0 )
          {
            if ( ++*a4 == -1 )
              goto LABEL_17;
            v17 = *((_DWORD *)v15 + 8);
            v18 = -1;
            v19 = v17 + *a5;
            if ( v19 >= v17 )
              v18 = v17 + *a5;
            *a5 = v18;
            if ( v19 < v17 )
            {
LABEL_17:
              v13 = -1073741675;
              v26 = -1073741675;
            }
            if ( v10 && v13 >= 0 )
            {
              v20 = *a4;
              if ( *a4 > v10 || *a5 > v28 )
              {
                v13 = -1073741789;
                v26 = -1073741789;
              }
              if ( v13 >= 0 )
              {
                v26 = PffDuplicateFileHandle(v15, CurrentProcess, a1, &a6[v20 - 1]);
                if ( v26 < 0 )
                {
                  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
                  {
                    v36 = 0;
                    v34 = &v26;
                    v21 = *((_QWORD *)v15 + 25);
                    v35 = 4;
                    TlgCreateWsz(&pDesc, *(LPCWSTR *)(*(_QWORD *)v21 + 80LL));
                    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D7002, 0LL, 0LL, cData, &pData);
                  }
                }
                else
                {
                  memmove(
                    (void *)v12,
                    *(const void **)(**((_QWORD **)v15 + 25) + 80LL),
                    2LL * *((unsigned int *)v15 + 8));
                  v12 += 2LL * *((unsigned int *)v15 + 8);
                }
              }
            }
          }
          v15 = SkipInvalidPff(*((struct PFF **)v15 + 1));
        }
        while ( v15 );
        v29 = (void *)v12;
        LODWORD(v12) = v27;
      }
      v11 = gpPFTPublic;
      v12 = (unsigned int)(v12 + 1);
      v27 = v12;
    }
    while ( (unsigned int)v12 < *((_DWORD *)gpPFTPublic + 6) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v30);
  KeUnstackDetachProcess(&ApcState);
  v23 = v26;
  if ( v26 < 0 )
  {
    v24 = 0;
    if ( v10 )
    {
      do
      {
        if ( !*v9 )
          break;
        NtClose(*v9);
        ++v24;
        ++v9;
      }
      while ( v24 < v10 );
      v23 = v26;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v30);
  return v23;
}
