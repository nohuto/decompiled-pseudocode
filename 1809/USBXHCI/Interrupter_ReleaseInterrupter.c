/*
 * XREFs of Interrupter_ReleaseInterrupter @ 0x1C005F3D4
 * Callers:
 *     Interrupter_ReleaseHardware @ 0x1C005F350 (Interrupter_ReleaseHardware.c)
 * Callees:
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000B0E8 (XilCommonBuffer_ReleaseBuffer.c)
 */

void __fastcall Interrupter_ReleaseInterrupter(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  _QWORD **v7; // rdi
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  struct _IO_WORKITEM *v10; // rcx
  __int64 v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 120LL);
  if ( *(_DWORD *)(a1 + 100) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0;
    _InterlockedOr(v12, 0);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a1 + 24);
    if ( (*(_QWORD *)(v3 + 272) & 1) != 0 )
    {
      *(_DWORD *)(v4 + 16) = 0;
      _InterlockedOr(v12, 0);
      *(_DWORD *)(v4 + 20) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    _InterlockedOr(v12, 0);
    v5 = *(_QWORD *)(a1 + 24);
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 1) != 0 )
    {
      *(_DWORD *)(v5 + 24) = 0;
      _InterlockedOr(v12, 0);
      *(_DWORD *)(v5 + 28) = 0;
    }
    else
    {
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    _InterlockedOr(v12, 0);
    v6 = *(_DWORD **)(a1 + 152);
    if ( v6 )
    {
      XilCommonBuffer_ReleaseBuffer(v2, v6);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    v7 = (_QWORD **)(a1 + 160);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
        __fastfail(3u);
      *v7 = v9;
      v9[1] = v7;
      XilCommonBuffer_ReleaseBuffer(v2, v8);
    }
    v10 = *(struct _IO_WORKITEM **)(a1 + 200);
    if ( v10 )
    {
      IoFreeWorkItem(v10);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 && v11 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v11);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 100) = 2;
}
