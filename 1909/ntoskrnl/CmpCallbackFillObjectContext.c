/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1405F9140
 * Callers:
 *     CmpCallCallBacksEx @ 0x1405F8BA0 (CmpCallCallBacksEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     CmpGetCallbackObjectContext @ 0x1406C01C0 (CmpGetCallbackObjectContext.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _QWORD *a2, __int64 *a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // r14
  _DWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // r14
  _DWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // r14
  _DWORD *v20; // rax
  _QWORD *v21; // r14
  _DWORD *v22; // rax
  _QWORD *v23; // r14
  struct _KTHREAD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  struct _KTHREAD *v27; // rax
  __int64 v28; // rdx
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdx
  struct _KTHREAD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  struct _KTHREAD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx

  switch ( a1 )
  {
    case 29:
LABEL_15:
      v9 = 0LL;
LABEL_14:
      a2[5] = v9;
      return;
    case 28:
LABEL_16:
      v11 = (_DWORD *)a2[1];
      v12 = 0LL;
      if ( v11 )
      {
        if ( *v11 == 1803104306 )
        {
          v13 = v11 + 18;
          if ( (_QWORD *)*v13 != v13 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v41 = (_QWORD *)*v13;
            if ( (_QWORD *)*v13 != v13 )
            {
              v42 = *a3;
              while ( v41[4] != v42 )
              {
                if ( v41[4] >= v42 )
                {
                  v41 = (_QWORD *)*v41;
                  if ( v41 != v13 )
                    continue;
                }
                goto LABEL_94;
              }
              v12 = v41[7];
            }
LABEL_94:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[11] = v12;
      break;
    case 23:
LABEL_11:
      v8 = (_DWORD *)*a2;
      v9 = 0LL;
      if ( *a2 )
      {
        if ( *v8 == 1803104306 )
        {
          v10 = v8 + 18;
          if ( (_QWORD *)*v10 != v10 )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v38 = (_QWORD *)*v10;
            if ( (_QWORD *)*v10 != v10 )
            {
              v39 = *a3;
              while ( v38[4] != v39 )
              {
                if ( v38[4] >= v39 )
                {
                  v38 = (_QWORD *)*v38;
                  if ( v38 != v10 )
                    continue;
                }
                goto LABEL_86;
              }
              v9 = v38[7];
            }
LABEL_86:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      goto LABEL_14;
    case 8:
      v14 = (_DWORD *)*a2;
      v15 = 0LL;
      if ( *a2 )
      {
        if ( *v14 == 1803104306 )
        {
          v16 = v14 + 18;
          if ( (_QWORD *)*v16 != v16 )
          {
            v34 = KeGetCurrentThread();
            --v34->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v35 = (_QWORD *)*v16;
            if ( (_QWORD *)*v16 != v16 )
            {
              v36 = *a3;
              while ( v35[4] != v36 )
              {
                if ( v35[4] >= v36 )
                {
                  v35 = (_QWORD *)*v35;
                  if ( v35 != v16 )
                    continue;
                }
                goto LABEL_78;
              }
              v15 = v35[7];
            }
LABEL_78:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[7] = v15;
      break;
    case 22:
      goto LABEL_11;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
          a2[6] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 2:
        case 4:
        case 34:
          a2[3] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 3:
        case 36:
        case 47:
          a2[5] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 5:
          v20 = (_DWORD *)*a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v20 != 1803104306 )
            goto LABEL_10;
          v21 = v20 + 18;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_10;
          v24 = KeGetCurrentThread();
          --v24->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v25 = (_QWORD *)*v21;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_50;
          v26 = *a3;
          while ( v25[4] != v26 )
          {
            if ( v25[4] >= v26 )
            {
              v25 = (_QWORD *)*v25;
              if ( v25 != v21 )
                continue;
            }
            goto LABEL_50;
          }
          goto LABEL_49;
        case 6:
          v22 = (_DWORD *)*a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v22 != 1803104306 )
            goto LABEL_10;
          v23 = v22 + 18;
          if ( (_QWORD *)*v23 == v23 )
            goto LABEL_10;
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v25 = (_QWORD *)*v23;
          if ( (_QWORD *)*v23 == v23 )
            goto LABEL_50;
          v28 = *a3;
          while ( v25[4] != v28 )
          {
            if ( v25[4] >= v28 )
            {
              v25 = (_QWORD *)*v25;
              if ( v25 != v23 )
                continue;
            }
            goto LABEL_50;
          }
          goto LABEL_49;
        case 7:
          v5 = (_DWORD *)*a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v5 != 1803104306 )
            goto LABEL_10;
          v7 = v5 + 18;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_10;
          v29 = KeGetCurrentThread();
          --v29->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v25 = (_QWORD *)*v7;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_50;
          v30 = *a3;
          while ( v25[4] != v30 )
          {
            if ( v25[4] >= v30 )
            {
              v25 = (_QWORD *)*v25;
              if ( v25 != v7 )
                continue;
            }
            goto LABEL_50;
          }
LABEL_49:
          v6 = v25[7];
LABEL_50:
          ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_10:
          a2[6] = v6;
          return;
        case 9:
          a2[7] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v17 = (_DWORD *)*a2;
          v18 = 0LL;
          if ( !*a2 )
            goto LABEL_27;
          if ( *v17 != 1803104306 )
            goto LABEL_27;
          v19 = v17 + 18;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_27;
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v32 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_70;
          v33 = *a3;
          break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 31:
        case 33:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
          goto LABEL_11;
        case 25:
        case 27:
          goto LABEL_15;
        case 26:
          goto LABEL_16;
        case 32:
          a2[9] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        default:
          return;
      }
      while ( v32[4] != v33 )
      {
        if ( v32[4] >= v33 )
        {
          v32 = (_QWORD *)*v32;
          if ( v32 != v19 )
            continue;
        }
        goto LABEL_70;
      }
      v18 = v32[7];
LABEL_70:
      ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_27:
      a2[2] = v18;
      return;
  }
}
