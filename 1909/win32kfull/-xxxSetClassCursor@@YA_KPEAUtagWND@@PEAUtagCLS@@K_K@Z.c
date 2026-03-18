/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA31C
 * Callers:
 *     xxxSetClassData @ 0x1C010F818 (xxxSetClassData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C00E5AC0 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00EC850 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C023A794 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, unsigned __int64 a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _CALLPROCDATA **v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  struct _CALLPROCDATA **v34; // rax
  struct _CALLPROCDATA **v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _CALLPROCDATA **v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  struct _CALLPROCDATA **v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  _QWORD v50[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v51[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v52; // [rsp+48h] [rbp-59h] BYREF
  __int64 v53; // [rsp+50h] [rbp-51h]
  __int64 v54; // [rsp+58h] [rbp-49h]
  _QWORD v55[3]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v56[4]; // [rsp+78h] [rbp-29h] BYREF
  __int128 v57; // [rsp+98h] [rbp-9h]
  __int128 v58; // [rsp+A8h] [rbp+7h]
  __int128 v59; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v60; // [rsp+C8h] [rbp+27h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v51, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v50, 0LL);
  memset(v55, 0, sizeof(v55));
  memset(v56, 0, 24);
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( a4 )
  {
    v8 = HMValidateHandle(a4, 3);
    if ( !v8 )
    {
      if ( a3 == -14 || (v14 = 1402LL, a3 == -34) )
        v14 = 1414LL;
      UserSetLastError(v14, v11, v12, v13);
    }
  }
  v15 = *((_QWORD *)a2 + 7);
  if ( v15 != *(_QWORD *)v51[0] )
  {
    if ( v51[0] != gSmartObjNullRef && !--*(_DWORD *)(v51[0] + 8LL) )
    {
      if ( *(_BYTE *)(v51[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v51[0]);
    }
    if ( v15 )
    {
      v51[0] = *(_QWORD *)(v15 + 128);
      ++*(_DWORD *)(v51[0] + 8LL);
    }
    else
    {
      v51[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v51[0], v55) )
  {
    UserSetLastError(5LL, v16, v17, v18);
    goto LABEL_53;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17);
  v52 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v52;
  v53 = v8;
  if ( v8 )
    HMLockObject(v8);
  if ( a3 == -34 || a3 == -14 )
  {
    v24 = (_QWORD *)xxxSetClassIcon((ULONG_PTR)a1);
LABEL_24:
    v7 = v24;
    if ( v24 )
      v7 = (_QWORD *)*v24;
    goto LABEL_26;
  }
  if ( a3 == -12 )
  {
    *((_QWORD *)&v57 + 1) = v8;
    *(_QWORD *)&v57 = *(_QWORD *)v51[0] + 88LL;
    v59 = v57;
    v24 = (_QWORD *)HMAssignmentLock(&v59);
    goto LABEL_24;
  }
LABEL_26:
  v25 = *(_QWORD *)v51[0];
  v26 = *(_QWORD *)(*(_QWORD *)v51[0] + 64LL);
LABEL_44:
  if ( v26 != *(_QWORD *)v50[0] )
  {
    if ( v50[0] != gSmartObjNullRef && !--*(_DWORD *)(v50[0] + 8LL) )
    {
      if ( *(_BYTE *)(v50[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v50[0]);
    }
    if ( v26 )
    {
      v50[0] = *(_QWORD *)(v26 + 128);
      ++*(_DWORD *)(v50[0] + 8LL);
    }
    else
    {
      v50[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v50[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v50[0], v56) )
      {
        UserSetLastError(5LL, v27, v28, v29);
        ThreadUnlock1(v37, v36, v38);
        v39 = *(struct _CALLPROCDATA ***)v51[0];
        v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41);
        *(_QWORD *)(v42 + 16) = v55[0];
        ClassUnlockWorker(v39);
        goto LABEL_53;
      }
      xxxSetClassIcon((ULONG_PTR)a1);
      v30 = *(struct _CALLPROCDATA ***)v50[0];
      v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32);
      *(_QWORD *)(v33 + 16) = v56[0];
      v34 = ClassUnlockWorker(v30);
      v25 = v50[0];
      v35 = v34;
      if ( v34 != *(struct _CALLPROCDATA ***)v50[0] )
      {
        v25 = v50[0];
        if ( v50[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v50[0] + 8LL);
          v25 = v50[0];
          if ( !*(_DWORD *)(v50[0] + 8LL) )
          {
            if ( *(_BYTE *)(v50[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v50[0]);
          }
        }
        if ( v35 )
        {
          v50[0] = v35[16];
          ++*(_DWORD *)(v50[0] + 8LL);
        }
        else
        {
          v50[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      *((_QWORD *)&v58 + 1) = v8;
      *(_QWORD *)&v58 = *(_QWORD *)v50[0] + 88LL;
      v60 = v58;
      HMAssignmentLock(&v60);
    }
    if ( *(_QWORD *)v50[0] )
    {
      v25 = *(_QWORD *)v50[0];
      v26 = **(_QWORD **)v50[0];
      goto LABEL_44;
    }
  }
  ThreadUnlock1(v25, v22, v23);
  v43 = *(struct _CALLPROCDATA ***)v51[0];
  v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45);
  *(_QWORD *)(v46 + 16) = v55[0];
  ClassUnlockWorker(v43);
  v6 = v7;
LABEL_53:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v50, v19, v20);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51, v47, v48);
  return v6;
}
