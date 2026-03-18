/*
 * XREFs of Interrupter_ReleaseInterrupter @ 0x1C0067138
 * Callers:
 *     Interrupter_ReleaseHardware @ 0x1C00670B4 (Interrupter_ReleaseHardware.c)
 * Callees:
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000260C (XilCommonBuffer_ReleaseBuffer.c)
 */

void __fastcall Interrupter_ReleaseInterrupter(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD **v5; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  struct _IO_WORKITEM *v8; // rcx
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 100) == 1 )
  {
    if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0] & 0x400) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0;
      _InterlockedOr(v10, 0);
      v2 = *(_QWORD *)(a1 + 8);
      v3 = *(_QWORD *)(a1 + 24);
      if ( (*(_QWORD *)(v2 + 336) & 1) != 0 )
      {
        *(_DWORD *)(v3 + 16) = 0;
        _InterlockedOr(v10, 0);
        *(_DWORD *)(v3 + 20) = 0;
      }
      else
      {
        *(_QWORD *)(v3 + 16) = 0LL;
      }
      _InterlockedOr(v10, 0);
      v4 = *(_QWORD *)(a1 + 24);
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 1) != 0 )
      {
        *(_DWORD *)(v4 + 24) = 0;
        _InterlockedOr(v10, 0);
        *(_DWORD *)(v4 + 28) = 0;
      }
      else
      {
        *(_QWORD *)(v4 + 24) = 0LL;
      }
      _InterlockedOr(v10, 0);
    }
    if ( *(_QWORD *)(a1 + 152) )
    {
      XilCommonBuffer_ReleaseBuffer();
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    v5 = (_QWORD **)(a1 + 160);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = v5;
      XilCommonBuffer_ReleaseBuffer();
    }
    v8 = *(struct _IO_WORKITEM **)(a1 + 200);
    if ( v8 )
    {
      IoFreeWorkItem(v8);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 && v9 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v9);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 100) = 2;
}
