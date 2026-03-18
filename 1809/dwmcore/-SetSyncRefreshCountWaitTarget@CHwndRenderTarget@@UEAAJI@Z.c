/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18005DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTarget(CHwndRenderTarget *this, unsigned int a2)
{
  char *v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int v10; // ecx

  v2 = (char *)this - 64;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 224LL))((char *)this - 64)
    && (v5 = *((_QWORD *)v2 + 21), *(_BYTE *)(v5 + 321))
    && *(_BYTE *)(v5 + 322)
    && (v4 = *((_QWORD *)v2 + 22)) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 344LL))(v4, a2, 0LL);
    v8 = v6;
    if ( v6 >= 0 )
      return (unsigned int)v8;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18024C878, 1u, v6, 0x637u);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_18024C878, 1u, -2003304307, 0x63Bu);
  }
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18024C878, 1u, v8, 0x64Cu);
  return (unsigned int)v8;
}
