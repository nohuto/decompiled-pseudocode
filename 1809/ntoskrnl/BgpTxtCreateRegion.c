/*
 * XREFs of BgpTxtCreateRegion @ 0x14095103C
 * Callers:
 *     ResFwConfigureDisplayStringResources @ 0x14094F650 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x14094F6DC (AnFwConfigureProgressResources.c)
 *     BgpDisplayCharacterGetContext @ 0x140952948 (BgpDisplayCharacterGetContext.c)
 * Callees:
 *     BgpGetResolution @ 0x14013B9C0 (BgpGetResolution.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     BgpFoGetTextMetrics @ 0x14016F7E4 (BgpFoGetTextMetrics.c)
 *     BgpGxFillRectangle @ 0x14016FA28 (BgpGxFillRectangle.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     BgpGxRectangleDestroy @ 0x14095021C (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x14095121C (BgpGxRectangleCreate.c)
 *     BgpFoGetFontHandle @ 0x1409512A4 (BgpFoGetFontHandle.c)
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
  _QWORD v21[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  _OWORD *v24; // [rsp+A0h] [rbp+50h]
  __int64 *v25; // [rsp+A8h] [rbp+58h]

  v25 = a4;
  v24 = a3;
  *a4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  FontHandle = 0;
  v20 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v22 = *(_QWORD *)BgpGetResolution(v21);
      if ( *a1 <= (unsigned int)v22 && a1[1] <= HIDWORD(v22) )
      {
        Memory = (void *)BgpFwAllocateMemory(0x48uLL);
        v11 = (__int64)Memory;
        if ( !Memory )
        {
          FontHandle = -1073741801;
          goto LABEL_23;
        }
        memset(Memory, 0, 0x48uLL);
        v12 = v24;
        if ( v24 )
        {
          v13 = (unsigned int *)(v11 + 40);
          *(_OWORD *)(v11 + 40) = *v24;
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
          v19 = v21[0];
          *(_DWORD *)(v11 + 60) = 0;
          *(_QWORD *)(v11 + 48) = v19;
          *(_DWORD *)(v11 + 56) = 18;
        }
        if ( (a5 & 1) != 0 )
          goto LABEL_14;
        FontHandle = BgpFoGetTextMetrics((__int64)v13, (__int64)v21);
        if ( FontHandle >= 0 )
        {
          if ( a2[1] < HIDWORD(v21[0]) )
            a2[1] = HIDWORD(v21[0]);
          if ( *a2 < LODWORD(v21[0]) )
            *a2 = v21[0];
LABEL_14:
          if ( *a2 + *a1 > (unsigned int)v22 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v22) )
          {
            FontHandle = -1073741811;
            goto LABEL_22;
          }
          if ( (a5 & 2) == 0 )
          {
            v18 = BgpGxRectangleCreate(a2, 32LL, &v23);
            v5 = v23;
            FontHandle = v18;
            if ( v18 < 0 )
              goto LABEL_30;
            BgpGxFillRectangle(v23, *v13);
          }
          if ( (a5 & 9) == 0 )
            goto LABEL_20;
          v14 = BgpGxRectangleCreate(a2, 32LL, &v20);
          v6 = v20;
          FontHandle = v14;
          if ( v14 >= 0 )
          {
            *(_QWORD *)(v11 + 32) = v20;
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
              *v25 = v11;
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
