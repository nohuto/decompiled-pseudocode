/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C02565E8
 * Callers:
 *     GreChangeGhostFont @ 0x1C0260404 (GreChangeGhostFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012618C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(struct PFT **const *this, void *a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  unsigned int v8; // r14d
  unsigned int CurrentThreadId; // r15d
  unsigned int v10; // r9d
  __int64 v11; // r10
  struct PFF **v12; // rcx
  struct PFF *i; // rcx
  struct PFF *v14; // rax
  struct PFF *v15; // r11
  struct PFF *v16; // r8
  __int64 j; // rcx
  int v18; // edx
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (unsigned int)a2;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v22 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  GetPFFFromId(gpPFTPrivate, v5, 0LL);
  v10 = 0;
  v11 = 5LL;
  do
  {
    if ( v3 )
      break;
    v12 = &(*this)[v11];
    if ( v12 )
    {
      for ( i = *v12; ; i = (struct PFF *)*((_QWORD *)v16 + 1) )
      {
        v14 = SkipInvalidPff(i);
        v16 = v14;
        if ( !v14 )
          break;
        if ( v15 == v14 )
        {
          for ( j = *((_QWORD *)v14 + 18); j; j = *(_QWORD *)(j + 16) )
          {
            v18 = *(_DWORD *)(j + 8);
            v19 = *(_DWORD *)(j + 12);
            if ( (v18 & 4) != 0 )
              v20 = v19 == CurrentThreadId;
            else
              v20 = v19 == v8;
            if ( v20 )
            {
              v21 = *(_DWORD *)(j + 4);
              if ( a3 )
              {
                v3 = 1;
                *(_DWORD *)(j + 4) = v21 + 1;
                *(_DWORD *)(j + 8) = v18 | 0x40;
                goto LABEL_22;
              }
              if ( v21 )
              {
                *(_DWORD *)(j + 4) = v21 - 1;
                *(_DWORD *)(j + 8) = v18 & 0xFFFFFFBF;
              }
              break;
            }
          }
        }
      }
    }
LABEL_22:
    ++v10;
    ++v11;
  }
  while ( v10 < 0x14 );
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  return v3;
}
