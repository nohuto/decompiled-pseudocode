/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C1C04
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060358 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085D74 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, VIDMM_DEVICE **a3)
{
  char *v3; // r15
  char *v4; // rbx
  __int64 v5; // rdi
  char *v7; // r12
  _QWORD **v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // r13
  _QWORD **v11; // r13
  _QWORD *v12; // r14
  __int64 v13; // rdx
  int v14; // eax
  VIDMM_SEGMENT *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  VIDMM_SEGMENT *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v30; // [rsp+20h] [rbp-C8h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-98h] BYREF
  struct _KAPC_STATE v32; // [rsp+80h] [rbp-68h] BYREF

  v3 = (char *)this + 136;
  v4 = (char *)*((_QWORD *)this + 17);
  LODWORD(v5) = 0;
  do
  {
    v7 = v4;
    if ( v4 == v3 )
      break;
    v4 = *(char **)v4;
    v8 = (_QWORD **)(v7 + 16);
    v9 = *v8;
    do
    {
      v10 = v9;
      if ( v9 == v8 )
        break;
      v9 = (_QWORD *)*v9;
      v11 = (_QWORD **)(v10 + 2);
      v12 = *v11;
      while ( v12 != v11 )
      {
        a3 = (VIDMM_DEVICE **)(v12 - 7);
        v12 = (_QWORD *)*v12;
        v13 = *(_QWORD *)*a3;
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 504) + 12LL) || (**(_DWORD **)(v13 + 504) & 0x20000) != 0 )
        {
          v14 = *(_DWORD *)(v13 + 344);
          if ( v14 )
          {
            LODWORD(v5) = -1071775486;
            break;
          }
        }
        else
        {
          v14 = *(_DWORD *)(v13 + 344);
        }
        if ( v14 )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), a3);
      }
    }
    while ( (int)v5 >= 0 );
  }
  while ( (int)v5 >= 0 );
  if ( (int)v5 >= 0 )
  {
    v15 = (VIDMM_SEGMENT *)*((_QWORD *)this + 20);
    while ( v15 != (VIDMM_SEGMENT *)((char *)this + 160) )
    {
      v16 = (__int64)v15 - 384;
      v15 = *(VIDMM_SEGMENT **)v15;
      v17 = *(_QWORD *)(v16 + 104);
      if ( v17 && (*(_BYTE *)(v17 + 32) & 1) != 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v16 + 320));
        KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v16 + 104) + 8LL), &ApcState);
        v18 = VIDMM_GLOBAL::Rotate(
                *((_QWORD *)this + 1),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 104) + 8LL) + 24LL),
                *(_QWORD *)(*(_QWORD *)(v16 + 104) + 24LL),
                3u,
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                v16);
        v5 = v18;
        if ( v18 < 0 )
        {
          if ( v18 == -1073741558 )
          {
            *(_DWORD *)(v16 + 76) |= 0x100000u;
            LODWORD(v5) = 0;
          }
          else
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
            v21[3] = 270LL;
            v21[4] = 4LL;
            v21[5] = 3LL;
            v21[6] = v5;
            v21[7] = 0LL;
            WdLogEvent5_WdCriticalError(v21);
          }
        }
        *(_BYTE *)(*(_QWORD *)(v16 + 104) + 32LL) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 320));
      }
    }
    if ( (int)v5 >= 0 )
    {
      v22 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
      while ( v22 != (VIDMM_SEGMENT *)((char *)this + 176) )
      {
        v23 = (__int64)v22 - 384;
        v22 = *(VIDMM_SEGMENT **)v22;
        if ( *(_DWORD *)(v23 + 344) )
        {
          LOBYTE(a3) = 1;
          LOBYTE(v30) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, VIDMM_DEVICE **, _QWORD, int, _QWORD))(**(_QWORD **)(v23 + 136) + 48LL))(
            *(_QWORD *)(v23 + 136),
            v23,
            a3,
            0LL,
            v30,
            0LL);
        }
        else
        {
          v24 = *(_QWORD *)(v23 + 104);
          if ( v24 && (*(_BYTE *)(v24 + 32) & 1) != 0 )
          {
            memset(&v32, 0, sizeof(v32));
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v23 + 320));
            KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v23 + 104) + 8LL), &v32);
            v25 = VIDMM_GLOBAL::Rotate(
                    *((_QWORD *)this + 1),
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 104) + 8LL) + 24LL),
                    *(_QWORD *)(*(_QWORD *)(v23 + 104) + 24LL),
                    3u,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    1,
                    v23);
            v5 = v25;
            if ( v25 < 0 )
            {
              if ( v25 == -1073741558 )
              {
                *(_DWORD *)(v23 + 76) |= 0x100000u;
                LODWORD(v5) = 0;
              }
              else
              {
                v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26);
                v28[3] = 270LL;
                v28[4] = 4LL;
                v28[5] = 3LL;
                v28[6] = v5;
                v28[7] = 0LL;
                WdLogEvent5_WdCriticalError(v28);
              }
            }
            *(_BYTE *)(*(_QWORD *)(v23 + 104) + 32LL) &= ~1u;
            KeUnstackDetachProcess(&v32);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 320));
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
