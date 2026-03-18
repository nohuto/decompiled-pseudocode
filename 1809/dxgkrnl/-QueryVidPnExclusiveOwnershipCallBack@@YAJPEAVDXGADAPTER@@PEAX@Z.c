/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C013DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001B880 (-GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001B8C8 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *a1, char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int i; // esi
  int VidPnSourceOwnerType; // ebp
  __int64 v11; // rcx
  const struct tagRECT *ContentRect; // rax
  int v13; // edx
  int v14; // edx
  _QWORD *v16; // rax
  __int64 v17; // rax
  struct tagRECT v18; // [rsp+20h] [rbp-38h]
  _BYTE v19[8]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v20; // [rsp+38h] [rbp-20h]
  char v21; // [rsp+40h] [rbp-18h]

  v20 = a1;
  v21 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  if ( *((_DWORD *)a1 + 44) == 1 )
  {
    v8 = *((_QWORD *)a1 + 315);
    for ( i = 0; i < *(_DWORD *)(v8 + 80); ++i )
    {
      VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)v8, i);
      if ( ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(*((DXGADAPTER ***)a1 + 315), i) )
        VidPnSourceOwnerType = 4;
      if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 2 )
      {
        v11 = *((_QWORD *)a1 + 315);
        if ( *(_QWORD *)(3760LL * i + *(_QWORD *)(v11 + 112) + 712) == *(_QWORD *)a2 )
        {
          ContentRect = ADAPTER_DISPLAY::GetContentRect((DXGADAPTER **)v11, i);
          v13 = *((_DWORD *)a2 + 2);
          v18 = *ContentRect;
          if ( ContentRect->left <= v13 && v18.right >= v13 )
          {
            v14 = *((_DWORD *)a2 + 3);
            if ( v18.top <= v14 && v18.bottom >= v14 )
            {
              if ( *((_DWORD *)a2 + 4) != -1 )
              {
                v17 = WdLogNewEntry5_WdAssertion(HIDWORD(*(_QWORD *)&v18.left));
                *(_QWORD *)(v17 + 24) = 8961LL;
                WdLogEvent5_WdAssertion(v17);
              }
              *((_DWORD *)a2 + 4) = i;
              *(_QWORD *)(a2 + 20) = *(_QWORD *)((char *)a1 + 276);
              *((_DWORD *)a2 + 7) = VidPnSourceOwnerType;
            }
          }
        }
      }
      v8 = *((_QWORD *)a1 + 315);
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    v16[3] = a1;
    v16[4] = *((int *)a1 + 70);
    v16[5] = *((unsigned int *)a1 + 69);
  }
  if ( v21 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
  return 0LL;
}
