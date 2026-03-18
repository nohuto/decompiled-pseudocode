/*
 * XREFs of ?RemoveBindingManagerReferenceFromTrackerIfNecessary@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@II@Z @ 0x1C01ADB38
 * Callers:
 *     ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01ADD40 (-SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCAppli.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C01ACA88 (-SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicatio.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveBindingManagerReferenceFromTrackerIfNecessary(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4)
{
  char v4; // r15
  char v5; // r14
  unsigned __int64 v8; // rdx
  DirectComposition::CInteractionTrackerMarshaler *v9; // rsi
  unsigned __int64 v10; // rdx
  DirectComposition::CInteractionTrackerMarshaler *v11; // rdi
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  int v14; // r10d
  int v15; // r9d
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r11
  int v19; // ecx
  __int128 v20; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  v8 = (unsigned int)(a3 - 1);
  if ( a3 && v8 < *((_QWORD *)a2 + 10) )
  {
    _mm_lfence();
    v9 = *(DirectComposition::CInteractionTrackerMarshaler **)(v8 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (unsigned int)(a4 - 1);
  if ( a4 && v10 < *((_QWORD *)a2 + 10) )
  {
    _mm_lfence();
    v11 = *(DirectComposition::CInteractionTrackerMarshaler **)(v10 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9
    && v11
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CInteractionTrackerMarshaler *, __int64))(*(_QWORD *)v9 + 120LL))(
         v9,
         88LL)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CInteractionTrackerMarshaler *, __int64))(*(_QWORD *)v11 + 120LL))(
         v11,
         88LL) )
  {
    v12 = *((_QWORD *)this + 10);
    v13 = 0;
    v14 = *((_DWORD *)v9 + 6);
    v15 = *((_DWORD *)v11 + 6);
    if ( !v12 )
      goto LABEL_24;
    v16 = *((_QWORD *)this + 11);
    v17 = 0LL;
    v18 = *((_QWORD *)this + 7);
    do
    {
      v20 = *(_OWORD *)(v17 * v16 + v18);
      if ( *(_DWORD *)(v17 * v16 + v18 + 16) )
      {
        v19 = *(_DWORD *)(v20 + 24);
        if ( v19 == v14 || *(_DWORD *)(*((_QWORD *)&v20 + 1) + 24LL) == v14 )
          v4 = 1;
        if ( v19 == v15 || *(_DWORD *)(*((_QWORD *)&v20 + 1) + 24LL) == v15 )
          v5 = 1;
      }
      v17 = ++v13;
    }
    while ( v13 < v12 );
    if ( !v4 )
LABEL_24:
      DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(v9, a2, 0LL);
    if ( !v5 )
      DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(v11, a2, 0LL);
  }
}
