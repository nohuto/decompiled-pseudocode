/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C007D960
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1C010A140 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1C023F21C (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        struct _EPROCESS *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  int v7; // ebx
  void **v10; // r14
  unsigned int v11; // esi
  struct _FONTHASH **v12; // rcx
  __int64 i; // rbp
  struct _FONTHASH *j; // rdi
  int v15; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rcx
  unsigned int k; // edi
  __int64 v24; // [rsp+30h] [rbp-88h] BYREF
  struct _EPROCESS *CurrentProcess; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v7 = 0;
  *a4 = 0;
  v10 = a6;
  *a5 = 0;
  v11 = a2;
  if ( (_DWORD)a2 )
    memset(a6, 0, 8LL * (unsigned int)a2);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, a2);
  KeStackAttachProcess(a1, &ApcState);
  v24 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)gpPFTPublic + 6); i = (unsigned int)(i + 1) )
  {
    for ( j = v12[i + 5]; j; j = (struct _FONTHASH *)*((_QWORD *)j + 1) )
    {
      v15 = *((_DWORD *)j + 13);
      if ( (v15 & 8) == 0 && (v15 & 0x200) == 0 )
      {
        if ( *a4 == -1 )
          goto LABEL_24;
        v17 = *((_DWORD *)j + 8);
        v18 = -1;
        v19 = v17 + *a5;
        if ( v19 >= v17 )
          v18 = v17 + *a5;
        *a5 = v18;
        if ( v19 < v17 )
        {
LABEL_24:
          v7 = -1073741675;
          break;
        }
        v20 = *a4;
        *a4 = v20 + 1;
        if ( v7 != -1073741789 )
        {
          if ( (int)v20 + 1 > v11 || *a5 > a3 )
          {
            if ( v11 )
              v7 = -1073741789;
          }
          else
          {
            v7 = PffDuplicateFileHandle(j, CurrentProcess, a1, &a6[v20]);
            if ( v7 < 0 )
              break;
            memmove(a7, *(const void **)(**((_QWORD **)j + 25) + 80LL), 2LL * *((unsigned int *)j + 8));
            a7 += *((unsigned int *)j + 8);
          }
        }
      }
    }
    v12 = gpPFTPublic;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  KeUnstackDetachProcess(&ApcState);
  if ( v7 < 0 )
  {
    for ( k = 0; k < v11; ++v10 )
    {
      if ( !*v10 )
        break;
      NtClose(*v10);
      ++k;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  return (unsigned int)v7;
}
