/*
 * XREFs of ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00D8EC8
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCu.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00DBFCC (xxxUpdateSystemIconsFromRegistry.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D92A4 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 */

void __fastcall zzzSetSystemImage(struct tagCURSOR *a1, struct tagCURSOR *a2)
{
  __int64 v2; // r12
  struct tagCURSOR *v5; // rdi
  int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rbx
  int v9; // ecx
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 i; // rax
  struct tagCURSOR *v19; // rdi
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // r15
  __int64 v23; // rbx

  v2 = *((_QWORD *)a1 + 3);
  if ( v2 )
  {
    v5 = a1;
    do
    {
      if ( (*((_DWORD *)v5 + 20) & 8) != 0 )
      {
        v6 = 0;
        if ( *((int *)v5 + 22) > 0 )
        {
          v7 = 0LL;
          do
          {
            v8 = *(_QWORD *)(v7 + *((_QWORD *)v5 + 12));
            HMChangeOwnerPheProcess(
              gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v8,
              gptiRit);
            *(_QWORD *)(v8 + 24) = 0LL;
            v7 += 8LL;
            ++v6;
          }
          while ( v6 < *((_DWORD *)v5 + 22) );
        }
      }
      if ( v5 == a1 )
      {
        if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
        {
          if ( *((_QWORD *)v5 + 11) )
          {
            GreDecQuotaCount(*((_QWORD *)v5 + 3));
            GreIncQuotaCount(*(_QWORD *)(gptiRit + 424LL));
          }
          if ( *((_QWORD *)v5 + 12) )
          {
            GreDecQuotaCount(*((_QWORD *)v5 + 3));
            GreIncQuotaCount(*(_QWORD *)(gptiRit + 424LL));
          }
          if ( *((_QWORD *)v5 + 16) )
          {
            GreDecQuotaCount(*((_QWORD *)v5 + 3));
            GreIncQuotaCount(*(_QWORD *)(gptiRit + 424LL));
          }
        }
      }
      else
      {
        HMChangeOwnerPheProcess(
          gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v5,
          gptiRit);
        *((_QWORD *)v5 + 3) = 0LL;
      }
      v5 = (struct tagCURSOR *)*((_QWORD *)v5 + 5);
    }
    while ( v5 );
  }
  v9 = *((_DWORD *)a1 + 37);
  v10 = *(_OWORD *)((char *)a1 + 84);
  v11 = *(_OWORD *)((char *)a1 + 100);
  v12 = *(_OWORD *)((char *)a1 + 116);
  v13 = *(_OWORD *)((char *)a1 + 132);
  *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a2 + 84);
  *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a2 + 100);
  *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a2 + 116);
  *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a2 + 132);
  *((_DWORD *)a1 + 37) = *((_DWORD *)a2 + 37);
  *(_OWORD *)((char *)a2 + 84) = v10;
  *(_OWORD *)((char *)a2 + 100) = v11;
  *(_OWORD *)((char *)a2 + 116) = v12;
  *(_OWORD *)((char *)a2 + 132) = v13;
  *((_DWORD *)a2 + 37) = v9;
  v14 = *((_DWORD *)a1 + 20);
  *((_DWORD *)a1 + 20) = v14 ^ (*((_DWORD *)a2 + 20) ^ v14) & 8;
  *((_DWORD *)a2 + 20) ^= (*((_DWORD *)a2 + 20) ^ v14) & 8;
  v15 = *((_DWORD *)a2 + 19);
  *((_DWORD *)a2 + 19) = *((_DWORD *)a1 + 19);
  *((_DWORD *)a1 + 19) = v15;
  v16 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = *((_QWORD *)a2 + 5);
  v17 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 5) = v16;
  while ( v17 )
  {
    *(_QWORD *)(v17 + 48) = a2;
    v17 = *(_QWORD *)(v17 + 40);
  }
  for ( i = *((_QWORD *)a1 + 6); i; i = *(_QWORD *)(i + 40) )
    *(_QWORD *)(i + 48) = a1;
  if ( v2 )
  {
    v19 = a1;
    do
    {
      if ( v19 == a1 )
      {
        if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
        {
          if ( *((_QWORD *)v19 + 11) )
          {
            GreDecQuotaCount(*(_QWORD *)(gptiRit + 424LL));
            GreIncQuotaCount(*((_QWORD *)v19 + 3));
          }
          if ( *((_QWORD *)v19 + 12) )
          {
            GreDecQuotaCount(*(_QWORD *)(gptiRit + 424LL));
            GreIncQuotaCount(*((_QWORD *)v19 + 3));
          }
          if ( *((_QWORD *)v19 + 16) )
          {
            GreDecQuotaCount(*(_QWORD *)(gptiRit + 424LL));
            GreIncQuotaCount(*((_QWORD *)v19 + 3));
          }
        }
      }
      else
      {
        HMChangeOwnerPheProcess(
          gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v19,
          gptiCurrent);
        *((_QWORD *)v19 + 3) = PsGetCurrentProcessWin32Process(v20);
      }
      if ( (*((_DWORD *)v19 + 20) & 8) != 0 )
      {
        v21 = 0;
        if ( *((int *)v19 + 22) > 0 )
        {
          v22 = 0LL;
          do
          {
            v23 = *(_QWORD *)(v22 + *((_QWORD *)v19 + 12));
            HMChangeOwnerPheProcess(
              gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v23,
              gptiCurrent);
            v22 += 8LL;
            ++v21;
            *(_QWORD *)(v23 + 24) = *((_QWORD *)v19 + 3);
          }
          while ( v21 < *((_DWORD *)v19 + 22) );
        }
      }
      v19 = (struct tagCURSOR *)*((_QWORD *)v19 + 5);
    }
    while ( v19 );
    zzzFixupGlobalCursorWhenChanged(a1);
    _DestroyCursor(a1, 2LL);
  }
  zzzFixupGlobalCursorWhenChanged(a2);
}
