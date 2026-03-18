/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C014ED50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001D10 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001C2F4 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001C33C (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int i; // esi
  int VidPnSourceOwnerType; // ebp
  __int64 v9; // rcx
  const struct tagRECT *ContentRect; // rax
  int v11; // edx
  __int64 v12; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rax
  struct tagRECT v16; // [rsp+20h] [rbp-38h]
  _BYTE v17[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v18; // [rsp+38h] [rbp-20h]
  char v19; // [rsp+40h] [rbp-18h]

  v18 = a1;
  v19 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v6 = *((_QWORD *)a1 + 319);
    for ( i = 0; i < *(_DWORD *)(v6 + 80); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v6, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)a1 + 319), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v9 = *((_QWORD *)a1 + 319);
        if ( *(_QWORD *)(3968LL * i + *(_QWORD *)(v9 + 112) + 712) == *(_QWORD *)a2 )
        {
          ContentRect = ADAPTER_DISPLAY::GetContentRect((DXGADAPTER **)v9, i);
          v11 = a2[2];
          v16 = *ContentRect;
          if ( ContentRect->left <= v11 && v16.right >= v11 )
          {
            v12 = a2[3];
            if ( v16.top <= (int)v12 && v16.bottom >= (int)v12 )
            {
              if ( a2[4] != -1 )
              {
                v15 = WdLogNewEntry5_WdAssertion(HIDWORD(*(_QWORD *)&v16.left), v12);
                *(_QWORD *)(v15 + 24) = 9684LL;
                WdLogEvent5_WdAssertion(v15);
              }
              a2[4] = i;
              *(_QWORD *)(a2 + 5) = *(_QWORD *)((char *)a1 + 276);
              a2[7] = VidPnSourceOwnerType;
            }
          }
        }
      }
      v6 = *((_QWORD *)a1 + 319);
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
    v14[3] = a1;
    v14[4] = *((int *)a1 + 70);
    v14[5] = *((unsigned int *)a1 + 69);
  }
  if ( v19 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  return 0LL;
}
