/*
 * XREFs of ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800923D4
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800922F8 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ProcessPostPresent(CComposition *this, char a2)
{
  __int64 v2; // r12
  int v5; // esi
  CD3DDeviceManager *v6; // rcx
  __int64 v7; // r14
  char v8; // dl
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  int v12; // edi
  unsigned int i; // ebp
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // r15d
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // edi
  unsigned int j; // r14d
  void *v25; // rcx
  unsigned int v27; // edi
  __int64 v28; // r15
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // ebp

  v2 = *((_QWORD *)this + 48);
  v5 = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 48LL))(*((_QWORD *)this + 9));
  v7 = *((_QWORD *)this + 8);
  v8 = 0;
  if ( !*(_BYTE *)(v7 + 112) )
    v8 = a2 ^ 1;
  v9 = CD3DDeviceManager::HandleAdvanceFrame(v6, v8);
  v12 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x1BEu, 0LL);
  for ( i = 0; i < *(_DWORD *)(v7 + 48); ++i )
  {
    LOBYTE(v10) = a2;
    v14 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL * i) + 64LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 72LL))(v14, v10);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1C2u, 0LL);
    if ( !v12 || v12 >= 0 && v17 < 0 )
      v12 = v17;
  }
  *(_BYTE *)(v7 + 112) = 0;
  if ( v2 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 68) + 24LL))(*((_QWORD *)this + 68), v2);
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x457u, 0LL);
      goto LABEL_18;
    }
    v20 = *((_QWORD *)this + 47);
    if ( !v20 )
      goto LABEL_16;
    if ( a2 )
    {
      *(_QWORD *)(*(_QWORD *)v20 + 24LL) = 0LL;
LABEL_16:
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 68) + 40LL))(*((_QWORD *)this + 68), v2);
      v5 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x465u, 0LL);
        goto LABEL_18;
      }
    }
  }
  if ( *((_DWORD *)this + 194) )
  {
    v27 = 0;
    do
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 94) + 8LL * v27++));
    while ( v27 < *((_DWORD *)this + 194) );
    *((_DWORD *)this + 194) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 752, 8LL);
  }
LABEL_18:
  v23 = 0;
  for ( j = 0; j < *((_DWORD *)this + 182); ++j )
  {
    v28 = *(_QWORD *)(*((_QWORD *)this + 88) + 8LL * j);
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 168LL))(v28);
    v31 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x33Cu, 0LL);
    if ( !v23 || v23 >= 0 && v31 < 0 )
      v23 = v31;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v25 = (void *)*((_QWORD *)this + 88);
  *((_DWORD *)this + 182) = 0;
  if ( v25 != *((void **)this + 89) )
  {
    operator delete(v25);
    *((_QWORD *)this + 88) = *((_QWORD *)this + 89);
    *((_DWORD *)this + 181) = *((_DWORD *)this + 180);
  }
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v23, 0x46Eu, 0LL);
  if ( !v5 || v5 >= 0 && v23 < 0 )
    return (unsigned int)v23;
  return (unsigned int)v5;
}
