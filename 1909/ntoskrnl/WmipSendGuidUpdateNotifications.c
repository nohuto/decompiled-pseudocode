/*
 * XREFs of WmipSendGuidUpdateNotifications @ 0x1407351F8
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140734FA8 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14077DAB4 (WmipUpdateDataSource.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x14071C3AC (WmipProcessEvent.c)
 */

void __fastcall WmipSendGuidUpdateNotifications(int a1, unsigned int a2, _OWORD **a3)
{
  __int64 v3; // rsi
  int v6; // r14d
  unsigned int v7; // r15d
  char *PoolWithTag; // rax
  char *v9; // rbx
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // r8
  _OWORD *v17; // rax
  __int128 v18; // [rsp+20h] [rbp-10h]

  v3 = a2;
  *(_QWORD *)&v18 = 0x11D0E777B48D49A1LL;
  v6 = 16 * a2 + 8;
  *((_QWORD *)&v18 + 1) = 0x102906C9A0000CA5LL;
  v7 = 16 * a2 + 110;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x70696D57u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *(_QWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 12) = 0LL;
    *((_DWORD *)v9 + 5) = 0;
    *((_DWORD *)v9 + 10) = 0;
    *(_DWORD *)v9 = v7;
    v10 = 14LL;
    *((_DWORD *)v9 + 11) = 10;
    *(_OWORD *)(v9 + 24) = v18;
    *((_DWORD *)v9 + 12) = 64;
    *((_DWORD *)v9 + 14) = 96;
    *((_DWORD *)v9 + 15) = v6;
    *((_WORD *)v9 + 32) = 28;
    v11 = v9 + 66;
    do
    {
      if ( v10 == -2147483632 )
        break;
      v12 = *(_WORD *)((char *)v11 + (char *)L"REGUPDATEINFO" - (v9 + 66));
      if ( !v12 )
        break;
      *v11++ = v12;
      --v10;
    }
    while ( v10 );
    v13 = v11 - 1;
    if ( v10 )
      v13 = v11;
    *v13 = 0;
    v14 = *((unsigned int *)v9 + 14);
    v15 = &v9[v14 + 8];
    *(_DWORD *)&v9[v14] = a1;
    *(_DWORD *)&v9[v14 + 4] = v3;
    if ( (_DWORD)v3 )
    {
      v16 = v3;
      do
      {
        v17 = *a3;
        a3 += 2;
        *(_OWORD *)v15 = *v17;
        v15 += 16;
        --v16;
      }
      while ( v16 );
    }
    WmipProcessEvent(v9, 1, 0);
    ExFreePoolWithTag(v9, 0);
  }
}
