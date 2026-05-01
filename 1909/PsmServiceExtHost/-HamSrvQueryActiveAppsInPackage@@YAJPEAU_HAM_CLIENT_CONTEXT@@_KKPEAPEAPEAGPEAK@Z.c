/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800749D8
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x180079E80 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18000F2FC (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180010F70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180012834 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180013184 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037DFC (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x180062334 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180079110 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180079904 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18007A244 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 */

__int64 __fastcall HamSrvQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  PVOID *v7; // rdi
  unsigned int v8; // r15d
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v9; // rax
  __int64 v10; // r13
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  bool v15; // r14
  int v16; // ebx
  char *Heap; // rax
  char *v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r14
  DWORD v22; // ebx
  int v23; // edx
  int AumidFromPsmKey; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 ***v32; // [rsp+58h] [rbp-A8h]
  unsigned int *v33; // [rsp+60h] [rbp-A0h]
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v34; // [rsp+68h] [rbp-98h]
  char v35[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp+0h] BYREF
  int *p_AumidFromPsmKey; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+13Ch] [rbp+3Ch]
  int *v43; // [rsp+140h] [rbp+40h]
  int v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v46; // [rsp+150h] [rbp+50h]
  int v47; // [rsp+158h] [rbp+58h]
  int v48; // [rsp+15Ch] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 v50[136]; // [rsp+180h] [rbp+80h] BYREF

  v33 = a5;
  v32 = a4;
  v31 = a2;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800978B6, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v35);
  v7 = 0LL;
  v28 = 0;
  v8 = 0;
  P = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v9 = HampClientPkgFindByPackageHandle(a1, v31);
    v34 = v9;
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 7);
      for ( i = HamRcNodeGetFirst((struct _HAM_RC_TREE_NODE *)v10, 1);
            ;
            i = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)v10, v12) )
      {
        v12 = i;
        if ( !i )
          break;
        v13 = *((_QWORD *)i + 11);
        HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v13);
        v14 = *(_QWORD *)(v13 + 328);
        if ( v14 )
          v15 = *(_QWORD *)(v14 + 776) == (_QWORD)v12;
        else
          v15 = 0;
        HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v13);
        if ( !v15 )
        {
          if ( (a3 & 2) == 0
            || (HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v10),
                v16 = *(_DWORD *)(v10 + 344),
                HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v10),
                (v16 & 0xE0) == 0) )
          {
            if ( (a3 & 1) == 0 || HampAppGetHasStartedWindow(v12) )
            {
              v26 = 130;
              AumidFromPsmKey = HampUtilGetAumidFromPsmKey((const unsigned __int16 *)v12 + 48, &v26, v50);
              if ( AumidFromPsmKey < 0 )
              {
                v18 = 0LL;
                goto LABEL_26;
              }
              Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v26);
              v18 = Heap;
              if ( !Heap )
              {
                v7 = (PVOID *)P;
                AumidFromPsmKey = -1073741801;
                goto LABEL_26;
              }
              StringCchCopyW(Heap, v26, (char *)v50);
              v19 = RmpArrayGrow<unsigned short *>(&P, &v28, v8 + 1);
              v7 = (PVOID *)P;
              if ( v19 >= 0 )
              {
                v20 = v8++;
                *((_QWORD *)P + v20) = v18;
                v19 = 0;
              }
              AumidFromPsmKey = v19;
              if ( v19 < 0 )
                goto LABEL_26;
            }
          }
        }
      }
      v18 = 0LL;
      *v32 = (unsigned __int16 **)v7;
      v7 = 0LL;
      AumidFromPsmKey = 0;
      P = 0LL;
      v12 = 0LL;
      *v33 = v8;
LABEL_26:
      if ( v7 )
      {
        if ( v8 )
        {
          v21 = v8;
          do
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v7++);
            --v21;
          }
          while ( v21 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      }
      CemRcObjectDereference(v34);
      if ( v12 )
        CemRcObjectDereference(v12);
      if ( v18 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    }
    else
    {
      AumidFromPsmKey = -1073741275;
    }
  }
  else
  {
    AumidFromPsmKey = -1073741583;
  }
  v22 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v22, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    p_AumidFromPsmKey = &AumidFromPsmKey;
    v40 = &v31;
    v43 = &v29;
    v46 = &v30;
    v38 = 4;
    v41 = v23;
    v29 = a3;
    v44 = 4;
    v30 = v8;
    v47 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097F2E, 0LL, 0LL, 6u, &v36);
  }
  return (unsigned int)AumidFromPsmKey;
}
