/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01D4CB8
 * Callers:
 *     xxxSetClassData @ 0x1C00FC374 (xxxSetClassData.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C0104ADC (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0109790 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C02226E4 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _CALLPROCDATA **v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rax
  struct _CALLPROCDATA **v32; // rax
  struct _CALLPROCDATA **v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _CALLPROCDATA **v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  struct _CALLPROCDATA **v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD v44[2]; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v45[2]; // [rsp+38h] [rbp-59h] BYREF
  __int128 v46; // [rsp+48h] [rbp-49h]
  __int128 v47; // [rsp+58h] [rbp-39h] BYREF
  __int128 v48; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v49[3]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v50[3]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v51[4]; // [rsp+A8h] [rbp+17h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v45, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v44, 0LL);
  if ( a4 )
  {
    LOBYTE(v11) = 3;
    v8 = HMValidateHandle(a4, v11);
    if ( !v8 )
    {
      if ( a3 == -14 || (v15 = 1402LL, a3 == -34) )
        v15 = 1414LL;
      UserSetLastError(v15, v12, v13, v14);
    }
  }
  v16 = *((_QWORD *)a2 + 7);
  if ( v16 != *(_QWORD *)v45[0] )
  {
    if ( v45[0] != gSmartObjNullRef && !--*(_DWORD *)(v45[0] + 8LL) )
    {
      if ( *(_BYTE *)(v45[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v45[0]);
    }
    if ( v16 )
    {
      v45[0] = *(_QWORD *)(v16 + 128);
      ++*(_DWORD *)(v45[0] + 8LL);
    }
    else
    {
      v45[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v45[0], v50) )
  {
    UserSetLastError(5LL, v17, v18, v19);
    goto LABEL_53;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
  v49[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v49;
  v49[1] = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  if ( a3 == -34 || a3 == -14 )
  {
    v23 = (_QWORD *)xxxSetClassIcon(a1);
LABEL_24:
    v7 = v23;
    if ( v23 )
      v7 = (_QWORD *)*v23;
    goto LABEL_26;
  }
  if ( a3 == -12 )
  {
    *((_QWORD *)&v46 + 1) = v8;
    *(_QWORD *)&v46 = *(_QWORD *)v45[0] + 88LL;
    v47 = v46;
    v23 = (_QWORD *)HMAssignmentLock(&v47);
    goto LABEL_24;
  }
LABEL_26:
  v24 = *(_QWORD *)v45[0];
  v25 = *(_QWORD *)(*(_QWORD *)v45[0] + 64LL);
LABEL_44:
  if ( v25 != *(_QWORD *)v44[0] )
  {
    if ( v44[0] != gSmartObjNullRef && !--*(_DWORD *)(v44[0] + 8LL) )
    {
      if ( *(_BYTE *)(v44[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v44[0]);
    }
    if ( v25 )
    {
      v44[0] = *(_QWORD *)(v25 + 128);
      ++*(_DWORD *)(v44[0] + 8LL);
    }
    else
    {
      v44[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v44[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v44[0], v51) )
      {
        UserSetLastError(5LL, v26, v27, v28);
        ThreadUnlock1(v35, v34);
        v36 = *(struct _CALLPROCDATA ***)v45[0];
        v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37);
        *(_QWORD *)(v38 + 16) = v50[0];
        ClassUnlockWorker(v36);
        goto LABEL_53;
      }
      xxxSetClassIcon(a1);
      v29 = *(struct _CALLPROCDATA ***)v44[0];
      v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30);
      *(_QWORD *)(v31 + 16) = v51[0];
      v32 = ClassUnlockWorker(v29);
      v24 = v44[0];
      v33 = v32;
      if ( v32 != *(struct _CALLPROCDATA ***)v44[0] )
      {
        v24 = v44[0];
        if ( v44[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v44[0] + 8LL);
          v24 = v44[0];
          if ( !*(_DWORD *)(v44[0] + 8LL) )
          {
            if ( *(_BYTE *)(v44[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v44[0]);
          }
        }
        if ( v33 )
        {
          v44[0] = v33[16];
          ++*(_DWORD *)(v44[0] + 8LL);
        }
        else
        {
          v44[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      *((_QWORD *)&v46 + 1) = v8;
      *(_QWORD *)&v46 = *(_QWORD *)v44[0] + 88LL;
      v48 = v46;
      HMAssignmentLock(&v48);
    }
    if ( *(_QWORD *)v44[0] )
    {
      v24 = *(_QWORD *)v44[0];
      v25 = **(_QWORD **)v44[0];
      goto LABEL_44;
    }
  }
  ThreadUnlock1(v24, v22);
  v39 = *(struct _CALLPROCDATA ***)v45[0];
  v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40);
  *(_QWORD *)(v41 + 16) = v50[0];
  ClassUnlockWorker(v39);
  v6 = v7;
LABEL_53:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v44, v20);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v45, v42);
  return v6;
}
