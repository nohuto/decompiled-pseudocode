/*
 * XREFs of ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01F0600
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C026D0FC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0035C80 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEFC4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int Data1; // r14d
  char *v24; // rsi
  char v25; // r9
  DXGADAPTER *v26; // r8
  unsigned int v27; // r11d
  int v28; // edx
  unsigned int v29; // eax
  char v30; // cl
  __int64 v31; // rax
  unsigned int v32; // ebx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // esi
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  struct _KTHREAD *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  union _LARGE_INTEGER Interval; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v52[16]; // [rsp+28h] [rbp-60h] BYREF
  UUID Uuid; // [rsp+38h] [rbp-50h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 5149LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 5150LL;
    WdLogEvent5_WdAssertion(v11);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8);
  if ( !Current )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v15 + 24) = 5153LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentThread = KeGetCurrentThread();
  v17 = *((_QWORD *)Current + 36);
  if ( *(struct _KTHREAD **)(v17 + 16) != CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, CurrentThread);
    *(_QWORD *)(v18 + 24) = 5154LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *a4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v52, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v52);
  _InterlockedIncrement64((volatile signed __int64 *)this[2] + 3);
  *(_QWORD *)&Uuid.Data1 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  while ( 1 )
  {
    v19 = ExUuidCreate(&Uuid);
    if ( v19 >= 0 )
      break;
    if ( v19 != -1073741267 )
    {
      v31 = WdLogNewEntry5_WdError(v21, v20, v22);
      v32 = -1073741801;
      *(_QWORD *)(v31 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v31);
      goto LABEL_29;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  Data1 = Uuid.Data1;
  v24 = (char *)(this + 8);
  do
  {
    v25 = 1;
    v26 = this[8];
    while ( 1 )
    {
      v27 = Data1;
      if ( v26 == (DXGADAPTER *)v24 || !v26 )
        break;
      v28 = *((_DWORD *)v26 + 12);
      v29 = Data1 + 1;
      v26 = *(DXGADAPTER **)v26;
      if ( v28 != Data1 )
        v29 = Data1;
      v30 = 0;
      Data1 = v29;
      if ( v28 != v27 )
        v30 = v25;
      v25 = v30;
    }
  }
  while ( !v25 );
  v33 = operator new[](0x40uLL, 0x4B677844u, PagedPool);
  v38 = v33;
  if ( v33 )
  {
    v33[2] = this;
    *v33 = 0LL;
    v33[1] = 0LL;
    v33[5] = Current;
    v33[3] = 0LL;
    v33[4] = 0LL;
    *((_DWORD *)v33 + 12) = Data1;
    *((_DWORD *)v33 + 13) = a2;
    *((_DWORD *)v33 + 14) = a3;
  }
  else
  {
    v38 = 0LL;
  }
  if ( v38 )
  {
    v40 = *(_QWORD *)v24;
    if ( *(char **)(*(_QWORD *)v24 + 8LL) == v24 )
    {
      *v38 = v40;
      v38[1] = v24;
      *(_QWORD *)(v40 + 8) = v38;
      *(_QWORD *)v24 = v38;
      v42 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
      if ( v42 >= 0 )
      {
        v45 = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 36) + 16LL) != v45 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v45, v41);
          *(_QWORD *)(v46 + 24) = 584LL;
          WdLogEvent5_WdAssertion(v46);
        }
        v47 = (_QWORD *)((char *)Current + 272);
        v48 = v38 + 3;
        v49 = *((_QWORD *)Current + 34);
        if ( *(struct DXGPROCESS **)(v49 + 8) == (struct DXGPROCESS *)((char *)Current + 272) )
        {
          *v48 = v49;
          v48[1] = v47;
          *(_QWORD *)(v49 + 8) = v48;
          *v47 = v48;
          *a4 = Data1;
          goto LABEL_39;
        }
      }
      else
      {
        v43 = *v38;
        if ( *(_QWORD **)(*v38 + 8LL) == v38 )
        {
          v44 = (_QWORD *)v38[1];
          if ( (_QWORD *)*v44 == v38 )
          {
            *v44 = v43;
            *(_QWORD *)(v43 + 8) = v44;
            DXGCOPYPROTECTION::`scalar deleting destructor'((DXGCOPYPROTECTION *)v38);
            DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_39:
            v32 = v42;
            goto LABEL_40;
          }
        }
      }
    }
    __fastfail(3u);
  }
  v39 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
  v32 = -1073741801;
  *(_QWORD *)(v39 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v39);
LABEL_29:
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
LABEL_40:
  if ( v52[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v52);
  return v32;
}
