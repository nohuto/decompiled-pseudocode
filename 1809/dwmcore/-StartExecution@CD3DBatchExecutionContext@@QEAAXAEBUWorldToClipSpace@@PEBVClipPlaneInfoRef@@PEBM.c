/*
 * XREFs of ?StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@PEBM@Z @ 0x1800CC648
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800C99A0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DBatchExecutionContext::StartExecution(
        CD3DBatchExecutionContext *this,
        const struct WorldToClipSpace *a2,
        const struct ClipPlaneInfoRef *a3,
        float *a4)
{
  __int64 v8; // rdi
  _OWORD *v9; // rsi
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 192LL))(*((_QWORD *)this + 2), 4LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 344LL))(
    *((_QWORD *)this + 2),
    *(_QWORD *)(*((_QWORD *)this + 1) + 1760LL));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 288LL))(
    *((_QWORD *)this + 2),
    *(_QWORD *)(*((_QWORD *)this + 1) + 1768LL),
    0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 152LL))(
    *((_QWORD *)this + 2),
    *(_QWORD *)(*((_QWORD *)this + 4) + 72LL),
    57LL);
  v8 = *((_QWORD *)this + 4);
  v9 = (_OWORD *)(((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL));
  if ( v9 )
  {
    if ( memcmp_0(v9, (const void *)(v8 + 176), 0x50uLL) )
    {
      *(_BYTE *)(v8 + 120) = 1;
      *(_OWORD *)(v8 + 176) = *v9;
      *(_OWORD *)(v8 + 192) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x10);
      *(_OWORD *)(v8 + 208) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x20);
      *(_OWORD *)(v8 + 224) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x30);
      *(_OWORD *)(v8 + 240) = *(_OWORD *)((((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL)) + 0x40);
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  *(_BYTE *)(v8 + 256) = v10;
  v11 = *(_QWORD *)(v8 + 128) - *(_QWORD *)a2;
  if ( !v11 )
    v11 = *(_QWORD *)(v8 + 136) - *((_QWORD *)a2 + 1);
  if ( v11 )
  {
    *(_BYTE *)(v8 + 120) = 1;
    *(_OWORD *)(v8 + 128) = *(_OWORD *)a2;
  }
  v12 = *((_QWORD *)this + 2);
  v15 = *(_QWORD *)(v8 + 112);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v12 + 56LL))(v12, 0LL, 1LL, &v15);
  if ( a4 )
  {
    v13 = *((_QWORD *)this + 4);
    if ( *(_DWORD *)a4 == *(_DWORD *)(v13 + 288) )
    {
      if ( !*(_BYTE *)(v13 + 280) )
      {
LABEL_16:
        v14 = *((_QWORD *)this + 2);
        v16 = *(_QWORD *)(v13 + 272);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v14 + 128LL))(v14, 2LL, 1LL, &v16);
        return;
      }
    }
    else
    {
      *(float *)(v13 + 288) = *a4;
      *(_BYTE *)(v13 + 280) = 1;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1)
                                                                                                  + 640LL)
                                                                                    + 384LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 640LL),
      *(_QWORD *)(v13 + 272),
      0LL,
      0LL,
      v13 + 288,
      0,
      0);
    *(_BYTE *)(v13 + 280) = 0;
    goto LABEL_16;
  }
}
