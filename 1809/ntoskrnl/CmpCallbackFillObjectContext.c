/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1405E7060
 * Callers:
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpGetCallbackObjectContext @ 0x14069D278 (CmpGetCallbackObjectContext.c)
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
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx

  switch ( a1 )
  {
    case 28:
LABEL_12:
      v8 = (_DWORD *)a2[1];
      v9 = 0LL;
      if ( v8 )
      {
        if ( *v8 == 1803104306 )
        {
          v10 = v8 + 18;
          if ( (_QWORD *)*v10 != v10 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v42 = (_QWORD *)*v10;
            if ( (_QWORD *)*v10 != v10 )
            {
              v43 = *a3;
              while ( 1 )
              {
                v44 = v42[4];
                if ( v44 == v43 )
                  break;
                if ( v44 >= v43 )
                {
                  v42 = (_QWORD *)*v42;
                  if ( v42 != v10 )
                    continue;
                }
                goto LABEL_84;
              }
              v9 = v42[7];
            }
LABEL_84:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[11] = v9;
      break;
    case 29:
LABEL_11:
      a2[5] = 0LL;
      break;
    case 8:
      v11 = (_DWORD *)*a2;
      v12 = 0LL;
      if ( *a2 )
      {
        if ( *v11 == 1803104306 )
        {
          v13 = v11 + 18;
          if ( (_QWORD *)*v13 != v13 )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v38 = (_QWORD *)*v13;
            if ( (_QWORD *)*v13 != v13 )
            {
              v39 = *a3;
              while ( 1 )
              {
                v40 = v38[4];
                if ( v40 == v39 )
                  break;
                if ( v40 >= v39 )
                {
                  v38 = (_QWORD *)*v38;
                  if ( v38 != v13 )
                    continue;
                }
                goto LABEL_76;
              }
              v12 = v38[7];
            }
LABEL_76:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[7] = v12;
      break;
    case 23:
LABEL_7:
      v5 = (_DWORD *)*a2;
      v6 = 0LL;
      if ( *a2 )
      {
        if ( *v5 == 1803104306 )
        {
          v7 = v5 + 18;
          if ( (_QWORD *)*v7 != v7 )
          {
            v33 = KeGetCurrentThread();
            --v33->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v34 = (_QWORD *)*v7;
            if ( (_QWORD *)*v7 != v7 )
            {
              v35 = *a3;
              while ( 1 )
              {
                v36 = v34[4];
                if ( v36 == v35 )
                  break;
                if ( v36 >= v35 )
                {
                  v34 = (_QWORD *)*v34;
                  if ( v34 != v7 )
                    continue;
                }
                goto LABEL_68;
              }
              v6 = v34[7];
            }
LABEL_68:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[5] = v6;
      break;
    case 7:
      v14 = (_DWORD *)*a2;
      v15 = 0LL;
      if ( *a2 )
      {
        if ( *v14 == 1803104306 )
        {
          v16 = v14 + 18;
          if ( (_QWORD *)*v16 != v16 )
          {
            v30 = KeGetCurrentThread();
            --v30->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v23 = (_QWORD *)*v16;
            if ( (_QWORD *)*v16 != v16 )
            {
              v31 = *a3;
              while ( 1 )
              {
                v32 = v23[4];
                if ( v32 == v31 )
                  break;
                if ( v32 >= v31 )
                {
                  v23 = (_QWORD *)*v23;
                  if ( v23 != v16 )
                    continue;
                }
                goto LABEL_46;
              }
LABEL_45:
              v15 = v23[7];
            }
LABEL_46:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
      }
LABEL_23:
      a2[6] = v15;
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
        case 6:
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
          v15 = 0LL;
          if ( !*a2 )
            goto LABEL_23;
          if ( *v20 != 1803104306 )
            goto LABEL_23;
          v21 = v20 + 18;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_23;
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v23 = (_QWORD *)*v21;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_46;
          v24 = *a3;
          while ( 1 )
          {
            v25 = v23[4];
            if ( v25 == v24 )
              goto LABEL_45;
            if ( v25 >= v24 )
            {
              v23 = (_QWORD *)*v23;
              if ( v23 != v21 )
                continue;
            }
            goto LABEL_46;
          }
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
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v27 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_54;
          v28 = *a3;
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
          goto LABEL_7;
        case 25:
        case 27:
          goto LABEL_11;
        case 26:
          goto LABEL_12;
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
      while ( 1 )
      {
        v29 = v27[4];
        if ( v29 == v28 )
          break;
        if ( v29 >= v28 )
        {
          v27 = (_QWORD *)*v27;
          if ( v27 != v19 )
            continue;
        }
        goto LABEL_54;
      }
      v18 = v27[7];
LABEL_54:
      ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_27:
      a2[2] = v18;
      break;
  }
}
