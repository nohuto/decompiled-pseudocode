/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C0107E10
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C0107AB0 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C026FF74 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
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
  struct _FONTHASH **v11; // rcx
  unsigned __int64 v12; // r15
  int v13; // r9d
  struct _FONTHASH *v14; // rbx
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rax
  UINT32 cData; // r10d
  unsigned int v24; // edi
  int v25; // [rsp+30h] [rbp-A1h] BYREF
  int v26; // [rsp+34h] [rbp-9Dh]
  unsigned int v27; // [rsp+38h] [rbp-99h]
  void *v28; // [rsp+40h] [rbp-91h]
  __int64 v29; // [rsp+48h] [rbp-89h] BYREF
  struct _EPROCESS *CurrentProcess; // [rsp+50h] [rbp-81h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-41h] BYREF
  int *v33; // [rsp+B0h] [rbp-21h]
  int v34; // [rsp+B8h] [rbp-19h]
  int v35; // [rsp+BCh] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-11h] BYREF

  *a4 = 0;
  v25 = 0;
  v9 = a6;
  *a5 = 0;
  v27 = a3;
  v10 = a2;
  v28 = a7;
  if ( (_DWORD)a2 )
    memset(a6, 0, 8LL * (unsigned int)a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(a1, &ApcState);
  v29 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v11 = gpPFTPublic;
  v12 = 0LL;
  v26 = 0;
  if ( !*((_DWORD *)gpPFTPublic + 6) )
    goto LABEL_14;
  v13 = v25;
  do
  {
    if ( ((v13 + 0x80000000) & 0x80000000) == 0 && v13 != -1073741789 )
      break;
    v14 = v11[v12 + 5];
    if ( !v14 )
      goto LABEL_13;
    v12 = (unsigned __int64)v28;
    while ( ((v13 + 0x80000000) & 0x80000000) != 0 || v13 == -1073741789 )
    {
      v15 = *((_DWORD *)v14 + 13);
      if ( (v15 & 8) != 0 || (v15 & 0x200) != 0 )
        goto LABEL_11;
      if ( ++*a4 == -1 )
        goto LABEL_24;
      v18 = *((_DWORD *)v14 + 8);
      v19 = -1;
      v20 = v18 + *a5;
      if ( v20 >= v18 )
        v19 = v18 + *a5;
      *a5 = v19;
      if ( v20 < v18 )
      {
LABEL_24:
        v13 = -1073741675;
        v25 = -1073741675;
      }
      if ( !v10 || v13 < 0 )
        goto LABEL_11;
      v21 = *a4;
      if ( *a4 > v10 || *a5 > v27 )
      {
        v13 = -1073741789;
        v25 = -1073741789;
      }
      if ( v13 < 0 )
        goto LABEL_11;
      v25 = PffDuplicateFileHandle(v14, CurrentProcess, a1, &a6[v21 - 1]);
      v13 = v25;
      if ( v25 < 0 )
      {
        if ( hProvider <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
          goto LABEL_11;
        v35 = 0;
        v33 = &v25;
        v22 = *((_QWORD *)v14 + 25);
        v34 = 4;
        TlgCreateWsz(&pDesc, *(LPCWSTR *)(*(_QWORD *)v22 + 80LL));
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9C72, 0LL, 0LL, cData, &pData);
      }
      else
      {
        memmove((void *)v12, *(const void **)(**((_QWORD **)v14 + 25) + 80LL), 2LL * *((unsigned int *)v14 + 8));
        v12 += 2LL * *((unsigned int *)v14 + 8);
      }
      v13 = v25;
LABEL_11:
      v14 = (struct _FONTHASH *)*((_QWORD *)v14 + 1);
      if ( !v14 )
        break;
    }
    v28 = (void *)v12;
    LODWORD(v12) = v26;
LABEL_13:
    v11 = gpPFTPublic;
    v12 = (unsigned int)(v12 + 1);
    v26 = v12;
  }
  while ( (unsigned int)v12 < *((_DWORD *)gpPFTPublic + 6) );
LABEL_14:
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
  KeUnstackDetachProcess(&ApcState);
  v16 = v25;
  if ( v25 < 0 )
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
      v16 = v25;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
  return v16;
}
