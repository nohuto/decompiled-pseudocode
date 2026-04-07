/*
 * XREFs of ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x18002232C
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x1800220B0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180022054 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTimelineBase::UpdateBeforeTickWorker(CTimelineBase *this, struct WindowsAnimation *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  void *v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v2 = (_QWORD *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *v2 = 0LL;
  }
  if ( *((double *)this + 3) < 0.01 )
  {
    CTimelineBase::JumpToFinalValue(this);
    v9 = 0;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)a2 )
  {
    v9 = -2147221008;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147221008, 0xA3u, v17);
    goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct WindowsAnimation *, _QWORD *))(**(_QWORD **)a2 + 24LL))(
         *(_QWORD *)a2,
         a2,
         v2);
  v9 = v6;
  if ( v6 < 0 )
  {
    v16 = 165;
    goto LABEL_39;
  }
  v10 = *((_DWORD *)this + 14);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 96LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v16 = 191;
        goto LABEL_39;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v16 = 192;
        goto LABEL_39;
      }
      goto LABEL_10;
    }
    v14 = v11 - 1;
    if ( !v14 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v16 = 203;
        goto LABEL_39;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v16 = 204;
        goto LABEL_39;
      }
      goto LABEL_10;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 96LL))(*((_QWORD *)a2 + 1));
      v9 = v6;
      if ( v6 < 0 )
      {
        v16 = 215;
        goto LABEL_39;
      }
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v16 = 216;
        goto LABEL_39;
      }
      goto LABEL_10;
    }
    if ( v15 == 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 32LL))(
             *((_QWORD *)a2 + 1),
             v7,
             &v18);
      v9 = v6;
      if ( v6 < 0 )
      {
        v16 = 221;
        goto LABEL_39;
      }
      goto LABEL_10;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)a2 + 1) + 48LL))(
         *((_QWORD *)a2 + 1),
         v7,
         v8,
         &v18);
  v9 = v6;
  if ( v6 < 0 )
  {
    v16 = 180;
    goto LABEL_39;
  }
LABEL_10:
  v12 = *((_QWORD *)a2 + 2);
  if ( v12 )
  {
LABEL_11:
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 24LL))(v12, *v2, v18);
    v9 = v6;
    if ( v6 >= 0 )
      goto LABEL_12;
    v16 = 229;
    goto LABEL_39;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, (char *)a2 + 16);
  v9 = v6;
  if ( v6 >= 0 )
  {
    v12 = *((_QWORD *)a2 + 2);
    goto LABEL_11;
  }
  v16 = 227;
LABEL_39:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v16, v17);
LABEL_12:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v9;
}
