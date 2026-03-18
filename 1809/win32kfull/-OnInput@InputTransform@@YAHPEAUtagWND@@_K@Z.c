/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00D64E4
 * Callers:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     InputTransformOnInput @ 0x1C01E0730 (InputTransformOnInput.c)
 *     SetManipulationInputTargetTransform @ 0x1C01E0750 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002358 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00054F0 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C000599C (-OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINP.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C00D8D74 (MagpRemoveTransformOutputMagFac.c)
 */

__int64 __fastcall InputTransform::OnInput(InputTransform *this, struct tagWND *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  CompositionInputObject *v8; // rcx
  unsigned __int64 *v9; // r9
  __int64 *v10; // rsi
  __int64 **v11; // r14
  const struct tagINPUT_TRANSFORM *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 *v20; // r15
  _BYTE v21[64]; // [rsp+30h] [rbp-68h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF
  struct tagWND *v23; // [rsp+A8h] [rbp+10h] BYREF

  v23 = a2;
  v4 = 0;
  if ( (unsigned __int8)IsInputThread() || gptiCurrent == gptiManipulationThread )
  {
    v5 = *((_QWORD *)this + 32);
    if ( v5 )
    {
      v8 = *(CompositionInputObject **)(v5 + 96);
      if ( v8 )
      {
        if ( (int)CompositionInputObject::QueryTransform(v8, (struct tagINPUT_TRANSFORM *)v21) >= 0 )
        {
          MagpRemoveTransformOutputMagFac(v21);
          InputTransform::StoreTransform(this, (struct tagWND *)v21, (const struct tagINPUT_TRANSFORM *)&v23, v9);
        }
      }
    }
  }
  v6 = *((_QWORD *)this + 32);
  if ( !v6 )
  {
    EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v22, *((struct _EX_PUSH_LOCK **)this + 32));
  v10 = (__int64 *)(v6 + 8);
  v11 = *(__int64 ***)(v6 + 8);
  if ( v11 != (__int64 **)(v6 + 8) && v11 != *(__int64 ***)(v6 + 16) )
  {
    v16 = gqpcAgeLimit;
    if ( gqpcAgeLimit || (v16 = 5LL * gliQpcFreq, (gqpcAgeLimit = 5LL * gliQpcFreq) != 0) )
    {
      v17 = *v11;
      if ( *v11 != v10 )
      {
        do
        {
          if ( a2 - (struct tagWND *)v11[2] > v16 )
            break;
          v11 = (__int64 **)v17;
          v17 = (__int64 *)*v17;
        }
        while ( v17 != v10 );
        while ( 1 )
        {
          v20 = *v11;
          if ( *v11 == v10 )
            break;
          EtwTraceTransformAgeDecay(v6, v20[2]);
          v18 = (__int64 *)*v20;
          if ( *(__int64 **)(*v20 + 8) != v20 )
            goto LABEL_31;
          v19 = (__int64 **)v20[1];
          if ( *v19 != v20 )
            goto LABEL_31;
          *v19 = v18;
          v18[1] = (__int64)v19;
          Win32FreePool(v20);
          *(_DWORD *)(v6 + 88) |= 2u;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v6 + 88) & 1) != 0 )
  {
    v14 = Win32AllocPoolZInit(88LL, 2020176725LL);
    if ( !v14 )
    {
      EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 0LL);
      goto LABEL_13;
    }
    *(_QWORD *)(v14 + 16) = a2;
    v12 = (const struct tagINPUT_TRANSFORM *)(v6 + 24);
    *(_OWORD *)(v14 + 24) = *(_OWORD *)(v6 + 24);
    *(_OWORD *)(v14 + 40) = *(_OWORD *)(v6 + 40);
    *(_OWORD *)(v14 + 56) = *(_OWORD *)(v6 + 56);
    *(_OWORD *)(v14 + 72) = *(_OWORD *)(v6 + 72);
    v15 = *v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
LABEL_31:
      __fastfail(3u);
    *(_QWORD *)v14 = v15;
    *(_QWORD *)(v14 + 8) = v10;
    *(_QWORD *)(v15 + 8) = v14;
    *v10 = v14;
    *(_DWORD *)(v6 + 88) &= ~1u;
  }
  else
  {
    v12 = (const struct tagINPUT_TRANSFORM *)(v6 + 24);
  }
  EtwTraceOnInputXformUpdate(*(_QWORD *)this, a2, 1LL);
  InputTraceLogging::Transforms::OnInput(
    (__int64)a2,
    *(HWND *)this,
    *(const struct CompositionInputObject **)(v6 + 96),
    v13,
    v12);
  v4 = 1;
LABEL_13:
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v22);
  return v4;
}
