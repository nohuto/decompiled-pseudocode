/*
 * XREFs of BuildWindowListWithDpiBoundaryInfo @ 0x1C01AE634
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C0074AA0 (IsDpiBoundaryBetweenWindows.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C01AF81C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C01AF920 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

__int64 __fastcall BuildWindowListWithDpiBoundaryInfo(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v3; // rbx
  int *v4; // rdi
  _QWORD *v6; // rbp
  int v7; // r12d
  struct tagBWL *v8; // rax
  __int64 v9; // rdx
  struct tagBWL *v10; // r15
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  __int16 v17; // r8
  _QWORD *v18; // rax
  _DWORD *v19; // rdi
  int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rax
  int v23; // eax
  __int64 result; // rax
  struct tagBWL *v25; // [rsp+20h] [rbp-68h]
  __int128 v26; // [rsp+28h] [rbp-60h] BYREF
  __int128 v27; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  v30 = 0LL;
  v6 = a1;
  v7 = 0;
  v8 = BuildHwndList(a1, 1, 0LL);
  v25 = v8;
  v10 = v8;
  if ( v8 )
  {
    v11 = (unsigned __int64 *)((char *)v8 + 32);
    v12 = *((_QWORD *)v8 + 4);
    if ( v12 != 1 )
    {
      v13 = &v30;
      do
      {
        LOBYTE(v9) = 1;
        v14 = HMValidateHandleNoSecure(v12, v9);
        v15 = (_QWORD *)v14;
        if ( v14 )
        {
          v16 = *(_QWORD *)(v14 + 80);
          if ( v16 )
          {
            if ( a2 )
            {
              v17 = (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) >> 8) & 0x1FF;
              v9 = v17 != ((*(_DWORD *)(*(_QWORD *)(v16 + 40) + 288LL) >> 8) & 0x1FF);
              if ( (_QWORD *)v14 == v6 )
                v9 = (v17 != ((*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8) & 0x1FF)) | (unsigned int)v9;
              if ( (_DWORD)v9 )
              {
                v18 = (_QWORD *)Win32AllocPool(32LL, 1819767637LL);
                v19 = v18;
                if ( v18 )
                {
                  *v13 = (__int64)v18;
                  v13 = v18;
                  *v18 = 0LL;
                  v18[1] = *v15;
                  if ( v15 == v6 )
                  {
                    v20 = 1;
                    v21 = a2;
                    v7 = 1;
                  }
                  else
                  {
                    v21 = v15[10];
                    v20 = 0;
                  }
                  v19[7] = v20;
                  v22 = v15[5];
                  v26 = *(_OWORD *)(*(_QWORD *)(v21 + 40) + 104LL);
                  v27 = *(_OWORD *)(v22 + 88);
                  if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v15, v21) )
                  {
                    LogicalToPhysicalInPlaceRectWithSubpixel(v21, &v26, 0LL);
                    PhysicalToLogicalInPlaceRectWithSubpixel(v15, &v26, 0LL);
                    v23 = 1;
                  }
                  else
                  {
                    v23 = 0;
                  }
                  v19[6] = v23;
                  v6 = a1;
                  v19[4] = v27 - v26;
                  v19[5] = DWORD1(v27) - DWORD1(v26);
                }
              }
            }
          }
        }
        v12 = *++v11;
      }
      while ( *v11 != 1 );
      v3 = v30;
      v10 = v25;
      v4 = a3;
    }
    FreeHwndList(v10);
  }
  result = v3;
  *v4 = v7;
  return result;
}
