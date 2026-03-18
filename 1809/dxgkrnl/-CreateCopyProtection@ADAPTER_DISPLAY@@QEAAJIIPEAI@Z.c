/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01C1070
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02387EC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C003049C (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF240 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  unsigned int Data1; // r14d
  char *v19; // rsi
  char v20; // r9
  DXGADAPTER *v21; // r8
  unsigned int v22; // r11d
  int v23; // edx
  unsigned int v24; // eax
  char v25; // cl
  __int64 v26; // rax
  unsigned int v27; // ebx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v43[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 4921LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 4922LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 4925LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)Current + 39);
  if ( *(struct _KTHREAD **)(v14 + 8) != KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 4926LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  while ( 1 )
  {
    v16 = ExUuidCreate(&Uuid);
    if ( v16 >= 0 )
      break;
    if ( v16 != -1073741267 )
    {
      v26 = WdLogNewEntry5_WdError(v17);
      v27 = -1073741801;
      *(_QWORD *)(v26 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v26);
      goto LABEL_29;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v19 = (char *)(this + 8);
  do
  {
    v20 = 1;
    v21 = this[8];
    while ( 1 )
    {
      v22 = Data1;
      if ( v21 == (DXGADAPTER *)v19 || !v21 )
        break;
      v23 = *((_DWORD *)v21 + 12);
      v24 = Data1 + 1;
      v21 = *(DXGADAPTER **)v21;
      if ( v23 != Data1 )
        v24 = Data1;
      v25 = 0;
      Data1 = v24;
      if ( v23 != v22 )
        v25 = v20;
      v20 = v25;
    }
  }
  while ( !v20 );
  v28 = operator new(0x40uLL, 0x4B677844u, PagedPool);
  v30 = v28;
  if ( v28 )
  {
    v28[2] = this;
    *v28 = 0LL;
    v28[1] = 0LL;
    v28[5] = Current;
    v28[3] = 0LL;
    v28[4] = 0LL;
    *((_DWORD *)v28 + 12) = Data1;
    *((_DWORD *)v28 + 13) = a2;
    *((_DWORD *)v28 + 14) = a3;
  }
  else
  {
    v30 = 0LL;
  }
  if ( v30 )
  {
    v32 = *(_QWORD *)v19;
    if ( *(char **)(*(_QWORD *)v19 + 8LL) == v19 )
    {
      *v30 = v32;
      v30[1] = v19;
      *(_QWORD *)(v32 + 8) = v30;
      *(_QWORD *)v19 = v30;
      v33 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
      if ( v33 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 39) + 8LL) != CurrentThread )
        {
          v37 = WdLogNewEntry5_WdAssertion(CurrentThread);
          *(_QWORD *)(v37 + 24) = 702LL;
          WdLogEvent5_WdAssertion(v37);
        }
        v38 = (_QWORD *)((char *)Current + 296);
        v39 = v30 + 3;
        v40 = *((_QWORD *)Current + 37);
        if ( *(struct DXGPROCESS **)(v40 + 8) == (struct DXGPROCESS *)((char *)Current + 296) )
        {
          *v39 = v40;
          v39[1] = v38;
          *(_QWORD *)(v40 + 8) = v39;
          *v38 = v39;
          *a4 = Data1;
          goto LABEL_39;
        }
      }
      else
      {
        v34 = *v30;
        if ( *(_QWORD **)(*v30 + 8LL) == v30 )
        {
          v35 = (_QWORD *)v30[1];
          if ( (_QWORD *)*v35 == v30 )
          {
            *v35 = v34;
            *(_QWORD *)(v34 + 8) = v35;
            DXGCOPYPROTECTION::`scalar deleting destructor'((DXGCOPYPROTECTION *)v30);
            DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_39:
            v27 = v33;
            goto LABEL_40;
          }
        }
      }
    }
    __fastfail(3u);
  }
  v31 = WdLogNewEntry5_WdLowResource(v29);
  v27 = -1073741801;
  *(_QWORD *)(v31 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v31);
LABEL_29:
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_40:
  if ( v43[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
  return v27;
}
