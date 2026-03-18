/*
 * XREFs of ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0117850
 * Callers:
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     InputTransformOnInput @ 0x1C01F6920 (InputTransformOnInput.c)
 *     SetManipulationInputTargetTransform @ 0x1C01F6950 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0005ADC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C000839C (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C000963C (-OnInput@Transforms@InputTraceLogging@@SAX_KPEAUHWND__@@PEBUCompositionInputObject@@_NAEBUtagINP.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0016A00 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01179D4 (-GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C0117AA4 (MagpRemoveTransformOutputMagFac.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall InputTransform::OnInput(struct _EX_PUSH_LOCK **this, struct tagWND *a2)
{
  struct tagINPUT_TRANSFORM *v4; // r8
  unsigned int v5; // ebp
  struct _EX_PUSH_LOCK *v6; // rbx
  unsigned __int64 *v8; // r9
  __int64 v9; // r8
  int v10; // r9d
  const struct tagINPUT_TRANSFORM *v11; // rbp
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  _BYTE v16[88]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  struct tagWND *v18; // [rsp+98h] [rbp+10h] BYREF

  v18 = a2;
  memset(v16, 0, 0x40uLL);
  v5 = 0;
  if ( (unsigned int)InputTransform::GetTransform((InputTransform *)this, (const struct tagWND *)v16, v4) )
  {
    MagpRemoveTransformOutputMagFac(v16);
    InputTransform::StoreTransform(
      (InputTransform *)this,
      (struct tagWND *)v16,
      (const struct tagINPUT_TRANSFORM *)&v18,
      v8);
  }
  v6 = this[34];
  if ( !v6 )
  {
    EtwTraceOnInputXformUpdate(*this, a2, 0LL);
    return 0LL;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v17, this[34]);
  ClearStaleEntries(v6, (__int64)a2, v9, v10);
  if ( (*((_DWORD *)v6 + 22) & 1) != 0 )
  {
    v13 = Win32AllocPoolZInit(88LL, 2020176725LL);
    if ( !v13 )
    {
      EtwTraceOnInputXformUpdate(*this, a2, 0LL);
      goto LABEL_8;
    }
    *(_QWORD *)(v13 + 16) = a2;
    v11 = (struct _EX_PUSH_LOCK *)((char *)v6 + 24);
    v14 = (__int64 *)((char *)v6 + 8);
    *(_OWORD *)(v13 + 24) = *(_OWORD *)((char *)v6 + 24);
    *(_OWORD *)(v13 + 40) = *(_OWORD *)((char *)v6 + 40);
    *(_OWORD *)(v13 + 56) = *(_OWORD *)((char *)v6 + 56);
    *(_OWORD *)(v13 + 72) = *(_OWORD *)((char *)v6 + 72);
    v15 = *((_QWORD *)v6 + 1);
    if ( *(struct _EX_PUSH_LOCK **)(v15 + 8) != (struct _EX_PUSH_LOCK *)((char *)v6 + 8) )
      __fastfail(3u);
    *(_QWORD *)v13 = v15;
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)(v15 + 8) = v13;
    *v14 = v13;
    *((_DWORD *)v6 + 22) &= ~1u;
  }
  else
  {
    v11 = (struct _EX_PUSH_LOCK *)((char *)v6 + 24);
  }
  EtwTraceOnInputXformUpdate(*this, a2, 1LL);
  InputTraceLogging::Transforms::OnInput(
    (__int64)a2,
    (HWND)*this,
    *((const struct CompositionInputObject **)v6 + 12),
    v12,
    v11);
  v5 = 1;
LABEL_8:
  ExReleasePushLockExclusiveEx(v17, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
