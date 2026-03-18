/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C005AFE0
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C005ADD0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005B9E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@3@W4DeferReason@43@@Z @ 0x1C005CB30 (-RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qpqxxq @ 0x1C00EA54C (McTemplateK0qpqxxq.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C01698E4 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r14
  const struct COMPOSITION_FRAME_INFO *v4; // r12
  BOOL v6; // edi
  struct _ERESOURCE *v7; // rbx
  signed int v8; // ebx
  __int64 *v9; // rcx
  PSLIST_ENTRY v10; // rdi
  PSLIST_ENTRY v11; // rcx
  struct _SLIST_ENTRY *Next; // r8
  PSLIST_ENTRY *v13; // r13
  _QWORD *v14; // r14
  PSLIST_ENTRY v15; // rbx
  PSLIST_ENTRY *v16; // r15
  __int64 v17; // rax
  PSLIST_ENTRY v19; // rdi
  struct _SLIST_ENTRY *v20; // r14
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rdx
  struct _SLIST_ENTRY *v25; // rax
  __int64 i; // rdi
  struct _SLIST_ENTRY *v27; // rax
  __int64 v28; // rax
  _QWORD *p_Next; // rdx
  unsigned int v30; // edi
  __int64 v31; // r14
  struct _SLIST_ENTRY *v32; // rax
  struct _SLIST_ENTRY *v33; // rax
  __int64 v34; // r12
  __int64 v35; // r15
  PSLIST_ENTRY *v36; // rax
  void *v37; // rcx
  DirectComposition::CEvent *v38; // rcx
  LARGE_INTEGER *v39; // rbx
  char v40; // cl
  struct _SLIST_ENTRY *v41; // [rsp+50h] [rbp-28h] BYREF
  __int64 v42; // [rsp+58h] [rbp-20h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-18h] BYREF
  int v44; // [rsp+C0h] [rbp+48h] BYREF
  const struct COMPOSITION_FRAME_INFO *v45; // [rsp+C8h] [rbp+50h]
  unsigned __int64 *v46; // [rsp+D0h] [rbp+58h]
  __int64 *v47; // [rsp+D8h] [rbp+60h] BYREF

  v46 = a3;
  v45 = a2;
  v3 = a3;
  v4 = a2;
  v6 = PsGetCurrentProcess(this) == (_QWORD)g_pepDwm;
  *v3 = 0LL;
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  DirectComposition::CConnection::s_capabilityInfo = *(_OWORD *)((char *)v4 + 28);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  if ( v6 && !DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  v8 = *((_DWORD *)this + 37) == 0 ? 0xC000020C : 0;
  if ( *((_DWORD *)this + 37) && !*((_QWORD *)this + 23) )
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 160LL))(*((_QWORD *)this + 31));
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct COMPOSITION_FRAME_INFO *, __int64 **))(**((_QWORD **)this + 31)
                                                                                              + 168LL))(
           *((_QWORD *)this + 31),
           v4,
           &v47);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 16LL))(*((_QWORD *)this + 31));
      v9 = v47;
      *((_QWORD *)this + 20) = *(_QWORD *)v4;
      v42 = (*(__int64 (__fastcall **)(__int64 *))(*v9 + 72))(v9);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
      {
        v8 = -1073740024;
LABEL_17:
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 24LL))(*((_QWORD *)this + 31));
        v17 = *v47;
        if ( v8 < 0 )
          (*(void (**)(void))(v17 + 32))();
        else
          *v3 = (*(__int64 (**)(void))(v17 + 72))();
        (*(void (__fastcall **)(__int64 *))(*v47 + 8))(v47);
        goto LABEL_20;
      }
      v10 = 0LL;
      v11 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
      if ( v11 )
      {
        do
        {
          v28 = *((_QWORD *)&v11[1].Next + 1);
          Next = v11->Next;
          if ( v28 )
          {
            p_Next = *(_QWORD **)(v28 + 24);
            *(_QWORD *)(v28 + 24) = 0LL;
            v33 = (struct _SLIST_ENTRY *)*((_QWORD *)&v11[1].Next + 1);
            *((_QWORD *)&v11[1].Next + 1) = 0LL;
            v11->Next = v33;
          }
          else
          {
            p_Next = &v11->Next;
          }
          *p_Next = v10;
          v10 = v11;
          v11 = Next;
        }
        while ( Next );
      }
      v13 = (PSLIST_ENTRY *)((char *)this + 136);
      v41 = v10;
      v14 = (_QWORD *)*((_QWORD *)this + 17);
      if ( v14 )
      {
        v34 = v42;
        do
        {
          v35 = v14[1];
          if ( *(_BYTE *)(v35 + 49) )
          {
            if ( (*(_BYTE *)(v35 + 241) & 0x10) != 0 )
            {
              v39 = *(LARGE_INTEGER **)(v35 + 720);
              v39[6].QuadPart = v34;
              v39[7] = KeQueryPerformanceCounter(0LL);
            }
            *(_BYTE *)(v35 + 49) = 0;
          }
          v36 = (PSLIST_ENTRY *)v14;
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
        v15 = *v13;
        *v13 = 0LL;
        v4 = v45;
        *v36 = v10;
        v10 = v15;
        v41 = v15;
      }
      else
      {
        v15 = v10;
      }
      v16 = &v41;
      if ( !v15 )
      {
LABEL_14:
        v8 = 0;
        *((_QWORD *)this + 21) = *((_QWORD *)v4 + 1);
        *((_DWORD *)this + 44) = *((_DWORD *)v4 + 5);
        *((_DWORD *)this + 45) = *((_DWORD *)v4 + 6);
        if ( v10 )
          (*(void (__fastcall **)(__int64 *, struct _SLIST_ENTRY **))(*v47 + 56))(v47, &v10[7].Next + 1);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 31) + 72LL))(*((_QWORD *)this + 31), v47);
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 23) + 16LL))(*((_QWORD *)this + 23), v47);
        v3 = v46;
        goto LABEL_17;
      }
      v19 = v15;
      do
      {
        v20 = v19[6].Next;
        if ( v20
          && BYTE1(v20[2].Next)
          && ((__int64)v19[2].Next & 0x10) != 0
          && (!DirectComposition::CBatch::ShouldDefer(
                 (DirectComposition::CBatch *)v19,
                 *((_QWORD *)this + 20),
                 0,
                 0LL,
                 (enum DirectComposition::CBatch::DeferReason *)&v44)
           || v44 == 6) )
        {
          _InterlockedDecrement((volatile signed __int32 *)&v20[2].Next + 1);
          LOBYTE(v19[2].Next) &= ~0x10u;
        }
        v19 = v19->Next;
      }
      while ( v19 );
      v21 = v42;
      while ( 1 )
      {
        v22 = *((_QWORD *)&v15->Next + 1);
        *((_QWORD *)&v15[3].Next + 1) = v21;
        v23 = *((_QWORD *)this + 10);
        v24 = *((_QWORD *)this + 20);
        if ( *(_BYTE *)(v22 + 49) )
        {
          v30 = 1;
          goto LABEL_46;
        }
        if ( *(char *)(*((_QWORD *)&v15->Next + 1) + 240LL) < 0 )
          break;
        v25 = v15[4].Next;
        if ( v25 && v24 && (__int64)v25 - v24 > 0 )
        {
          v30 = 3;
          goto LABEL_44;
        }
        if ( *((_QWORD *)&v15[2].Next + 1) && SLODWORD(v15[3].Next) > 0 )
        {
          v30 = 4;
          goto LABEL_46;
        }
        for ( i = *((_QWORD *)&v15[6].Next + 1); i; *((_QWORD *)&v15[6].Next + 1) = i )
        {
          v37 = *(void **)(i + 8);
          Timeout.QuadPart = 0LL;
          if ( KeWaitForSingleObject(v37, UserRequest, 0, 0, &Timeout) )
          {
            v30 = 5;
            goto LABEL_44;
          }
          v38 = (DirectComposition::CEvent *)*((_QWORD *)&v15[6].Next + 1);
          i = *(_QWORD *)v38;
          if ( v38 )
            DirectComposition::CEvent::`scalar deleting destructor'(v38, v24);
        }
        v27 = v15[6].Next;
        if ( !v27 || (v40 = BYTE1(v27[2].Next)) != 0 && SHIDWORD(v27[2].Next) <= 0 )
        {
          if ( ((__int64)v15[2].Next & 8) != 0 )
            *(_BYTE *)(*((_QWORD *)&v15->Next + 1) + 240LL) |= 0x80u;
          v16 = &v15->Next;
          goto LABEL_35;
        }
        v30 = 6;
        if ( v23 && !v40 )
LABEL_45:
          KeSetEvent(*(PRKEVENT *)(v23 + 8), 1, 0);
LABEL_46:
        v31 = *((_QWORD *)&v15->Next + 1);
        if ( !*(_BYTE *)(v31 + 49) )
        {
          if ( (*(_BYTE *)(v31 + 241) & 0x10) != 0 )
            DirectComposition::CApplicationChannel::WaitForCommitCompletionData::RecordBatchDeferred(
              *(_QWORD *)(v31 + 720),
              v15,
              v30);
          *(_BYTE *)(v31 + 49) = 1;
        }
        if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
          McTemplateK0qpqxxq(
            *((_QWORD *)&v15->Next + 1),
            v24,
            (_DWORD)Next,
            *(_DWORD *)(*((_QWORD *)&v15->Next + 1) + 28LL),
            (char)v15,
            (char)v15[1].Next,
            (char)v15[4].Next,
            *((_QWORD *)this + 20),
            v30);
        v32 = v15->Next;
        *((_QWORD *)&v15[3].Next + 1) = 0LL;
        *v16 = v32;
        *v13 = v15;
        v13 = &v15->Next;
        v15->Next = 0LL;
LABEL_35:
        v15 = *v16;
        if ( !*v16 )
        {
          v10 = v41;
          v4 = v45;
          goto LABEL_14;
        }
      }
      v30 = 2;
LABEL_44:
      if ( v23 )
        goto LABEL_45;
      goto LABEL_46;
    }
  }
LABEL_20:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
