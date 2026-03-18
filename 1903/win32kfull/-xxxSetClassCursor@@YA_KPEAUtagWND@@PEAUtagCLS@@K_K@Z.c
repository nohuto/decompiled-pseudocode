/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA49C
 * Callers:
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C010B520 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C01119A0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C023ADB4 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, unsigned __int64 a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _CALLPROCDATA **v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  struct _CALLPROCDATA **v39; // rax
  struct _CALLPROCDATA **v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _CALLPROCDATA **v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  struct _CALLPROCDATA **v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD v58[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v59[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v60; // [rsp+48h] [rbp-59h] BYREF
  __int64 v61; // [rsp+50h] [rbp-51h]
  __int64 v62; // [rsp+58h] [rbp-49h]
  _QWORD v63[3]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v64[4]; // [rsp+78h] [rbp-29h] BYREF
  __int128 v65; // [rsp+98h] [rbp-9h]
  __int128 v66; // [rsp+A8h] [rbp+7h]
  __int128 v67; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v68; // [rsp+C8h] [rbp+27h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v59, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v58, 0LL);
  memset(v63, 0, sizeof(v63));
  memset(v64, 0, 24);
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  if ( a4 )
  {
    LOBYTE(v11) = 3;
    v8 = HMValidateHandle(a4, v11, v12, v13);
    if ( !v8 )
    {
      if ( a3 == -14 || (v17 = 1402LL, a3 == -34) )
        v17 = 1414LL;
      UserSetLastError(v17, v14, v15, v16);
    }
  }
  v18 = *((_QWORD *)a2 + 7);
  if ( v18 != *(_QWORD *)v59[0] )
  {
    if ( v59[0] != gSmartObjNullRef && !--*(_DWORD *)(v59[0] + 8LL) )
    {
      if ( *(_BYTE *)(v59[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v59[0]);
    }
    if ( v18 )
    {
      v59[0] = *(_QWORD *)(v18 + 128);
      ++*(_DWORD *)(v59[0] + 8LL);
    }
    else
    {
      v59[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v59[0], v63) )
  {
    UserSetLastError(5LL, v19, v20, v21);
    goto LABEL_53;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21);
  v60 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v60;
  v61 = v8;
  if ( v8 )
    HMLockObject(v8);
  if ( a3 == -34 || a3 == -14 )
  {
    v28 = (_QWORD *)xxxSetClassIcon(a1);
LABEL_24:
    v7 = v28;
    if ( v28 )
      v7 = (_QWORD *)*v28;
    goto LABEL_26;
  }
  if ( a3 == -12 )
  {
    *((_QWORD *)&v65 + 1) = v8;
    *(_QWORD *)&v65 = *(_QWORD *)v59[0] + 88LL;
    v67 = v65;
    v28 = (_QWORD *)HMAssignmentLock(&v67);
    goto LABEL_24;
  }
LABEL_26:
  v29 = *(_QWORD *)v59[0];
  v30 = *(_QWORD *)(*(_QWORD *)v59[0] + 64LL);
LABEL_44:
  if ( v30 != *(_QWORD *)v58[0] )
  {
    if ( v58[0] != gSmartObjNullRef && !--*(_DWORD *)(v58[0] + 8LL) )
    {
      if ( *(_BYTE *)(v58[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v58[0]);
    }
    if ( v30 )
    {
      v58[0] = *(_QWORD *)(v30 + 128);
      ++*(_DWORD *)(v58[0] + 8LL);
    }
    else
    {
      v58[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v58[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v58[0], v64) )
      {
        UserSetLastError(5LL, v31, v32, v33);
        ThreadUnlock1(v42, v41, v43);
        v44 = *(struct _CALLPROCDATA ***)v59[0];
        v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47);
        *(_QWORD *)(v48 + 16) = v63[0];
        ClassUnlockWorker(v44);
        goto LABEL_53;
      }
      xxxSetClassIcon(a1);
      v34 = *(struct _CALLPROCDATA ***)v58[0];
      v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37);
      *(_QWORD *)(v38 + 16) = v64[0];
      v39 = ClassUnlockWorker(v34);
      v29 = v58[0];
      v40 = v39;
      if ( v39 != *(struct _CALLPROCDATA ***)v58[0] )
      {
        v29 = v58[0];
        if ( v58[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v58[0] + 8LL);
          v29 = v58[0];
          if ( !*(_DWORD *)(v58[0] + 8LL) )
          {
            if ( *(_BYTE *)(v58[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v58[0]);
          }
        }
        if ( v40 )
        {
          v58[0] = v40[16];
          ++*(_DWORD *)(v58[0] + 8LL);
        }
        else
        {
          v58[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      *((_QWORD *)&v66 + 1) = v8;
      *(_QWORD *)&v66 = *(_QWORD *)v58[0] + 88LL;
      v68 = v66;
      HMAssignmentLock(&v68);
    }
    if ( *(_QWORD *)v58[0] )
    {
      v29 = *(_QWORD *)v58[0];
      v30 = **(_QWORD **)v58[0];
      goto LABEL_44;
    }
  }
  ThreadUnlock1(v29, v26, v27);
  v49 = *(struct _CALLPROCDATA ***)v59[0];
  v53 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52);
  *(_QWORD *)(v53 + 16) = v63[0];
  ClassUnlockWorker(v49);
  v6 = v7;
LABEL_53:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v58, v22, v23, v24);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59, v54, v55, v56);
  return v6;
}
