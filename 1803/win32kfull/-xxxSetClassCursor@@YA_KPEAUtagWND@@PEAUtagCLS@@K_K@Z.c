/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01B25B4
 * Callers:
 *     xxxSetClassData @ 0x1C010B0CC (xxxSetClassData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ClassLock @ 0x1C00ECB2C (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F6A00 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x1C01FA014 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  struct _CALLPROCDATA **v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _CALLPROCDATA **v26; // rax
  struct _CALLPROCDATA **v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _CALLPROCDATA **v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rax
  struct _CALLPROCDATA **v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD v39[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-69h] BYREF
  __int128 v41; // [rsp+48h] [rbp-59h]
  __int128 v42; // [rsp+58h] [rbp-49h]
  __int128 v43; // [rsp+68h] [rbp-39h] BYREF
  __int128 v44; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v45[3]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v46[3]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v47[4]; // [rsp+B8h] [rbp+17h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v40, 0LL);
  SmartObjStackRefBase<tagCLS>::Init(v39, 0LL);
  if ( a4 )
  {
    v8 = HMValidateHandle(a4, 3);
    if ( !v8 )
    {
      if ( a3 == -14 || (v12 = 1402LL, a3 == -34) )
        v12 = 1414LL;
      UserSetLastError(v12, v11);
    }
  }
  v13 = *((_QWORD *)a2 + 7);
  if ( v13 != *(_QWORD *)v40[0] )
  {
    if ( v40[0] != gSmartObjNullRef && !--*(_DWORD *)(v40[0] + 8LL) )
    {
      if ( *(_BYTE *)(v40[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v40[0]);
    }
    if ( v13 )
    {
      v40[0] = *(_QWORD *)(v13 + 128);
      ++*(_DWORD *)(v40[0] + 8LL);
    }
    else
    {
      v40[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v40[0], v46) )
  {
    UserSetLastError(5LL, v14);
    goto LABEL_53;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
  v45[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v45;
  v45[1] = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  if ( a3 == -34 || a3 == -14 )
  {
    v19 = (_QWORD *)xxxSetClassIcon(a1);
LABEL_24:
    v7 = v19;
    if ( v19 )
      v7 = (_QWORD *)*v19;
    goto LABEL_26;
  }
  if ( a3 == -12 )
  {
    *((_QWORD *)&v41 + 1) = v8;
    *(_QWORD *)&v41 = *(_QWORD *)v40[0] + 88LL;
    v43 = v41;
    v19 = (_QWORD *)HMAssignmentLock(&v43);
    goto LABEL_24;
  }
LABEL_26:
  v20 = *(_QWORD *)v40[0];
  v21 = *(_QWORD *)(*(_QWORD *)v40[0] + 64LL);
LABEL_44:
  if ( v21 != *(_QWORD *)v39[0] )
  {
    if ( v39[0] != gSmartObjNullRef && !--*(_DWORD *)(v39[0] + 8LL) )
    {
      if ( *(_BYTE *)(v39[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v39[0]);
    }
    if ( v21 )
    {
      v39[0] = *(_QWORD *)(v21 + 128);
      ++*(_DWORD *)(v39[0] + 8LL);
    }
    else
    {
      v39[0] = gSmartObjNullRef;
    }
  }
  while ( *(_QWORD *)v39[0] )
  {
    if ( a3 == -34 || a3 == -14 )
    {
      if ( !(unsigned int)ClassLock(*(_QWORD *)v39[0], v47) )
      {
        UserSetLastError(5LL, v22);
        ThreadUnlock1(v29, v28, v30);
        v31 = *(struct _CALLPROCDATA ***)v40[0];
        v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32);
        *(_QWORD *)(v33 + 16) = v46[0];
        ClassUnlockWorker(v31);
        goto LABEL_53;
      }
      xxxSetClassIcon(a1);
      v23 = *(struct _CALLPROCDATA ***)v39[0];
      v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
      *(_QWORD *)(v25 + 16) = v47[0];
      v26 = ClassUnlockWorker(v23);
      v20 = v39[0];
      v27 = v26;
      if ( v26 != *(struct _CALLPROCDATA ***)v39[0] )
      {
        v20 = v39[0];
        if ( v39[0] != gSmartObjNullRef )
        {
          --*(_DWORD *)(v39[0] + 8LL);
          v20 = v39[0];
          if ( !*(_DWORD *)(v39[0] + 8LL) )
          {
            if ( *(_BYTE *)(v39[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v39[0]);
          }
        }
        if ( v27 )
        {
          v39[0] = v27[16];
          ++*(_DWORD *)(v39[0] + 8LL);
        }
        else
        {
          v39[0] = gSmartObjNullRef;
        }
      }
    }
    else if ( a3 == -12 )
    {
      *((_QWORD *)&v42 + 1) = v8;
      *(_QWORD *)&v42 = *(_QWORD *)v39[0] + 88LL;
      v44 = v42;
      HMAssignmentLock(&v44);
    }
    if ( *(_QWORD *)v39[0] )
    {
      v20 = *(_QWORD *)v39[0];
      v21 = **(_QWORD **)v39[0];
      goto LABEL_44;
    }
  }
  ThreadUnlock1(v20, v17, v18);
  v34 = *(struct _CALLPROCDATA ***)v40[0];
  v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35);
  *(_QWORD *)(v36 + 16) = v46[0];
  ClassUnlockWorker(v34);
  v6 = v7;
LABEL_53:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v39, v15);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v40, v37);
  return v6;
}
