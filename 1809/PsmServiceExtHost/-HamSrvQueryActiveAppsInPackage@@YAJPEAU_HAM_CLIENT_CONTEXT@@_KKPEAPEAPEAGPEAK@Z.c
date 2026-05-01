/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180003A8C
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x180003A80 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x180003DD0 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180003E9C (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180003ECC (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800084E4 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     CemRcTableGetFirst @ 0x18000BA38 (CemRcTableGetFirst.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010A58 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180014888 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015730 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18002F4EC (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  PVOID *v7; // rsi
  unsigned int v8; // r15d
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v9; // rax
  __int64 v10; // r13
  struct _HAM_RC_TREE_NODE *i; // rdi
  unsigned __int16 *v12; // rbx
  DWORD v13; // ebx
  int v14; // edx
  __int64 v16; // rbx
  __int64 v17; // rax
  bool v18; // r14
  int v19; // ebx
  unsigned __int16 *Heap; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r14
  int AumidFromPsmKey; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 ***v30; // [rsp+58h] [rbp-A8h]
  unsigned int *v31; // [rsp+60h] [rbp-A0h]
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v32; // [rsp+68h] [rbp-98h]
  char v33[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v34; // [rsp+100h] [rbp+0h] BYREF
  int *p_AumidFromPsmKey; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+128h] [rbp+28h]
  int v37; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v38; // [rsp+130h] [rbp+30h]
  int v39; // [rsp+138h] [rbp+38h]
  int v40; // [rsp+13Ch] [rbp+3Ch]
  int *v41; // [rsp+140h] [rbp+40h]
  int v42; // [rsp+148h] [rbp+48h]
  int v43; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v44; // [rsp+150h] [rbp+50h]
  int v45; // [rsp+158h] [rbp+58h]
  int v46; // [rsp+15Ch] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 v48[136]; // [rsp+180h] [rbp+80h] BYREF

  v31 = a5;
  v30 = a4;
  v29 = a2;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089C33, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v33);
  v7 = 0LL;
  v26 = 0;
  v8 = 0;
  *(_QWORD *)&v25[1] = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v9 = HampClientPkgFindByPackageHandle(a1, v29);
    v32 = v9;
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 7);
      for ( i = (struct _HAM_RC_TREE_NODE *)CemRcTableGetFirst(v10 + 40);
            i;
            i = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)v10, i) )
      {
        v16 = *((_QWORD *)i + 11);
        HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v16);
        v17 = *(_QWORD *)(v16 + 328);
        if ( v17 )
          v18 = *(_QWORD *)(v17 + 752) == (_QWORD)i;
        else
          v18 = 0;
        HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v16);
        if ( !v18 )
        {
          if ( (a3 & 2) == 0
            || (HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v10),
                v19 = *(_DWORD *)(v10 + 340),
                HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v10),
                (v19 & 0x70) == 0) )
          {
            if ( (a3 & 1) == 0 || HampAppGetHasStartedWindow(i) )
            {
              v25[0] = 130;
              AumidFromPsmKey = HampUtilGetAumidFromPsmKey((const unsigned __int16 *)i + 48, v25, v48);
              if ( AumidFromPsmKey < 0 )
                goto LABEL_7;
              Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v25[0]);
              v12 = Heap;
              if ( !Heap )
              {
                v7 = *(PVOID **)&v25[1];
                AumidFromPsmKey = -1073741801;
                goto LABEL_8;
              }
              StringCchCopyW(Heap, v25[0], v48);
              v21 = RmpArrayGrow<unsigned short *>(&v25[1], &v26, v8 + 1);
              v7 = *(PVOID **)&v25[1];
              if ( v21 >= 0 )
              {
                v22 = v8++;
                *(_QWORD *)(*(_QWORD *)&v25[1] + 8 * v22) = v12;
                v21 = 0;
              }
              AumidFromPsmKey = v21;
              if ( v21 < 0 )
                goto LABEL_8;
            }
          }
        }
      }
      *v30 = (unsigned __int16 **)v7;
      v7 = 0LL;
      AumidFromPsmKey = 0;
      *(_QWORD *)&v25[1] = 0LL;
      *v31 = v8;
LABEL_7:
      v12 = 0LL;
LABEL_8:
      if ( v7 )
      {
        if ( v8 )
        {
          v23 = v8;
          do
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v7++);
            --v23;
          }
          while ( v23 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)&v25[1]);
      }
      CemRcObjectDereference(v32);
      if ( i )
        CemRcObjectDereference(i);
      if ( v12 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
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
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    p_AumidFromPsmKey = &AumidFromPsmKey;
    v38 = &v29;
    v41 = &v27;
    v44 = &v28;
    v36 = 4;
    v39 = v14;
    v27 = a3;
    v42 = 4;
    v28 = v8;
    v45 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A3F7, 0LL, 0LL, 6u, &v34);
  }
  return (unsigned int)AumidFromPsmKey;
}
