/*
 * XREFs of BgpTxtCreateRegion @ 0x140990088
 * Callers:
 *     ResFwConfigureDisplayStringResources @ 0x14098E650 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x14098E6E4 (AnFwConfigureProgressResources.c)
 *     BgpDisplayCharacterGetContext @ 0x1409919C4 (BgpDisplayCharacterGetContext.c)
 * Callees:
 *     BgpGetResolution @ 0x14013DA0C (BgpGetResolution.c)
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1401793D0 (BgpFwAllocateMemory.c)
 *     BgpFoGetTextMetrics @ 0x1401795D4 (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x140179804 (BgpGxFillRectangle.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     BgpGxRectangleDestroy @ 0x14098F254 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x14099026C (BgpGxRectangleCreate.c)
 *     BgpFoGetFontHandle @ 0x1409902F4 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpTxtCreateRegion(_DWORD *a1, _DWORD *a2, _OWORD *a3, __int64 *a4, char a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  int FontHandle; // ebx
  void *Memory; // rax
  __int64 v11; // rdi
  _OWORD *v12; // rax
  unsigned int *v13; // r12
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  _OWORD *v25; // [rsp+A0h] [rbp+50h]
  __int64 *v26; // [rsp+A8h] [rbp+58h]

  v26 = a4;
  v25 = a3;
  v24 = 0LL;
  v5 = 0LL;
  *a4 = 0LL;
  v6 = 0LL;
  FontHandle = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v23 = *(_QWORD *)BgpGetResolution(&v22);
      if ( *a1 <= (unsigned int)v23 && a1[1] <= HIDWORD(v23) )
      {
        Memory = (void *)BgpFwAllocateMemory(0x48uLL);
        v11 = (__int64)Memory;
        if ( !Memory )
        {
          FontHandle = -1073741801;
          goto LABEL_23;
        }
        memset(Memory, 0, 0x48uLL);
        v12 = v25;
        if ( v25 )
        {
          v13 = (unsigned int *)(v11 + 40);
          *(_OWORD *)(v11 + 40) = *v25;
          *(_QWORD *)(v11 + 56) = *((_QWORD *)v12 + 2);
        }
        else
        {
          FontHandle = BgpFoGetFontHandle(0LL);
          if ( FontHandle < 0 )
            goto LABEL_34;
          *(_DWORD *)(v11 + 44) = -1;
          v13 = (unsigned int *)(v11 + 40);
          *(_DWORD *)(v11 + 40) = 0;
          v19 = v22;
          *(_DWORD *)(v11 + 60) = 0;
          *(_QWORD *)(v11 + 48) = v19;
          *(_DWORD *)(v11 + 56) = 18;
        }
        if ( (a5 & 1) != 0 )
          goto LABEL_14;
        FontHandle = BgpFoGetTextMetrics((__int64)v13, (__int64)&v24);
        if ( FontHandle >= 0 )
        {
          if ( a2[1] < HIDWORD(v24) )
            a2[1] = HIDWORD(v24);
          if ( *a2 < (unsigned int)v24 )
            *a2 = v24;
LABEL_14:
          if ( *a2 + *a1 > (unsigned int)v23 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v23) )
          {
            FontHandle = -1073741811;
            goto LABEL_22;
          }
          if ( (a5 & 2) == 0 )
          {
            v18 = BgpGxRectangleCreate(a2, 32LL, &v20);
            v5 = v20;
            FontHandle = v18;
            if ( v18 < 0 )
              goto LABEL_30;
            BgpGxFillRectangle(v20, *v13);
          }
          if ( (a5 & 9) == 0 )
            goto LABEL_20;
          v14 = BgpGxRectangleCreate(a2, 32LL, &v21);
          v6 = v21;
          FontHandle = v14;
          if ( v14 >= 0 )
          {
            *(_QWORD *)(v11 + 32) = v21;
LABEL_20:
            *(_QWORD *)v11 = *(_QWORD *)a1;
            *(_QWORD *)(v11 + 8) = *(_QWORD *)a2;
            v15 = a2[2];
            *(_DWORD *)(v11 + 68) = 0;
            v16 = (a5 & 4) == 0;
            *(_DWORD *)(v11 + 16) = v15;
            *(_QWORD *)(v11 + 24) = v5;
            *(_DWORD *)(v11 + 64) = 1;
            if ( !v16 )
              *(_DWORD *)(v11 + 64) = 5;
LABEL_22:
            if ( FontHandle >= 0 )
            {
LABEL_23:
              *v26 = v11;
              return (unsigned int)FontHandle;
            }
          }
LABEL_30:
          if ( v5 )
            BgpGxRectangleDestroy(v5);
          if ( v6 )
            BgpGxRectangleDestroy(v6);
        }
LABEL_34:
        BgpFwFreeMemory(v11);
        goto LABEL_23;
      }
    }
  }
  return 3221225485LL;
}
