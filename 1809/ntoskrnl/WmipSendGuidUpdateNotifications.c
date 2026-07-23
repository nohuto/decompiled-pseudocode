/*
 * XREFs of WmipSendGuidUpdateNotifications @ 0x140709350
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x1407090E8 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1408B5B08 (WmipUpdateDataSource.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 */

void __fastcall WmipSendGuidUpdateNotifications(unsigned int a1, unsigned int a2, _OWORD **a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  unsigned int v7; // edi
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r15
  __int64 v10; // rdx
  _WORD *v11; // rax
  __int16 v12; // cx
  __int64 v13; // rax
  char *v14; // rcx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  __int128 v17; // [rsp+20h] [rbp-28h]

  v3 = a2;
  *(_QWORD *)&v17 = 0x11D0E777B48D49A1LL;
  v6 = 16 * a2 + 8;
  *((_QWORD *)&v17 + 1) = 0x102906C9A0000CA5LL;
  v7 = 16 * a2 + 110;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v7, 0x70696D57u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    memset(v9, 0, 0x30uLL);
    *v9 = v7;
    v9[11] = 10;
    *(_OWORD *)(v9 + 6) = v17;
    v9[12] = 64;
    v9[14] = 96;
    v10 = 14LL;
    v9[15] = v6;
    *((_WORD *)v9 + 32) = 28;
    v11 = (_WORD *)v9 + 33;
    while ( v10 != -2147483632 )
    {
      v12 = *(_WORD *)((char *)v11 + (char *)L"REGUPDATEINFO" - ((char *)v9 + 66));
      if ( !v12 )
        break;
      *v11++ = v12;
      if ( !--v10 )
      {
        --v11;
        break;
      }
    }
    *v11 = 0;
    v13 = v9[14];
    v14 = (char *)v9 + v13 + 8;
    *(unsigned int *)((char *)v9 + v13) = a1;
    *(unsigned int *)((char *)v9 + v13 + 4) = v3;
    if ( (_DWORD)v3 )
    {
      v15 = v3;
      do
      {
        v16 = *a3;
        v14 += 16;
        a3 += 2;
        *((_OWORD *)v14 - 1) = *v16;
        --v15;
      }
      while ( v15 );
    }
    WmipProcessEvent(v9, 1, 0);
    ExFreePoolWithTag(v9, 0);
  }
}
