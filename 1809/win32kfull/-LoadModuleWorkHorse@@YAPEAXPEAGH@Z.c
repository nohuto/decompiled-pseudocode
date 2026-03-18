/*
 * XREFs of ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C026DABC
 * Callers:
 *     EngLoadModule @ 0x1C026E680 (EngLoadModule.c)
 *     EngLoadModuleForWrite @ 0x1C026E6A0 (EngLoadModuleForWrite.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x1C026D9F4 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     bMapFile @ 0x1C026EB48 (bMapFile.c)
 *     MakeSystemRelativePath @ 0x1C02BF714 (MakeSystemRelativePath.c)
 */

__int64 __fastcall LoadModuleWorkHorse(char *Source, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v8; // r15
  char *v9; // rax
  char *v10; // rbx
  char *v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  signed __int64 v14; // rdx
  __int16 v15; // ax
  char *v16; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1LL;
  v3 = 0LL;
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)&Source[2 * result] );
  if ( result )
  {
    if ( a2 || (result = (__int64)GetModuleHandleAndIncrementRefcount((wchar_t *)Source), (v3 = result) == 0) )
    {
      while ( *(_WORD *)&Source[2 * v2++ + 2] != 0 )
        ;
      v8 = (2 * (_DWORD)v2 + 9) & 0xFFFFFFF8;
      if ( (unsigned int)MakeSystemRelativePath((PCWSTR)Source, &Destination) )
      {
        v9 = (char *)PALLOCMEM2((unsigned int)(v8 + 104), 1818846791LL, 1);
        v10 = v9;
        if ( v9 )
        {
          v11 = &v9[v8];
          if ( (unsigned int)bMapFile(Destination.Buffer, &v9[v8 + 24], a2, 0LL) )
          {
            v12 = (unsigned __int64)(unsigned int)v8 >> 1;
            v3 = (__int64)(v11 + 24);
            if ( a2 )
            {
              if ( v12 )
              {
                v13 = 2147483646 - v12;
                v14 = (char *)&pwsz - v10;
                do
                {
                  if ( !(v13 + v12) )
                    break;
                  v15 = *(_WORD *)&v10[v14];
                  if ( !v15 )
                    break;
                  *(_WORD *)v10 = v15;
                  v10 += 2;
                  --v12;
                }
                while ( v12 );
                v16 = v10 - 2;
                if ( v12 )
                  v16 = v10;
                *(_WORD *)v16 = 0;
              }
            }
            else
            {
              StringCchCopyW(v10, v12, Source);
            }
            *((_DWORD *)v11 + 4) = 1;
            *((_DWORD *)v11 + 5) = v8 + 24;
            if ( GreEngLoadModuleAllocListLock )
              GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
            Blink = GreEngLoadModuleAllocList.Blink;
            if ( Blink->Flink != GreEngLoadModuleAllocList.Flink )
              __fastfail(3u);
            *(_QWORD *)v11 = GreEngLoadModuleAllocList.Flink;
            *((_QWORD *)v11 + 1) = Blink;
            Blink->Flink = (struct _LIST_ENTRY *)v11;
            GreEngLoadModuleAllocList.Blink = (struct _LIST_ENTRY *)v11;
            if ( GreEngLoadModuleAllocListLock )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
              GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
            }
          }
          else
          {
            Win32FreePool(v10);
          }
        }
        Win32FreePool(Destination.Buffer);
      }
      return v3;
    }
  }
  return result;
}
