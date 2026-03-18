/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4B38
 * Callers:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     InputTransformOnInput @ 0x1C01BDB90 (InputTransformOnInput.c)
 *     SetManipulationInputTargetTransform @ 0x1C01BDBB0 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0004AD8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C000683C (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C00F4CF4 (MagpRemoveTransformOutputMagFac.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InputTransform::OnInput(
        struct _EX_PUSH_LOCK **this,
        struct tagWND *a2,
        struct tagWND *a3,
        const struct tagINPUT_TRANSFORM *a4)
{
  unsigned int v4; // ebx
  struct _EX_PUSH_LOCK **v6; // rbp
  struct _EX_PUSH_LOCK *v7; // rax
  struct _EX_PUSH_LOCK *v8; // rdi
  CompositionInputObject *v10; // rcx
  struct tagWND *v11; // rdx
  __int64 *v12; // rsi
  __int64 **v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 *v20; // r14
  _QWORD v21[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v22[64]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v21[0] = a2;
  v6 = this;
  if ( a3 )
  {
    v11 = a3;
    goto LABEL_9;
  }
  if ( (unsigned __int8)IsInputThread(this, a2, 0LL, a4, v21[0]) || gptiCurrent == gptiManipulationThread )
  {
    v7 = v6[33];
    if ( v7 )
    {
      v10 = (CompositionInputObject *)*((_QWORD *)v7 + 12);
      if ( v10 )
      {
        if ( (int)CompositionInputObject::QueryTransform(v10, (struct tagINPUT_TRANSFORM *)v22) >= 0 )
        {
          MagpRemoveTransformOutputMagFac(v22);
          v11 = (struct tagWND *)v22;
          this = v6;
LABEL_9:
          InputTransform::StoreTransform(
            (InputTransform *)this,
            v11,
            (const struct tagINPUT_TRANSFORM *)v21,
            (unsigned __int64 *)a4);
        }
      }
    }
  }
  v8 = v6[33];
  if ( !v8 )
  {
    EtwTraceOnInputXformUpdate(*v6, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v21, v6[33]);
  v12 = (__int64 *)((char *)v8 + 8);
  v13 = (__int64 **)*((_QWORD *)v8 + 1);
  if ( v13 != (__int64 **)((char *)v8 + 8) && v13 != *((__int64 ***)v8 + 2) )
  {
    v16 = gqpcAgeLimit;
    if ( gqpcAgeLimit || (v16 = 5LL * gliQpcFreq, (gqpcAgeLimit = 5LL * gliQpcFreq) != 0) )
    {
      v17 = *v13;
      if ( *v13 != v12 )
      {
        do
        {
          if ( a2 - (struct tagWND *)v13[2] > v16 )
            break;
          v13 = (__int64 **)v17;
          v17 = (__int64 *)*v17;
        }
        while ( v17 != v12 );
        while ( 1 )
        {
          v20 = *v13;
          if ( *v13 == v12 )
            break;
          EtwTraceTransformAgeDecay(v8, v20[2]);
          v18 = (__int64 *)*v20;
          if ( *(__int64 **)(*v20 + 8) != v20 || (v19 = (__int64 **)v20[1], *v19 != v20) )
            __fastfail(3u);
          *v19 = v18;
          v18[1] = (__int64)v19;
          Win32FreePool(v20);
          *((_DWORD *)v8 + 22) |= 2u;
        }
      }
    }
  }
  if ( (*((_DWORD *)v8 + 22) & 1) != 0 )
  {
    v14 = Win32AllocPoolZInit(88LL, 2020176725LL);
    if ( !v14 )
    {
      EtwTraceOnInputXformUpdate(*v6, a2, 0LL);
      goto LABEL_14;
    }
    *(_QWORD *)(v14 + 16) = a2;
    *(_OWORD *)(v14 + 24) = *(_OWORD *)((char *)v8 + 24);
    *(_OWORD *)(v14 + 40) = *(_OWORD *)((char *)v8 + 40);
    *(_OWORD *)(v14 + 56) = *(_OWORD *)((char *)v8 + 56);
    *(_OWORD *)(v14 + 72) = *(_OWORD *)((char *)v8 + 72);
    v15 = *v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      __fastfail(3u);
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v12;
    *(_QWORD *)(v15 + 8) = v14;
    *v12 = v14;
    *((_DWORD *)v8 + 22) &= ~1u;
  }
  EtwTraceOnInputXformUpdate(*v6, a2, 1LL);
  v4 = 1;
LABEL_14:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v21);
  return v4;
}
