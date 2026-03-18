/*
 * XREFs of ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005A108
 * Callers:
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005A81C (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005AB98 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::EnqueueConsumerUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // rax
  PRKEVENT v6; // rcx
  __int64 v7; // rax
  struct CFlipPresentUpdate *v8; // rdi
  __int64 v9; // rbx
  CFlipManager *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax

  v2 = this + 17;
  if ( (_QWORD *)*v2 == v2 )
  {
    KeSetEvent(this[29], 1, 0);
  }
  else
  {
    v5 = (__int64)this[18];
    v6 = (PRKEVENT)(v5 - 24);
    v7 = -v5;
    v8 = (struct CFlipPresentUpdate *)((unsigned __int64)v6 & -(__int64)(v7 != 0));
    if ( *((_BYTE *)v8 + 73) )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 32LL))((unsigned __int64)v6 & -(__int64)(v7 != 0));
      if ( v9 == (*(__int64 (__fastcall **)(struct CFlipPresentUpdate *))(*(_QWORD *)a2 + 32LL))(a2) )
      {
        CFlipManager::ReleaseKernelPresentUpdateReferences(v10, v8);
        if ( v8 )
          (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
      }
    }
  }
  v11 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v12 = (_QWORD *)v2[1];
  if ( (_QWORD *)*v12 != v2 )
    __fastfail(3u);
  *v11 = v2;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v12;
  *v12 = v11;
  v2[1] = v11;
  this[26] = (PRKEVENT)((char *)this[26] + 1);
}
